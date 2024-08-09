# This file pulls down specific verisons of enzyme and LLVM and compiles them. Use the clang binary
# that is compiled locally with the enzyme LLVM/Clang plugin, this will guarantee that the plugin
# works.
#
# This version of the enzyme plugin has been tested with the clang-16 available through the apt
# package manager (does not work correctly with the enzyme plugin) and a locally compiled version
# (does work).
#
# Notes:
# - For the cmake build specify the location of the local clang binaries like so:
# `CC=.enzyme_build/llvm-project/build/bin/clang CXX=.enzyme_build/llvm-project/build/bin/clang++ cmake ...`
#
# - Compilation with enzyme autodiff functions requires the `-fplugin=.enzyme_build/Enzyme/enzyme/build/Enzyme/ClangEnzyme-16.so` flag
#   - Using `LLVMEnzyme-16.so` instead of `ClangEnzyme-16.so` is an easy mistake to make and will lead to linker errors


# directory where enzyme and llvm will be cloned and compiled
EAD_LLVM_DIR="$PWD/.enzyme_build"

# version of the llvm-project to pull down; this will almost certainly change as enzyme evolves
LLVM_BRANCH="llvmorg-16.0.0"
# directory the llvm-project will be cloned to
LLVM_DIR="$EAD_LLVM_DIR/llvm-project"
# llvm lib binaries
LLVM_LIB="$LLVM_DIR/build/lib/cmake/llvm"

# version of enzyme to pull down
ENZYME_BRANCH="v0.0.133"
# directory enzyme will be cloned to
ENZYME_DIR="$EAD_LLVM_DIR/Enzyme"

build_llvm() {
    # move to the llvm drectory and create a build directory
    cd $LLVM_DIR
    mkdir -p "build" && cd "build"

    # configure the build
    cmake -G Ninja "../llvm" \
        -DLLVM_TARGETS_TO_BUILD="host" \
        -DLLVM_ENABLE_PROJECTS="clang;lld;openmp" \
        -DLLVM_ENABLE_PLUGINS=ON \
        -DCMAKE_BUILD_TYPE=Release \
        -DLLVM_ENABLE_ASSERTIONS=ON

    # exit if configuration failed
    if [ $? -ne 0 ]; then
        exit 1
    fi

    # start build
    ninja

    # exit if the build failed (enzyme depends on this build)
    if [ $? -ne 0 ]; then
        exit 1
    fi
}

build_enzyme() {
    # move to the enzyme repo and create the build dir
    cd $ENZYME_DIR/enzyme
    mkdir -p "build" && cd "build"

    # configure the build
    cmake -G Ninja .. \
        -DLLVM_DIR=$LLVM_LIB

    # exit if configuration failed
    if [ $? -ne 0 ]; then
        exit 1
    fi

    # start build
    ninja

    # exit if the build failed
    if [ $? -ne 0 ]; then
        exit 1
    fi

    # run enzyme tests (to make sure it's compiled correctly)
    ninja check-enzyme

    # run integration tests (to make sure it works with clang correctly)
    ninja check-enzyme-integration
}

# create a directory to build enzyme and LLVM
mkdir -p $EAD_LLVM_DIR && cd $EAD_LLVM_DIR

# pull down llvm and enzyme
stat $LLVM_DIR
if [ $? -ne 0]; then
    git clone --branch $LLVM_BRANCH "https://github.com/llvm/llvm-project.git" $LLVM_DIR

    if [ $? -ne 0 ]; then
        echo "Could not clone LLVM; exitting..."
        exit 1
    fi
fi

stat $ENZYME_DIR
if [ $? -ne 0 ]; then
    git clone --branch $ENZYME_BRANCH "https://github.com/EnzymeAD/Enzyme.git" $ENZYME_DIR

    if [ $? -ne 0 ]; then
        echo "Could not clone Enzyme; exitting..."
        exit 1
    fi
fi

# start llvm build
build_llvm

# start enzyme build
build_enzyme

exit 0

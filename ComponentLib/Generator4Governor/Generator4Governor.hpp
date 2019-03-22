/*
 *
 * Copyright (c) 2017, Lawrence Livermore National Security, LLC.
 * Produced at the Lawrence Livermore National Laboratory.
 * Written by Slaven Peles <peles2@llnl.gov> and Duan Nan <duan4@llnl.gov>.
 * LLNL-CODE-718378.
 * All rights reserved.
 *
 * This file is part of GridKit. For details, see github.com/LLNL/GridKit
 * Please also read the LICENSE file.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * - Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the disclaimer below.
 * - Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the disclaimer (as noted below) in the
 *   documentation and/or other materials provided with the distribution.
 * - Neither the name of the LLNS/LLNL nor the names of its contributors may
 *   be used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
 * CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL LAWRENCE LIVERMORE NATIONAL
 * SECURITY, LLC, THE U.S. DEPARTMENT OF ENERGY OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
 * OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISINGIN ANY
 * WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Lawrence Livermore National Laboratory is operated by Lawrence Livermore
 * National Security, LLC, for the U.S. Department of Energy, National
 * Nuclear Security Administration under Contract DE-AC52-07NA27344.
 *
 * This document was prepared as an account of work sponsored by an agency
 * of the United States government. Neither the United States government nor
 * Lawrence Livermore National Security, LLC, nor any of their employees
 * makes any warranty, expressed or implied, or assumes any legal liability
 * or responsibility for the accuracy, completeness, or usefulness of any
 * information, apparatus, product, or process disclosed, or represents that
 * its use would not infringe privately owned rights. Reference herein to
 * any specific commercial product, process, or service by trade name,
 * trademark, manufacturer, or otherwise does not necessarily constitute or
 * imply its endorsement, recommendation, or favoring by the United States
 * government or Lawrence Livermore National Security, LLC. The views and
 * opinions of authors expressed herein do not necessarily state or reflect
 * those of the United States government or Lawrence Livermore National
 * Security, LLC, and shall not be used for advertising or product
 * endorsement purposes.
 *
 */

#ifndef _GENERATOR_4_GOVERNOR_B_HPP_
#define _GENERATOR_4_GOVERNOR_B_HPP_

#include <ModelEvaluatorImpl.hpp>

namespace ModelLib
{
    template <class ScalarT, typename IdxT> class BaseBus;
}

namespace ModelLib
{
    /*!
     * @brief Implementation of a fourth order generator model with
     * a simple governor.
     *
     */
    template  <class ScalarT, typename IdxT>
    class Generator4Governor : public ModelEvaluatorImpl<ScalarT, IdxT>
    {
        using ModelEvaluatorImpl<ScalarT, IdxT>::size_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::nnz_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::time_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::alpha_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::y_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::yp_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::tag_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::f_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::g_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::yB_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::ypB_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::fB_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::gB_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::param_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::param_up_;
        using ModelEvaluatorImpl<ScalarT, IdxT>::param_lo_;

    public:
        typedef typename ModelEvaluatorImpl<ScalarT, IdxT>::real_type real_type;
        typedef BaseBus<ScalarT, IdxT> bus_type;

        Generator4Governor(bus_type* bus, ScalarT P0, ScalarT Q0);
        virtual ~Generator4Governor();

        int allocate();
        int initialize();
        int tagDifferentiable();
        int evaluateResidual();
        int evaluateJacobian();
        int evaluateIntegrand();

        int initializeAdjoint();
        int evaluateAdjointResidual();
        //int evaluateAdjointJacobian();
        int evaluateAdjointIntegrand();

    private:
        //
        // Private model methods
        //

        ScalarT Pg();
        ScalarT Qg();

        inline ScalarT frequencyPenalty(ScalarT omega);
        inline ScalarT frequencyPenaltyDer(ScalarT omega);

        inline ScalarT Lm(ScalarT Pm);
        inline ScalarT dLm(ScalarT Pm);

        inline ScalarT Ln(ScalarT Pn);
        inline ScalarT dLn(ScalarT Pn);


    public:
        //
        // Public inline accesor functions
        //

        ScalarT& V()
        {
            return bus_->V();
        }

        const ScalarT& V() const
        {
            return bus_->V();
        }

        ScalarT& theta()
        {
            return bus_->theta();
        }

        const ScalarT& theta() const
        {
            return bus_->theta();
        }

        ScalarT& P()
        {
            return bus_->P();
        }

        const ScalarT& P() const
        {
            return bus_->P();
        }

        ScalarT& Q()
        {
            return bus_->Q();
        }

        const ScalarT& Q() const
        {
            return bus_->Q();
        }

        const ScalarT& lambdaP() const
        {
            return bus_->lambdaP();
        }

        const ScalarT& lambdaQ() const
        {
            return bus_->lambdaQ();
        }

        ScalarT& PB()
        {
            return bus_->PB();
        }

        ScalarT& QB()
        {
            return bus_->QB();
        }


    private:
        //
        // Private inlined accessor methods
        //

        const ScalarT dotDelta() const
        {
            return yp_[offsetGen_ + 0];
        }

        const ScalarT dotOmega() const
        {
            return yp_[offsetGen_ + 1];
        }

        const ScalarT dotEdp() const
        {
            return yp_[offsetGen_ + 2];
        }

        const ScalarT dotEqp() const
        {
            return yp_[offsetGen_ + 3];
        }

        const ScalarT delta() const
        {
            return y_[offsetGen_ + 0];
        }

        const ScalarT omega() const
        {
            return y_[offsetGen_ + 1];
        }

        const ScalarT Edp() const
        {
            return y_[offsetGen_ + 2];
        }

        const ScalarT Eqp() const
        {
            return y_[offsetGen_ + 3];
        }

        const ScalarT Id() const
        {
            return y_[offsetGen_ + 4];
        }

        const ScalarT Iq() const
        {
            return y_[offsetGen_ + 5];
        }

        const ScalarT K() const
        {
            return param_[1];
        }

        const ScalarT T1() const
        {
            return T1_;
        }

        const ScalarT T2() const
        {
            return param_[0];
        }

        const ScalarT T3() const
        {
            return T3_;
        }


    private:
        // Generator parameters
        real_type H_;
        real_type D_;
        real_type Xq_;
        real_type Xd_;
        real_type Xqp_;
        real_type Xdp_;
        real_type Rs_;
        real_type Tq0p_;
        real_type Td0p_;
        real_type Ef0_;
        real_type Pm0_;
        real_type deltaPm_;
        real_type deltaPn_;
        real_type omega_s_;
        real_type omega_b_;
        real_type omega_up_;
        real_type omega_lo_;
        real_type c_;
        real_type beta_;

        // Governor parameters
        real_type T1_;
        real_type T2_;
        real_type T3_;
        real_type K_;

        // Index offsets
        const IdxT offsetGen_;
        const IdxT offsetGov_;

        // Initial power flow values
        ScalarT P0_;
        ScalarT Q0_;

        // Bus to which the generator is connected
        bus_type* bus_;
    };

} // namespace ModelLib


#endif // _GENERATOR_4_GOVERNOR_B_HPP_

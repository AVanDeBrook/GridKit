/**
 * @file SolutionKeys.hpp
 * @author Reid Gomillion (rjg18@vt.edu)
 * @author Slaven Peles (peless@ornl.gov)
 * @brief Answer keys for Scaled Microgrid test with Nsize = 2, 4, 8
 * 
 * All data generated with Matlab ode23tb solver with tolerances set to
 * abstol=1e-12 and reltol=1e-12.
 * 
 * @note This file is only to be included in ScaleMicrogrid.cpp. It has no
 * use anywhere else.
 */



#include <vector>

const std::vector<real_type> answer_key_N2 = {22975.4182636905,
                                              12753.1173017451,
                                              0.0376305671131306,
                                              -0.0209815421114537,
                                              0.0184828563235406,
                                              -0.00015632917065729,
                                              63.2193617412383,
                                              -29.4226556659582,
                                              363.420924977355,
                                              -3.01001804456668e-06,
                                              63.2193618667302,
                                              -35.0920143829141,
                                              -0.00755583999797958,
                                              22975.8457840701,
                                              8742.0172166684,
                                              0.0371009878165673,
                                              -0.0142112776774797,
                                              0.0187407972932474,
                                              -9.8913852531819e-05,
                                              62.3296548917654,
                                              -17.9650261562766,
                                              368.635407345931,
                                              3.79041261513032e-05,
                                              62.3296560841534,
                                              -23.7157298601546,
                                              -0.0827401584095097,
                                              17277.712521392,
                                              16493.7578328327,
                                              0.0311645357391787,
                                              -0.0298601153771274,
                                              0.0225001003469904,
                                              -0.000264388302121386,
                                              48.6166482764357,
                                              -40.8862612232969,
                                              355.25957014696,
                                              -0.000167008045114112,
                                              48.6166481095298,
                                              -46.4283022775928,
                                              -0.0844566209033113,
                                              17277.2493364959,
                                              9182.29479881977,
                                              0.0302503981389185,
                                              -0.0161722538457184,
                                              0.023180586071601,
                                              -0.000129590157483103,
                                              47.1906392248137,
                                              -19.3574255862892,
                                              366.226354188735,
                                              0.000121054462396047,
                                              47.19063792117,
                                              -25.0705499054599,
                                              -18.8125403122072,
                                              21.1471334522508,
                                              43.2997340692497,
                                              -3.03798323340816,
                                              -44.8715356440453,
                                              28.9585224749495,
                                              81.99613295014,
                                              -56.2385627562355,
                                              132.749774614687,
                                              -82.280664729262,
                                              311.999576042192,
                                              357.692287974629,
                                              -5.85078929333349,
                                              364.119335219897,
                                              -8.84631033126304,
                                              347.214535767435,
                                              -32.7241067379802,
                                              360.411028950125,
                                              -34.9283280833745};

const std::vector<real_type> answer_key_N4 = {27828.3291148094,
                                              10602.3611530864,
                                              0.0452452394028709,
                                              -0.0173410584955486,
                                              0.018686818367312,
                                              -0.000129595027000909,
                                              76.0120809944985,
                                              -23.2367034227098,
                                              366.216582730654,
                                              -0.000167782960864797,
                                              76.0120710728117,
                                              -28.9413214479885,
                                              -0.0154989336357971,
                                              27832.0772154743,
                                              7838.80352597054,
                                              0.0448129806183038,
                                              -0.0127296381144373,
                                              0.0188642014642206,
                                              -9.04502393904097e-05,
                                              75.2859236720964,
                                              -15.4316980534341,
                                              369.809174828127,
                                              -5.17440472732025e-05,
                                              75.285919083362,
                                              -21.1922719962368,
                                              -0.142596248886844,
                                              20950.1519748442,
                                              16334.3924580166,
                                              0.0377787488551238,
                                              -0.0295717781600636,
                                              0.0225780601074885,
                                              -0.000265567743682681,
                                              58.9348270364006,
                                              -40.4081583028089,
                                              355.498460539903,
                                              -8.66167274613643e-05,
                                              58.9348242715342,
                                              -45.9457664944992,
                                              -0.164628885385433,
                                              20956.2846481359,
                                              12345.7855779785,
                                              0.0371673110634281,
                                              -0.0220171188824754,
                                              0.0229486760225139,
                                              -0.000191111142238558,
                                              57.9810673844105,
                                              -28.5265491599081,
                                              361.481100853144,
                                              8.24481547667206e-05,
                                              57.9810719040216,
                                              -34.1573355283559,
                                              -0.245126576498858,
                                              20978.9206932923,
                                              17875.6825958711,
                                              0.0380785081131898,
                                              -0.0325621468970297,
                                              0.0224354615928625,
                                              -0.000295085318936756,
                                              59.4025243779293,
                                              -45.1101946009202,
                                              353.186117339098,
                                              5.52721744209165e-05,
                                              59.4025238741703,
                                              -50.6117204294148,
                                              -0.253672269778405,
                                              20990.6142554844,
                                              11779.5685373245,
                                              0.0371243965775962,
                                              -0.0209716906203726,
                                              0.0230016494389548,
                                              -0.000180846578022512,
                                              57.9140614794815,
                                              -26.8817831662193,
                                              362.331254349606,
                                              0.000209247259473183,
                                              57.9140782926947,
                                              -32.5257339504705,
                                              -0.288747285297145,
                                              21004.5418902462,
                                              16686.981801999,
                                              0.0379131316203435,
                                              -0.0302602142538338,
                                              0.0225460339603269,
                                              -0.000272422675391038,
                                              59.1444740212228,
                                              -41.4902940591195,
                                              354.969993387113,
                                              8.14114753778542e-05,
                                              59.1444846638236,
                                              -47.0195494892644,
                                              -0.285876486857154,
                                              21005.895228757,
                                              8274.13913126834,
                                              0.0366267978764156,
                                              -0.0145584209340773,
                                              0.0233276948336748,
                                              -0.000117627382397687,
                                              57.1378568500881,
                                              -16.7923279871216,
                                              367.58883605301,
                                              0.000263351556352378,
                                              57.1378679159653,
                                              -22.518140603782,
                                              -6.57009481597077,
                                              28.1053117219546,
                                              68.341829672125,
                                              5.75010361666728,
                                              -7.27398138223966,
                                              42.3413009908014,
                                              44.2901915856089,
                                              -0.850144510998897,
                                              -26.9214526328474,
                                              37.7939474726438,
                                              20.9421230166698,
                                              -8.2155394685309,
                                              -48.4341275019927,
                                              37.706248875936,
                                              82.5460878639016,
                                              -57.0458911301263,
                                              127.388509162578,
                                              -90.4406093871607,
                                              116.522583626035,
                                              -102.149734009655,
                                              112.650118587972,
                                              -107.825883544914,
                                              311.543402422187,
                                              360.780248808368,
                                              -7.42039816792328,
                                              365.078323407317,
                                              -13.2331839185884,
                                              344.46378568747,
                                              -54.5546252592288,
                                              350.335287885457,
                                              -63.572021962256,
                                              334.342198258035,
                                              -88.749585714325,
                                              344.281369936645,
                                              -94.7726681838823,
                                              332.2248206198,
                                              -103.942854393111,
                                              347.103721199815,
                                              -107.812479611979};

const std::vector<real_type> answer_key_N8 = {29266.6517718661,
                                              9842.93617289812,
                                              0.0475360674334622,
                                              -0.0160323945316821,
                                              0.0187557247105805,
                                              -0.000119821248231538,
                                              79.8612117213119,
                                              -21.0144010498971,
                                              367.201497494684,
                                              -0.00135963018489767,
                                              79.8611351716573,
                                              -26.7318789917162,
                                              -0.018074876389402,
                                              29296.9645459408,
                                              7415.51099954903,
                                              0.0471789367393934,
                                              -0.0120180219897291,
                                              0.0189117902285582,
                                              -8.57914733703415e-05,
                                              79.2614266664798,
                                              -14.2194852461262,
                                              370.357116139458,
                                              -0.00065261697325357,
                                              79.261388452934,
                                              -19.9860446882469,
                                              -0.161178046356866,
                                              22178.7337755581,
                                              15750.48869542,
                                              0.0399575496599213,
                                              -0.028431003000158,
                                              0.0226540351215628,
                                              -0.000255811047442045,
                                              62.3338080750298,
                                              -38.6061338491152,
                                              356.372404460464,
                                              -0.000888421043595241,
                                              62.3337589017493,
                                              -44.1546192236143,
                                              -0.191206982234175,
                                              22245.3587939821,
                                              12476.0312983393,
                                              0.0395296431152022,
                                              -0.0222832972915751,
                                              0.0229591349358969,
                                              -0.000195357283522886,
                                              61.6667253463805,
                                              -28.9363062720176,
                                              361.284131747149,
                                              0.000606091049765824,
                                              61.6667589580497,
                                              -34.5611135316627,
                                              -0.300475535038271,
                                              22471.354929649,
                                              17410.9400696732,
                                              0.0407475331761201,
                                              -0.0316496339533813,
                                              0.0225047347006168,
                                              -0.000287941144857336,
                                              63.5662158978541,
                                              -43.6654709736205,
                                              353.882194971394,
                                              -0.00050508442766251,
                                              63.5661867600733,
                                              -49.1745383652835,
                                              -0.321406735230742,
                                              22562.1063953332,
                                              12532.040739496,
                                              0.0400730650460856,
                                              -0.0224103188019356,
                                              0.0229590093469276,
                                              -0.000197040279593967,
                                              62.5145400797163,
                                              -29.1337602252211,
                                              361.200953962968,
                                              0.00123813270414561,
                                              62.5146115608051,
                                              -34.7565572443792,
                                              -0.398765881347133,
                                              22822.9625175864,
                                              17526.9123376124,
                                              0.0413769691613727,
                                              -0.0318846988884131,
                                              0.0224996948233429,
                                              -0.000290724959665147,
                                              64.5480523645119,
                                              -44.0326735095454,
                                              353.709220392926,
                                              -0.000255137918253834,
                                              64.548036917491,
                                              -49.5382706457328,
                                              -0.409294621792759,
                                              22917.4640781459,
                                              11700.1980576741,
                                              0.0405370737861658,
                                              -0.0208717910251266,
                                              0.0230419643488667,
                                              -0.000182321342412399,
                                              63.2383663569188,
                                              -26.7111380754575,
                                              362.449323338104,
                                              0.00143605100750772,
                                              63.2384503029344,
                                              -32.3525635247183,
                                              -0.460038982115987,
                                              23175.0870418607,
                                              17429.0372806116,
                                              0.0419717095772374,
                                              -0.0317010913432995,
                                              0.0225145433123769,
                                              -0.000289381352876061,
                                              65.4757968347883,
                                              -43.7415548084125,
                                              353.856643943042,
                                              -0.000116590766441278,
                                              65.4757901489451,
                                              -49.2486679790579,
                                              -0.461848591689221,
                                              23264.6732405303,
                                              10919.0360806903,
                                              0.0409947737541995,
                                              -0.0194331296392293,
                                              0.0231200668519233,
                                              -0.000168575863901554,
                                              63.9522672718067,
                                              -24.4455560147541,
                                              363.621937642842,
                                              0.00154556746783549,
                                              63.9523565934322,
                                              -30.1044436917781,
                                              -0.491529580804623,
                                              23488.6137650364,
                                              17313.8654584652,
                                              0.0424952351974662,
                                              -0.0314883547842804,
                                              0.0225303364455447,
                                              -0.000287714847080755,
                                              66.2924442955506,
                                              -43.4048501801219,
                                              354.030311475628,
                                              0.000169934086992562,
                                              66.2924545883603,
                                              -48.9139721676174,
                                              -0.486548093474613,
                                              23557.6136117665,
                                              10241.0790360359,
                                              0.0413774884672506,
                                              -0.0181860120867723,
                                              0.0231877453638413,
                                              -0.000156639599075328,
                                              64.5492156984859,
                                              -22.4816084883194,
                                              364.639179755733,
                                              0.00142420279185394,
                                              64.5492984953198,
                                              -28.1556597465189,
                                              -0.499726325044563,
                                              23722.4168131373,
                                              16958.7765974266,
                                              0.0428487548646152,
                                              -0.0308090857078185,
                                              0.0225672437721518,
                                              -0.000281355782039133,
                                              66.8440182379463,
                                              -42.3350991467661,
                                              354.562942832682,
                                              0.000573219240561573,
                                              66.844044569212,
                                              -47.8519918014414,
                                              -0.490219448053285,
                                              23769.8747006891,
                                              9267.5206785042,
                                              0.0415639300026818,
                                              -0.0164109903099032,
                                              0.0232814268213158,
                                              -0.000139385907988285,
                                              64.8399200066663,
                                              -19.6874999818575,
                                              366.100410278813,
                                              0.00128332197988872,
                                              64.8400012051758,
                                              -25.3838027935624,
                                              -0.491586583798841,
                                              23854.0240861864,
                                              15160.7060140903,
                                              0.0427385845553072,
                                              -0.0273659210853948,
                                              0.0227360281885303,
                                              -0.00024756822257102,
                                              66.6722121992594,
                                              -36.9193366680176,
                                              357.260483774461,
                                              0.000734666517031364,
                                              66.6722602990682,
                                              -42.4779079553274,
                                              -0.482907936930927,
                                              23870.5548740189,
                                              6166.60742794455,
                                              0.0412253604361869,
                                              -0.0108406830677542,
                                              0.0235710268609798,
                                              -8.45378382385454e-05,
                                              64.3117067426907,
                                              -10.9219886629635,
                                              370.751596332923,
                                              0.00130490570318174,
                                              64.3117765573399,
                                              -16.6904284244068,
                                              -2.9267653635869,
                                              30.5878043390112,
                                              75.9238910016987,
                                              9.17392754248112,
                                              4.3701560041079,
                                              48.7765765968327,
                                              58.3101300775815,
                                              3.13323809951331,
                                              -6.37573932293514,
                                              46.1701408549949,
                                              41.9244199648313,
                                              -6.5432868117422,
                                              -17.3691293511209,
                                              41.8611610718482,
                                              27.7383173553277,
                                              -12.9709065074016,
                                              -27.5322418670623,
                                              38.9032728624808,
                                              16.2733736528389,
                                              -16.5280348065045,
                                              -36.4800564569504,
                                              37.0627808819117,
                                              7.38198504755967,
                                              -17.9899033675727,
                                              -44.0731708800056,
                                              36.9539474625741,
                                              1.14781892918688,
                                              -15.9507601441003,
                                              -49.1751072411967,
                                              44.6278268007059,
                                              82.7517114852138,
                                              -57.3188928805757,
                                              125.959171148664,
                                              -93.1822145893453,
                                              110.816672146529,
                                              -108.811406393296,
                                              99.5107131550674,
                                              -119.104827911048,
                                              92.0427992280762,
                                              -125.056967118294,
                                              88.0811872722293,
                                              -127.985464658329,
                                              87.1649116220972,
                                              -128.957730829954,
                                              89.0189233593932,
                                              -129.480383815729,
                                              311.408200092424,
                                              361.890500304156,
                                              -7.90450151715305,
                                              365.594288034004,
                                              -14.6504114199963,
                                              344.278948204657,
                                              -61.517809887448,
                                              348.104769580715,
                                              -73.1715704285651,
                                              329.472137794467,
                                              -107.797643650827,
                                              335.509251816504,
                                              -117.787067889008,
                                              317.044841017058,
                                              -139.602945170765,
                                              325.182412285621,
                                              -147.51178633583,
                                              307.989533967543,
                                              -158.91998673915,
                                              318.171184823086,
                                              -165.141414351062,
                                              302.951769665185,
                                              -168.712626964975,
                                              315.009688292198,
                                              -173.624287308414,
                                              302.070219389208,
                                              -171.572667424371,
                                              315.86470341008,
                                              -175.706947618597,
                                              306.288884765777,
                                              -170.785573848562,
                                              322.018589824395,
                                              -176.179397251772};

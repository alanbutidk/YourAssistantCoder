/* Generated code for Python module 'tenacity$wait'
 * created by Nuitka version 4.0.8
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the GNU Affero General Public License, Version 3 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * You may obtain a copy of the License in "LICENSE.txt" and the runtime
 * exception granted in "LICENSE-RUNTIME.txt" from Nuitka source code. For
 * deploying the generated code it is intended to not restrict distributing
 * created binaries.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"



/* The "module_tenacity$wait" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tenacity$wait;
PyDictObject *moduledict_tenacity$wait;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_wait_combine;
PyObject *const_str_plain___add__;
PyObject *const_str_plain__utils;
PyObject *const_str_plain_to_seconds;
PyObject *const_str_plain_wait_fixed;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_wait_random_min;
PyObject *const_str_plain_wait_random_max;
PyObject *const_str_plain_random;
PyObject *const_str_plain_wait_funcs;
PyObject *const_str_plain_retry_state;
PyObject *const_tuple_str_plain_retry_state_tuple;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_73be477920ef0f13dc9181081191bd03;
PyObject *const_str_plain_strategies;
PyObject *const_str_plain_min;
PyObject *const_str_plain_max;
PyObject *const_str_plain_attempt_number;
PyObject *const_str_plain_predicate;
PyObject *const_str_plain_outcome;
PyObject *const_str_digest_4d35c63ad484e3a1d562f76149208fcb;
PyObject *const_str_plain_exception;
PyObject *const_str_digest_edbeab694dcc46cbdd2f694d4b8d25e5;
PyObject *const_str_plain_start;
PyObject *const_str_plain_increment;
PyObject *const_str_plain_multiplier;
PyObject *const_str_plain_exp_base;
PyObject *const_str_plain___call__;
PyObject *const_str_plain_uniform;
PyObject *const_str_plain_initial;
PyObject *const_str_plain_jitter;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_tenacity;
PyObject *const_tuple_str_plain__utils_tuple;
PyObject *const_str_plain_ABC;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_wait_base;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_81227eec188fd6f2abebe6c036769ad7;
PyObject *const_str_digest_1d5d132495ce7e257bc476d9ff2048e5;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_27;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_plain_RetryCallState;
PyObject *const_str_plain_return;
PyObject *const_str_plain_float;
PyObject *const_str_digest_ac2856c36c1c6d6642f9b9ba378b7d92;
PyObject *const_dict_b84d4e5ad3f126de069cf571f05d8393;
PyObject *const_str_digest_dd17e7328707a9fd4c17fe19bf715672;
PyObject *const_str_plain_other;
PyObject *const_str_plain_Union;
PyObject *const_tuple_str_plain_wait_combine_str_plain_wait_base_tuple;
PyObject *const_str_plain___radd__;
PyObject *const_str_digest_843d6b2f7f5d5ea5509a945257f25951;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Callable;
PyObject *const_tuple_type_float_type_int_tuple;
PyObject *const_str_plain_WaitBaseT;
PyObject *const_str_digest_44eea95376835db2d1ff6e7d46cd7296;
PyObject *const_int_pos_49;
PyObject *const_str_plain_wait;
PyObject *const_str_plain_time_unit_type;
PyObject *const_str_digest_085d2792b46f4293e302a6ec1728c252;
PyObject *const_str_digest_c9c443cb4c5b5568282c9669613eb949;
PyObject *const_tuple_str_plain_wait_fixed_tuple;
PyObject *const_str_plain_wait_none;
PyObject *const_str_digest_1c70d10a8f82c9a772e1d5d33abef0e6;
PyObject *const_int_pos_59;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_str_digest_6d320d7483483b9c47d63dd116359a3b;
PyObject *const_str_plain_wait_random;
PyObject *const_str_digest_1ec370fbabd3e77afe40fe92eb3f579f;
PyObject *const_int_pos_66;
PyObject *const_tuple_int_0_int_pos_1_tuple;
PyObject *const_str_digest_9e35dedee3992036931829a7f5b629b5;
PyObject *const_str_digest_7c066c19f8810601a2d601ec7c477fee;
PyObject *const_tuple_str_plain_wait_random_min_str_plain_wait_random_max_tuple;
PyObject *const_str_digest_348c3c5aea2cedc6938a7a8a520b5b41;
PyObject *const_int_pos_81;
PyObject *const_str_digest_342010206ba2694f64aa9f6887e1bdcc;
PyObject *const_str_digest_0e94751c1c9ebdbee040f7f1aa8f3c1b;
PyObject *const_tuple_str_plain_wait_funcs_tuple;
PyObject *const_str_plain_wait_chain;
PyObject *const_str_digest_93d72b99d923bb645dd13d5b2092604c;
PyObject *const_int_pos_91;
PyObject *const_str_digest_7bf187a6b062332b8c3cbfcdfbbceb60;
PyObject *const_str_digest_1c1ed3f1aa74364e1d0983abd702ff79;
PyObject *const_tuple_str_plain_strategies_tuple;
PyObject *const_str_plain_wait_exception;
PyObject *const_str_digest_71d2bfb35d688ca404e45067ffee4dce;
PyObject *const_int_pos_116;
PyObject *const_str_plain_BaseException;
PyObject *const_str_digest_97362cd2c80d625c8015bf7e763803ac;
PyObject *const_str_digest_87cb9d7f91cc27989e675ba49e59a319;
PyObject *const_tuple_str_plain_predicate_tuple;
PyObject *const_str_plain_wait_incrementing;
PyObject *const_str_digest_1a25fdfd76432affb8382c6bb9040337;
PyObject *const_int_pos_155;
PyObject *const_int_pos_100;
PyObject *const_str_plain_MAX_WAIT;
PyObject *const_str_digest_55578f734204209902f58623228b7237;
PyObject *const_str_digest_b9066e98877ed2605a6e8592dda76a6e;
PyObject *const_tuple_str_plain_start_str_plain_increment_str_plain_max_tuple;
PyObject *const_str_plain_wait_exponential;
PyObject *const_str_digest_71592a72d15724458ee1ac5464c9589e;
PyObject *const_int_pos_177;
PyObject *const_int_pos_2;
PyObject *const_str_digest_d4a6159550dbb3dedd6ee93521f9e919;
PyObject *const_str_digest_221e10b6125df0e047e9b90a020175c3;
PyObject *const_tuple_218f701f5c2e4cb19421b24056614dea_tuple;
PyObject *const_str_plain_wait_random_exponential;
PyObject *const_str_digest_abe18bcb21bbf2e7faadc8cbbfe4f4b6;
PyObject *const_int_pos_211;
PyObject *const_str_digest_01a0fd9858746153f154d7ca6e6d111a;
PyObject *const_str_plain_wait_exponential_jitter;
PyObject *const_str_digest_112f0c6c6474ebf3262c2fc4c3a23e49;
PyObject *const_int_pos_242;
PyObject *const_str_digest_b0639751ba9d9fc12f1c8dfae2bda2c8;
PyObject *const_str_digest_68e777f49ed7844d66514f0795d5ab91;
PyObject *const_tuple_4f7f3050d0ffd67029761121a8fccb4c_tuple;
PyObject *const_str_digest_a65986689bdc9b1da6bb7246072fc668;
PyObject *const_tuple_d0894a74fab48acde7100066caa00cf9_tuple;
PyObject *const_str_digest_d9cc806327e019b8aab2992f90dd26c8;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_retry_state_tuple;
PyObject *const_tuple_4f8538d616f85e2c0207519368387b34_tuple;
PyObject *const_tuple_str_plain_self_str_plain_retry_state_str_plain_exception_tuple;
PyObject *const_tuple_172c741cd91d2db82de6250096253cb8_tuple;
PyObject *const_tuple_1386dcac2bdff98525d4732b92fa3dc1_tuple;
PyObject *const_tuple_str_plain_self_str_plain_retry_state_str_plain_result_tuple;
PyObject *const_tuple_eee0343d3028c1aa58d57112d423c304_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_strategies_tuple;
PyObject *const_tuple_str_plain_self_str_plain_predicate_tuple;
PyObject *const_tuple_79b26a04c967221a0f466a185f779d03_tuple;
PyObject *const_tuple_fa00a3d982b9950373d1ec30c1a6d5ba_tuple;
PyObject *const_tuple_str_plain_self_str_plain_wait_tuple;
PyObject *const_tuple_45af7341666a7ebefe90fcef99d97cbb_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_min_str_plain_max_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[147];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("tenacity.wait"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_combine);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain___add__);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_seconds);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_fixed);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random_min);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random_max);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_random);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_funcs);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_retry_state);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retry_state_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_73be477920ef0f13dc9181081191bd03);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_strategies);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_attempt_number);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_predicate);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_outcome);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d35c63ad484e3a1d562f76149208fcb);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_exception);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_edbeab694dcc46cbdd2f694d4b8d25e5);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_start);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_increment);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiplier);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_exp_base);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_uniform);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_initial);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_jitter);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_tenacity);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__utils_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABC);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_base);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_1d5d132495ce7e257bc476d9ff2048e5);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_RetryCallState);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_float);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac2856c36c1c6d6642f9b9ba378b7d92);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_dict_b84d4e5ad3f126de069cf571f05d8393);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd17e7328707a9fd4c17fe19bf715672);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_other);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_combine_str_plain_wait_base_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain___radd__);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_843d6b2f7f5d5ea5509a945257f25951);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_type_float_type_int_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_WaitBaseT);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_44eea95376835db2d1ff6e7d46cd7296);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_int_pos_49);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_time_unit_type);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_085d2792b46f4293e302a6ec1728c252);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9c443cb4c5b5568282c9669613eb949);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_fixed_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_none);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c70d10a8f82c9a772e1d5d33abef0e6);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_int_pos_59);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d320d7483483b9c47d63dd116359a3b);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ec370fbabd3e77afe40fe92eb3f579f);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_int_pos_66);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_9e35dedee3992036931829a7f5b629b5);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_7c066c19f8810601a2d601ec7c477fee);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_random_min_str_plain_wait_random_max_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_348c3c5aea2cedc6938a7a8a520b5b41);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_int_pos_81);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_digest_342010206ba2694f64aa9f6887e1bdcc);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e94751c1c9ebdbee040f7f1aa8f3c1b);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_funcs_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_chain);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_93d72b99d923bb645dd13d5b2092604c);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_int_pos_91);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_digest_7bf187a6b062332b8c3cbfcdfbbceb60);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c1ed3f1aa74364e1d0983abd702ff79);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strategies_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_exception);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_71d2bfb35d688ca404e45067ffee4dce);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_int_pos_116);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseException);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_97362cd2c80d625c8015bf7e763803ac);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_digest_87cb9d7f91cc27989e675ba49e59a319);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_predicate_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_incrementing);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_1a25fdfd76432affb8382c6bb9040337);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_int_pos_155);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_int_pos_100);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_WAIT);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_55578f734204209902f58623228b7237);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_digest_b9066e98877ed2605a6e8592dda76a6e);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_increment_str_plain_max_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_exponential);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_digest_71592a72d15724458ee1ac5464c9589e);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_int_pos_177);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4a6159550dbb3dedd6ee93521f9e919);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_221e10b6125df0e047e9b90a020175c3);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_218f701f5c2e4cb19421b24056614dea_tuple);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random_exponential);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_abe18bcb21bbf2e7faadc8cbbfe4f4b6);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_int_pos_211);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_digest_01a0fd9858746153f154d7ca6e6d111a);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_exponential_jitter);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_112f0c6c6474ebf3262c2fc4c3a23e49);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_int_pos_242);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0639751ba9d9fc12f1c8dfae2bda2c8);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_68e777f49ed7844d66514f0795d5ab91);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_4f7f3050d0ffd67029761121a8fccb4c_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_a65986689bdc9b1da6bb7246072fc668);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9cc806327e019b8aab2992f90dd26c8);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_4f8538d616f85e2c0207519368387b34_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_exception_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_tuple_172c741cd91d2db82de6250096253cb8_tuple);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_1386dcac2bdff98525d4732b92fa3dc1_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_result_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_eee0343d3028c1aa58d57112d423c304_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_strategies_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_predicate_tuple);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_79b26a04c967221a0f466a185f779d03_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_fa00a3d982b9950373d1ec30c1a6d5ba_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_wait_tuple);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_45af7341666a7ebefe90fcef99d97cbb_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_min_str_plain_max_tuple);
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tenacity$wait(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_combine));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_combine);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain___add__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___add__);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_seconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_seconds);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_fixed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_fixed);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_random_min);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_random_max);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_random));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_random);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_funcs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_funcs);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_retry_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retry_state);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retry_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_retry_state_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_73be477920ef0f13dc9181081191bd03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_73be477920ef0f13dc9181081191bd03);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_strategies));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strategies);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_attempt_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attempt_number);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_predicate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_predicate);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_outcome));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_outcome);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d35c63ad484e3a1d562f76149208fcb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d35c63ad484e3a1d562f76149208fcb);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exception);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_edbeab694dcc46cbdd2f694d4b8d25e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edbeab694dcc46cbdd2f694d4b8d25e5);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_start);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_increment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_increment);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiplier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiplier);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_exp_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exp_base);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_uniform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uniform);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_initial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_initial);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_jitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jitter);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_tenacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tenacity);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__utils_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABC);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_base);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_1d5d132495ce7e257bc476d9ff2048e5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1d5d132495ce7e257bc476d9ff2048e5);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_int_pos_27));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_27);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_RetryCallState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RetryCallState);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac2856c36c1c6d6642f9b9ba378b7d92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac2856c36c1c6d6642f9b9ba378b7d92);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_dict_b84d4e5ad3f126de069cf571f05d8393));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b84d4e5ad3f126de069cf571f05d8393);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd17e7328707a9fd4c17fe19bf715672));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd17e7328707a9fd4c17fe19bf715672);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_other));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_other);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_combine_str_plain_wait_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wait_combine_str_plain_wait_base_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain___radd__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___radd__);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_843d6b2f7f5d5ea5509a945257f25951));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_843d6b2f7f5d5ea5509a945257f25951);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_type_float_type_int_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_float_type_int_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_WaitBaseT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WaitBaseT);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_44eea95376835db2d1ff6e7d46cd7296));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44eea95376835db2d1ff6e7d46cd7296);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_int_pos_49));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_49);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_time_unit_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time_unit_type);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_085d2792b46f4293e302a6ec1728c252));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_085d2792b46f4293e302a6ec1728c252);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9c443cb4c5b5568282c9669613eb949));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9c443cb4c5b5568282c9669613eb949);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_fixed_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wait_fixed_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_none));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_none);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c70d10a8f82c9a772e1d5d33abef0e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c70d10a8f82c9a772e1d5d33abef0e6);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_int_pos_59));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_59);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d320d7483483b9c47d63dd116359a3b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d320d7483483b9c47d63dd116359a3b);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_random);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ec370fbabd3e77afe40fe92eb3f579f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ec370fbabd3e77afe40fe92eb3f579f);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_int_pos_66));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_66);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_pos_1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_pos_1_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_9e35dedee3992036931829a7f5b629b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9e35dedee3992036931829a7f5b629b5);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_7c066c19f8810601a2d601ec7c477fee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7c066c19f8810601a2d601ec7c477fee);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_random_min_str_plain_wait_random_max_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wait_random_min_str_plain_wait_random_max_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_348c3c5aea2cedc6938a7a8a520b5b41));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_348c3c5aea2cedc6938a7a8a520b5b41);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_int_pos_81));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_81);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_digest_342010206ba2694f64aa9f6887e1bdcc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_342010206ba2694f64aa9f6887e1bdcc);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e94751c1c9ebdbee040f7f1aa8f3c1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e94751c1c9ebdbee040f7f1aa8f3c1b);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wait_funcs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wait_funcs_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_chain));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_chain);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_93d72b99d923bb645dd13d5b2092604c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93d72b99d923bb645dd13d5b2092604c);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_int_pos_91));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_91);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_digest_7bf187a6b062332b8c3cbfcdfbbceb60));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7bf187a6b062332b8c3cbfcdfbbceb60);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c1ed3f1aa74364e1d0983abd702ff79));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c1ed3f1aa74364e1d0983abd702ff79);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strategies_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_strategies_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_exception);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_71d2bfb35d688ca404e45067ffee4dce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71d2bfb35d688ca404e45067ffee4dce);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_int_pos_116));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_116);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseException));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseException);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_97362cd2c80d625c8015bf7e763803ac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_97362cd2c80d625c8015bf7e763803ac);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_digest_87cb9d7f91cc27989e675ba49e59a319));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87cb9d7f91cc27989e675ba49e59a319);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_predicate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_predicate_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_incrementing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_incrementing);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_1a25fdfd76432affb8382c6bb9040337));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1a25fdfd76432affb8382c6bb9040337);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_int_pos_155));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_155);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_int_pos_100));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_100);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_MAX_WAIT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MAX_WAIT);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_55578f734204209902f58623228b7237));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55578f734204209902f58623228b7237);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_digest_b9066e98877ed2605a6e8592dda76a6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b9066e98877ed2605a6e8592dda76a6e);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_start_str_plain_increment_str_plain_max_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_start_str_plain_increment_str_plain_max_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_exponential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_exponential);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_digest_71592a72d15724458ee1ac5464c9589e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71592a72d15724458ee1ac5464c9589e);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_int_pos_177));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_177);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4a6159550dbb3dedd6ee93521f9e919));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4a6159550dbb3dedd6ee93521f9e919);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_221e10b6125df0e047e9b90a020175c3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_221e10b6125df0e047e9b90a020175c3);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_218f701f5c2e4cb19421b24056614dea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_218f701f5c2e4cb19421b24056614dea_tuple);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_random_exponential));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_random_exponential);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_abe18bcb21bbf2e7faadc8cbbfe4f4b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_abe18bcb21bbf2e7faadc8cbbfe4f4b6);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_int_pos_211));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_211);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_digest_01a0fd9858746153f154d7ca6e6d111a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01a0fd9858746153f154d7ca6e6d111a);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_exponential_jitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_exponential_jitter);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_112f0c6c6474ebf3262c2fc4c3a23e49));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_112f0c6c6474ebf3262c2fc4c3a23e49);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_int_pos_242));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_242);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0639751ba9d9fc12f1c8dfae2bda2c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0639751ba9d9fc12f1c8dfae2bda2c8);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_68e777f49ed7844d66514f0795d5ab91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68e777f49ed7844d66514f0795d5ab91);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_4f7f3050d0ffd67029761121a8fccb4c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f7f3050d0ffd67029761121a8fccb4c_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_a65986689bdc9b1da6bb7246072fc668));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a65986689bdc9b1da6bb7246072fc668);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9cc806327e019b8aab2992f90dd26c8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9cc806327e019b8aab2992f90dd26c8);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_4f8538d616f85e2c0207519368387b34_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4f8538d616f85e2c0207519368387b34_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_exception_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_tuple_172c741cd91d2db82de6250096253cb8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_172c741cd91d2db82de6250096253cb8_tuple);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_1386dcac2bdff98525d4732b92fa3dc1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1386dcac2bdff98525d4732b92fa3dc1_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_result_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_eee0343d3028c1aa58d57112d423c304_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_eee0343d3028c1aa58d57112d423c304_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_strategies_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_strategies_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_predicate_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_predicate_tuple);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_79b26a04c967221a0f466a185f779d03_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_79b26a04c967221a0f466a185f779d03_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_fa00a3d982b9950373d1ec30c1a6d5ba_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fa00a3d982b9950373d1ec30c1a6d5ba_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_wait_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_wait_tuple);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_45af7341666a7ebefe90fcef99d97cbb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_45af7341666a7ebefe90fcef99d97cbb_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_min_str_plain_max_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_min_str_plain_max_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_tenacity$wait$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___spec__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___spec__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___spec__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___spec__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$wait$_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$wait$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abc);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abc, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$wait$random(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_random);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_random, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_random);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_random, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$wait$wait_base(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_base);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$wait$wait_combine(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_combine);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_combine);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_combine, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_combine);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_combine, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_combine);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_combine);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_combine);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$wait$wait_exponential(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_exponential);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_exponential);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_exponential, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_exponential);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_exponential, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_exponential);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_exponential);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_exponential);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$wait$wait_fixed(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$wait->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$wait->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_fixed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$wait->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_fixed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_fixed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wait_fixed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wait_fixed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_fixed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_fixed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_fixed);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_8621056681b25b46b6771ddb75f768b4;
static PyCodeObject *code_objects_d0a59d4dcf266ebf71b7c089734bb427;
static PyCodeObject *code_objects_ec01830b576cf742884de4fe822ee0f7;
static PyCodeObject *code_objects_bdd4e31f5791a8da8472f32b5b987747;
static PyCodeObject *code_objects_8b4d96073a9fed2da076b85ed977f01b;
static PyCodeObject *code_objects_0687a73c23e42bc24505bfb0eaa5f501;
static PyCodeObject *code_objects_5ecfae7bd30bf5f745a9d0ab7504867f;
static PyCodeObject *code_objects_529fbfe85d24b2dd83c0cf685e04966d;
static PyCodeObject *code_objects_2acece364ab204e44e6ff1962cd04a7a;
static PyCodeObject *code_objects_1c152a67e944f0827381c9625a08072c;
static PyCodeObject *code_objects_115c64e0425bdc46607a3d74f0018f0a;
static PyCodeObject *code_objects_e4bd23774e6e3e882c18e4ea490d467e;
static PyCodeObject *code_objects_9848a9a1f3c54e71ab25b5fd31ce0a33;
static PyCodeObject *code_objects_e5d54f8193f1082813053079a79fa4f4;
static PyCodeObject *code_objects_aabf1769fed0bed7887ae9f73f4ad453;
static PyCodeObject *code_objects_b91be14602d909fe392fa57bba47f032;
static PyCodeObject *code_objects_cc179e22c42aae334ea742a7fddc3c3f;
static PyCodeObject *code_objects_e4d61e5cd0fd15e03989efe64de7da34;
static PyCodeObject *code_objects_49db90af0be0299bb83b01912e070d84;
static PyCodeObject *code_objects_e75acae4bc2edc340a851e48064f33b1;
static PyCodeObject *code_objects_36abb4e157a862533299ca6e2c233cd2;
static PyCodeObject *code_objects_18377cd25fc802b9ded3a04087a04dd3;
static PyCodeObject *code_objects_d514df6bad7c48c21a48d1c8bc8b677b;
static PyCodeObject *code_objects_f1910e6acfb4053b29f9a7c03fc14941;
static PyCodeObject *code_objects_f8753d53724f320e128b3aa8d7258912;
static PyCodeObject *code_objects_616952c54b9ff61846196ced780fcaf1;
static PyCodeObject *code_objects_160920b09d3fe693b080834e480ba794;
static PyCodeObject *code_objects_83ab2dbb2f61cf12aae9e4a09f78517c;
static PyCodeObject *code_objects_ffb55d6cfc2bdbf27e253bb0f994d5e1;
static PyCodeObject *code_objects_7e23364c989ed6aacb558d6c53c430a4;
static PyCodeObject *code_objects_4bc5359019df68a6c07a536ed6435dfe;
static PyCodeObject *code_objects_4d05c65ffa4716cab4adc671eed8c2c8;
static PyCodeObject *code_objects_053f49be045dccfa2c6a25b9261e5e2f;
static PyCodeObject *code_objects_c9502201489f0e7567cb9ee0d3325c61;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a65986689bdc9b1da6bb7246072fc668); CHECK_OBJECT(module_filename_obj);
code_objects_8621056681b25b46b6771ddb75f768b4 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_73be477920ef0f13dc9181081191bd03, mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple, NULL, 1, 0, 0);
code_objects_d0a59d4dcf266ebf71b7c089734bb427 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_d9cc806327e019b8aab2992f90dd26c8, mod_consts.const_str_digest_d9cc806327e019b8aab2992f90dd26c8, NULL, NULL, 0, 0, 0);
code_objects_ec01830b576cf742884de4fe822ee0f7 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___add__, mod_consts.const_str_digest_dd17e7328707a9fd4c17fe19bf715672, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_bdd4e31f5791a8da8472f32b5b987747 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_ac2856c36c1c6d6642f9b9ba378b7d92, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_8b4d96073a9fed2da076b85ed977f01b = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_1c1ed3f1aa74364e1d0983abd702ff79, mod_consts.const_tuple_4f8538d616f85e2c0207519368387b34_tuple, NULL, 2, 0, 0);
code_objects_0687a73c23e42bc24505bfb0eaa5f501 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_0e94751c1c9ebdbee040f7f1aa8f3c1b, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_5ecfae7bd30bf5f745a9d0ab7504867f = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_87cb9d7f91cc27989e675ba49e59a319, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_exception_tuple, NULL, 2, 0, 0);
code_objects_529fbfe85d24b2dd83c0cf685e04966d = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_221e10b6125df0e047e9b90a020175c3, mod_consts.const_tuple_172c741cd91d2db82de6250096253cb8_tuple, NULL, 2, 0, 0);
code_objects_2acece364ab204e44e6ff1962cd04a7a = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_68e777f49ed7844d66514f0795d5ab91, mod_consts.const_tuple_1386dcac2bdff98525d4732b92fa3dc1_tuple, NULL, 2, 0, 0);
code_objects_1c152a67e944f0827381c9625a08072c = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_c9c443cb4c5b5568282c9669613eb949, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_115c64e0425bdc46607a3d74f0018f0a = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_b9066e98877ed2605a6e8592dda76a6e, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_str_plain_result_tuple, NULL, 2, 0, 0);
code_objects_e4bd23774e6e3e882c18e4ea490d467e = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_7c066c19f8810601a2d601ec7c477fee, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_9848a9a1f3c54e71ab25b5fd31ce0a33 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_01a0fd9858746153f154d7ca6e6d111a, mod_consts.const_tuple_eee0343d3028c1aa58d57112d423c304_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_e5d54f8193f1082813053079a79fa4f4 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, const_str_plain___init__, mod_consts.const_str_digest_7bf187a6b062332b8c3cbfcdfbbceb60, mod_consts.const_tuple_str_plain_self_str_plain_strategies_tuple, NULL, 1, 0, 0);
code_objects_aabf1769fed0bed7887ae9f73f4ad453 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, const_str_plain___init__, mod_consts.const_str_digest_342010206ba2694f64aa9f6887e1bdcc, mod_consts.const_tuple_str_plain_self_str_plain_strategies_tuple, NULL, 1, 0, 0);
code_objects_b91be14602d909fe392fa57bba47f032 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_97362cd2c80d625c8015bf7e763803ac, mod_consts.const_tuple_str_plain_self_str_plain_predicate_tuple, NULL, 2, 0, 0);
code_objects_cc179e22c42aae334ea742a7fddc3c3f = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_d4a6159550dbb3dedd6ee93521f9e919, mod_consts.const_tuple_79b26a04c967221a0f466a185f779d03_tuple, NULL, 5, 0, 0);
code_objects_e4d61e5cd0fd15e03989efe64de7da34 = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_b0639751ba9d9fc12f1c8dfae2bda2c8, mod_consts.const_tuple_fa00a3d982b9950373d1ec30c1a6d5ba_tuple, NULL, 5, 0, 0);
code_objects_49db90af0be0299bb83b01912e070d84 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_085d2792b46f4293e302a6ec1728c252, mod_consts.const_tuple_str_plain_self_str_plain_wait_tuple, NULL, 2, 0, 0);
code_objects_e75acae4bc2edc340a851e48064f33b1 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_55578f734204209902f58623228b7237, mod_consts.const_tuple_45af7341666a7ebefe90fcef99d97cbb_tuple, NULL, 4, 0, 0);
code_objects_36abb4e157a862533299ca6e2c233cd2 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_6d320d7483483b9c47d63dd116359a3b, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_18377cd25fc802b9ded3a04087a04dd3 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_9e35dedee3992036931829a7f5b629b5, mod_consts.const_tuple_str_plain_self_str_plain_min_str_plain_max_tuple, NULL, 3, 0, 0);
code_objects_d514df6bad7c48c21a48d1c8bc8b677b = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___radd__, mod_consts.const_str_digest_843d6b2f7f5d5ea5509a945257f25951, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_f1910e6acfb4053b29f9a7c03fc14941 = MAKE_CODE_OBJECT(module_filename_obj, 27, 0, mod_consts.const_str_plain_wait_base, mod_consts.const_str_plain_wait_base, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_f8753d53724f320e128b3aa8d7258912 = MAKE_CODE_OBJECT(module_filename_obj, 91, 0, mod_consts.const_str_plain_wait_chain, mod_consts.const_str_plain_wait_chain, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_616952c54b9ff61846196ced780fcaf1 = MAKE_CODE_OBJECT(module_filename_obj, 81, 0, mod_consts.const_str_plain_wait_combine, mod_consts.const_str_plain_wait_combine, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_160920b09d3fe693b080834e480ba794 = MAKE_CODE_OBJECT(module_filename_obj, 116, 0, mod_consts.const_str_plain_wait_exception, mod_consts.const_str_plain_wait_exception, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_83ab2dbb2f61cf12aae9e4a09f78517c = MAKE_CODE_OBJECT(module_filename_obj, 177, 0, mod_consts.const_str_plain_wait_exponential, mod_consts.const_str_plain_wait_exponential, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_ffb55d6cfc2bdbf27e253bb0f994d5e1 = MAKE_CODE_OBJECT(module_filename_obj, 242, 0, mod_consts.const_str_plain_wait_exponential_jitter, mod_consts.const_str_plain_wait_exponential_jitter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_7e23364c989ed6aacb558d6c53c430a4 = MAKE_CODE_OBJECT(module_filename_obj, 49, 0, mod_consts.const_str_plain_wait_fixed, mod_consts.const_str_plain_wait_fixed, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4bc5359019df68a6c07a536ed6435dfe = MAKE_CODE_OBJECT(module_filename_obj, 155, 0, mod_consts.const_str_plain_wait_incrementing, mod_consts.const_str_plain_wait_incrementing, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_4d05c65ffa4716cab4adc671eed8c2c8 = MAKE_CODE_OBJECT(module_filename_obj, 59, 0, mod_consts.const_str_plain_wait_none, mod_consts.const_str_plain_wait_none, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_053f49be045dccfa2c6a25b9261e5e2f = MAKE_CODE_OBJECT(module_filename_obj, 66, 0, mod_consts.const_str_plain_wait_random, mod_consts.const_str_plain_wait_random, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c9502201489f0e7567cb9ee0d3325c61 = MAKE_CODE_OBJECT(module_filename_obj, 211, 0, mod_consts.const_str_plain_wait_random_exponential, mod_consts.const_str_plain_wait_random_exponential, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__10___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__11___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__12___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__13___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__14___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__15___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__16___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__17___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__18___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__19___call__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__1___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__20___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__21___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__2___add__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__3___radd__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__4___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__5___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__6___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__8___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__9___init__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_tenacity$wait$$$function__2___add__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__2___add__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__2___add__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__2___add__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__2___add__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__2___add__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__2___add__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ec01830b576cf742884de4fe822ee0f7, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__2___add__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__2___add__ = cache_frame_frame_tenacity$wait$$$function__2___add__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__2___add__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__2___add__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_tenacity$wait$wait_combine(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_combine);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
frame_frame_tenacity$wait$$$function__2___add__->m_frame.f_lineno = 35;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__2___add__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__2___add__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__2___add__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__2___add__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__2___add__ == cache_frame_frame_tenacity$wait$$$function__2___add__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__2___add__);
    cache_frame_frame_tenacity$wait$$$function__2___add__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__2___add__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__3___radd__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__3___radd__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__3___radd__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__3___radd__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__3___radd__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__3___radd__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__3___radd__ = MAKE_FUNCTION_FRAME(tstate, code_objects_d514df6bad7c48c21a48d1c8bc8b677b, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__3___radd__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__3___radd__ = cache_frame_frame_tenacity$wait$$$function__3___radd__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__3___radd__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__3___radd__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_other);
tmp_cmp_expr_left_1 = par_other;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_1 = par_other;
frame_frame_tenacity$wait$$$function__3___radd__->m_frame.f_lineno = 41;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___add__, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__3___radd__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__3___radd__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__3___radd__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__3___radd__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__3___radd__ == cache_frame_frame_tenacity$wait$$$function__3___radd__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__3___radd__);
    cache_frame_frame_tenacity$wait$$$function__3___radd__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__3___radd__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_other);
Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_wait = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_49db90af0be0299bb83b01912e070d84, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__4___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__4___init__ = cache_frame_frame_tenacity$wait$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__4___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_wait);
tmp_args_element_value_1 = par_wait;
frame_frame_tenacity$wait$$$function__4___init__->m_frame.f_lineno = 53;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_wait_fixed, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__4___init__,
    type_description_1,
    par_self,
    par_wait
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__4___init__ == cache_frame_frame_tenacity$wait$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__4___init__);
    cache_frame_frame_tenacity$wait$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__4___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_wait);
Py_DECREF(par_wait);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_wait);
Py_DECREF(par_wait);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__5___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__5___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__5___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__5___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__5___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__5___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__5___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1c152a67e944f0827381c9625a08072c, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__5___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__5___call__ = cache_frame_frame_tenacity$wait$$$function__5___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__5___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__5___call__) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_wait_fixed);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__5___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__5___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__5___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__5___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__5___call__ == cache_frame_frame_tenacity$wait$$$function__5___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__5___call__);
    cache_frame_frame_tenacity$wait$$$function__5___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__5___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_36abb4e157a862533299ca6e2c233cd2, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__6___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__6___init__ = cache_frame_frame_tenacity$wait$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__6___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_tenacity$wait, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__6___init__->m_frame.f_lineno = 63;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_int_0_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__6___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__6___init__ == cache_frame_frame_tenacity$wait$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__6___init__);
    cache_frame_frame_tenacity$wait$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__6___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_min = python_pars[1];
PyObject *par_max = python_pars[2];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_18377cd25fc802b9ded3a04087a04dd3, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__7___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__7___init__ = cache_frame_frame_tenacity$wait$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__7___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__7___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_min);
tmp_args_element_value_1 = par_min;
frame_frame_tenacity$wait$$$function__7___init__->m_frame.f_lineno = 72;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_wait_random_min, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_2;
tmp_called_instance_2 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_max);
tmp_args_element_value_2 = par_max;
frame_frame_tenacity$wait$$$function__7___init__->m_frame.f_lineno = 73;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_wait_random_max, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__7___init__,
    type_description_1,
    par_self,
    par_min,
    par_max
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__7___init__ == cache_frame_frame_tenacity$wait$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__7___init__);
    cache_frame_frame_tenacity$wait$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__7___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_min);
Py_DECREF(par_min);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_min);
Py_DECREF(par_min);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__8___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__8___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__8___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__8___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__8___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__8___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__8___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e4bd23774e6e3e882c18e4ea490d467e, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__8___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__8___call__ = cache_frame_frame_tenacity$wait$$$function__8___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__8___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__8___call__) == 2);

// Framed code:
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_wait_random_min);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_tenacity$wait$random(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_random);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__8___call__->m_frame.f_lineno = 77;
tmp_mult_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_random);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_wait_random_max);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_wait_random_min);
if (tmp_sub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__8___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__8___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__8___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__8___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__8___call__ == cache_frame_frame_tenacity$wait$$$function__8___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__8___call__);
    cache_frame_frame_tenacity$wait$$$function__8___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__8___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_strategies = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_aabf1769fed0bed7887ae9f73f4ad453, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__9___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__9___init__ = cache_frame_frame_tenacity$wait$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__9___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__9___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_strategies);
tmp_assattr_value_1 = par_strategies;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_wait_funcs, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__9___init__,
    type_description_1,
    par_self,
    par_strategies
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__9___init__ == cache_frame_frame_tenacity$wait$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__9___init__);
    cache_frame_frame_tenacity$wait$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__9___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_strategies);
Py_DECREF(par_strategies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_strategies);
Py_DECREF(par_strategies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__10___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_retry_state = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__10___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__10___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__10___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__10___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__10___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__10___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0687a73c23e42bc24505bfb0eaa5f501, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__10___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__10___call__ = cache_frame_frame_tenacity$wait$$$function__10___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__10___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__10___call__) == 2);

// Framed code:
{
PyObject *tmp_sum_sequence_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_wait_funcs);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_retry_state;
Py_INCREF(tmp_closure_1[1]);
tmp_sum_sequence_1 = MAKE_GENERATOR_tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_return_value = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
CHECK_OBJECT(tmp_sum_sequence_1);
Py_DECREF(tmp_sum_sequence_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__10___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__10___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__10___call__ == cache_frame_frame_tenacity$wait$$$function__10___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__10___call__);
    cache_frame_frame_tenacity$wait$$$function__10___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__10___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_retry_state);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
par_retry_state = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_retry_state);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
par_retry_state = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr_locals {
PyObject *var_x;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr_locals *generator_heap = (struct tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_x = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;

    // Actual generator function body.
// Tried code:
if (isFrameUnusable(cache_m_frame)) {
    Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
    if (cache_m_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8621056681b25b46b6771ddb75f768b4, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
generator->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

assert(generator->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
assert(Py_REFCNT(generator->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_GENERATOR_EXCEPTION(tstate, generator);

// Framed code:
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 88;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_x;
    generator_heap->var_x = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_x);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_x);
tmp_called_value_1 = generator_heap->var_x;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retry_state);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_kw_call_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 88;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_retry_state_tuple);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &generator_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    } else if ((generator_heap->exception_lineno != 0) && (exception_tb->tb_frame != &generator->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    generator->m_frame,
    generator_heap->type_description_1,
    NULL,
    generator_heap->var_x,
    generator->m_closure[1]
);


    // Release cached frame if used for exception.
    if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(generator->m_frame);
}

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_x);
generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr_context,
        module_tenacity$wait,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_73be477920ef0f13dc9181081191bd03,
#endif
        code_objects_8621056681b25b46b6771ddb75f768b4,
        closure,
        2,
#if 1
        sizeof(struct tenacity$wait$$$function__10___call__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_tenacity$wait$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_strategies = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e5d54f8193f1082813053079a79fa4f4, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__11___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__11___init__ = cache_frame_frame_tenacity$wait$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__11___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__11___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_strategies);
tmp_assattr_value_1 = par_strategies;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_strategies, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__11___init__,
    type_description_1,
    par_self,
    par_strategies
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__11___init__ == cache_frame_frame_tenacity$wait$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__11___init__);
    cache_frame_frame_tenacity$wait$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__11___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_strategies);
Py_DECREF(par_strategies);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_strategies);
Py_DECREF(par_strategies);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__12___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
PyObject *var_wait_func_no = NULL;
PyObject *var_wait_func = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__12___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__12___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__12___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__12___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__12___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__12___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8b4d96073a9fed2da076b85ed977f01b, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__12___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__12___call__ = cache_frame_frame_tenacity$wait$$$function__12___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__12___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__12___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(par_retry_state);
tmp_expression_value_1 = par_retry_state;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_attempt_number);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_int_pos_1;
frame_frame_tenacity$wait$$$function__12___call__->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_strategies);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 111;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 111;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__12___call__->m_frame.f_lineno = 111;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_wait_func_no == NULL);
var_wait_func_no = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_strategies);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_wait_func_no);
tmp_sub_expr_left_1 = var_wait_func_no;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_subscript_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_3);

exception_lineno = 112;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_wait_func == NULL);
var_wait_func = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var_wait_func);
tmp_called_value_3 = var_wait_func;
CHECK_OBJECT(par_retry_state);
tmp_kw_call_value_0_1 = par_retry_state;
frame_frame_tenacity$wait$$$function__12___call__->m_frame.f_lineno = 113;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_retry_state_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__12___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__12___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__12___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__12___call__,
    type_description_1,
    par_self,
    par_retry_state,
    var_wait_func_no,
    var_wait_func
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__12___call__ == cache_frame_frame_tenacity$wait$$$function__12___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__12___call__);
    cache_frame_frame_tenacity$wait$$$function__12___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__12___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_wait_func_no);
CHECK_OBJECT(var_wait_func_no);
Py_DECREF(var_wait_func_no);
var_wait_func_no = NULL;
CHECK_OBJECT(var_wait_func);
CHECK_OBJECT(var_wait_func);
Py_DECREF(var_wait_func);
var_wait_func = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_wait_func_no);
var_wait_func_no = NULL;
Py_XDECREF(var_wait_func);
var_wait_func = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_predicate = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b91be14602d909fe392fa57bba47f032, module_tenacity$wait, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__13___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__13___init__ = cache_frame_frame_tenacity$wait$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__13___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_predicate);
tmp_assattr_value_1 = par_predicate;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_predicate, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__13___init__,
    type_description_1,
    par_self,
    par_predicate
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__13___init__ == cache_frame_frame_tenacity$wait$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__13___init__);
    cache_frame_frame_tenacity$wait$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__13___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_predicate);
Py_DECREF(par_predicate);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_predicate);
Py_DECREF(par_predicate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__14___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
PyObject *var_exception = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__14___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__14___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__14___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__14___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__14___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__14___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5ecfae7bd30bf5f745a9d0ab7504867f, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__14___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__14___call__ = cache_frame_frame_tenacity$wait$$$function__14___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__14___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__14___call__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_1 = par_retry_state;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_outcome);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4d35c63ad484e3a1d562f76149208fcb;
frame_frame_tenacity$wait$$$function__14___call__->m_frame.f_lineno = 147;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 147;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_2 = par_retry_state;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_outcome);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__14___call__->m_frame.f_lineno = 149;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_exception);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_exception == NULL);
var_exception = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_exception);
tmp_cmp_expr_left_2 = var_exception;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_edbeab694dcc46cbdd2f694d4b8d25e5;
frame_frame_tenacity$wait$$$function__14___call__->m_frame.f_lineno = 151;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 151;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
CHECK_OBJECT(var_exception);
tmp_args_element_value_1 = var_exception;
frame_frame_tenacity$wait$$$function__14___call__->m_frame.f_lineno = 152;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_predicate, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__14___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__14___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__14___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__14___call__,
    type_description_1,
    par_self,
    par_retry_state,
    var_exception
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__14___call__ == cache_frame_frame_tenacity$wait$$$function__14___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__14___call__);
    cache_frame_frame_tenacity$wait$$$function__14___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__14___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_exception);
CHECK_OBJECT(var_exception);
Py_DECREF(var_exception);
var_exception = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exception);
var_exception = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_start = python_pars[1];
PyObject *par_increment = python_pars[2];
PyObject *par_max = python_pars[3];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e75acae4bc2edc340a851e48064f33b1, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__15___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__15___init__ = cache_frame_frame_tenacity$wait$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__15___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_start);
tmp_args_element_value_1 = par_start;
frame_frame_tenacity$wait$$$function__15___init__->m_frame.f_lineno = 168;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_start, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_2;
tmp_called_instance_2 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 169;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_increment);
tmp_args_element_value_2 = par_increment;
frame_frame_tenacity$wait$$$function__15___init__->m_frame.f_lineno = 169;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_increment, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_assattr_target_3;
tmp_called_instance_3 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_max);
tmp_args_element_value_3 = par_max;
frame_frame_tenacity$wait$$$function__15___init__->m_frame.f_lineno = 170;
tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_3);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_max, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__15___init__,
    type_description_1,
    par_self,
    par_start,
    par_increment,
    par_max
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__15___init__ == cache_frame_frame_tenacity$wait$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__15___init__);
    cache_frame_frame_tenacity$wait$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__15___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_start);
Py_DECREF(par_start);
CHECK_OBJECT(par_increment);
Py_DECREF(par_increment);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_start);
Py_DECREF(par_start);
CHECK_OBJECT(par_increment);
Py_DECREF(par_increment);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__16___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__16___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__16___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__16___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__16___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__16___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__16___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_115c64e0425bdc46607a3d74f0018f0a, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__16___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__16___call__ = cache_frame_frame_tenacity$wait$$$function__16___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__16___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__16___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_start);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_increment);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_retry_state);
tmp_expression_value_3 = par_retry_state;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_attempt_number);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_mult_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
CHECK_OBJECT(tmp_mult_expr_right_1);
Py_DECREF(tmp_mult_expr_right_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_args_element_value_1 = const_int_0;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
CHECK_OBJECT(var_result);
tmp_args_element_value_3 = var_result;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_max);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__16___call__->m_frame.f_lineno = 174;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__16___call__->m_frame.f_lineno = 174;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__16___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__16___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__16___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__16___call__,
    type_description_1,
    par_self,
    par_retry_state,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__16___call__ == cache_frame_frame_tenacity$wait$$$function__16___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__16___call__);
    cache_frame_frame_tenacity$wait$$$function__16___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__16___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__17___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_multiplier = python_pars[1];
PyObject *par_max = python_pars[2];
PyObject *par_exp_base = python_pars[3];
PyObject *par_min = python_pars[4];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__17___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__17___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__17___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__17___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__17___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__17___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_cc179e22c42aae334ea742a7fddc3c3f, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__17___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__17___init__ = cache_frame_frame_tenacity$wait$$$function__17___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__17___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__17___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_multiplier);
tmp_assattr_value_1 = par_multiplier;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_multiplier, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_2;
tmp_called_instance_1 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_min);
tmp_args_element_value_1 = par_min;
frame_frame_tenacity$wait$$$function__17___init__->m_frame.f_lineno = 198;
tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_min, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_assattr_target_3;
tmp_called_instance_2 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_max);
tmp_args_element_value_2 = par_max;
frame_frame_tenacity$wait$$$function__17___init__->m_frame.f_lineno = 199;
tmp_assattr_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_max, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_exp_base);
tmp_assattr_value_4 = par_exp_base;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_exp_base, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__17___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__17___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__17___init__,
    type_description_1,
    par_self,
    par_multiplier,
    par_max,
    par_exp_base,
    par_min
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__17___init__ == cache_frame_frame_tenacity$wait$$$function__17___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__17___init__);
    cache_frame_frame_tenacity$wait$$$function__17___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__17___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_multiplier);
Py_DECREF(par_multiplier);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);
CHECK_OBJECT(par_exp_base);
Py_DECREF(par_exp_base);
CHECK_OBJECT(par_min);
Py_DECREF(par_min);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_multiplier);
Py_DECREF(par_multiplier);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);
CHECK_OBJECT(par_exp_base);
Py_DECREF(par_exp_base);
CHECK_OBJECT(par_min);
Py_DECREF(par_min);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__18___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
PyObject *var_exp = NULL;
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__18___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__18___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__18___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__18___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__18___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__18___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_529fbfe85d24b2dd83c0cf685e04966d, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__18___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__18___call__ = cache_frame_frame_tenacity$wait$$$function__18___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__18___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__18___call__) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_pow_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_exp_base);
if (tmp_pow_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_retry_state);
tmp_expression_value_2 = par_retry_state;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_attempt_number);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_pow_expr_left_1);

exception_lineno = 204;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_pow_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_pow_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_pow_expr_left_1);

exception_lineno = 204;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_left_1);
Py_DECREF(tmp_pow_expr_left_1);
CHECK_OBJECT(tmp_pow_expr_right_1);
Py_DECREF(tmp_pow_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_exp == NULL);
var_exp = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_multiplier);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_exp);
tmp_mult_expr_right_1 = var_exp;
tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__18___call__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__18___call__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OverflowError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_max);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto try_return_handler_3;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 203;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_tenacity$wait$$$function__18___call__->m_frame)) {
        frame_frame_tenacity$wait$$$function__18___call__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_6;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_1 != NULL);
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
tmp_args_element_value_2 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_min);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__18___call__->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(var_result);
tmp_args_element_value_5 = var_result;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_max);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__18___call__->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_1);

exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__18___call__->m_frame.f_lineno = 208;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__18___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__18___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__18___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__18___call__,
    type_description_1,
    par_self,
    par_retry_state,
    var_exp,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__18___call__ == cache_frame_frame_tenacity$wait$$$function__18___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__18___call__);
    cache_frame_frame_tenacity$wait$$$function__18___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__18___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_exp);
var_exp = NULL;
Py_XDECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_exp);
var_exp = NULL;
Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__19___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
PyObject *var_high = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__19___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__19___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__19___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__19___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__19___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__19___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9848a9a1f3c54e71ab25b5fd31ce0a33, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__19___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__19___call__ = cache_frame_frame_tenacity$wait$$$function__19___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__19___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__19___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_kw_call_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 238;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_tenacity$wait, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___call__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_retry_state);
tmp_kw_call_value_0_1 = par_retry_state;
frame_frame_tenacity$wait$$$function__19___call__->m_frame.f_lineno = 238;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_retry_state_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
assert(var_high == NULL);
var_high = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = module_var_accessor_tenacity$wait$random(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_random);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 239;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_uniform);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_min);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 239;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_high);
tmp_args_element_value_2 = var_high;
frame_frame_tenacity$wait$$$function__19___call__->m_frame.f_lineno = 239;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 239;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__19___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__19___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__19___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__19___call__,
    type_description_1,
    par_self,
    par_retry_state,
    var_high,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__19___call__ == cache_frame_frame_tenacity$wait$$$function__19___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__19___call__);
    cache_frame_frame_tenacity$wait$$$function__19___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__19___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_high);
CHECK_OBJECT(var_high);
Py_DECREF(var_high);
var_high = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_high);
var_high = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__20___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_initial = python_pars[1];
PyObject *par_max = python_pars[2];
PyObject *par_exp_base = python_pars[3];
PyObject *par_jitter = python_pars[4];
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__20___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__20___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__20___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__20___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__20___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__20___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e4d61e5cd0fd15e03989efe64de7da34, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__20___init__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__20___init__ = cache_frame_frame_tenacity$wait$$$function__20___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__20___init__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__20___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_initial);
tmp_assattr_value_1 = par_initial;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_initial, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_max);
tmp_assattr_value_2 = par_max;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_max, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_exp_base);
tmp_assattr_value_3 = par_exp_base;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_exp_base, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
CHECK_OBJECT(par_jitter);
tmp_assattr_value_4 = par_jitter;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_jitter, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__20___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__20___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__20___init__,
    type_description_1,
    par_self,
    par_initial,
    par_max,
    par_exp_base,
    par_jitter
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__20___init__ == cache_frame_frame_tenacity$wait$$$function__20___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__20___init__);
    cache_frame_frame_tenacity$wait$$$function__20___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__20___init__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);
CHECK_OBJECT(par_exp_base);
Py_DECREF(par_exp_base);
CHECK_OBJECT(par_jitter);
Py_DECREF(par_jitter);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_initial);
Py_DECREF(par_initial);
CHECK_OBJECT(par_max);
Py_DECREF(par_max);
CHECK_OBJECT(par_exp_base);
Py_DECREF(par_exp_base);
CHECK_OBJECT(par_jitter);
Py_DECREF(par_jitter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$wait$$$function__21___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
PyObject *var_jitter = NULL;
PyObject *var_exp = NULL;
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$function__21___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$wait$$$function__21___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$wait$$$function__21___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$wait$$$function__21___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$wait$$$function__21___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$wait$$$function__21___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2acece364ab204e44e6ff1962cd04a7a, module_tenacity$wait, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$wait$$$function__21___call__->m_type_description == NULL);
frame_frame_tenacity$wait$$$function__21___call__ = cache_frame_frame_tenacity$wait$$$function__21___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$function__21___call__);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$function__21___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_tenacity$wait$random(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_random);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 267;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_uniform);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = const_int_0;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_jitter);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 267;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__21___call__->m_frame.f_lineno = 267;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_jitter == NULL);
var_jitter = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_pow_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_exp_base);
if (tmp_pow_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_retry_state);
tmp_expression_value_4 = par_retry_state;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_attempt_number);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_pow_expr_left_1);

exception_lineno = 269;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_pow_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_pow_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_pow_expr_left_1);

exception_lineno = 269;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
CHECK_OBJECT(tmp_pow_expr_left_1);
Py_DECREF(tmp_pow_expr_left_1);
CHECK_OBJECT(tmp_pow_expr_right_1);
Py_DECREF(tmp_pow_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_exp == NULL);
var_exp = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_initial);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_exp);
tmp_mult_expr_right_1 = var_exp;
tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_jitter);
tmp_add_expr_right_1 = var_jitter;
tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooo";
    goto try_except_handler_2;
}
assert(var_result == NULL);
var_result = tmp_assign_source_3;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__21___call__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__21___call__, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_OverflowError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_max);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "ooooo";
    goto try_except_handler_3;
}
assert(var_result == NULL);
var_result = tmp_assign_source_4;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 268;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_tenacity$wait$$$function__21___call__->m_frame)) {
        frame_frame_tenacity$wait$$$function__21___call__->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooo";
goto try_except_handler_3;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_7;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_2 != NULL);
tmp_args_element_value_3 = const_int_0;
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(var_result);
tmp_args_element_value_5 = var_result;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_max);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__21___call__->m_frame.f_lineno = 273;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$wait$$$function__21___call__->m_frame.f_lineno = 273;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_return_exit_1:

// Put the previous frame back on top.
popFrameStack(tstate);

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$function__21___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$function__21___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$function__21___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$function__21___call__,
    type_description_1,
    par_self,
    par_retry_state,
    var_jitter,
    var_exp,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$wait$$$function__21___call__ == cache_frame_frame_tenacity$wait$$$function__21___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$wait$$$function__21___call__);
    cache_frame_frame_tenacity$wait$$$function__21___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$wait$$$function__21___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_jitter);
CHECK_OBJECT(var_jitter);
Py_DECREF(var_jitter);
var_jitter = NULL;
Py_XDECREF(var_exp);
var_exp = NULL;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_jitter);
var_jitter = NULL;
Py_XDECREF(var_exp);
var_exp = NULL;
Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_retry_state);
Py_DECREF(par_retry_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__10___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__10___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e94751c1c9ebdbee040f7f1aa8f3c1b,
#endif
        code_objects_0687a73c23e42bc24505bfb0eaa5f501,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__11___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7bf187a6b062332b8c3cbfcdfbbceb60,
#endif
        code_objects_e5d54f8193f1082813053079a79fa4f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__12___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__12___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c1ed3f1aa74364e1d0983abd702ff79,
#endif
        code_objects_8b4d96073a9fed2da076b85ed977f01b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__13___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_97362cd2c80d625c8015bf7e763803ac,
#endif
        code_objects_b91be14602d909fe392fa57bba47f032,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__14___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__14___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_87cb9d7f91cc27989e675ba49e59a319,
#endif
        code_objects_5ecfae7bd30bf5f745a9d0ab7504867f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__15___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_55578f734204209902f58623228b7237,
#endif
        code_objects_e75acae4bc2edc340a851e48064f33b1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__16___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__16___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b9066e98877ed2605a6e8592dda76a6e,
#endif
        code_objects_115c64e0425bdc46607a3d74f0018f0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__17___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__17___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d4a6159550dbb3dedd6ee93521f9e919,
#endif
        code_objects_cc179e22c42aae334ea742a7fddc3c3f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__18___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__18___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_221e10b6125df0e047e9b90a020175c3,
#endif
        code_objects_529fbfe85d24b2dd83c0cf685e04966d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__19___call__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__19___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_01a0fd9858746153f154d7ca6e6d111a,
#endif
        code_objects_9848a9a1f3c54e71ab25b5fd31ce0a33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__1___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ac2856c36c1c6d6642f9b9ba378b7d92,
#endif
        code_objects_bdd4e31f5791a8da8472f32b5b987747,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__20___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b0639751ba9d9fc12f1c8dfae2bda2c8,
#endif
        code_objects_e4d61e5cd0fd15e03989efe64de7da34,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__21___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__21___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_68e777f49ed7844d66514f0795d5ab91,
#endif
        code_objects_2acece364ab204e44e6ff1962cd04a7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__2___add__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__2___add__,
        mod_consts.const_str_plain___add__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_dd17e7328707a9fd4c17fe19bf715672,
#endif
        code_objects_ec01830b576cf742884de4fe822ee0f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__3___radd__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__3___radd__,
        mod_consts.const_str_plain___radd__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_843d6b2f7f5d5ea5509a945257f25951,
#endif
        code_objects_d514df6bad7c48c21a48d1c8bc8b677b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__4___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_085d2792b46f4293e302a6ec1728c252,
#endif
        code_objects_49db90af0be0299bb83b01912e070d84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__5___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__5___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c9c443cb4c5b5568282c9669613eb949,
#endif
        code_objects_1c152a67e944f0827381c9625a08072c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__6___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6d320d7483483b9c47d63dd116359a3b,
#endif
        code_objects_36abb4e157a862533299ca6e2c233cd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__7___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9e35dedee3992036931829a7f5b629b5,
#endif
        code_objects_18377cd25fc802b9ded3a04087a04dd3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__8___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__8___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7c066c19f8810601a2d601ec7c477fee,
#endif
        code_objects_e4bd23774e6e3e882c18e4ea490d467e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$wait$$$function__9___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$wait$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_342010206ba2694f64aa9f6887e1bdcc,
#endif
        code_objects_aabf1769fed0bed7887ae9f73f4ad453,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$wait,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_tenacity$wait[] = {
impl_tenacity$wait$$$function__2___add__,
impl_tenacity$wait$$$function__3___radd__,
impl_tenacity$wait$$$function__4___init__,
impl_tenacity$wait$$$function__5___call__,
impl_tenacity$wait$$$function__6___init__,
impl_tenacity$wait$$$function__7___init__,
impl_tenacity$wait$$$function__8___call__,
impl_tenacity$wait$$$function__9___init__,
impl_tenacity$wait$$$function__10___call__,
impl_tenacity$wait$$$function__11___init__,
impl_tenacity$wait$$$function__12___call__,
impl_tenacity$wait$$$function__13___init__,
impl_tenacity$wait$$$function__14___call__,
impl_tenacity$wait$$$function__15___init__,
impl_tenacity$wait$$$function__16___call__,
impl_tenacity$wait$$$function__17___init__,
impl_tenacity$wait$$$function__18___call__,
impl_tenacity$wait$$$function__19___call__,
impl_tenacity$wait$$$function__20___init__,
impl_tenacity$wait$$$function__21___call__,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    return Nuitka_Function_GetFunctionState(function, function_table_tenacity$wait);
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;
    PyObject *annotations;
    PyObject *func_dict;

    if (!PyArg_ParseTuple(args, "OOOOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, &annotations, &func_dict, NULL)) {
        return NULL;
    }

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_tenacity$wait,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        annotations,
        func_dict,
        function_table_tenacity$wait,
        sizeof(function_table_tenacity$wait) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if _NUITKA_MODULE_MODE && 0
static char const *module_full_name = "tenacity.wait";
#endif

// Internal entry point for module code.
PyObject *module_code_tenacity$wait(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("tenacity$wait");

    // Store the module for future use.
    module_tenacity$wait = module;

    moduledict_tenacity$wait = MODULE_DICT(module_tenacity$wait);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if _NUITKA_MODULE_MODE && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule(tstate);

        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));

        createGlobalConstants(tstate, real_module_name);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("tenacity$wait: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("tenacity$wait: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("tenacity$wait: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "tenacity.wait" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittenacity$wait\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_tenacity$wait,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_tenacity$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_tenacity$wait,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_tenacity$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_tenacity$wait,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_tenacity$wait);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_tenacity$wait);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if _NUITKA_MODULE_MODE && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
PyObject *outline_8_var___class__ = NULL;
struct Nuitka_CellObject *outline_9_var___class__ = NULL;
PyObject *outline_10_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_10__bases = NULL;
PyObject *tmp_class_container$class_creation_10__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_10__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_10__metaclass = NULL;
PyObject *tmp_class_container$class_creation_10__prepared = NULL;
PyObject *tmp_class_container$class_creation_11__bases = NULL;
PyObject *tmp_class_container$class_creation_11__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_11__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_11__metaclass = NULL;
PyObject *tmp_class_container$class_creation_11__prepared = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__bases = NULL;
PyObject *tmp_class_container$class_creation_5__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__metaclass = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__bases = NULL;
PyObject *tmp_class_container$class_creation_6__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__metaclass = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_class_container$class_creation_7__bases = NULL;
PyObject *tmp_class_container$class_creation_7__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_7__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_7__metaclass = NULL;
PyObject *tmp_class_container$class_creation_7__prepared = NULL;
PyObject *tmp_class_container$class_creation_8__bases = NULL;
PyObject *tmp_class_container$class_creation_8__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_8__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_8__metaclass = NULL;
PyObject *tmp_class_container$class_creation_8__prepared = NULL;
PyObject *tmp_class_container$class_creation_9__bases = NULL;
PyObject *tmp_class_container$class_creation_9__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_9__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_9__metaclass = NULL;
PyObject *tmp_class_container$class_creation_9__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_tenacity$wait$$$class__1_wait_base_27 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__1_wait_base_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_tenacity$wait$$$class__2_wait_fixed_49 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__2_wait_fixed_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_tenacity$wait$$$class__3_wait_none_59 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__3_wait_none_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_tenacity$wait$$$class__4_wait_random_66 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__4_wait_random_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_tenacity$wait$$$class__5_wait_combine_81 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__5_wait_combine_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_tenacity$wait$$$class__6_wait_chain_91 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__6_wait_chain_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_tenacity$wait$$$class__7_wait_exception_116 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__7_wait_exception_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_tenacity$wait$$$class__8_wait_incrementing_155 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__8_wait_incrementing_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
PyObject *locals_tenacity$wait$$$class__9_wait_exponential_177 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__9_wait_exponential_10;
NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_25;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_26;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_27;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
PyObject *locals_tenacity$wait$$$class__10_wait_random_exponential_211 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11;
NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_28;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_29;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_30;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
PyObject *locals_tenacity$wait$$$class__11_wait_exponential_jitter_242 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12;
NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_31;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_32;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_33;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_tenacity$wait = MAKE_MODULE_FRAME(code_objects_d0a59d4dcf266ebf71b7c089734bb427, module_tenacity$wait);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait);
assert(Py_REFCNT(frame_frame_tenacity$wait) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_tenacity$wait$__spec__(tstate);
assert(!(tmp_assattr_target_1 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_origin, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_True;
tmp_assattr_target_2 = module_var_accessor_tenacity$wait$__spec__(tstate);
assert(!(tmp_assattr_target_2 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_has_location, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_tenacity$wait;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_tenacity$wait->m_frame.f_lineno = 17;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_random;
tmp_globals_arg_value_2 = (PyObject *)moduledict_tenacity$wait;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_tenacity$wait->m_frame.f_lineno = 18;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_random, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_tenacity;
tmp_globals_arg_value_3 = (PyObject *)moduledict_tenacity$wait;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__utils_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_tenacity$wait->m_frame.f_lineno = 21;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_tenacity$wait,
        mod_consts.const_str_plain__utils,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__utils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain__utils, tmp_assign_source_7);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_tenacity$wait$abc(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ABC);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_assign_source_8 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_8, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_9 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_11 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_11;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_wait_base;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 27;
tmp_assign_source_12 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 27;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 27;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_1;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_13;
}
branch_end_1:;
{
PyObject *tmp_assign_source_14;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_tenacity$wait$$$class__1_wait_base_27 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_1d5d132495ce7e257bc476d9ff2048e5;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_base;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
frame_frame_tenacity$wait$$$class__1_wait_base_2 = MAKE_CLASS_FRAME(tstate, code_objects_f1910e6acfb4053b29f9a7c03fc14941, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__1_wait_base_2);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__1_wait_base_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_8 = PyObject_GetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain_abc);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_tenacity$wait$abc(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abc);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_expression_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_abstractmethod);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_key_1 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_1 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = PyObject_GetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain_float);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_args_element_value_1 = MAKE_FUNCTION_tenacity$wait$$$function__1___call__(tstate, tmp_annotations_1);

frame_frame_tenacity$wait$$$class__1_wait_base_2->m_frame.f_lineno = 30;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_b84d4e5ad3f126de069cf571f05d8393);

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__2___add__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain___add__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_other;
tmp_dict_value_2 = mod_consts.const_str_plain_wait_base;
tmp_annotations_3 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_10 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_10 == NULL));
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Union);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_subscript_value_2 = mod_consts.const_tuple_str_plain_wait_combine_str_plain_wait_base_tuple;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__3___radd__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain___radd__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__1_wait_base_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__1_wait_base_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__1_wait_base_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__1_wait_base_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__1_wait_base_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_3;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__1_wait_base_27, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_wait_base;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_tenacity$wait$$$class__1_wait_base_27;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 27;
tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_15;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_14 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_14);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_tenacity$wait$$$class__1_wait_base_27);
locals_tenacity$wait$$$class__1_wait_base_27 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__1_wait_base_27);
locals_tenacity$wait$$$class__1_wait_base_27 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 27;
goto try_except_handler_1;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_base, tmp_assign_source_14);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_1 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto outline_result_1;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_5;
tmp_expression_value_12 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_12 == NULL));
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Union);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_11);

exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_6;
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_5);
tmp_expression_value_14 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_14 == NULL));
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_2;
}
tmp_tuple_element_6 = MAKE_LIST1(tstate, mod_consts.const_str_plain_RetryCallState);
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_5;
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_6);
tmp_expression_value_16 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_16 == NULL));
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Union);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_3;
}
tmp_subscript_value_5 = mod_consts.const_tuple_type_float_type_int_tuple;
tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_expression_value_13);
Py_DECREF(tmp_subscript_value_4);
goto tuple_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_11);
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_WaitBaseT, tmp_assign_source_16);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_tuple_element_7;
tmp_tuple_element_7 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_assign_source_17 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_17, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_18 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_17 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_6, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_20 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_20;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_19;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_19 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_tuple_element_8 = mod_consts.const_str_plain_wait_fixed;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 49;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_20 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_21;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_22;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_9);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_4;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 49;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 49;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_22;
}
branch_end_4:;
{
PyObject *tmp_assign_source_23;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_tenacity$wait$$$class__2_wait_fixed_49 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_44eea95376835db2d1ff6e7d46cd7296;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_fixed;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_49;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
frame_frame_tenacity$wait$$$class__2_wait_fixed_3 = MAKE_CLASS_FRAME(tstate, code_objects_7e23364c989ed6aacb558d6c53c430a4, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__2_wait_fixed_3);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__2_wait_fixed_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_23;
tmp_dict_key_3 = mod_consts.const_str_plain_wait;
tmp_expression_value_23 = PyObject_GetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, mod_consts.const_str_plain__utils);

if (tmp_expression_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_23 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_annotations_4 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__4___init__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_4 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = PyObject_GetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, mod_consts.const_str_plain_float);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__5___call__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__2_wait_fixed_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__2_wait_fixed_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__2_wait_fixed_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__2_wait_fixed_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__2_wait_fixed_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_wait_fixed_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__2_wait_fixed_49, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_10 = mod_consts.const_str_plain_wait_fixed;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_10 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_tenacity$wait$$$class__2_wait_fixed_49;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 49;
tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_24;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_23 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_23);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_tenacity$wait$$$class__2_wait_fixed_49);
locals_tenacity$wait$$$class__2_wait_fixed_49 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__2_wait_fixed_49);
locals_tenacity$wait$$$class__2_wait_fixed_49 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 49;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_fixed, tmp_assign_source_23);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_tuple_element_11;
tmp_tuple_element_11 = module_var_accessor_tenacity$wait$wait_fixed(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_fixed);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto try_except_handler_7;
}
tmp_assign_source_25 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_11);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_26 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_24 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_24, tmp_subscript_value_7, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_28;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_25 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
tmp_tuple_element_12 = mod_consts.const_str_plain_wait_none;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_12 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 59;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_29;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_27;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_27 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_27, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_28;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_28 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_28, tmp_name_value_6, tmp_default_value_3);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_29;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_29 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_29 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_29);
Py_DECREF(tmp_expression_value_29);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_7;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 59;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 59;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_30;
}
branch_end_7:;
{
PyObject *tmp_assign_source_31;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_tenacity$wait$$$class__3_wait_none_59 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__3_wait_none_59, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_1c70d10a8f82c9a772e1d5d33abef0e6;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__3_wait_none_59, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_none;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__3_wait_none_59, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_59;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__3_wait_none_59, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
frame_frame_tenacity$wait$$$class__3_wait_none_4 = MAKE_CLASS_FRAME(tstate, code_objects_4d05c65ffa4716cab4adc671eed8c2c8, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__3_wait_none_4);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__3_wait_none_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_6;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
tmp_closure_1[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__6___init__(tstate, tmp_annotations_6, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__3_wait_none_59, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__3_wait_none_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__3_wait_none_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__3_wait_none_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__3_wait_none_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__3_wait_none_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__3_wait_none_59, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__3_wait_none_59, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_14 = mod_consts.const_str_plain_wait_none;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
tmp_tuple_element_14 = locals_tenacity$wait$$$class__3_wait_none_59;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 59;
tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto try_except_handler_9;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_32);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_31 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_31);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_tenacity$wait$$$class__3_wait_none_59);
locals_tenacity$wait$$$class__3_wait_none_59 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__3_wait_none_59);
locals_tenacity$wait$$$class__3_wait_none_59 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 59;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_none, tmp_assign_source_31);
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_outline_return_value_4;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_tuple_element_15;
tmp_tuple_element_15 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto try_except_handler_10;
}
tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_15);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_35;
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_30 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_30, tmp_subscript_value_8, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_36;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_31 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_32;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
tmp_tuple_element_16 = mod_consts.const_str_plain_wait_random;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 66;
tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_37;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_33;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_33 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_33, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_34;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_34 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_34, tmp_name_value_7, tmp_default_value_4);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_35;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_35 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_35);
Py_DECREF(tmp_expression_value_35);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_17);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_10;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 66;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 66;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_38;
tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_38;
}
branch_end_10:;
{
PyObject *tmp_assign_source_39;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_tenacity$wait$$$class__4_wait_random_66 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_1ec370fbabd3e77afe40fe92eb3f579f;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_random;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_66;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
frame_frame_tenacity$wait$$$class__4_wait_random_5 = MAKE_CLASS_FRAME(tstate, code_objects_053f49be045dccfa2c6a25b9261e5e2f, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__4_wait_random_5);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__4_wait_random_5) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_36;
tmp_defaults_1 = mod_consts.const_tuple_int_0_int_pos_1_tuple;
tmp_dict_key_5 = mod_consts.const_str_plain_min;
tmp_expression_value_36 = PyObject_GetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain__utils);

if (tmp_expression_value_36 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_36 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_expression_value_36);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_annotations_7 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_37;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_max;
tmp_expression_value_37 = PyObject_GetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain__utils);

if (tmp_expression_value_37 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_37 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_37);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_37);
Py_DECREF(tmp_expression_value_37);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_5;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__7___init__(tstate, tmp_defaults_1, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_6 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_8 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = PyObject_GetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain_float);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__8___call__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__4_wait_random_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__4_wait_random_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__4_wait_random_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__4_wait_random_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__4_wait_random_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_wait_random_min_str_plain_wait_random_max_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__4_wait_random_66, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_18;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_18 = mod_consts.const_str_plain_wait_random;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_18 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_18);
tmp_tuple_element_18 = locals_tenacity$wait$$$class__4_wait_random_66;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_18);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 66;
tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_40;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_39 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_39);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_tenacity$wait$$$class__4_wait_random_66);
locals_tenacity$wait$$$class__4_wait_random_66 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__4_wait_random_66);
locals_tenacity$wait$$$class__4_wait_random_66 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 66;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_random, tmp_assign_source_39);
}
goto try_end_4;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_19;
tmp_tuple_element_19 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto try_except_handler_13;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_19);
assert(tmp_class_container$class_creation_5__bases_orig == NULL);
tmp_class_container$class_creation_5__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_direct_call_arg1_5 = tmp_class_container$class_creation_5__bases_orig;
Py_INCREF(tmp_direct_call_arg1_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__bases == NULL);
tmp_class_container$class_creation_5__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_metaclass_value_5;
nuitka_bool tmp_condition_result_17;
int tmp_truth_name_5;
PyObject *tmp_type_arg_9;
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_5;
} else {
    goto condexpr_false_5;
}
condexpr_true_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_expression_value_38 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_38, tmp_subscript_value_9, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
goto condexpr_end_5;
condexpr_false_5:;
tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_5);
condexpr_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_bases_value_5 = tmp_class_container$class_creation_5__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
CHECK_OBJECT(tmp_metaclass_value_5);
Py_DECREF(tmp_metaclass_value_5);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_39;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
tmp_condition_result_18 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_40;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_20;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_40 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
tmp_tuple_element_20 = mod_consts.const_str_plain_wait_combine;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_20 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 81;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_41;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_41 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_41, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_19 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_42;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_42 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_42, tmp_name_value_8, tmp_default_value_5);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_43;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_43 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_21);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_13;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 81;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 81;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_13;
}
branch_no_14:;
goto branch_end_13;
branch_no_13:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_46;
}
branch_end_13:;
{
PyObject *tmp_assign_source_47;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_tenacity$wait$$$class__5_wait_combine_81 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_348c3c5aea2cedc6938a7a8a520b5b41;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_combine;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_81;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
frame_frame_tenacity$wait$$$class__5_wait_combine_6 = MAKE_CLASS_FRAME(tstate, code_objects_616952c54b9ff61846196ced780fcaf1, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__5_wait_combine_6);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__5_wait_combine_6) == 2);

// Framed code:
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = mod_consts.const_str_plain_strategies;
tmp_dict_value_7 = PyObject_GetItem(locals_tenacity$wait$$$class__5_wait_combine_81, mod_consts.const_str_plain_wait_base);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_annotations_9 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__9___init__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_8 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_10 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = PyObject_GetItem(locals_tenacity$wait$$$class__5_wait_combine_81, mod_consts.const_str_plain_float);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__10___call__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__5_wait_combine_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__5_wait_combine_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__5_wait_combine_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__5_wait_combine_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__5_wait_combine_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_15;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_wait_funcs_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
{
nuitka_bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_cmp_expr_left_5 = tmp_class_container$class_creation_5__bases;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_cmp_expr_right_5 = tmp_class_container$class_creation_5__bases_orig;
tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_5__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__5_wait_combine_81, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_11;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_22;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_11 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_22 = mod_consts.const_str_plain_wait_combine;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_22 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_22);
tmp_tuple_element_22 = locals_tenacity$wait$$$class__5_wait_combine_81;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_22);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 81;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_15;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_48;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_47 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_tenacity$wait$$$class__5_wait_combine_81);
locals_tenacity$wait$$$class__5_wait_combine_81 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__5_wait_combine_81);
locals_tenacity$wait$$$class__5_wait_combine_81 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 81;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_combine, tmp_assign_source_47);
}
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases_orig);
Py_DECREF(tmp_class_container$class_creation_5__bases_orig);
tmp_class_container$class_creation_5__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
Py_DECREF(tmp_class_container$class_creation_5__bases);
tmp_class_container$class_creation_5__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
Py_DECREF(tmp_class_container$class_creation_5__metaclass);
tmp_class_container$class_creation_5__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
// Tried code:
{
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_23;
tmp_tuple_element_23 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto try_except_handler_16;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_23);
assert(tmp_class_container$class_creation_6__bases_orig == NULL);
tmp_class_container$class_creation_6__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_direct_call_arg1_6 = tmp_class_container$class_creation_6__bases_orig;
Py_INCREF(tmp_direct_call_arg1_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__bases == NULL);
tmp_class_container$class_creation_6__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_metaclass_value_6;
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_6;
PyObject *tmp_type_arg_11;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
tmp_condition_result_21 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_6;
} else {
    goto condexpr_false_6;
}
condexpr_true_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_expression_value_44 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_10, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
goto condexpr_end_6;
condexpr_false_6:;
tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_6);
condexpr_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_bases_value_6 = tmp_class_container$class_creation_6__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
CHECK_OBJECT(tmp_metaclass_value_6);
Py_DECREF(tmp_metaclass_value_6);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_45;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
tmp_condition_result_22 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_22 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_12;
PyObject *tmp_expression_value_46;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_24;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_46 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
tmp_tuple_element_24 = mod_consts.const_str_plain_wait_chain;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_24 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 91;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_47;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_47 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
assert(!(tmp_res == -1));
tmp_condition_result_23 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_23 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
PyObject *tmp_mod_expr_left_6;
PyObject *tmp_mod_expr_right_6;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_48;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_48 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_25 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_9, tmp_default_value_6);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_49;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_25);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_16;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 91;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 91;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_16;
}
branch_no_17:;
goto branch_end_16;
branch_no_16:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_54;
}
branch_end_16:;
{
PyObject *tmp_assign_source_55;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_tenacity$wait$$$class__6_wait_chain_91 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_93d72b99d923bb645dd13d5b2092604c;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_chain;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_91;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
frame_frame_tenacity$wait$$$class__6_wait_chain_7 = MAKE_CLASS_FRAME(tstate, code_objects_f8753d53724f320e128b3aa8d7258912, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__6_wait_chain_7);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__6_wait_chain_7) == 2);

// Framed code:
{
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
tmp_dict_key_9 = mod_consts.const_str_plain_strategies;
tmp_dict_value_9 = PyObject_GetItem(locals_tenacity$wait$$$class__6_wait_chain_91, mod_consts.const_str_plain_wait_base);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_annotations_11 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__11___init__(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
tmp_dict_key_10 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_10 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_12 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_dict_value_10 = PyObject_GetItem(locals_tenacity$wait$$$class__6_wait_chain_91, mod_consts.const_str_plain_float);

if (tmp_dict_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__12___call__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__6_wait_chain_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__6_wait_chain_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__6_wait_chain_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__6_wait_chain_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__6_wait_chain_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_18;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_strategies_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
{
nuitka_bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_cmp_expr_left_6 = tmp_class_container$class_creation_6__bases;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_cmp_expr_right_6 = tmp_class_container$class_creation_6__bases_orig;
tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_6__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__6_wait_chain_91, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
branch_no_18:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_13;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_26;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_13 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_26 = mod_consts.const_str_plain_wait_chain;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_26 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_26);
tmp_tuple_element_26 = locals_tenacity$wait$$$class__6_wait_chain_91;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_26);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 91;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto try_except_handler_18;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_56;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_55 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_tenacity$wait$$$class__6_wait_chain_91);
locals_tenacity$wait$$$class__6_wait_chain_91 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__6_wait_chain_91);
locals_tenacity$wait$$$class__6_wait_chain_91 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 91;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_chain, tmp_assign_source_55);
}
goto try_end_6;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases_orig);
Py_DECREF(tmp_class_container$class_creation_6__bases_orig);
tmp_class_container$class_creation_6__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
Py_DECREF(tmp_class_container$class_creation_6__bases);
tmp_class_container$class_creation_6__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
Py_DECREF(tmp_class_container$class_creation_6__metaclass);
tmp_class_container$class_creation_6__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_outline_return_value_7;
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_tuple_element_27;
tmp_tuple_element_27 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto try_except_handler_19;
}
tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_27);
assert(tmp_class_container$class_creation_7__bases_orig == NULL);
tmp_class_container$class_creation_7__bases_orig = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_direct_call_arg1_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_direct_call_arg1_7 = tmp_class_container$class_creation_7__bases_orig;
Py_INCREF(tmp_direct_call_arg1_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7};
    tmp_assign_source_58 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__bases == NULL);
tmp_class_container$class_creation_7__bases = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__class_decl_dict == NULL);
tmp_class_container$class_creation_7__class_decl_dict = tmp_assign_source_59;
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_metaclass_value_7;
nuitka_bool tmp_condition_result_25;
int tmp_truth_name_7;
PyObject *tmp_type_arg_13;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_11;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
tmp_condition_result_25 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_7;
} else {
    goto condexpr_false_7;
}
condexpr_true_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_expression_value_50 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_11 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_11, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
goto condexpr_end_7;
condexpr_false_7:;
tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_7);
condexpr_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_bases_value_7 = tmp_class_container$class_creation_7__bases;
tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
CHECK_OBJECT(tmp_metaclass_value_7);
Py_DECREF(tmp_metaclass_value_7);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
tmp_condition_result_26 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_26 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_assign_source_61;
PyObject *tmp_called_value_14;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_28;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
tmp_tuple_element_28 = mod_consts.const_str_plain_wait_exception;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_28 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 116;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_53 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
assert(!(tmp_res == -1));
tmp_condition_result_27 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_27 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
PyObject *tmp_mod_expr_left_7;
PyObject *tmp_mod_expr_right_7;
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_54;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_29 = BUILTIN_GETATTR(tstate, tmp_expression_value_54, tmp_name_value_10, tmp_default_value_7);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_55;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_55 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_29);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_19;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 116;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 116;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_19;
}
branch_no_20:;
goto branch_end_19;
branch_no_19:;
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_62;
}
branch_end_19:;
{
PyObject *tmp_assign_source_63;
{
PyObject *tmp_set_locals_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_set_locals_7 = tmp_class_container$class_creation_7__prepared;
locals_tenacity$wait$$$class__7_wait_exception_116 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_71d2bfb35d688ca404e45067ffee4dce;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_exception;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_116;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
frame_frame_tenacity$wait$$$class__7_wait_exception_8 = MAKE_CLASS_FRAME(tstate, code_objects_160920b09d3fe693b080834e480ba794, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__7_wait_exception_8);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__7_wait_exception_8) == 2);

// Framed code:
{
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_expression_value_56;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_12;
PyObject *tmp_tuple_element_30;
PyObject *tmp_list_element_1;
tmp_dict_key_11 = mod_consts.const_str_plain_predicate;
tmp_expression_value_57 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_57 == NULL));
tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_list_element_1 = PyObject_GetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain_BaseException);

if (tmp_list_element_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_list_element_1 = PyExc_BaseException;
        Py_INCREF(tmp_list_element_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_tuple_element_30 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM(tmp_tuple_element_30, 0, tmp_list_element_1);
tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_30);
tmp_tuple_element_30 = PyObject_GetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain_float);

if (tmp_tuple_element_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_30 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_tuple_element_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_30);
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_12);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_annotations_13 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_dict_value_11 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__13___init__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
tmp_dict_key_12 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_12 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_14 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_dict_value_12 = PyObject_GetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain_float);

if (tmp_dict_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__14___call__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_8:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__7_wait_exception_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__7_wait_exception_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__7_wait_exception_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__7_wait_exception_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__7_wait_exception_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_21;
skip_nested_handling_7:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_predicate_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
{
nuitka_bool tmp_condition_result_28;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_cmp_expr_left_7 = tmp_class_container$class_creation_7__bases;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_cmp_expr_right_7 = tmp_class_container$class_creation_7__bases_orig;
tmp_condition_result_28 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_7__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__7_wait_exception_116, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
branch_no_21:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_31 = mod_consts.const_str_plain_wait_exception;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_31);
tmp_tuple_element_31 = locals_tenacity$wait$$$class__7_wait_exception_116;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 116;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto try_except_handler_21;
}
assert(outline_6_var___class__ == NULL);
outline_6_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_6_var___class__);
tmp_assign_source_63 = outline_6_var___class__;
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_tenacity$wait$$$class__7_wait_exception_116);
locals_tenacity$wait$$$class__7_wait_exception_116 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__7_wait_exception_116);
locals_tenacity$wait$$$class__7_wait_exception_116 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_6_var___class__);
CHECK_OBJECT(outline_6_var___class__);
Py_DECREF(outline_6_var___class__);
outline_6_var___class__ = NULL;
goto outline_result_14;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_7;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_7:;
exception_lineno = 116;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_exception, tmp_assign_source_63);
}
goto try_end_7;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases_orig);
Py_DECREF(tmp_class_container$class_creation_7__bases_orig);
tmp_class_container$class_creation_7__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
Py_DECREF(tmp_class_container$class_creation_7__bases);
tmp_class_container$class_creation_7__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_7__class_decl_dict);
tmp_class_container$class_creation_7__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
Py_DECREF(tmp_class_container$class_creation_7__metaclass);
tmp_class_container$class_creation_7__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
Py_DECREF(tmp_class_container$class_creation_7__prepared);
tmp_class_container$class_creation_7__prepared = NULL;
tmp_outline_return_value_7 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_7);
goto outline_result_13;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_13:;
CHECK_OBJECT(tmp_outline_return_value_7);
Py_DECREF(tmp_outline_return_value_7);
}
{
PyObject *tmp_outline_return_value_8;
// Tried code:
{
PyObject *tmp_assign_source_65;
PyObject *tmp_tuple_element_32;
tmp_tuple_element_32 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;

    goto try_except_handler_22;
}
tmp_assign_source_65 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_65, 0, tmp_tuple_element_32);
assert(tmp_class_container$class_creation_8__bases_orig == NULL);
tmp_class_container$class_creation_8__bases_orig = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_direct_call_arg1_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_direct_call_arg1_8 = tmp_class_container$class_creation_8__bases_orig;
Py_INCREF(tmp_direct_call_arg1_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8};
    tmp_assign_source_66 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__bases == NULL);
tmp_class_container$class_creation_8__bases = tmp_assign_source_66;
}
{
PyObject *tmp_assign_source_67;
tmp_assign_source_67 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__class_decl_dict == NULL);
tmp_class_container$class_creation_8__class_decl_dict = tmp_assign_source_67;
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_metaclass_value_8;
nuitka_bool tmp_condition_result_29;
int tmp_truth_name_8;
PyObject *tmp_type_arg_15;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_13;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
tmp_condition_result_29 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_8;
} else {
    goto condexpr_false_8;
}
condexpr_true_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_expression_value_58 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_13 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_58, tmp_subscript_value_13, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
goto condexpr_end_8;
condexpr_false_8:;
tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_8);
condexpr_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_bases_value_8 = tmp_class_container$class_creation_8__bases;
tmp_assign_source_68 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
CHECK_OBJECT(tmp_metaclass_value_8);
Py_DECREF(tmp_metaclass_value_8);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_68;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_59;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_59 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_59, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
tmp_condition_result_30 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_30 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assign_source_69;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_60;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_60 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
tmp_tuple_element_33 = mod_consts.const_str_plain_wait_incrementing;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 155;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_69;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_61;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_61 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
assert(!(tmp_res == -1));
tmp_condition_result_31 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_31 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_raise_type_8;
PyObject *tmp_make_exception_arg_8;
PyObject *tmp_mod_expr_left_8;
PyObject *tmp_mod_expr_right_8;
PyObject *tmp_tuple_element_34;
PyObject *tmp_expression_value_62;
PyObject *tmp_name_value_11;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_62 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_11 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_34 = BUILTIN_GETATTR(tstate, tmp_expression_value_62, tmp_name_value_11, tmp_default_value_8);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_63;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_34);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_63 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_63 == NULL));
tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_63);
Py_DECREF(tmp_expression_value_63);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_34);
}
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_22;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 155;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 155;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_22;
}
branch_no_23:;
goto branch_end_22;
branch_no_22:;
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_70;
}
branch_end_22:;
{
PyObject *tmp_assign_source_71;
{
PyObject *tmp_set_locals_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_set_locals_8 = tmp_class_container$class_creation_8__prepared;
locals_tenacity$wait$$$class__8_wait_incrementing_155 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_1a25fdfd76432affb8382c6bb9040337;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_incrementing;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_155;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
frame_frame_tenacity$wait$$$class__8_wait_incrementing_9 = MAKE_CLASS_FRAME(tstate, code_objects_4bc5359019df68a6c07a536ed6435dfe, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__8_wait_incrementing_9);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__8_wait_incrementing_9) == 2);

// Framed code:
{
PyObject *tmp_defaults_2;
PyObject *tmp_tuple_element_35;
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
PyObject *tmp_expression_value_65;
tmp_tuple_element_35 = const_int_0;
tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_64;
PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_35);
tmp_tuple_element_35 = mod_consts.const_int_pos_100;
PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_35);
tmp_expression_value_64 = PyObject_GetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain__utils);

if (tmp_expression_value_64 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_64 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
        Py_INCREF(tmp_expression_value_64);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_11;
    }
}

tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_MAX_WAIT);
CHECK_OBJECT(tmp_expression_value_64);
Py_DECREF(tmp_expression_value_64);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_defaults_2, 2, tmp_tuple_element_35);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_defaults_2);
goto frame_exception_exit_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_dict_key_13 = mod_consts.const_str_plain_start;
tmp_expression_value_65 = PyObject_GetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain__utils);

if (tmp_expression_value_65 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_65 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_defaults_2);

exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_65);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_65);
Py_DECREF(tmp_expression_value_65);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_defaults_2);

exception_lineno = 164;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_annotations_15 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_66;
PyObject *tmp_expression_value_67;
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_increment;
tmp_expression_value_66 = PyObject_GetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain__utils);

if (tmp_expression_value_66 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_66 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_66);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_66);
Py_DECREF(tmp_expression_value_66);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_max;
tmp_expression_value_67 = PyObject_GetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain__utils);

if (tmp_expression_value_67 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_67 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_2 = "o";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_expression_value_67);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_67);
Py_DECREF(tmp_expression_value_67);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_dict_value_13 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_defaults_2);
Py_DECREF(tmp_annotations_15);
goto frame_exception_exit_9;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__15___init__(tstate, tmp_defaults_2, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_annotations_16;
PyObject *tmp_dict_key_14;
PyObject *tmp_dict_value_14;
tmp_dict_key_14 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_14 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_16 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_return;
tmp_dict_value_14 = PyObject_GetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain_float);

if (tmp_dict_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_14 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__16___call__(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_8;
frame_exception_exit_9:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__8_wait_incrementing_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__8_wait_incrementing_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__8_wait_incrementing_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__8_wait_incrementing_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__8_wait_incrementing_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_24;
skip_nested_handling_8:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_start_str_plain_increment_str_plain_max_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
{
nuitka_bool tmp_condition_result_32;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_cmp_expr_left_8 = tmp_class_container$class_creation_8__bases;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_cmp_expr_right_8 = tmp_class_container$class_creation_8__bases_orig;
tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_8__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__8_wait_incrementing_155, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
branch_no_24:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_17;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_36;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_17 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_36 = mod_consts.const_str_plain_wait_incrementing;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_36 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_36);
tmp_tuple_element_36 = locals_tenacity$wait$$$class__8_wait_incrementing_155;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_36);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 155;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto try_except_handler_24;
}
assert(outline_7_var___class__ == NULL);
outline_7_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_7_var___class__);
tmp_assign_source_71 = outline_7_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_tenacity$wait$$$class__8_wait_incrementing_155);
locals_tenacity$wait$$$class__8_wait_incrementing_155 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__8_wait_incrementing_155);
locals_tenacity$wait$$$class__8_wait_incrementing_155 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_7_var___class__);
CHECK_OBJECT(outline_7_var___class__);
Py_DECREF(outline_7_var___class__);
outline_7_var___class__ = NULL;
goto outline_result_16;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_8;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_8:;
exception_lineno = 155;
goto try_except_handler_22;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_incrementing, tmp_assign_source_71);
}
goto try_end_8;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases_orig);
Py_DECREF(tmp_class_container$class_creation_8__bases_orig);
tmp_class_container$class_creation_8__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
Py_DECREF(tmp_class_container$class_creation_8__bases);
tmp_class_container$class_creation_8__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_8__class_decl_dict);
tmp_class_container$class_creation_8__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
Py_DECREF(tmp_class_container$class_creation_8__metaclass);
tmp_class_container$class_creation_8__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
Py_DECREF(tmp_class_container$class_creation_8__prepared);
tmp_class_container$class_creation_8__prepared = NULL;
tmp_outline_return_value_8 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_8);
goto outline_result_15;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_15:;
CHECK_OBJECT(tmp_outline_return_value_8);
Py_DECREF(tmp_outline_return_value_8);
}
{
PyObject *tmp_outline_return_value_9;
// Tried code:
{
PyObject *tmp_assign_source_73;
PyObject *tmp_tuple_element_37;
tmp_tuple_element_37 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;

    goto try_except_handler_25;
}
tmp_assign_source_73 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_73, 0, tmp_tuple_element_37);
assert(tmp_class_container$class_creation_9__bases_orig == NULL);
tmp_class_container$class_creation_9__bases_orig = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_direct_call_arg1_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_direct_call_arg1_9 = tmp_class_container$class_creation_9__bases_orig;
Py_INCREF(tmp_direct_call_arg1_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9};
    tmp_assign_source_74 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__bases == NULL);
tmp_class_container$class_creation_9__bases = tmp_assign_source_74;
}
{
PyObject *tmp_assign_source_75;
tmp_assign_source_75 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__class_decl_dict == NULL);
tmp_class_container$class_creation_9__class_decl_dict = tmp_assign_source_75;
}
{
PyObject *tmp_assign_source_76;
PyObject *tmp_metaclass_value_9;
nuitka_bool tmp_condition_result_33;
int tmp_truth_name_9;
PyObject *tmp_type_arg_17;
PyObject *tmp_expression_value_68;
PyObject *tmp_subscript_value_14;
PyObject *tmp_bases_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_container$class_creation_9__bases);
if (tmp_truth_name_9 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
tmp_condition_result_33 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_9;
} else {
    goto condexpr_false_9;
}
condexpr_true_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_expression_value_68 = tmp_class_container$class_creation_9__bases;
tmp_subscript_value_14 = const_int_0;
tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_68, tmp_subscript_value_14, 0);
if (tmp_type_arg_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
CHECK_OBJECT(tmp_type_arg_17);
Py_DECREF(tmp_type_arg_17);
if (tmp_metaclass_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
goto condexpr_end_9;
condexpr_false_9:;
tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_9);
condexpr_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_bases_value_9 = tmp_class_container$class_creation_9__bases;
tmp_assign_source_76 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
CHECK_OBJECT(tmp_metaclass_value_9);
Py_DECREF(tmp_metaclass_value_9);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__metaclass == NULL);
tmp_class_container$class_creation_9__metaclass = tmp_assign_source_76;
}
{
bool tmp_condition_result_34;
PyObject *tmp_expression_value_69;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_69 = tmp_class_container$class_creation_9__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
tmp_condition_result_34 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_34 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_assign_source_77;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_70;
PyObject *tmp_args_value_17;
PyObject *tmp_tuple_element_38;
PyObject *tmp_kwargs_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_70 = tmp_class_container$class_creation_9__metaclass;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
tmp_tuple_element_38 = mod_consts.const_str_plain_wait_exponential;
tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_38 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_38);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_17 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 177;
tmp_assign_source_77 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_17, tmp_kwargs_value_17);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_value_17);
Py_DECREF(tmp_args_value_17);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_77;
}
{
bool tmp_condition_result_35;
PyObject *tmp_operand_value_9;
PyObject *tmp_expression_value_71;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_expression_value_71 = tmp_class_container$class_creation_9__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_71, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
assert(!(tmp_res == -1));
tmp_condition_result_35 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_35 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_raise_type_9;
PyObject *tmp_make_exception_arg_9;
PyObject *tmp_mod_expr_left_9;
PyObject *tmp_mod_expr_right_9;
PyObject *tmp_tuple_element_39;
PyObject *tmp_expression_value_72;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_9;
tmp_mod_expr_left_9 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_expression_value_72 = tmp_class_container$class_creation_9__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_9 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_39 = BUILTIN_GETATTR(tstate, tmp_expression_value_72, tmp_name_value_12, tmp_default_value_9);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_73;
PyObject *tmp_type_arg_18;
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_39);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_type_arg_18 = tmp_class_container$class_creation_9__prepared;
tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_18);
assert(!(tmp_expression_value_73 == NULL));
tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_73);
Py_DECREF(tmp_expression_value_73);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_39);
}
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_mod_expr_right_9);
goto try_except_handler_25;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
CHECK_OBJECT(tmp_mod_expr_right_9);
Py_DECREF(tmp_mod_expr_right_9);
if (tmp_make_exception_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_25;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 177;
tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_9);
CHECK_OBJECT(tmp_make_exception_arg_9);
Py_DECREF(tmp_make_exception_arg_9);
assert(!(tmp_raise_type_9 == NULL));
exception_state.exception_value = tmp_raise_type_9;
exception_lineno = 177;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_25;
}
branch_no_26:;
goto branch_end_25;
branch_no_25:;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_9__prepared == NULL);
tmp_class_container$class_creation_9__prepared = tmp_assign_source_78;
}
branch_end_25:;
{
PyObject *tmp_assign_source_79;
{
PyObject *tmp_set_locals_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
tmp_set_locals_9 = tmp_class_container$class_creation_9__prepared;
locals_tenacity$wait$$$class__9_wait_exponential_177 = tmp_set_locals_9;
Py_INCREF(tmp_set_locals_9);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_digest_71592a72d15724458ee1ac5464c9589e;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_exponential;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
tmp_dictset_value = mod_consts.const_int_pos_177;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
frame_frame_tenacity$wait$$$class__9_wait_exponential_10 = MAKE_CLASS_FRAME(tstate, code_objects_83ab2dbb2f61cf12aae9e4a09f78517c, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__9_wait_exponential_10);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__9_wait_exponential_10) == 2);

// Framed code:
{
PyObject *tmp_defaults_3;
PyObject *tmp_tuple_element_40;
PyObject *tmp_annotations_17;
PyObject *tmp_dict_key_15;
PyObject *tmp_dict_value_15;
PyObject *tmp_expression_value_75;
PyObject *tmp_expression_value_76;
PyObject *tmp_subscript_value_15;
PyObject *tmp_tuple_element_41;
tmp_tuple_element_40 = const_int_pos_1;
tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_74;
PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_40);
tmp_expression_value_74 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain__utils);

if (tmp_expression_value_74 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_74 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
        Py_INCREF(tmp_expression_value_74);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_13;
    }
}

tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_MAX_WAIT);
CHECK_OBJECT(tmp_expression_value_74);
Py_DECREF(tmp_expression_value_74);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM(tmp_defaults_3, 1, tmp_tuple_element_40);
tmp_tuple_element_40 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_40);
tmp_tuple_element_40 = const_int_0;
PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_40);
}
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_defaults_3);
goto frame_exception_exit_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_dict_key_15 = mod_consts.const_str_plain_multiplier;
tmp_expression_value_76 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_76 == NULL));
tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_Union);
if (tmp_expression_value_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_defaults_3);

exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_tuple_element_41 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, const_str_plain_int);

if (tmp_tuple_element_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_41 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_41);
tmp_tuple_element_41 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain_float);

if (tmp_tuple_element_41 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_41 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_tuple_element_41);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_41);
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_15);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_defaults_3);

exception_lineno = 192;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
tmp_annotations_17 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_77;
PyObject *tmp_expression_value_78;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_16;
PyObject *tmp_tuple_element_42;
PyObject *tmp_expression_value_80;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_max;
tmp_expression_value_77 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain__utils);

if (tmp_expression_value_77 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_77 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_expression_value_77);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_exp_base;
tmp_expression_value_79 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_79 == NULL));
tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts.const_str_plain_Union);
if (tmp_expression_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_tuple_element_42 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, const_str_plain_int);

if (tmp_tuple_element_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_42 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_tuple_element_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_42);
tmp_tuple_element_42 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain_float);

if (tmp_tuple_element_42 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_tuple_element_42 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_tuple_element_42);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_42);
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_16);
CHECK_OBJECT(tmp_expression_value_78);
Py_DECREF(tmp_expression_value_78);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_min;
tmp_expression_value_80 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain__utils);

if (tmp_expression_value_80 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_80 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;
type_description_2 = "o";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_expression_value_80);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_80);
Py_DECREF(tmp_expression_value_80);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_return;
tmp_dict_value_15 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_defaults_3);
Py_DECREF(tmp_annotations_17);
goto frame_exception_exit_10;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__17___init__(tstate, tmp_defaults_3, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}
{
PyObject *tmp_annotations_18;
PyObject *tmp_dict_key_16;
PyObject *tmp_dict_value_16;
tmp_dict_key_16 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_16 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_18 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_16, tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_return;
tmp_dict_value_16 = PyObject_GetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain_float);

if (tmp_dict_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_16 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_10;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__18___call__(tstate, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_2 = "o";
    goto frame_exception_exit_10;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_10:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__9_wait_exponential_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__9_wait_exponential_10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__9_wait_exponential_10, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__9_wait_exponential_10,
    type_description_2,
    outline_8_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__9_wait_exponential_10);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_9;
frame_no_exception_9:;
goto skip_nested_handling_9;
nested_frame_exit_9:;

goto try_except_handler_27;
skip_nested_handling_9:;
tmp_dictset_value = mod_consts.const_tuple_218f701f5c2e4cb19421b24056614dea_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
{
nuitka_bool tmp_condition_result_36;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_cmp_expr_left_9 = tmp_class_container$class_creation_9__bases;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_cmp_expr_right_9 = tmp_class_container$class_creation_9__bases_orig;
tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_9__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__9_wait_exponential_177, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
branch_no_27:;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_called_value_19;
PyObject *tmp_args_value_18;
PyObject *tmp_tuple_element_43;
PyObject *tmp_kwargs_value_18;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
tmp_called_value_19 = tmp_class_container$class_creation_9__metaclass;
tmp_tuple_element_43 = mod_consts.const_str_plain_wait_exponential;
tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
tmp_tuple_element_43 = tmp_class_container$class_creation_9__bases;
PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_43);
tmp_tuple_element_43 = locals_tenacity$wait$$$class__9_wait_exponential_177;
PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_43);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
tmp_kwargs_value_18 = tmp_class_container$class_creation_9__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 177;
tmp_assign_source_80 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_18, tmp_kwargs_value_18);
CHECK_OBJECT(tmp_args_value_18);
Py_DECREF(tmp_args_value_18);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;

    goto try_except_handler_27;
}
assert(outline_8_var___class__ == NULL);
outline_8_var___class__ = tmp_assign_source_80;
}
CHECK_OBJECT(outline_8_var___class__);
tmp_assign_source_79 = outline_8_var___class__;
Py_INCREF(tmp_assign_source_79);
goto try_return_handler_27;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_27:;
Py_DECREF(locals_tenacity$wait$$$class__9_wait_exponential_177);
locals_tenacity$wait$$$class__9_wait_exponential_177 = NULL;
goto try_return_handler_26;
// Exception handler code:
try_except_handler_27:;
exception_keeper_lineno_25 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_25 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__9_wait_exponential_177);
locals_tenacity$wait$$$class__9_wait_exponential_177 = NULL;
// Re-raise.
exception_state = exception_keeper_name_25;
exception_lineno = exception_keeper_lineno_25;

goto try_except_handler_26;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_26:;
CHECK_OBJECT(outline_8_var___class__);
CHECK_OBJECT(outline_8_var___class__);
Py_DECREF(outline_8_var___class__);
outline_8_var___class__ = NULL;
goto outline_result_18;
// Exception handler code:
try_except_handler_26:;
exception_keeper_lineno_26 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_26 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_26;
exception_lineno = exception_keeper_lineno_26;

goto outline_exception_9;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_9:;
exception_lineno = 177;
goto try_except_handler_25;
outline_result_18:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_exponential, tmp_assign_source_79);
}
goto try_end_9;
// Exception handler code:
try_except_handler_25:;
exception_keeper_lineno_27 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_27 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_27;
exception_lineno = exception_keeper_lineno_27;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases_orig);
Py_DECREF(tmp_class_container$class_creation_9__bases_orig);
tmp_class_container$class_creation_9__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
CHECK_OBJECT(tmp_class_container$class_creation_9__bases);
Py_DECREF(tmp_class_container$class_creation_9__bases);
tmp_class_container$class_creation_9__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_9__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_9__class_decl_dict);
tmp_class_container$class_creation_9__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_9__metaclass);
Py_DECREF(tmp_class_container$class_creation_9__metaclass);
tmp_class_container$class_creation_9__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_9__prepared);
Py_DECREF(tmp_class_container$class_creation_9__prepared);
tmp_class_container$class_creation_9__prepared = NULL;
tmp_outline_return_value_9 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_9);
goto outline_result_17;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_17:;
CHECK_OBJECT(tmp_outline_return_value_9);
Py_DECREF(tmp_outline_return_value_9);
}
{
PyObject *tmp_outline_return_value_10;
// Tried code:
{
PyObject *tmp_assign_source_81;
PyObject *tmp_tuple_element_44;
tmp_tuple_element_44 = module_var_accessor_tenacity$wait$wait_exponential(tstate);
if (unlikely(tmp_tuple_element_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_exponential);
}

if (tmp_tuple_element_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 211;

    goto try_except_handler_28;
}
tmp_assign_source_81 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_81, 0, tmp_tuple_element_44);
assert(tmp_class_container$class_creation_10__bases_orig == NULL);
tmp_class_container$class_creation_10__bases_orig = tmp_assign_source_81;
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_direct_call_arg1_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_direct_call_arg1_10 = tmp_class_container$class_creation_10__bases_orig;
Py_INCREF(tmp_direct_call_arg1_10);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_10};
    tmp_assign_source_82 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__bases == NULL);
tmp_class_container$class_creation_10__bases = tmp_assign_source_82;
}
{
PyObject *tmp_assign_source_83;
tmp_assign_source_83 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__class_decl_dict == NULL);
tmp_class_container$class_creation_10__class_decl_dict = tmp_assign_source_83;
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_metaclass_value_10;
nuitka_bool tmp_condition_result_37;
int tmp_truth_name_10;
PyObject *tmp_type_arg_19;
PyObject *tmp_expression_value_81;
PyObject *tmp_subscript_value_17;
PyObject *tmp_bases_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_container$class_creation_10__bases);
if (tmp_truth_name_10 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
tmp_condition_result_37 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_10;
} else {
    goto condexpr_false_10;
}
condexpr_true_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_expression_value_81 = tmp_class_container$class_creation_10__bases;
tmp_subscript_value_17 = const_int_0;
tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_81, tmp_subscript_value_17, 0);
if (tmp_type_arg_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
CHECK_OBJECT(tmp_type_arg_19);
Py_DECREF(tmp_type_arg_19);
if (tmp_metaclass_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
goto condexpr_end_10;
condexpr_false_10:;
tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_10);
condexpr_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_bases_value_10 = tmp_class_container$class_creation_10__bases;
tmp_assign_source_84 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
CHECK_OBJECT(tmp_metaclass_value_10);
Py_DECREF(tmp_metaclass_value_10);
if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__metaclass == NULL);
tmp_class_container$class_creation_10__metaclass = tmp_assign_source_84;
}
{
bool tmp_condition_result_38;
PyObject *tmp_expression_value_82;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_82 = tmp_class_container$class_creation_10__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_82, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
tmp_condition_result_38 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_38 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_assign_source_85;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_83;
PyObject *tmp_args_value_19;
PyObject *tmp_tuple_element_45;
PyObject *tmp_kwargs_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_83 = tmp_class_container$class_creation_10__metaclass;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
tmp_tuple_element_45 = mod_consts.const_str_plain_wait_random_exponential;
tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_45 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_45);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_19 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 211;
tmp_assign_source_85 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_19, tmp_kwargs_value_19);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_value_19);
Py_DECREF(tmp_args_value_19);
if (tmp_assign_source_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_85;
}
{
bool tmp_condition_result_39;
PyObject *tmp_operand_value_10;
PyObject *tmp_expression_value_84;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_expression_value_84 = tmp_class_container$class_creation_10__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_84, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
assert(!(tmp_res == -1));
tmp_condition_result_39 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_39 != false) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
PyObject *tmp_raise_type_10;
PyObject *tmp_make_exception_arg_10;
PyObject *tmp_mod_expr_left_10;
PyObject *tmp_mod_expr_right_10;
PyObject *tmp_tuple_element_46;
PyObject *tmp_expression_value_85;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_10;
tmp_mod_expr_left_10 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_expression_value_85 = tmp_class_container$class_creation_10__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_10 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_46 = BUILTIN_GETATTR(tstate, tmp_expression_value_85, tmp_name_value_13, tmp_default_value_10);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_86;
PyObject *tmp_type_arg_20;
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_46);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_type_arg_20 = tmp_class_container$class_creation_10__prepared;
tmp_expression_value_86 = BUILTIN_TYPE1(tmp_type_arg_20);
assert(!(tmp_expression_value_86 == NULL));
tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_86);
Py_DECREF(tmp_expression_value_86);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_46);
}
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_mod_expr_right_10);
goto try_except_handler_28;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
CHECK_OBJECT(tmp_mod_expr_right_10);
Py_DECREF(tmp_mod_expr_right_10);
if (tmp_make_exception_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_28;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 211;
tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_10);
CHECK_OBJECT(tmp_make_exception_arg_10);
Py_DECREF(tmp_make_exception_arg_10);
assert(!(tmp_raise_type_10 == NULL));
exception_state.exception_value = tmp_raise_type_10;
exception_lineno = 211;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_28;
}
branch_no_29:;
goto branch_end_28;
branch_no_28:;
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_10__prepared == NULL);
tmp_class_container$class_creation_10__prepared = tmp_assign_source_86;
}
branch_end_28:;
{
PyObject *tmp_assign_source_87;
outline_9_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
tmp_set_locals_10 = tmp_class_container$class_creation_10__prepared;
locals_tenacity$wait$$$class__10_wait_random_exponential_211 = tmp_set_locals_10;
Py_INCREF(tmp_set_locals_10);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_digest_abe18bcb21bbf2e7faadc8cbbfe4f4b6;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_random_exponential;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
tmp_dictset_value = mod_consts.const_int_pos_211;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11 = MAKE_CLASS_FRAME(tstate, code_objects_c9502201489f0e7567cb9ee0d3325c61, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11) == 2);

// Framed code:
{
PyObject *tmp_annotations_19;
PyObject *tmp_dict_key_17;
PyObject *tmp_dict_value_17;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_dict_key_17 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_17 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_19 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_17, tmp_dict_value_17);
assert(!(tmp_res != 0));
tmp_dict_key_17 = mod_consts.const_str_plain_return;
tmp_dict_value_17 = PyObject_GetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, mod_consts.const_str_plain_float);

if (tmp_dict_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_17 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_11;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_17, tmp_dict_value_17);
Py_DECREF(tmp_dict_value_17);
assert(!(tmp_res != 0));
tmp_closure_2[0] = outline_9_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__19___call__(tstate, tmp_annotations_19, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto frame_exception_exit_11;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_10;
frame_exception_exit_11:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11,
    type_description_2,
    outline_9_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__10_wait_random_exponential_11);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_10;
frame_no_exception_10:;
goto skip_nested_handling_10;
nested_frame_exit_10:;

goto try_except_handler_30;
skip_nested_handling_10:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
{
nuitka_bool tmp_condition_result_40;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_cmp_expr_left_10 = tmp_class_container$class_creation_10__bases;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_cmp_expr_right_10 = tmp_class_container$class_creation_10__bases_orig;
tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_10__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__10_wait_random_exponential_211, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
branch_no_30:;
{
PyObject *tmp_assign_source_88;
PyObject *tmp_called_value_21;
PyObject *tmp_args_value_20;
PyObject *tmp_tuple_element_47;
PyObject *tmp_kwargs_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
tmp_called_value_21 = tmp_class_container$class_creation_10__metaclass;
tmp_tuple_element_47 = mod_consts.const_str_plain_wait_random_exponential;
tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
tmp_tuple_element_47 = tmp_class_container$class_creation_10__bases;
PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_47);
tmp_tuple_element_47 = locals_tenacity$wait$$$class__10_wait_random_exponential_211;
PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_47);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
tmp_kwargs_value_20 = tmp_class_container$class_creation_10__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 211;
tmp_assign_source_88 = CALL_FUNCTION(tstate, tmp_called_value_21, tmp_args_value_20, tmp_kwargs_value_20);
CHECK_OBJECT(tmp_args_value_20);
Py_DECREF(tmp_args_value_20);
if (tmp_assign_source_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;

    goto try_except_handler_30;
}
assert(Nuitka_Cell_GET(outline_9_var___class__) == NULL);
Nuitka_Cell_SET(outline_9_var___class__, tmp_assign_source_88);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_9_var___class__));
tmp_assign_source_87 = Nuitka_Cell_GET(outline_9_var___class__);
Py_INCREF(tmp_assign_source_87);
goto try_return_handler_30;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_30:;
Py_DECREF(locals_tenacity$wait$$$class__10_wait_random_exponential_211);
locals_tenacity$wait$$$class__10_wait_random_exponential_211 = NULL;
goto try_return_handler_29;
// Exception handler code:
try_except_handler_30:;
exception_keeper_lineno_28 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_28 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__10_wait_random_exponential_211);
locals_tenacity$wait$$$class__10_wait_random_exponential_211 = NULL;
// Re-raise.
exception_state = exception_keeper_name_28;
exception_lineno = exception_keeper_lineno_28;

goto try_except_handler_29;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_29:;
CHECK_OBJECT(outline_9_var___class__);
CHECK_OBJECT(outline_9_var___class__);
Py_DECREF(outline_9_var___class__);
outline_9_var___class__ = NULL;
goto outline_result_20;
// Exception handler code:
try_except_handler_29:;
exception_keeper_lineno_29 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_29 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_29;
exception_lineno = exception_keeper_lineno_29;

goto outline_exception_10;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_10:;
exception_lineno = 211;
goto try_except_handler_28;
outline_result_20:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_random_exponential, tmp_assign_source_87);
}
goto try_end_10;
// Exception handler code:
try_except_handler_28:;
exception_keeper_lineno_30 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_30 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_30;
exception_lineno = exception_keeper_lineno_30;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases_orig);
Py_DECREF(tmp_class_container$class_creation_10__bases_orig);
tmp_class_container$class_creation_10__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
CHECK_OBJECT(tmp_class_container$class_creation_10__bases);
Py_DECREF(tmp_class_container$class_creation_10__bases);
tmp_class_container$class_creation_10__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_10__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_10__class_decl_dict);
tmp_class_container$class_creation_10__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_10__metaclass);
Py_DECREF(tmp_class_container$class_creation_10__metaclass);
tmp_class_container$class_creation_10__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_10__prepared);
Py_DECREF(tmp_class_container$class_creation_10__prepared);
tmp_class_container$class_creation_10__prepared = NULL;
tmp_outline_return_value_10 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_10);
goto outline_result_19;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_19:;
CHECK_OBJECT(tmp_outline_return_value_10);
Py_DECREF(tmp_outline_return_value_10);
}
{
PyObject *tmp_outline_return_value_11;
// Tried code:
{
PyObject *tmp_assign_source_89;
PyObject *tmp_tuple_element_48;
tmp_tuple_element_48 = module_var_accessor_tenacity$wait$wait_base(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wait_base);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto try_except_handler_31;
}
tmp_assign_source_89 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_89, 0, tmp_tuple_element_48);
assert(tmp_class_container$class_creation_11__bases_orig == NULL);
tmp_class_container$class_creation_11__bases_orig = tmp_assign_source_89;
}
{
PyObject *tmp_assign_source_90;
PyObject *tmp_direct_call_arg1_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_direct_call_arg1_11 = tmp_class_container$class_creation_11__bases_orig;
Py_INCREF(tmp_direct_call_arg1_11);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_11};
    tmp_assign_source_90 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__bases == NULL);
tmp_class_container$class_creation_11__bases = tmp_assign_source_90;
}
{
PyObject *tmp_assign_source_91;
tmp_assign_source_91 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__class_decl_dict == NULL);
tmp_class_container$class_creation_11__class_decl_dict = tmp_assign_source_91;
}
{
PyObject *tmp_assign_source_92;
PyObject *tmp_metaclass_value_11;
nuitka_bool tmp_condition_result_41;
int tmp_truth_name_11;
PyObject *tmp_type_arg_21;
PyObject *tmp_expression_value_87;
PyObject *tmp_subscript_value_18;
PyObject *tmp_bases_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_container$class_creation_11__bases);
if (tmp_truth_name_11 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
tmp_condition_result_41 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_11;
} else {
    goto condexpr_false_11;
}
condexpr_true_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_expression_value_87 = tmp_class_container$class_creation_11__bases;
tmp_subscript_value_18 = const_int_0;
tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_87, tmp_subscript_value_18, 0);
if (tmp_type_arg_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
CHECK_OBJECT(tmp_type_arg_21);
Py_DECREF(tmp_type_arg_21);
if (tmp_metaclass_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
goto condexpr_end_11;
condexpr_false_11:;
tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_11);
condexpr_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_bases_value_11 = tmp_class_container$class_creation_11__bases;
tmp_assign_source_92 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
CHECK_OBJECT(tmp_metaclass_value_11);
Py_DECREF(tmp_metaclass_value_11);
if (tmp_assign_source_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__metaclass == NULL);
tmp_class_container$class_creation_11__metaclass = tmp_assign_source_92;
}
{
bool tmp_condition_result_42;
PyObject *tmp_expression_value_88;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_88 = tmp_class_container$class_creation_11__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_88, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
tmp_condition_result_42 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_42 != false) {
    goto branch_yes_31;
} else {
    goto branch_no_31;
}
}
branch_yes_31:;
{
PyObject *tmp_assign_source_93;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_89;
PyObject *tmp_args_value_21;
PyObject *tmp_tuple_element_49;
PyObject *tmp_kwargs_value_21;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_89 = tmp_class_container$class_creation_11__metaclass;
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
tmp_tuple_element_49 = mod_consts.const_str_plain_wait_exponential_jitter;
tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_49 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_49);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_21 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 242;
tmp_assign_source_93 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_21, tmp_kwargs_value_21);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_value_21);
Py_DECREF(tmp_args_value_21);
if (tmp_assign_source_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_93;
}
{
bool tmp_condition_result_43;
PyObject *tmp_operand_value_11;
PyObject *tmp_expression_value_90;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_expression_value_90 = tmp_class_container$class_creation_11__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_90, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
assert(!(tmp_res == -1));
tmp_condition_result_43 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_43 != false) {
    goto branch_yes_32;
} else {
    goto branch_no_32;
}
}
branch_yes_32:;
{
PyObject *tmp_raise_type_11;
PyObject *tmp_make_exception_arg_11;
PyObject *tmp_mod_expr_left_11;
PyObject *tmp_mod_expr_right_11;
PyObject *tmp_tuple_element_50;
PyObject *tmp_expression_value_91;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_11;
tmp_mod_expr_left_11 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_expression_value_91 = tmp_class_container$class_creation_11__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_11 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_50 = BUILTIN_GETATTR(tstate, tmp_expression_value_91, tmp_name_value_14, tmp_default_value_11);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_92;
PyObject *tmp_type_arg_22;
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_50);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_type_arg_22 = tmp_class_container$class_creation_11__prepared;
tmp_expression_value_92 = BUILTIN_TYPE1(tmp_type_arg_22);
assert(!(tmp_expression_value_92 == NULL));
tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_92);
Py_DECREF(tmp_expression_value_92);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_50);
}
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_mod_expr_right_11);
goto try_except_handler_31;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
CHECK_OBJECT(tmp_mod_expr_right_11);
Py_DECREF(tmp_mod_expr_right_11);
if (tmp_make_exception_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_31;
}
frame_frame_tenacity$wait->m_frame.f_lineno = 242;
tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_11);
CHECK_OBJECT(tmp_make_exception_arg_11);
Py_DECREF(tmp_make_exception_arg_11);
assert(!(tmp_raise_type_11 == NULL));
exception_state.exception_value = tmp_raise_type_11;
exception_lineno = 242;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_31;
}
branch_no_32:;
goto branch_end_31;
branch_no_31:;
{
PyObject *tmp_assign_source_94;
tmp_assign_source_94 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_11__prepared == NULL);
tmp_class_container$class_creation_11__prepared = tmp_assign_source_94;
}
branch_end_31:;
{
PyObject *tmp_assign_source_95;
{
PyObject *tmp_set_locals_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
tmp_set_locals_11 = tmp_class_container$class_creation_11__prepared;
locals_tenacity$wait$$$class__11_wait_exponential_jitter_242 = tmp_set_locals_11;
Py_INCREF(tmp_set_locals_11);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_81227eec188fd6f2abebe6c036769ad7;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_digest_112f0c6c6474ebf3262c2fc4c3a23e49;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_str_plain_wait_exponential_jitter;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
tmp_dictset_value = mod_consts.const_int_pos_242;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12 = MAKE_CLASS_FRAME(tstate, code_objects_ffb55d6cfc2bdbf27e253bb0f994d5e1, module_tenacity$wait, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12);
assert(Py_REFCNT(frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12) == 2);

// Framed code:
{
PyObject *tmp_defaults_4;
PyObject *tmp_tuple_element_51;
PyObject *tmp_annotations_20;
PyObject *tmp_dict_key_18;
PyObject *tmp_dict_value_18;
tmp_tuple_element_51 = const_int_pos_1;
tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_93;
PyTuple_SET_ITEM0(tmp_defaults_4, 0, tmp_tuple_element_51);
tmp_expression_value_93 = PyObject_GetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain__utils);

if (tmp_expression_value_93 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_93 = module_var_accessor_tenacity$wait$_utils(tstate);
if (unlikely(tmp_expression_value_93 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_93 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "o";
    goto tuple_build_exception_16;
}
        Py_INCREF(tmp_expression_value_93);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto tuple_build_exception_16;
    }
}

tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain_MAX_WAIT);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_tuple_element_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "o";
    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM(tmp_defaults_4, 1, tmp_tuple_element_51);
tmp_tuple_element_51 = mod_consts.const_int_pos_2;
PyTuple_SET_ITEM0(tmp_defaults_4, 2, tmp_tuple_element_51);
tmp_tuple_element_51 = const_int_pos_1;
PyTuple_SET_ITEM0(tmp_defaults_4, 3, tmp_tuple_element_51);
}
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_defaults_4);
goto frame_exception_exit_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_dict_key_18 = mod_consts.const_str_plain_initial;
tmp_dict_value_18 = PyObject_GetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain_float);

if (tmp_dict_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_annotations_20 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_18, tmp_dict_value_18);
Py_DECREF(tmp_dict_value_18);
assert(!(tmp_res != 0));
tmp_dict_key_18 = mod_consts.const_str_plain_max;
tmp_dict_value_18 = PyObject_GetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain_float);

if (tmp_dict_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_18, tmp_dict_value_18);
Py_DECREF(tmp_dict_value_18);
assert(!(tmp_res != 0));
tmp_dict_key_18 = mod_consts.const_str_plain_exp_base;
tmp_dict_value_18 = PyObject_GetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain_float);

if (tmp_dict_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_18, tmp_dict_value_18);
Py_DECREF(tmp_dict_value_18);
assert(!(tmp_res != 0));
tmp_dict_key_18 = mod_consts.const_str_plain_jitter;
tmp_dict_value_18 = PyObject_GetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain_float);

if (tmp_dict_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_18 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_18, tmp_dict_value_18);
Py_DECREF(tmp_dict_value_18);
assert(!(tmp_res != 0));
tmp_dict_key_18 = mod_consts.const_str_plain_return;
tmp_dict_value_18 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_18, tmp_dict_value_18);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__20___init__(tstate, tmp_defaults_4, tmp_annotations_20);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}
{
PyObject *tmp_annotations_21;
PyObject *tmp_dict_key_19;
PyObject *tmp_dict_value_19;
tmp_dict_key_19 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_19 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_21 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_19, tmp_dict_value_19);
assert(!(tmp_res != 0));
tmp_dict_key_19 = mod_consts.const_str_plain_return;
tmp_dict_value_19 = PyObject_GetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain_float);

if (tmp_dict_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_19 = (PyObject *)&PyFloat_Type;
        Py_INCREF(tmp_dict_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_12;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_19, tmp_dict_value_19);
Py_DECREF(tmp_dict_value_19);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$wait$$$function__21___call__(tstate, tmp_annotations_21);

tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "o";
    goto frame_exception_exit_12;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_11;
frame_exception_exit_12:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12,
    type_description_2,
    outline_10_var___class__
);



assertFrameObject(frame_frame_tenacity$wait$$$class__11_wait_exponential_jitter_12);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_11;
frame_no_exception_11:;
goto skip_nested_handling_11;
nested_frame_exit_11:;

goto try_except_handler_33;
skip_nested_handling_11:;
tmp_dictset_value = mod_consts.const_tuple_4f7f3050d0ffd67029761121a8fccb4c_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
{
nuitka_bool tmp_condition_result_44;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_cmp_expr_left_11 = tmp_class_container$class_creation_11__bases;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_cmp_expr_right_11 = tmp_class_container$class_creation_11__bases_orig;
tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
    goto branch_yes_33;
} else {
    goto branch_no_33;
}
}
branch_yes_33:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_11__bases_orig;
tmp_res = PyObject_SetItem(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
branch_no_33:;
{
PyObject *tmp_assign_source_96;
PyObject *tmp_called_value_23;
PyObject *tmp_args_value_22;
PyObject *tmp_tuple_element_52;
PyObject *tmp_kwargs_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
tmp_called_value_23 = tmp_class_container$class_creation_11__metaclass;
tmp_tuple_element_52 = mod_consts.const_str_plain_wait_exponential_jitter;
tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
tmp_tuple_element_52 = tmp_class_container$class_creation_11__bases;
PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_52);
tmp_tuple_element_52 = locals_tenacity$wait$$$class__11_wait_exponential_jitter_242;
PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_52);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
tmp_kwargs_value_22 = tmp_class_container$class_creation_11__class_decl_dict;
frame_frame_tenacity$wait->m_frame.f_lineno = 242;
tmp_assign_source_96 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_22, tmp_kwargs_value_22);
CHECK_OBJECT(tmp_args_value_22);
Py_DECREF(tmp_args_value_22);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto try_except_handler_33;
}
assert(outline_10_var___class__ == NULL);
outline_10_var___class__ = tmp_assign_source_96;
}
CHECK_OBJECT(outline_10_var___class__);
tmp_assign_source_95 = outline_10_var___class__;
Py_INCREF(tmp_assign_source_95);
goto try_return_handler_33;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_33:;
Py_DECREF(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242);
locals_tenacity$wait$$$class__11_wait_exponential_jitter_242 = NULL;
goto try_return_handler_32;
// Exception handler code:
try_except_handler_33:;
exception_keeper_lineno_31 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_31 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$wait$$$class__11_wait_exponential_jitter_242);
locals_tenacity$wait$$$class__11_wait_exponential_jitter_242 = NULL;
// Re-raise.
exception_state = exception_keeper_name_31;
exception_lineno = exception_keeper_lineno_31;

goto try_except_handler_32;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_32:;
CHECK_OBJECT(outline_10_var___class__);
CHECK_OBJECT(outline_10_var___class__);
Py_DECREF(outline_10_var___class__);
outline_10_var___class__ = NULL;
goto outline_result_22;
// Exception handler code:
try_except_handler_32:;
exception_keeper_lineno_32 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_32 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_32;
exception_lineno = exception_keeper_lineno_32;

goto outline_exception_11;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_11:;
exception_lineno = 242;
goto try_except_handler_31;
outline_result_22:;
UPDATE_STRING_DICT1(moduledict_tenacity$wait, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_exponential_jitter, tmp_assign_source_95);
}
goto try_end_11;
// Exception handler code:
try_except_handler_31:;
exception_keeper_lineno_33 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_33 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_33;
exception_lineno = exception_keeper_lineno_33;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases_orig);
Py_DECREF(tmp_class_container$class_creation_11__bases_orig);
tmp_class_container$class_creation_11__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
CHECK_OBJECT(tmp_class_container$class_creation_11__bases);
Py_DECREF(tmp_class_container$class_creation_11__bases);
tmp_class_container$class_creation_11__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_11__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_11__class_decl_dict);
tmp_class_container$class_creation_11__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_11__metaclass);
Py_DECREF(tmp_class_container$class_creation_11__metaclass);
tmp_class_container$class_creation_11__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_11__prepared);
Py_DECREF(tmp_class_container$class_creation_11__prepared);
tmp_class_container$class_creation_11__prepared = NULL;
tmp_outline_return_value_11 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_11);
goto outline_result_21;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_21:;
CHECK_OBJECT(tmp_outline_return_value_11);
Py_DECREF(tmp_outline_return_value_11);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_12;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$wait, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$wait->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$wait, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_tenacity$wait);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_12:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("tenacity$wait", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "tenacity.wait" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_tenacity$wait);
    return module_tenacity$wait;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$wait, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("tenacity$wait", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

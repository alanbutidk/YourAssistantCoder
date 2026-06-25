/* Generated code for Python module 'tenacity$stop'
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



/* The "module_tenacity$stop" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tenacity$stop;
PyDictObject *moduledict_tenacity$stop;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_stop_all;
PyObject *const_str_plain_stop_any;
PyObject *const_str_plain_stops;
PyObject *const_str_plain_retry_state;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_28176e6cb0413bb8da49388189356441;
PyObject *const_str_digest_eae2245bc9951d2a5d528d736e9b87b2;
PyObject *const_str_plain_event;
PyObject *const_str_plain_is_set;
PyObject *const_str_plain_max_attempt_number;
PyObject *const_str_plain_attempt_number;
PyObject *const_str_plain__utils;
PyObject *const_str_plain_to_seconds;
PyObject *const_str_plain_max_delay;
PyObject *const_str_plain_seconds_since_start;
PyObject *const_str_digest_055a98a96b1a3c148af4ea1e5fd2808f;
PyObject *const_str_plain_upcoming_sleep;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_abc;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_tenacity;
PyObject *const_tuple_str_plain__utils_tuple;
PyObject *const_str_plain_ABC;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_stop_base;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_02ccae128dbc300ca636594bd79ca47e;
PyObject *const_str_digest_889561de0f03fc3dcedab155d2551932;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_27;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_abstractmethod;
PyObject *const_str_plain_RetryCallState;
PyObject *const_str_plain_return;
PyObject *const_str_plain_bool;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_4d2c843b82de3cff015465953aeb9ab2;
PyObject *const_dict_c99863725e2246e3375de554356b1711;
PyObject *const_str_plain___and__;
PyObject *const_str_digest_89a8daf8f65468f468529c41f12f2cdb;
PyObject *const_dict_269076202589ca6d2312a8bef48ac02e;
PyObject *const_str_plain___or__;
PyObject *const_str_digest_aa642154ca26b5685c983122e970ed0c;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Callable;
PyObject *const_tuple_list_str_plain_RetryCallState_list_type_bool_tuple;
PyObject *const_str_plain_StopBaseT;
PyObject *const_str_digest_ac2257835dbf95af46211059312c3644;
PyObject *const_int_pos_44;
PyObject *const_str_digest_c7af545e274001f7a54a8ebd80979362;
PyObject *const_str_digest_c9e354c89d5413d215ba52851f793e22;
PyObject *const_tuple_str_plain_stops_tuple;
PyObject *const_str_digest_edfbceacfd915969c0e40ea65e4d006c;
PyObject *const_int_pos_54;
PyObject *const_str_digest_cb4f9560a8dd5b4f527eb04ba915c110;
PyObject *const_str_digest_e11c29ddb6388127da0c22be1205c0ec;
PyObject *const_str_plain__stop_never;
PyObject *const_str_digest_d08b05a01487af835ec18003515306b6;
PyObject *const_int_pos_64;
PyObject *const_str_digest_0dae73e4bf963e4de565afde3a91ca7a;
PyObject *const_str_plain_stop_never;
PyObject *const_str_plain_stop_when_event_set;
PyObject *const_str_digest_945c65a7b950de74562236f4d2b91776;
PyObject *const_int_pos_74;
PyObject *const_dict_c76fe3589cad5662ec98d9b7973ee46c;
PyObject *const_str_digest_785eb7780dedb5b64f2cec4119c8468e;
PyObject *const_str_digest_71d8cd8b030348096059233b4a172eed;
PyObject *const_tuple_str_plain_event_tuple;
PyObject *const_str_plain_stop_after_attempt;
PyObject *const_str_digest_ecb47a08f47684b3db01b62824e358b6;
PyObject *const_int_pos_84;
PyObject *const_str_digest_ea5c168f8c025dd4e59f1282ddac525a;
PyObject *const_str_digest_9ef8e34a186ea4c0683a4395567742b5;
PyObject *const_tuple_str_plain_max_attempt_number_tuple;
PyObject *const_str_plain_stop_after_delay;
PyObject *const_str_digest_9943c83df2800fade174ecead4937cbe;
PyObject *const_int_pos_94;
PyObject *const_str_plain_time_unit_type;
PyObject *const_str_digest_4a8128bb17a1d799b2e01853f94b4941;
PyObject *const_str_digest_cf0be73b4f59394db881f3ab6aec23c4;
PyObject *const_tuple_str_plain_max_delay_tuple;
PyObject *const_str_plain_stop_before_delay;
PyObject *const_str_digest_f47b93a08aec92f5e0b970ceea9e03f4;
PyObject *const_int_pos_113;
PyObject *const_str_digest_7ae4e148eccf1e7e2c7055aeaf70ffcf;
PyObject *const_str_digest_3f9a8a7de1d510f3d38decdcce5198ff;
PyObject *const_str_digest_572b4909283a06da239dbbfb867c83e8;
PyObject *const_tuple_d0894a74fab48acde7100066caa00cf9_tuple;
PyObject *const_str_digest_174bab205149e4c7eab2b99dffdbe5e3;
PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
PyObject *const_tuple_str_plain_self_str_plain_retry_state_tuple;
PyObject *const_tuple_str_plain_self_str_plain_max_attempt_number_tuple;
PyObject *const_tuple_str_plain_self_str_plain_max_delay_tuple;
PyObject *const_tuple_str_plain_self_str_plain_stops_tuple;
PyObject *const_tuple_str_plain_self_str_plain_event_tuple;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[101];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("tenacity.stop"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_all);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_any);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_stops);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_retry_state);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_28176e6cb0413bb8da49388189356441);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_eae2245bc9951d2a5d528d736e9b87b2);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_event);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_set);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_attempt_number);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_attempt_number);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_seconds);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_delay);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_seconds_since_start);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_055a98a96b1a3c148af4ea1e5fd2808f);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_upcoming_sleep);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_abc);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_tenacity);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__utils_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_ABC);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_base);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_digest_889561de0f03fc3dcedab155d2551932);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_27);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_RetryCallState);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_4d2c843b82de3cff015465953aeb9ab2);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_dict_c99863725e2246e3375de554356b1711);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___and__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_89a8daf8f65468f468529c41f12f2cdb);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_269076202589ca6d2312a8bef48ac02e);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___or__);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_aa642154ca26b5685c983122e970ed0c);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_list_str_plain_RetryCallState_list_type_bool_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_StopBaseT);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_ac2257835dbf95af46211059312c3644);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_44);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7af545e274001f7a54a8ebd80979362);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_c9e354c89d5413d215ba52851f793e22);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stops_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_edfbceacfd915969c0e40ea65e4d006c);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_int_pos_54);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb4f9560a8dd5b4f527eb04ba915c110);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_e11c29ddb6388127da0c22be1205c0ec);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__stop_never);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_d08b05a01487af835ec18003515306b6);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_64);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_0dae73e4bf963e4de565afde3a91ca7a);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_never);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_when_event_set);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_945c65a7b950de74562236f4d2b91776);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_int_pos_74);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_dict_c76fe3589cad5662ec98d9b7973ee46c);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_785eb7780dedb5b64f2cec4119c8468e);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_71d8cd8b030348096059233b4a172eed);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_after_attempt);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_ecb47a08f47684b3db01b62824e358b6);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_int_pos_84);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea5c168f8c025dd4e59f1282ddac525a);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_9ef8e34a186ea4c0683a4395567742b5);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_attempt_number_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_after_delay);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_digest_9943c83df2800fade174ecead4937cbe);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_94);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_time_unit_type);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a8128bb17a1d799b2e01853f94b4941);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_cf0be73b4f59394db881f3ab6aec23c4);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_delay_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop_before_delay);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_f47b93a08aec92f5e0b970ceea9e03f4);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_int_pos_113);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ae4e148eccf1e7e2c7055aeaf70ffcf);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f9a8a7de1d510f3d38decdcce5198ff);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_digest_572b4909283a06da239dbbfb867c83e8);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_174bab205149e4c7eab2b99dffdbe5e3);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_attempt_number_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_delay_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_stops_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_tenacity$stop(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_all));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_all);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_any);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_stops));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stops);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_retry_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retry_state);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_28176e6cb0413bb8da49388189356441));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28176e6cb0413bb8da49388189356441);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_eae2245bc9951d2a5d528d736e9b87b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eae2245bc9951d2a5d528d736e9b87b2);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_event);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_set);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_attempt_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_attempt_number);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_attempt_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attempt_number);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_seconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_seconds);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_delay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_delay);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_seconds_since_start));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seconds_since_start);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_055a98a96b1a3c148af4ea1e5fd2808f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_055a98a96b1a3c148af4ea1e5fd2808f);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_upcoming_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_upcoming_sleep);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_abc));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abc);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_tenacity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tenacity);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__utils_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_ABC));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ABC);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_base);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_digest_889561de0f03fc3dcedab155d2551932));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_889561de0f03fc3dcedab155d2551932);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_27));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_27);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstractmethod));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstractmethod);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_RetryCallState));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RetryCallState);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_4d2c843b82de3cff015465953aeb9ab2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4d2c843b82de3cff015465953aeb9ab2);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_dict_c99863725e2246e3375de554356b1711));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c99863725e2246e3375de554356b1711);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___and__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___and__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_89a8daf8f65468f468529c41f12f2cdb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89a8daf8f65468f468529c41f12f2cdb);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_269076202589ca6d2312a8bef48ac02e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_269076202589ca6d2312a8bef48ac02e);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___or__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___or__);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_aa642154ca26b5685c983122e970ed0c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_aa642154ca26b5685c983122e970ed0c);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_list_str_plain_RetryCallState_list_type_bool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_str_plain_RetryCallState_list_type_bool_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_StopBaseT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StopBaseT);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_ac2257835dbf95af46211059312c3644));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ac2257835dbf95af46211059312c3644);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_44));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_44);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7af545e274001f7a54a8ebd80979362));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7af545e274001f7a54a8ebd80979362);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_c9e354c89d5413d215ba52851f793e22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c9e354c89d5413d215ba52851f793e22);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_stops_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_stops_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_edfbceacfd915969c0e40ea65e4d006c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edfbceacfd915969c0e40ea65e4d006c);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_int_pos_54));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_54);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb4f9560a8dd5b4f527eb04ba915c110));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb4f9560a8dd5b4f527eb04ba915c110);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_e11c29ddb6388127da0c22be1205c0ec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e11c29ddb6388127da0c22be1205c0ec);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__stop_never));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__stop_never);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_d08b05a01487af835ec18003515306b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d08b05a01487af835ec18003515306b6);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_64));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_64);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_0dae73e4bf963e4de565afde3a91ca7a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0dae73e4bf963e4de565afde3a91ca7a);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_never));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_never);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_when_event_set));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_when_event_set);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_945c65a7b950de74562236f4d2b91776));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_945c65a7b950de74562236f4d2b91776);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_int_pos_74));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_74);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_dict_c76fe3589cad5662ec98d9b7973ee46c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c76fe3589cad5662ec98d9b7973ee46c);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_785eb7780dedb5b64f2cec4119c8468e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_785eb7780dedb5b64f2cec4119c8468e);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_71d8cd8b030348096059233b4a172eed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71d8cd8b030348096059233b4a172eed);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_event_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_after_attempt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_after_attempt);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_ecb47a08f47684b3db01b62824e358b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ecb47a08f47684b3db01b62824e358b6);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_int_pos_84));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_84);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea5c168f8c025dd4e59f1282ddac525a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea5c168f8c025dd4e59f1282ddac525a);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_9ef8e34a186ea4c0683a4395567742b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9ef8e34a186ea4c0683a4395567742b5);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_attempt_number_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_max_attempt_number_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_after_delay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_after_delay);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_digest_9943c83df2800fade174ecead4937cbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9943c83df2800fade174ecead4937cbe);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_94));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_94);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_time_unit_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time_unit_type);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a8128bb17a1d799b2e01853f94b4941));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a8128bb17a1d799b2e01853f94b4941);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_cf0be73b4f59394db881f3ab6aec23c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cf0be73b4f59394db881f3ab6aec23c4);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_max_delay_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_max_delay_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop_before_delay));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop_before_delay);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_f47b93a08aec92f5e0b970ceea9e03f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f47b93a08aec92f5e0b970ceea9e03f4);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_int_pos_113));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_113);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ae4e148eccf1e7e2c7055aeaf70ffcf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ae4e148eccf1e7e2c7055aeaf70ffcf);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f9a8a7de1d510f3d38decdcce5198ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f9a8a7de1d510f3d38decdcce5198ff);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_digest_572b4909283a06da239dbbfb867c83e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_572b4909283a06da239dbbfb867c83e8);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_174bab205149e4c7eab2b99dffdbe5e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_174bab205149e4c7eab2b99dffdbe5e3);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_other_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_attempt_number_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_max_attempt_number_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_max_delay_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_max_delay_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_stops_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_stops_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_event_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_tenacity$stop$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$stop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$stop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$stop->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$stop$_stop_never(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$stop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$stop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__stop_never);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$stop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__stop_never);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__stop_never, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__stop_never);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__stop_never, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__stop_never);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__stop_never);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__stop_never);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$stop$_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$stop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$stop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$stop->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$stop$abc(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$stop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$stop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$stop->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abc);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$stop$stop_all(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$stop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$stop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_all);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$stop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_stop_all);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_stop_all, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_stop_all);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_stop_all, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_all);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_all);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_all);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$stop$stop_any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$stop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$stop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$stop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_stop_any);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_stop_any, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_stop_any);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_stop_any, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_any);
    }

    return result;
}

static PyObject *module_var_accessor_tenacity$stop$stop_base(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_tenacity$stop->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_tenacity$stop->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_tenacity$stop->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_stop_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_stop_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_stop_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_stop_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_base);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5312667a14603b36193809e6cada0a3b;
static PyCodeObject *code_objects_8ecb6bc55991e4960e366a0b8c68ae3d;
static PyCodeObject *code_objects_32cc2ab84c9dc44fa491558d7bc2d72d;
static PyCodeObject *code_objects_0e96f6849b2635daaf71d0beea40b413;
static PyCodeObject *code_objects_08efec64874a9f0b332151cf3ef8741b;
static PyCodeObject *code_objects_8c28a2afcb5656c1702d27b87e8a7e36;
static PyCodeObject *code_objects_b4837ed3a6c92932f7648c83cf295285;
static PyCodeObject *code_objects_e6bd52d0429e7d178067a39ba583b87e;
static PyCodeObject *code_objects_ad16e9c9847b543e1acc1b5913935999;
static PyCodeObject *code_objects_5fedf213fe2b915f74827993849b46e4;
static PyCodeObject *code_objects_f7b897ad0c142216a1e89e6c8d2ea6d3;
static PyCodeObject *code_objects_ba0e8b3d462c2a3d9425a6574dbb2200;
static PyCodeObject *code_objects_9e814fa6a958b29461ae60f2bbc3be45;
static PyCodeObject *code_objects_6a573e11b1062bb87dda58c514076c91;
static PyCodeObject *code_objects_6eba34045caa5fd9b880996cf96b0580;
static PyCodeObject *code_objects_dfdeda6ed4044817a68afccefe813a01;
static PyCodeObject *code_objects_a215d312b7df9902d9ea549a03c4f210;
static PyCodeObject *code_objects_06819cad8d313d5ebd23a3e9112449f3;
static PyCodeObject *code_objects_c09ddde8c91f0e329f1f1b2287831fc4;
static PyCodeObject *code_objects_052b77e62b41749b3cc76af4e9ba7f08;
static PyCodeObject *code_objects_85ad921031e13ef5b54e528c0fa90430;
static PyCodeObject *code_objects_fdc2b6a75893d37f73a66d61846bcea1;
static PyCodeObject *code_objects_c7c4f17aab3ed56676c169a503c8b818;
static PyCodeObject *code_objects_b4d4911f9e3f8e257e796548b511f325;
static PyCodeObject *code_objects_833278f9d3703c271544021acceed3e9;
static PyCodeObject *code_objects_07b9c1525d2c727be91eff340b0148be;
static PyCodeObject *code_objects_3587793d4fd21823cfac75d0c6c0c7da;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_572b4909283a06da239dbbfb867c83e8); CHECK_OBJECT(module_filename_obj);
code_objects_5312667a14603b36193809e6cada0a3b = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_eae2245bc9951d2a5d528d736e9b87b2, mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple, NULL, 1, 0, 0);
code_objects_8ecb6bc55991e4960e366a0b8c68ae3d = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_28176e6cb0413bb8da49388189356441, mod_consts.const_tuple_d0894a74fab48acde7100066caa00cf9_tuple, NULL, 1, 0, 0);
code_objects_32cc2ab84c9dc44fa491558d7bc2d72d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_174bab205149e4c7eab2b99dffdbe5e3, mod_consts.const_str_digest_174bab205149e4c7eab2b99dffdbe5e3, NULL, NULL, 0, 0, 0);
code_objects_0e96f6849b2635daaf71d0beea40b413 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___and__, mod_consts.const_str_digest_89a8daf8f65468f468529c41f12f2cdb, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_08efec64874a9f0b332151cf3ef8741b = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_0dae73e4bf963e4de565afde3a91ca7a, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_8c28a2afcb5656c1702d27b87e8a7e36 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_9ef8e34a186ea4c0683a4395567742b5, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_b4837ed3a6c92932f7648c83cf295285 = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_cf0be73b4f59394db881f3ab6aec23c4, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_e6bd52d0429e7d178067a39ba583b87e = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_e11c29ddb6388127da0c22be1205c0ec, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_ad16e9c9847b543e1acc1b5913935999 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_c9e354c89d5413d215ba52851f793e22, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_5fedf213fe2b915f74827993849b46e4 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_4d2c843b82de3cff015465953aeb9ab2, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_f7b897ad0c142216a1e89e6c8d2ea6d3 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_3f9a8a7de1d510f3d38decdcce5198ff, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_ba0e8b3d462c2a3d9425a6574dbb2200 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_71d8cd8b030348096059233b4a172eed, mod_consts.const_tuple_str_plain_self_str_plain_retry_state_tuple, NULL, 2, 0, 0);
code_objects_9e814fa6a958b29461ae60f2bbc3be45 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_ea5c168f8c025dd4e59f1282ddac525a, mod_consts.const_tuple_str_plain_self_str_plain_max_attempt_number_tuple, NULL, 2, 0, 0);
code_objects_6a573e11b1062bb87dda58c514076c91 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_4a8128bb17a1d799b2e01853f94b4941, mod_consts.const_tuple_str_plain_self_str_plain_max_delay_tuple, NULL, 2, 0, 0);
code_objects_6eba34045caa5fd9b880996cf96b0580 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, const_str_plain___init__, mod_consts.const_str_digest_cb4f9560a8dd5b4f527eb04ba915c110, mod_consts.const_tuple_str_plain_self_str_plain_stops_tuple, NULL, 1, 0, 0);
code_objects_dfdeda6ed4044817a68afccefe813a01 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, const_str_plain___init__, mod_consts.const_str_digest_c7af545e274001f7a54a8ebd80979362, mod_consts.const_tuple_str_plain_self_str_plain_stops_tuple, NULL, 1, 0, 0);
code_objects_a215d312b7df9902d9ea549a03c4f210 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_7ae4e148eccf1e7e2c7055aeaf70ffcf, mod_consts.const_tuple_str_plain_self_str_plain_max_delay_tuple, NULL, 2, 0, 0);
code_objects_06819cad8d313d5ebd23a3e9112449f3 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_785eb7780dedb5b64f2cec4119c8468e, mod_consts.const_tuple_str_plain_self_str_plain_event_tuple, NULL, 2, 0, 0);
code_objects_c09ddde8c91f0e329f1f1b2287831fc4 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___or__, mod_consts.const_str_digest_aa642154ca26b5685c983122e970ed0c, mod_consts.const_tuple_str_plain_self_str_plain_other_tuple, NULL, 2, 0, 0);
code_objects_052b77e62b41749b3cc76af4e9ba7f08 = MAKE_CODE_OBJECT(module_filename_obj, 64, 0, mod_consts.const_str_plain__stop_never, mod_consts.const_str_plain__stop_never, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_85ad921031e13ef5b54e528c0fa90430 = MAKE_CODE_OBJECT(module_filename_obj, 84, 0, mod_consts.const_str_plain_stop_after_attempt, mod_consts.const_str_plain_stop_after_attempt, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fdc2b6a75893d37f73a66d61846bcea1 = MAKE_CODE_OBJECT(module_filename_obj, 94, 0, mod_consts.const_str_plain_stop_after_delay, mod_consts.const_str_plain_stop_after_delay, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_c7c4f17aab3ed56676c169a503c8b818 = MAKE_CODE_OBJECT(module_filename_obj, 54, 0, mod_consts.const_str_plain_stop_all, mod_consts.const_str_plain_stop_all, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b4d4911f9e3f8e257e796548b511f325 = MAKE_CODE_OBJECT(module_filename_obj, 44, 0, mod_consts.const_str_plain_stop_any, mod_consts.const_str_plain_stop_any, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_833278f9d3703c271544021acceed3e9 = MAKE_CODE_OBJECT(module_filename_obj, 27, 0, mod_consts.const_str_plain_stop_base, mod_consts.const_str_plain_stop_base, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_07b9c1525d2c727be91eff340b0148be = MAKE_CODE_OBJECT(module_filename_obj, 113, 0, mod_consts.const_str_plain_stop_before_delay, mod_consts.const_str_plain_stop_before_delay, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3587793d4fd21823cfac75d0c6c0c7da = MAKE_CODE_OBJECT(module_filename_obj, 74, 0, mod_consts.const_str_plain_stop_when_event_set, mod_consts.const_str_plain_stop_when_event_set, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__10___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__11___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__12___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__13___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__14___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__15___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__16___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__1___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__2___and__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__3___or__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__4___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__5___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__6___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__7___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__8___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__9___init__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_tenacity$stop$$$function__2___and__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__2___and__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__2___and__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__2___and__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__2___and__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__2___and__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__2___and__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0e96f6849b2635daaf71d0beea40b413, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__2___and__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__2___and__ = cache_frame_frame_tenacity$stop$$$function__2___and__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__2___and__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__2___and__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_tenacity$stop$stop_all(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_all);
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
frame_frame_tenacity$stop$$$function__2___and__->m_frame.f_lineno = 35;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__2___and__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__2___and__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__2___and__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__2___and__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__2___and__ == cache_frame_frame_tenacity$stop$$$function__2___and__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__2___and__);
    cache_frame_frame_tenacity$stop$$$function__2___and__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__2___and__);

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


static PyObject *impl_tenacity$stop$$$function__3___or__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_other = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__3___or__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__3___or__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__3___or__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__3___or__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__3___or__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__3___or__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c09ddde8c91f0e329f1f1b2287831fc4, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__3___or__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__3___or__ = cache_frame_frame_tenacity$stop$$$function__3___or__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__3___or__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__3___or__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_tenacity$stop$stop_any(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_any);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
CHECK_OBJECT(par_other);
tmp_args_element_value_2 = par_other;
frame_frame_tenacity$stop$$$function__3___or__->m_frame.f_lineno = 38;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__3___or__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__3___or__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__3___or__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__3___or__,
    type_description_1,
    par_self,
    par_other
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__3___or__ == cache_frame_frame_tenacity$stop$$$function__3___or__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__3___or__);
    cache_frame_frame_tenacity$stop$$$function__3___or__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__3___or__);

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


static PyObject *impl_tenacity$stop$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_stops = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_dfdeda6ed4044817a68afccefe813a01, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__4___init__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__4___init__ = cache_frame_frame_tenacity$stop$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__4___init__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_stops);
tmp_assattr_value_1 = par_stops;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_stops, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__4___init__,
    type_description_1,
    par_self,
    par_stops
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__4___init__ == cache_frame_frame_tenacity$stop$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__4___init__);
    cache_frame_frame_tenacity$stop$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__4___init__);

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
CHECK_OBJECT(par_stops);
Py_DECREF(par_stops);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_stops);
Py_DECREF(par_stops);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$stop$$$function__5___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_retry_state = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__5___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__5___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__5___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__5___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__5___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__5___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ad16e9c9847b543e1acc1b5913935999, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__5___call__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__5___call__ = cache_frame_frame_tenacity$stop$$$function__5___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__5___call__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__5___call__) == 2);

// Framed code:
{
PyObject *tmp_any_arg_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stops);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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
tmp_any_arg_1 = MAKE_GENERATOR_tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_return_value = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__5___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__5___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__5___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__5___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__5___call__ == cache_frame_frame_tenacity$stop$$$function__5___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__5___call__);
    cache_frame_frame_tenacity$stop$$$function__5___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__5___call__);

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
struct tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr_locals {
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

static PyObject *tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr_locals *generator_heap = (struct tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8ecb6bc55991e4960e366a0b8c68ae3d, module_tenacity$stop, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 51;
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
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_x);
tmp_called_value_1 = generator_heap->var_x;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retry_state);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 51;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 51;
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


generator_heap->exception_lineno = 51;
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

static PyObject *MAKE_GENERATOR_tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr_context,
        module_tenacity$stop,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_28176e6cb0413bb8da49388189356441,
#endif
        code_objects_8ecb6bc55991e4960e366a0b8c68ae3d,
        closure,
        2,
#if 1
        sizeof(struct tenacity$stop$$$function__5___call__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_tenacity$stop$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_stops = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__6___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__6___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__6___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__6___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__6___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__6___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6eba34045caa5fd9b880996cf96b0580, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__6___init__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__6___init__ = cache_frame_frame_tenacity$stop$$$function__6___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__6___init__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__6___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_stops);
tmp_assattr_value_1 = par_stops;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_stops, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__6___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__6___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__6___init__,
    type_description_1,
    par_self,
    par_stops
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__6___init__ == cache_frame_frame_tenacity$stop$$$function__6___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__6___init__);
    cache_frame_frame_tenacity$stop$$$function__6___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__6___init__);

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
CHECK_OBJECT(par_stops);
Py_DECREF(par_stops);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_stops);
Py_DECREF(par_stops);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$stop$$$function__7___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_CellObject *par_retry_state = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__7___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__7___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__7___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__7___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__7___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__7___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e6bd52d0429e7d178067a39ba583b87e, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__7___call__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__7___call__ = cache_frame_frame_tenacity$stop$$$function__7___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__7___call__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__7___call__) == 2);

// Framed code:
{
PyObject *tmp_all_arg_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_stops);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
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
tmp_all_arg_1 = MAKE_GENERATOR_tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_return_value = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__7___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__7___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__7___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__7___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__7___call__ == cache_frame_frame_tenacity$stop$$$function__7___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__7___call__);
    cache_frame_frame_tenacity$stop$$$function__7___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__7___call__);

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
struct tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr_locals {
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

static PyObject *tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr_locals *generator_heap = (struct tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5312667a14603b36193809e6cada0a3b, module_tenacity$stop, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 61;
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
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_x);
tmp_called_value_1 = generator_heap->var_x;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_retry_state);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 61;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
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


generator_heap->exception_lineno = 61;
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

static PyObject *MAKE_GENERATOR_tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr_context,
        module_tenacity$stop,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_eae2245bc9951d2a5d528d736e9b87b2,
#endif
        code_objects_5312667a14603b36193809e6cada0a3b,
        closure,
        2,
#if 1
        sizeof(struct tenacity$stop$$$function__7___call__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_tenacity$stop$$$function__9___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_event = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__9___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__9___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__9___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__9___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__9___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__9___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_06819cad8d313d5ebd23a3e9112449f3, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__9___init__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__9___init__ = cache_frame_frame_tenacity$stop$$$function__9___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__9___init__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__9___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_event);
tmp_assattr_value_1 = par_event;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_event, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__9___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__9___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__9___init__,
    type_description_1,
    par_self,
    par_event
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__9___init__ == cache_frame_frame_tenacity$stop$$$function__9___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__9___init__);
    cache_frame_frame_tenacity$stop$$$function__9___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__9___init__);

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
CHECK_OBJECT(par_event);
Py_DECREF(par_event);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_event);
Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$stop$$$function__10___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__10___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__10___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__10___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__10___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__10___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__10___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_ba0e8b3d462c2a3d9425a6574dbb2200, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__10___call__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__10___call__ = cache_frame_frame_tenacity$stop$$$function__10___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__10___call__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__10___call__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_event);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_tenacity$stop$$$function__10___call__->m_frame.f_lineno = 81;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_set);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__10___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__10___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__10___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__10___call__ == cache_frame_frame_tenacity$stop$$$function__10___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__10___call__);
    cache_frame_frame_tenacity$stop$$$function__10___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__10___call__);

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


static PyObject *impl_tenacity$stop$$$function__11___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_max_attempt_number = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__11___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__11___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__11___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__11___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__11___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__11___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_9e814fa6a958b29461ae60f2bbc3be45, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__11___init__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__11___init__ = cache_frame_frame_tenacity$stop$$$function__11___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__11___init__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__11___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_max_attempt_number);
tmp_assattr_value_1 = par_max_attempt_number;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_max_attempt_number, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__11___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__11___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__11___init__,
    type_description_1,
    par_self,
    par_max_attempt_number
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__11___init__ == cache_frame_frame_tenacity$stop$$$function__11___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__11___init__);
    cache_frame_frame_tenacity$stop$$$function__11___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__11___init__);

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
CHECK_OBJECT(par_max_attempt_number);
Py_DECREF(par_max_attempt_number);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_max_attempt_number);
Py_DECREF(par_max_attempt_number);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$stop$$$function__12___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__12___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__12___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__12___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__12___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__12___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__12___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_8c28a2afcb5656c1702d27b87e8a7e36, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__12___call__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__12___call__ = cache_frame_frame_tenacity$stop$$$function__12___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__12___call__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__12___call__) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_1 = par_retry_state;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_attempt_number);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_max_attempt_number);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 91;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__12___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__12___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__12___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__12___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__12___call__ == cache_frame_frame_tenacity$stop$$$function__12___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__12___call__);
    cache_frame_frame_tenacity$stop$$$function__12___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__12___call__);

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


static PyObject *impl_tenacity$stop$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_max_delay = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__13___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__13___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__13___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__13___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__13___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__13___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6a573e11b1062bb87dda58c514076c91, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__13___init__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__13___init__ = cache_frame_frame_tenacity$stop$$$function__13___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__13___init__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__13___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_tenacity$stop$_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_max_delay);
tmp_args_element_value_1 = par_max_delay;
frame_frame_tenacity$stop$$$function__13___init__->m_frame.f_lineno = 105;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_max_delay, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__13___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__13___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__13___init__,
    type_description_1,
    par_self,
    par_max_delay
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__13___init__ == cache_frame_frame_tenacity$stop$$$function__13___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__13___init__);
    cache_frame_frame_tenacity$stop$$$function__13___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__13___init__);

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
CHECK_OBJECT(par_max_delay);
Py_DECREF(par_max_delay);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_max_delay);
Py_DECREF(par_max_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$stop$$$function__14___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__14___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__14___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__14___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__14___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__14___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__14___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_b4837ed3a6c92932f7648c83cf295285, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__14___call__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__14___call__ = cache_frame_frame_tenacity$stop$$$function__14___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__14___call__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__14___call__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_1 = par_retry_state;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_seconds_since_start);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_055a98a96b1a3c148af4ea1e5fd2808f;
frame_frame_tenacity$stop$$$function__14___call__->m_frame.f_lineno = 109;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 109;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_2 = par_retry_state;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_seconds_since_start);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_max_delay);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__14___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__14___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__14___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__14___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__14___call__ == cache_frame_frame_tenacity$stop$$$function__14___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__14___call__);
    cache_frame_frame_tenacity$stop$$$function__14___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__14___call__);

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


static PyObject *impl_tenacity$stop$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_max_delay = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a215d312b7df9902d9ea549a03c4f210, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__15___init__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__15___init__ = cache_frame_frame_tenacity$stop$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__15___init__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__15___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_1;
tmp_called_instance_1 = module_var_accessor_tenacity$stop$_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_max_delay);
tmp_args_element_value_1 = par_max_delay;
frame_frame_tenacity$stop$$$function__15___init__->m_frame.f_lineno = 122;
tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_to_seconds, tmp_args_element_value_1);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_max_delay, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__15___init__,
    type_description_1,
    par_self,
    par_max_delay
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__15___init__ == cache_frame_frame_tenacity$stop$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__15___init__);
    cache_frame_frame_tenacity$stop$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__15___init__);

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
CHECK_OBJECT(par_max_delay);
Py_DECREF(par_max_delay);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_max_delay);
Py_DECREF(par_max_delay);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_tenacity$stop$$$function__16___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_retry_state = python_pars[1];
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$function__16___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_tenacity$stop$$$function__16___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_tenacity$stop$$$function__16___call__)) {
    Py_XDECREF(cache_frame_frame_tenacity$stop$$$function__16___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_tenacity$stop$$$function__16___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_tenacity$stop$$$function__16___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f7b897ad0c142216a1e89e6c8d2ea6d3, module_tenacity$stop, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_tenacity$stop$$$function__16___call__->m_type_description == NULL);
frame_frame_tenacity$stop$$$function__16___call__ = cache_frame_frame_tenacity$stop$$$function__16___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$function__16___call__);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$function__16___call__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_1 = par_retry_state;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_seconds_since_start);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oo";
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_055a98a96b1a3c148af4ea1e5fd2808f;
frame_frame_tenacity$stop$$$function__16___call__->m_frame.f_lineno = 126;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 126;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_retry_state);
tmp_expression_value_2 = par_retry_state;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_seconds_since_start);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_retry_state);
tmp_expression_value_3 = par_retry_state;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_upcoming_sleep);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_max_delay);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 129;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$function__16___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$function__16___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$function__16___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$function__16___call__,
    type_description_1,
    par_self,
    par_retry_state
);


// Release cached frame if used for exception.
if (frame_frame_tenacity$stop$$$function__16___call__ == cache_frame_frame_tenacity$stop$$$function__16___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_tenacity$stop$$$function__16___call__);
    cache_frame_frame_tenacity$stop$$$function__16___call__ = NULL;
}

assertFrameObject(frame_frame_tenacity$stop$$$function__16___call__);

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



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__10___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__10___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_71d8cd8b030348096059233b4a172eed,
#endif
        code_objects_ba0e8b3d462c2a3d9425a6574dbb2200,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__11___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__11___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea5c168f8c025dd4e59f1282ddac525a,
#endif
        code_objects_9e814fa6a958b29461ae60f2bbc3be45,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__12___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__12___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9ef8e34a186ea4c0683a4395567742b5,
#endif
        code_objects_8c28a2afcb5656c1702d27b87e8a7e36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__13___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__13___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4a8128bb17a1d799b2e01853f94b4941,
#endif
        code_objects_6a573e11b1062bb87dda58c514076c91,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__14___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__14___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cf0be73b4f59394db881f3ab6aec23c4,
#endif
        code_objects_b4837ed3a6c92932f7648c83cf295285,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__15___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7ae4e148eccf1e7e2c7055aeaf70ffcf,
#endif
        code_objects_a215d312b7df9902d9ea549a03c4f210,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__16___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__16___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f9a8a7de1d510f3d38decdcce5198ff,
#endif
        code_objects_f7b897ad0c142216a1e89e6c8d2ea6d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__1___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4d2c843b82de3cff015465953aeb9ab2,
#endif
        code_objects_5fedf213fe2b915f74827993849b46e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__2___and__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__2___and__,
        mod_consts.const_str_plain___and__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_89a8daf8f65468f468529c41f12f2cdb,
#endif
        code_objects_0e96f6849b2635daaf71d0beea40b413,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__3___or__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__3___or__,
        mod_consts.const_str_plain___or__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_aa642154ca26b5685c983122e970ed0c,
#endif
        code_objects_c09ddde8c91f0e329f1f1b2287831fc4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__4___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c7af545e274001f7a54a8ebd80979362,
#endif
        code_objects_dfdeda6ed4044817a68afccefe813a01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__5___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__5___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c9e354c89d5413d215ba52851f793e22,
#endif
        code_objects_ad16e9c9847b543e1acc1b5913935999,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__6___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb4f9560a8dd5b4f527eb04ba915c110,
#endif
        code_objects_6eba34045caa5fd9b880996cf96b0580,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__7___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__7___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e11c29ddb6388127da0c22be1205c0ec,
#endif
        code_objects_e6bd52d0429e7d178067a39ba583b87e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__8___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0dae73e4bf963e4de565afde3a91ca7a,
#endif
        code_objects_08efec64874a9f0b332151cf3ef8741b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tenacity$stop$$$function__9___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tenacity$stop$$$function__9___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_785eb7780dedb5b64f2cec4119c8468e,
#endif
        code_objects_06819cad8d313d5ebd23a3e9112449f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_tenacity$stop,
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

static function_impl_code const function_table_tenacity$stop[] = {
impl_tenacity$stop$$$function__2___and__,
impl_tenacity$stop$$$function__3___or__,
impl_tenacity$stop$$$function__4___init__,
impl_tenacity$stop$$$function__5___call__,
impl_tenacity$stop$$$function__6___init__,
impl_tenacity$stop$$$function__7___call__,
impl_tenacity$stop$$$function__9___init__,
impl_tenacity$stop$$$function__10___call__,
impl_tenacity$stop$$$function__11___init__,
impl_tenacity$stop$$$function__12___call__,
impl_tenacity$stop$$$function__13___init__,
impl_tenacity$stop$$$function__14___call__,
impl_tenacity$stop$$$function__15___init__,
impl_tenacity$stop$$$function__16___call__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_tenacity$stop);
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
        module_tenacity$stop,
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
        function_table_tenacity$stop,
        sizeof(function_table_tenacity$stop) / sizeof(function_impl_code)
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
static char const *module_full_name = "tenacity.stop";
#endif

// Internal entry point for module code.
PyObject *module_code_tenacity$stop(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("tenacity$stop");

    // Store the module for future use.
    module_tenacity$stop = module;

    moduledict_tenacity$stop = MODULE_DICT(module_tenacity$stop);

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
        PRINT_STRING("tenacity$stop: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("tenacity$stop: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("tenacity$stop: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "tenacity.stop" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittenacity$stop\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_tenacity$stop,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_tenacity$stop,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_tenacity$stop,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_tenacity$stop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_tenacity$stop,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_tenacity$stop);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_tenacity$stop);
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

        UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
PyObject *outline_6_var___class__ = NULL;
PyObject *outline_7_var___class__ = NULL;
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
struct Nuitka_FrameObject *frame_frame_tenacity$stop;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_tenacity$stop$$$class__1_stop_base_27 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__1_stop_base_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *locals_tenacity$stop$$$class__2_stop_any_44 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__2_stop_any_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *locals_tenacity$stop$$$class__3_stop_all_54 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__3_stop_all_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_tenacity$stop$$$class__4__stop_never_64 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__4__stop_never_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_tenacity$stop$$$class__5_stop_when_event_set_74 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_tenacity$stop$$$class__6_stop_after_attempt_84 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_tenacity$stop$$$class__7_stop_after_delay_94 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__7_stop_after_delay_8;
NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_tenacity$stop$$$class__8_stop_before_delay_113 = NULL;
struct Nuitka_FrameObject *frame_frame_tenacity$stop$$$class__8_stop_before_delay_9;
NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_tenacity$stop = MAKE_MODULE_FRAME(code_objects_32cc2ab84c9dc44fa491558d7bc2d72d, module_tenacity$stop);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop);
assert(Py_REFCNT(frame_frame_tenacity$stop) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_tenacity$stop$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_tenacity$stop$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_abc;
tmp_globals_arg_value_1 = (PyObject *)moduledict_tenacity$stop;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_tenacity$stop->m_frame.f_lineno = 16;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_abc, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_tenacity;
tmp_globals_arg_value_2 = (PyObject *)moduledict_tenacity$stop;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__utils_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_tenacity$stop->m_frame.f_lineno = 19;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_tenacity$stop,
        mod_consts.const_str_plain__utils,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__utils);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__utils, tmp_assign_source_6);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_tenacity$stop$abc(tstate);
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
tmp_assign_source_7 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_7, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_8 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
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
tmp_assign_source_10 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_10;
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
PyObject *tmp_assign_source_11;
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
tmp_tuple_element_2 = mod_consts.const_str_plain_stop_base;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 27;
tmp_assign_source_11 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_1;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_11;
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
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_3 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_1);
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
frame_frame_tenacity$stop->m_frame.f_lineno = 27;
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_12;
}
branch_end_1:;
{
PyObject *tmp_assign_source_13;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_tenacity$stop$$$class__1_stop_base_27 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_digest_889561de0f03fc3dcedab155d2551932;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_str_plain_stop_base;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
tmp_dictset_value = mod_consts.const_int_pos_27;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
frame_frame_tenacity$stop$$$class__1_stop_base_2 = MAKE_CLASS_FRAME(tstate, code_objects_833278f9d3703c271544021acceed3e9, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__1_stop_base_2);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__1_stop_base_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_8 = PyObject_GetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain_abc);

if (tmp_expression_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_8 = module_var_accessor_tenacity$stop$abc(tstate);
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
tmp_dict_value_1 = PyObject_GetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain_bool);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_args_element_value_1 = MAKE_FUNCTION_tenacity$stop$$$function__1___call__(tstate, tmp_annotations_1);

frame_frame_tenacity$stop$$$class__1_stop_base_2->m_frame.f_lineno = 30;
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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain___call__, tmp_dictset_value);
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
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_c99863725e2246e3375de554356b1711);

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__2___and__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain___and__, tmp_dictset_value);
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
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_269076202589ca6d2312a8bef48ac02e);

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__3___or__(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain___or__, tmp_dictset_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__1_stop_base_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__1_stop_base_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__1_stop_base_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__1_stop_base_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__1_stop_base_2);

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__1_stop_base_27, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_3;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_stop_base;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_tenacity$stop$$$class__1_stop_base_27;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 27;
tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto try_except_handler_3;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_14;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_13 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_13);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_DECREF(locals_tenacity$stop$$$class__1_stop_base_27);
locals_tenacity$stop$$$class__1_stop_base_27 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__1_stop_base_27);
locals_tenacity$stop$$$class__1_stop_base_27 = NULL;
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
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_base, tmp_assign_source_13);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_5;
tmp_expression_value_10 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_10 == NULL));
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Union);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_tuple_element_5 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_9);

exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_3;
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_5);
tmp_expression_value_12 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_12 == NULL));
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Callable);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto tuple_build_exception_2;
}
tmp_subscript_value_3 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_str_plain_RetryCallState_list_type_bool_tuple, "li");
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_3);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_expression_value_9);
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_StopBaseT, tmp_assign_source_15);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_16;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 44;

    goto try_except_handler_4;
}
tmp_assign_source_16 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_16, 0, tmp_tuple_element_6);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_17 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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
tmp_expression_value_13 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_19;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_15 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
tmp_tuple_element_7 = mod_consts.const_str_plain_stop_any;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 44;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_20;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_16 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_17;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_4, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_4;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 44;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_4;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_21;
}
branch_end_4:;
{
PyObject *tmp_assign_source_22;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_tenacity$stop$$$class__2_stop_any_44 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_digest_ac2257835dbf95af46211059312c3644;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_str_plain_stop_any;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_6;
}
tmp_dictset_value = mod_consts.const_int_pos_44;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_6;
}
frame_frame_tenacity$stop$$$class__2_stop_any_3 = MAKE_CLASS_FRAME(tstate, code_objects_b4d4911f9e3f8e257e796548b511f325, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__2_stop_any_3);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__2_stop_any_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_stops;
tmp_dict_value_2 = PyObject_GetItem(locals_tenacity$stop$$$class__2_stop_any_44, mod_consts.const_str_plain_stop_base);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_4 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__4___init__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_3 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_5 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = PyObject_GetItem(locals_tenacity$stop$$$class__2_stop_any_44, mod_consts.const_str_plain_bool);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__5___call__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__2_stop_any_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__2_stop_any_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__2_stop_any_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__2_stop_any_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__2_stop_any_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_6;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_stops_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

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


exception_lineno = 44;

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__2_stop_any_44, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_6;
}
branch_no_6:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain_stop_any;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_tenacity$stop$$$class__2_stop_any_44;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 44;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_6;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_23;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_22 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_DECREF(locals_tenacity$stop$$$class__2_stop_any_44);
locals_tenacity$stop$$$class__2_stop_any_44 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__2_stop_any_44);
locals_tenacity$stop$$$class__2_stop_any_44 = NULL;
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
exception_lineno = 44;
goto try_except_handler_4;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_any, tmp_assign_source_22);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto try_except_handler_7;
}
tmp_assign_source_24 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_25 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

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
tmp_expression_value_19 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_27;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

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
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_21;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_21 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
tmp_tuple_element_11 = mod_consts.const_str_plain_stop_all;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 54;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_28;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_22;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_22 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

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
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_23;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_5, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_7;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 54;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 54;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_29;
}
branch_end_7:;
{
PyObject *tmp_assign_source_30;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_tenacity$stop$$$class__3_stop_all_54 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_digest_edfbceacfd915969c0e40ea65e4d006c;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_stop_all;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_54;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_9;
}
frame_frame_tenacity$stop$$$class__3_stop_all_4 = MAKE_CLASS_FRAME(tstate, code_objects_c7c4f17aab3ed56676c169a503c8b818, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__3_stop_all_4);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__3_stop_all_4) == 2);

// Framed code:
{
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
tmp_dict_key_4 = mod_consts.const_str_plain_stops;
tmp_dict_value_4 = PyObject_GetItem(locals_tenacity$stop$$$class__3_stop_all_54, mod_consts.const_str_plain_stop_base);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_6 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__6___init__(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_dict_key_5 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_5 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_7 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = PyObject_GetItem(locals_tenacity$stop$$$class__3_stop_all_54, mod_consts.const_str_plain_bool);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__7___call__(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_2 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__3_stop_all_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__3_stop_all_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__3_stop_all_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__3_stop_all_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__3_stop_all_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_9;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_stops_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

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


exception_lineno = 54;

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__3_stop_all_54, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_9;
}
branch_no_9:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain_stop_all;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_tenacity$stop$$$class__3_stop_all_54;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 54;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto try_except_handler_9;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_31;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_30 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_30);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_tenacity$stop$$$class__3_stop_all_54);
locals_tenacity$stop$$$class__3_stop_all_54 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__3_stop_all_54);
locals_tenacity$stop$$$class__3_stop_all_54 = NULL;
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
exception_lineno = 54;
goto try_except_handler_7;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_all, tmp_assign_source_30);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_tuple_element_14;
tmp_tuple_element_14 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto try_except_handler_10;
}
tmp_assign_source_32 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_14);
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_32;
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_33 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_34;
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_6;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

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
tmp_expression_value_25 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_6 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_6, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_35;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

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
PyObject *tmp_assign_source_36;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_15;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
tmp_tuple_element_15 = mod_consts.const_str_plain__stop_never;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_15 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 64;
tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_36;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

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
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_6, tmp_default_value_4);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_16);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_10;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 64;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 64;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_37;
}
branch_end_10:;
{
PyObject *tmp_assign_source_38;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_tenacity$stop$$$class__4__stop_never_64 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__4__stop_never_64, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_digest_d08b05a01487af835ec18003515306b6;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__4__stop_never_64, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain__stop_never;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__4__stop_never_64, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_64;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__4__stop_never_64, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
frame_frame_tenacity$stop$$$class__4__stop_never_5 = MAKE_CLASS_FRAME(tstate, code_objects_052b77e62b41749b3cc76af4e9ba7f08, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__4__stop_never_5);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__4__stop_never_5) == 2);

// Framed code:
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
tmp_dict_value_6 = PyObject_GetItem(locals_tenacity$stop$$$class__4__stop_never_64, mod_consts.const_str_plain_bool);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__8___call__(tstate, tmp_annotations_8);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__4__stop_never_64, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__4__stop_never_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__4__stop_never_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__4__stop_never_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__4__stop_never_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__4__stop_never_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_12;
skip_nested_handling_4:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__4__stop_never_64, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

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


exception_lineno = 64;

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__4__stop_never_64, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
branch_no_12:;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_called_value_9;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_17;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_9 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_17 = mod_consts.const_str_plain__stop_never;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_17 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
tmp_tuple_element_17 = locals_tenacity$stop$$$class__4__stop_never_64;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_17);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 64;
tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_12;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_39;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_38 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_38);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_tenacity$stop$$$class__4__stop_never_64);
locals_tenacity$stop$$$class__4__stop_never_64 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__4__stop_never_64);
locals_tenacity$stop$$$class__4__stop_never_64 = NULL;
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
exception_lineno = 64;
goto try_except_handler_10;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain__stop_never, tmp_assign_source_38);
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
PyObject *tmp_assign_source_40;
PyObject *tmp_called_value_10;
tmp_called_value_10 = module_var_accessor_tenacity$stop$_stop_never(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__stop_never);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto frame_exception_exit_1;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 71;
tmp_assign_source_40 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_never, tmp_assign_source_40);
}
{
PyObject *tmp_outline_return_value_5;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_18;
tmp_tuple_element_18 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto try_except_handler_13;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_18);
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


exception_lineno = 74;

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
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_5__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

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
tmp_expression_value_31 = tmp_class_container$class_creation_5__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_7, 0);
if (tmp_type_arg_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_13;
}
tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
CHECK_OBJECT(tmp_type_arg_9);
Py_DECREF(tmp_type_arg_9);
if (tmp_metaclass_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

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


exception_lineno = 74;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__metaclass == NULL);
tmp_class_container$class_creation_5__metaclass = tmp_assign_source_44;
}
{
bool tmp_condition_result_18;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_5__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

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
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_value_9;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_33 = tmp_class_container$class_creation_5__metaclass;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_13;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_stop_when_event_set;
tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_9 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 74;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_9, tmp_kwargs_value_9);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_value_9);
Py_DECREF(tmp_args_value_9);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_13;
}
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_45;
}
{
bool tmp_condition_result_19;
PyObject *tmp_operand_value_5;
PyObject *tmp_expression_value_34;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_expression_value_34 = tmp_class_container$class_creation_5__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

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
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_35;
PyObject *tmp_name_value_7;
PyObject *tmp_default_value_5;
tmp_mod_expr_left_5 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_5__metaclass;
tmp_name_value_7 = const_str_plain___name__;
tmp_default_value_5 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_7, tmp_default_value_5);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_13;
}
tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_36;
PyObject *tmp_type_arg_10;
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_type_arg_10 = tmp_class_container$class_creation_5__prepared;
tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_10);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_mod_expr_right_5);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_right_5);
Py_DECREF(tmp_mod_expr_right_5);
if (tmp_make_exception_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_13;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 74;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
CHECK_OBJECT(tmp_make_exception_arg_5);
Py_DECREF(tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 74;
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
locals_tenacity$stop$$$class__5_stop_when_event_set_74 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_digest_945c65a7b950de74562236f4d2b91776;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_str_plain_stop_when_event_set;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_15;
}
tmp_dictset_value = mod_consts.const_int_pos_74;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_15;
}
frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6 = MAKE_CLASS_FRAME(tstate, code_objects_3587793d4fd21823cfac75d0c6c0c7da, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6) == 2);

// Framed code:
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_c76fe3589cad5662ec98d9b7973ee46c);

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__9___init__(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_dict_key_7 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_7 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_10 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_dict_value_7 = PyObject_GetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, mod_consts.const_str_plain_bool);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_6;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__10___call__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__5_stop_when_event_set_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_15;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_event_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

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


exception_lineno = 74;

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__5_stop_when_event_set_74, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

    goto try_except_handler_15;
}
branch_no_15:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_10;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_5__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_5__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain_stop_when_event_set;
tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_5__bases;
PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_tenacity$stop$$$class__5_stop_when_event_set_74;
PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_10 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 74;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_10, tmp_kwargs_value_10);
CHECK_OBJECT(tmp_args_value_10);
Py_DECREF(tmp_args_value_10);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 74;

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
Py_DECREF(locals_tenacity$stop$$$class__5_stop_when_event_set_74);
locals_tenacity$stop$$$class__5_stop_when_event_set_74 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__5_stop_when_event_set_74);
locals_tenacity$stop$$$class__5_stop_when_event_set_74 = NULL;
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
exception_lineno = 74;
goto try_except_handler_13;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_when_event_set, tmp_assign_source_47);
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
PyObject *tmp_tuple_element_22;
tmp_tuple_element_22 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto try_except_handler_16;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_22);
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


exception_lineno = 84;

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
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_8;
PyObject *tmp_bases_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_container$class_creation_6__bases);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

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
tmp_expression_value_37 = tmp_class_container$class_creation_6__bases;
tmp_subscript_value_8 = const_int_0;
tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_8, 0);
if (tmp_type_arg_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_16;
}
tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
CHECK_OBJECT(tmp_type_arg_11);
Py_DECREF(tmp_type_arg_11);
if (tmp_metaclass_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

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


exception_lineno = 84;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__metaclass == NULL);
tmp_class_container$class_creation_6__metaclass = tmp_assign_source_52;
}
{
bool tmp_condition_result_22;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_6__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

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
PyObject *tmp_called_value_13;
PyObject *tmp_expression_value_39;
PyObject *tmp_args_value_11;
PyObject *tmp_tuple_element_23;
PyObject *tmp_kwargs_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_39 = tmp_class_container$class_creation_6__metaclass;
tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_16;
}
tmp_tuple_element_23 = mod_consts.const_str_plain_stop_after_attempt;
tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_23 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_11 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 84;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_11, tmp_kwargs_value_11);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_value_11);
Py_DECREF(tmp_args_value_11);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_16;
}
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_53;
}
{
bool tmp_condition_result_23;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_40;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_expression_value_40 = tmp_class_container$class_creation_6__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

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
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_41;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_6;
tmp_mod_expr_left_6 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_expression_value_41 = tmp_class_container$class_creation_6__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_6 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_24 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_8, tmp_default_value_6);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_16;
}
tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_42;
PyObject *tmp_type_arg_12;
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_24);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_type_arg_12 = tmp_class_container$class_creation_6__prepared;
tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_12);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_24);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_mod_expr_right_6);
goto try_except_handler_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
CHECK_OBJECT(tmp_mod_expr_right_6);
Py_DECREF(tmp_mod_expr_right_6);
if (tmp_make_exception_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_16;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 84;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_6);
CHECK_OBJECT(tmp_make_exception_arg_6);
Py_DECREF(tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 84;
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
locals_tenacity$stop$$$class__6_stop_after_attempt_84 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_digest_ecb47a08f47684b3db01b62824e358b6;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_str_plain_stop_after_attempt;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_18;
}
tmp_dictset_value = mod_consts.const_int_pos_84;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_18;
}
frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7 = MAKE_CLASS_FRAME(tstate, code_objects_85ad921031e13ef5b54e528c0fa90430, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7) == 2);

// Framed code:
{
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
tmp_dict_key_8 = mod_consts.const_str_plain_max_attempt_number;
tmp_dict_value_8 = PyObject_GetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, const_str_plain_int);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = (PyObject *)&PyLong_Type;
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_annotations_11 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__11___init__(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
tmp_dict_key_9 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_9 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_12 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_dict_value_9 = PyObject_GetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, mod_consts.const_str_plain_bool);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_7;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__12___call__(tstate, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__6_stop_after_attempt_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_18;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_max_attempt_number_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

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


exception_lineno = 84;

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__6_stop_after_attempt_84, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

    goto try_except_handler_18;
}
branch_no_18:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_14;
PyObject *tmp_args_value_12;
PyObject *tmp_tuple_element_25;
PyObject *tmp_kwargs_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_6__metaclass);
tmp_called_value_14 = tmp_class_container$class_creation_6__metaclass;
tmp_tuple_element_25 = mod_consts.const_str_plain_stop_after_attempt;
tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_6__bases);
tmp_tuple_element_25 = tmp_class_container$class_creation_6__bases;
PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_25);
tmp_tuple_element_25 = locals_tenacity$stop$$$class__6_stop_after_attempt_84;
PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_25);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_12 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 84;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_12, tmp_kwargs_value_12);
CHECK_OBJECT(tmp_args_value_12);
Py_DECREF(tmp_args_value_12);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;

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
Py_DECREF(locals_tenacity$stop$$$class__6_stop_after_attempt_84);
locals_tenacity$stop$$$class__6_stop_after_attempt_84 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__6_stop_after_attempt_84);
locals_tenacity$stop$$$class__6_stop_after_attempt_84 = NULL;
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
exception_lineno = 84;
goto try_except_handler_16;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_after_attempt, tmp_assign_source_55);
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
PyObject *tmp_tuple_element_26;
tmp_tuple_element_26 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto try_except_handler_19;
}
tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_26);
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


exception_lineno = 94;

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
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_container$class_creation_7__bases);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

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
tmp_expression_value_43 = tmp_class_container$class_creation_7__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_9, 0);
if (tmp_type_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_19;
}
tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
CHECK_OBJECT(tmp_type_arg_13);
Py_DECREF(tmp_type_arg_13);
if (tmp_metaclass_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

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


exception_lineno = 94;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__metaclass == NULL);
tmp_class_container$class_creation_7__metaclass = tmp_assign_source_60;
}
{
bool tmp_condition_result_26;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_44 = tmp_class_container$class_creation_7__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

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
PyObject *tmp_called_value_15;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_value_13;
PyObject *tmp_tuple_element_27;
PyObject *tmp_kwargs_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_45 = tmp_class_container$class_creation_7__metaclass;
tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_19;
}
tmp_tuple_element_27 = mod_consts.const_str_plain_stop_after_delay;
tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_27 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_13 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 94;
tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_13, tmp_kwargs_value_13);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_value_13);
Py_DECREF(tmp_args_value_13);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_19;
}
assert(tmp_class_container$class_creation_7__prepared == NULL);
tmp_class_container$class_creation_7__prepared = tmp_assign_source_61;
}
{
bool tmp_condition_result_27;
PyObject *tmp_operand_value_7;
PyObject *tmp_expression_value_46;
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_expression_value_46 = tmp_class_container$class_creation_7__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

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
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_47;
PyObject *tmp_name_value_9;
PyObject *tmp_default_value_7;
tmp_mod_expr_left_7 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_expression_value_47 = tmp_class_container$class_creation_7__metaclass;
tmp_name_value_9 = const_str_plain___name__;
tmp_default_value_7 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_9, tmp_default_value_7);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_19;
}
tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_48;
PyObject *tmp_type_arg_14;
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_28);
CHECK_OBJECT(tmp_class_container$class_creation_7__prepared);
tmp_type_arg_14 = tmp_class_container$class_creation_7__prepared;
tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_14);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_48);
Py_DECREF(tmp_expression_value_48);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_28);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_7);
goto try_except_handler_19;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
CHECK_OBJECT(tmp_mod_expr_right_7);
Py_DECREF(tmp_mod_expr_right_7);
if (tmp_make_exception_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_19;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 94;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_7);
CHECK_OBJECT(tmp_make_exception_arg_7);
Py_DECREF(tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 94;
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
locals_tenacity$stop$$$class__7_stop_after_delay_94 = tmp_set_locals_7;
Py_INCREF(tmp_set_locals_7);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_digest_9943c83df2800fade174ecead4937cbe;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_str_plain_stop_after_delay;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_21;
}
tmp_dictset_value = mod_consts.const_int_pos_94;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_21;
}
frame_frame_tenacity$stop$$$class__7_stop_after_delay_8 = MAKE_CLASS_FRAME(tstate, code_objects_fdc2b6a75893d37f73a66d61846bcea1, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__7_stop_after_delay_8);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__7_stop_after_delay_8) == 2);

// Framed code:
{
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_expression_value_49;
tmp_dict_key_10 = mod_consts.const_str_plain_max_delay;
tmp_expression_value_49 = PyObject_GetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, mod_consts.const_str_plain__utils);

if (tmp_expression_value_49 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_49 = module_var_accessor_tenacity$stop$_utils(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
        Py_INCREF(tmp_expression_value_49);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
tmp_annotations_13 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__13___init__(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_2 = "o";
    goto frame_exception_exit_8;
}
}
{
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
tmp_dict_key_11 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_11 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_14 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_dict_value_11 = PyObject_GetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, mod_consts.const_str_plain_bool);

if (tmp_dict_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_8;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__14___call__(tstate, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__7_stop_after_delay_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__7_stop_after_delay_8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__7_stop_after_delay_8, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__7_stop_after_delay_8,
    type_description_2,
    outline_6_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__7_stop_after_delay_8);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_7;
frame_no_exception_7:;
goto skip_nested_handling_7;
nested_frame_exit_7:;

goto try_except_handler_21;
skip_nested_handling_7:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_max_delay_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

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


exception_lineno = 94;

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__7_stop_after_delay_94, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_21;
}
branch_no_21:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_14;
PyObject *tmp_tuple_element_29;
PyObject *tmp_kwargs_value_14;
CHECK_OBJECT(tmp_class_container$class_creation_7__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_7__metaclass;
tmp_tuple_element_29 = mod_consts.const_str_plain_stop_after_delay;
tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__bases);
tmp_tuple_element_29 = tmp_class_container$class_creation_7__bases;
PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_29);
tmp_tuple_element_29 = locals_tenacity$stop$$$class__7_stop_after_delay_94;
PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_29);
CHECK_OBJECT(tmp_class_container$class_creation_7__class_decl_dict);
tmp_kwargs_value_14 = tmp_class_container$class_creation_7__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 94;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_14, tmp_kwargs_value_14);
CHECK_OBJECT(tmp_args_value_14);
Py_DECREF(tmp_args_value_14);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

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
Py_DECREF(locals_tenacity$stop$$$class__7_stop_after_delay_94);
locals_tenacity$stop$$$class__7_stop_after_delay_94 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__7_stop_after_delay_94);
locals_tenacity$stop$$$class__7_stop_after_delay_94 = NULL;
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
exception_lineno = 94;
goto try_except_handler_19;
outline_result_14:;
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_after_delay, tmp_assign_source_63);
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
PyObject *tmp_tuple_element_30;
tmp_tuple_element_30 = module_var_accessor_tenacity$stop$stop_base(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stop_base);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto try_except_handler_22;
}
tmp_assign_source_65 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_65, 0, tmp_tuple_element_30);
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


exception_lineno = 113;

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
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_10;
PyObject *tmp_bases_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_container$class_creation_8__bases);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

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
tmp_expression_value_50 = tmp_class_container$class_creation_8__bases;
tmp_subscript_value_10 = const_int_0;
tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_50, tmp_subscript_value_10, 0);
if (tmp_type_arg_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_22;
}
tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
CHECK_OBJECT(tmp_type_arg_15);
Py_DECREF(tmp_type_arg_15);
if (tmp_metaclass_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

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


exception_lineno = 113;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__metaclass == NULL);
tmp_class_container$class_creation_8__metaclass = tmp_assign_source_68;
}
{
bool tmp_condition_result_30;
PyObject *tmp_expression_value_51;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_51 = tmp_class_container$class_creation_8__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_51, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

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
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_52;
PyObject *tmp_args_value_15;
PyObject *tmp_tuple_element_31;
PyObject *tmp_kwargs_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_52 = tmp_class_container$class_creation_8__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_22;
}
tmp_tuple_element_31 = mod_consts.const_str_plain_stop_before_delay;
tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_31 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_31);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_15 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 113;
tmp_assign_source_69 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_15, tmp_kwargs_value_15);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_15);
Py_DECREF(tmp_args_value_15);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_22;
}
assert(tmp_class_container$class_creation_8__prepared == NULL);
tmp_class_container$class_creation_8__prepared = tmp_assign_source_69;
}
{
bool tmp_condition_result_31;
PyObject *tmp_operand_value_8;
PyObject *tmp_expression_value_53;
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_expression_value_53 = tmp_class_container$class_creation_8__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_53, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

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
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_54;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_8;
tmp_mod_expr_left_8 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_expression_value_54 = tmp_class_container$class_creation_8__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_8 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_32 = BUILTIN_GETATTR(tstate, tmp_expression_value_54, tmp_name_value_10, tmp_default_value_8);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_22;
}
tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_55;
PyObject *tmp_type_arg_16;
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_32);
CHECK_OBJECT(tmp_class_container$class_creation_8__prepared);
tmp_type_arg_16 = tmp_class_container$class_creation_8__prepared;
tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_16);
assert(!(tmp_expression_value_55 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_55);
Py_DECREF(tmp_expression_value_55);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_32);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_mod_expr_right_8);
goto try_except_handler_22;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_make_exception_arg_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
CHECK_OBJECT(tmp_mod_expr_right_8);
Py_DECREF(tmp_mod_expr_right_8);
if (tmp_make_exception_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_22;
}
frame_frame_tenacity$stop->m_frame.f_lineno = 113;
tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_8);
CHECK_OBJECT(tmp_make_exception_arg_8);
Py_DECREF(tmp_make_exception_arg_8);
assert(!(tmp_raise_type_8 == NULL));
exception_state.exception_value = tmp_raise_type_8;
exception_lineno = 113;
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
locals_tenacity$stop$$$class__8_stop_before_delay_113 = tmp_set_locals_8;
Py_INCREF(tmp_set_locals_8);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_02ccae128dbc300ca636594bd79ca47e;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_digest_f47b93a08aec92f5e0b970ceea9e03f4;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_str_plain_stop_before_delay;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_24;
}
tmp_dictset_value = mod_consts.const_int_pos_113;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_24;
}
frame_frame_tenacity$stop$$$class__8_stop_before_delay_9 = MAKE_CLASS_FRAME(tstate, code_objects_07b9c1525d2c727be91eff340b0148be, module_tenacity$stop, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_tenacity$stop$$$class__8_stop_before_delay_9);
assert(Py_REFCNT(frame_frame_tenacity$stop$$$class__8_stop_before_delay_9) == 2);

// Framed code:
{
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
PyObject *tmp_expression_value_56;
tmp_dict_key_12 = mod_consts.const_str_plain_max_delay;
tmp_expression_value_56 = PyObject_GetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, mod_consts.const_str_plain__utils);

if (tmp_expression_value_56 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_56 = module_var_accessor_tenacity$stop$_utils(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
        Py_INCREF(tmp_expression_value_56);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts.const_str_plain_time_unit_type);
CHECK_OBJECT(tmp_expression_value_56);
Py_DECREF(tmp_expression_value_56);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
tmp_annotations_15 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_dict_value_12 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__15___init__(tstate, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_2 = "o";
    goto frame_exception_exit_9;
}
}
{
PyObject *tmp_annotations_16;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
tmp_dict_key_13 = mod_consts.const_str_plain_retry_state;
tmp_dict_value_13 = mod_consts.const_str_plain_RetryCallState;
tmp_annotations_16 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_dict_value_13 = PyObject_GetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, mod_consts.const_str_plain_bool);

if (tmp_dict_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_13 = (PyObject *)&PyBool_Type;
        Py_INCREF(tmp_dict_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_9;
    }
}

tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_tenacity$stop$$$function__16___call__(tstate, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop$$$class__8_stop_before_delay_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop$$$class__8_stop_before_delay_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop$$$class__8_stop_before_delay_9, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_tenacity$stop$$$class__8_stop_before_delay_9,
    type_description_2,
    outline_7_var___class__
);



assertFrameObject(frame_frame_tenacity$stop$$$class__8_stop_before_delay_9);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_8;
frame_no_exception_8:;
goto skip_nested_handling_8;
nested_frame_exit_8:;

goto try_except_handler_24;
skip_nested_handling_8:;
tmp_dictset_value = mod_consts.const_tuple_str_plain_max_delay_tuple;
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

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


exception_lineno = 113;

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
tmp_res = PyObject_SetItem(locals_tenacity$stop$$$class__8_stop_before_delay_113, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_24;
}
branch_no_24:;
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_18;
PyObject *tmp_args_value_16;
PyObject *tmp_tuple_element_33;
PyObject *tmp_kwargs_value_16;
CHECK_OBJECT(tmp_class_container$class_creation_8__metaclass);
tmp_called_value_18 = tmp_class_container$class_creation_8__metaclass;
tmp_tuple_element_33 = mod_consts.const_str_plain_stop_before_delay;
tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__bases);
tmp_tuple_element_33 = tmp_class_container$class_creation_8__bases;
PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_33);
tmp_tuple_element_33 = locals_tenacity$stop$$$class__8_stop_before_delay_113;
PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_33);
CHECK_OBJECT(tmp_class_container$class_creation_8__class_decl_dict);
tmp_kwargs_value_16 = tmp_class_container$class_creation_8__class_decl_dict;
frame_frame_tenacity$stop->m_frame.f_lineno = 113;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_16, tmp_kwargs_value_16);
CHECK_OBJECT(tmp_args_value_16);
Py_DECREF(tmp_args_value_16);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

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
Py_DECREF(locals_tenacity$stop$$$class__8_stop_before_delay_113);
locals_tenacity$stop$$$class__8_stop_before_delay_113 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_tenacity$stop$$$class__8_stop_before_delay_113);
locals_tenacity$stop$$$class__8_stop_before_delay_113 = NULL;
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
exception_lineno = 113;
goto try_except_handler_22;
outline_result_16:;
UPDATE_STRING_DICT1(moduledict_tenacity$stop, (Nuitka_StringObject *)mod_consts.const_str_plain_stop_before_delay, tmp_assign_source_71);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_9;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_tenacity$stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_tenacity$stop->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_tenacity$stop, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_tenacity$stop);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_9:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("tenacity$stop", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "tenacity.stop" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_tenacity$stop);
    return module_tenacity$stop;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_tenacity$stop, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("tenacity$stop", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'trio$_timeouts'
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



/* The "module_trio$_timeouts" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_timeouts;
PyDictObject *moduledict_trio$_timeouts;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_trio;
PyObject *const_str_plain_CancelScope;
PyObject *const_tuple_str_plain_deadline_str_plain_shield_tuple;
PyObject *const_str_digest_2984fac9abcb5e10b97b2f21b586e683;
PyObject *const_str_digest_9d0d7af99bdbcc6dd8b9e1d5e11bc270;
PyObject *const_str_plain_math;
PyObject *const_str_plain_isnan;
PyObject *const_str_digest_d4abb2c9a7063c58e206c1158ad5a13c;
PyObject *const_tuple_str_plain_shield_str_plain_relative_deadline_tuple;
PyObject *const_str_digest_dc4c6a0ce866831d2641c826c016d7d6;
PyObject *const_str_digest_1ca2d4082d3b0b55949e06e3957e217c;
PyObject *const_str_plain_lowlevel;
PyObject *const_str_plain_wait_task_rescheduled;
PyObject *const_str_angle_lambda;
PyObject *const_str_digest_663157ddcd380ef4a9c4353fea0b2adc;
PyObject *const_str_digest_ce69efbe0bb99d79fbf54a7a21499230;
PyObject *const_str_plain_sleep_forever;
PyObject *const_str_plain_Abort;
PyObject *const_str_plain_SUCCEEDED;
PyObject *const_str_digest_a1e40cfdd690f56514384d72dc3e63ef;
PyObject *const_str_plain_move_on_at;
PyObject *const_str_plain_deadline;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_str_plain_sleep_until;
PyObject *const_str_digest_19b6faa6e4173ea5f8ebabb9a59d66bc;
PyObject *const_str_plain_seconds;
PyObject *const_str_plain_checkpoint;
PyObject *const_str_plain_current_time;
PyObject *const_str_plain_sleep;
PyObject *const_str_digest_e07e7bb8a857848c7a88cd84b94d7083;
PyObject *const_str_plain_shield;
PyObject *const_tuple_str_plain_shield_tuple;
PyObject *const_str_plain_cancelled_caught;
PyObject *const_str_plain_TooSlowError;
PyObject *const_str_plain_fail_at;
PyObject *const_str_digest_dda5b8e3118c7143c9d97c717c1998b3;
PyObject *const_str_plain_move_on_after;
PyObject *const_str_plain_fail_after;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_contextlib;
PyObject *const_tuple_str_plain_contextmanager_tuple;
PyObject *const_str_plain_contextmanager;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_NoReturn;
PyObject *const_dict_48c1d6f3b0b467fd05c9d94e06068e39;
PyObject *const_dict_dbc6406b3e9332bcfc3f394c02787866;
PyObject *const_dict_04a53dbbb86ab8a2ce2accc0266e323c;
PyObject *const_dict_a70b9bd9ff1b4e80a4864e34af82b0a8;
PyObject *const_dict_32b4a33ef73c2e7e709e495868dde582;
PyObject *const_dict_96e33e64502d93203969ec1e25ab967e;
PyObject *const_tuple_type_Exception_tuple;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_feb7df2057606cac751c693709a0284e;
PyObject *const_str_digest_3115ef9cc61017eb0a15ef3ab55a339c;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_114;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_dict_3add8c5dcc77fbc3388c9bb75fb91a56;
PyObject *const_dict_735c1f4ab455b28d261f88cc9e51f1ae;
PyObject *const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0;
PyObject *const_str_plain_modules;
PyObject *const_str_plain_c;
PyObject *const_str_plain_Signature;
PyObject *const_str_plain_from_callable;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_plain_return_annotation_tuple;
PyObject *const_str_plain___signature__;
PyObject *const_str_digest_e656d5c74c8e8261054f6d73e546ae4c;
PyObject *const_tuple_str_underscore_tuple;
PyObject *const_str_digest_92c1b67329aae35e200919117337b5bf;
PyObject *const_tuple_str_plain_seconds_str_plain_shield_str_plain_scope_tuple;
PyObject *const_tuple_str_plain_deadline_str_plain_shield_str_plain_scope_tuple;
PyObject *const_tuple_str_plain_seconds_str_plain_shield_tuple;
PyObject *const_tuple_str_plain_seconds_tuple;
PyObject *const_tuple_str_plain_deadline_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[83];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._timeouts"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_trio);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_2984fac9abcb5e10b97b2f21b586e683);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d0d7af99bdbcc6dd8b9e1d5e11bc270);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_math);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_isnan);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4abb2c9a7063c58e206c1158ad5a13c);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_str_plain_relative_deadline_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc4c6a0ce866831d2641c826c016d7d6);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_1ca2d4082d3b0b55949e06e3957e217c);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_task_rescheduled);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_663157ddcd380ef4a9c4353fea0b2adc);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce69efbe0bb99d79fbf54a7a21499230);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_forever);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_Abort);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_SUCCEEDED);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_a1e40cfdd690f56514384d72dc3e63ef);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_at);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_deadline);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_until);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_19b6faa6e4173ea5f8ebabb9a59d66bc);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_seconds);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_time);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_sleep);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_e07e7bb8a857848c7a88cd84b94d7083);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_shield);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_caught);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_TooSlowError);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail_at);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_dda5b8e3118c7143c9d97c717c1998b3);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_48c1d6f3b0b467fd05c9d94e06068e39);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_dbc6406b3e9332bcfc3f394c02787866);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_dict_04a53dbbb86ab8a2ce2accc0266e323c);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_dict_a70b9bd9ff1b4e80a4864e34af82b0a8);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_32b4a33ef73c2e7e709e495868dde582);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_dict_96e33e64502d93203969ec1e25ab967e);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_feb7df2057606cac751c693709a0284e);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_3115ef9cc61017eb0a15ef3ab55a339c);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_114);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_3add8c5dcc77fbc3388c9bb75fb91a56);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_dict_735c1f4ab455b28d261f88cc9e51f1ae);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_modules);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_c);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signature);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_callable);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_return_annotation_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain___signature__);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_e656d5c74c8e8261054f6d73e546ae4c);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_92c1b67329aae35e200919117337b5bf);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_str_plain_shield_str_plain_scope_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_str_plain_scope_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_str_plain_shield_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_tuple);
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
void checkModuleConstants_trio$_timeouts(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_trio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_trio);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_CancelScope));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CancelScope);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_2984fac9abcb5e10b97b2f21b586e683));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2984fac9abcb5e10b97b2f21b586e683);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d0d7af99bdbcc6dd8b9e1d5e11bc270));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d0d7af99bdbcc6dd8b9e1d5e11bc270);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_math));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_math);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_isnan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isnan);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4abb2c9a7063c58e206c1158ad5a13c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4abb2c9a7063c58e206c1158ad5a13c);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_str_plain_relative_deadline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shield_str_plain_relative_deadline_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc4c6a0ce866831d2641c826c016d7d6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc4c6a0ce866831d2641c826c016d7d6);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_1ca2d4082d3b0b55949e06e3957e217c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1ca2d4082d3b0b55949e06e3957e217c);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_lowlevel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lowlevel);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_task_rescheduled));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_task_rescheduled);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_663157ddcd380ef4a9c4353fea0b2adc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_663157ddcd380ef4a9c4353fea0b2adc);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce69efbe0bb99d79fbf54a7a21499230));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce69efbe0bb99d79fbf54a7a21499230);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_forever));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep_forever);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_Abort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Abort);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_SUCCEEDED));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SUCCEEDED);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_a1e40cfdd690f56514384d72dc3e63ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a1e40cfdd690f56514384d72dc3e63ef);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move_on_at);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_deadline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deadline);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep_until));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep_until);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_19b6faa6e4173ea5f8ebabb9a59d66bc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_19b6faa6e4173ea5f8ebabb9a59d66bc);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_seconds));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seconds);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_checkpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_checkpoint);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_time);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_sleep));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sleep);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_e07e7bb8a857848c7a88cd84b94d7083));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e07e7bb8a857848c7a88cd84b94d7083);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_shield));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_shield);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_shield_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancelled_caught));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancelled_caught);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_TooSlowError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TooSlowError);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail_at));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail_at);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_dda5b8e3118c7143c9d97c717c1998b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dda5b8e3118c7143c9d97c717c1998b3);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_move_on_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_move_on_after);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_fail_after));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fail_after);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_contextmanager_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_contextmanager_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextmanager);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoReturn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoReturn);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_48c1d6f3b0b467fd05c9d94e06068e39));
CHECK_OBJECT_DEEP(mod_consts.const_dict_48c1d6f3b0b467fd05c9d94e06068e39);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_dbc6406b3e9332bcfc3f394c02787866));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dbc6406b3e9332bcfc3f394c02787866);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_dict_04a53dbbb86ab8a2ce2accc0266e323c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_04a53dbbb86ab8a2ce2accc0266e323c);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_dict_a70b9bd9ff1b4e80a4864e34af82b0a8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a70b9bd9ff1b4e80a4864e34af82b0a8);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_32b4a33ef73c2e7e709e495868dde582));
CHECK_OBJECT_DEEP(mod_consts.const_dict_32b4a33ef73c2e7e709e495868dde582);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_dict_96e33e64502d93203969ec1e25ab967e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_96e33e64502d93203969ec1e25ab967e);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_feb7df2057606cac751c693709a0284e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_feb7df2057606cac751c693709a0284e);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_3115ef9cc61017eb0a15ef3ab55a339c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3115ef9cc61017eb0a15ef3ab55a339c);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_114));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_114);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_3add8c5dcc77fbc3388c9bb75fb91a56));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3add8c5dcc77fbc3388c9bb75fb91a56);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_dict_735c1f4ab455b28d261f88cc9e51f1ae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_735c1f4ab455b28d261f88cc9e51f1ae);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_modules));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_modules);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_c));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signature);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_callable);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_return_annotation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_return_annotation_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain___signature__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___signature__);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_e656d5c74c8e8261054f6d73e546ae4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e656d5c74c8e8261054f6d73e546ae4c);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_92c1b67329aae35e200919117337b5bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_92c1b67329aae35e200919117337b5bf);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_str_plain_shield_str_plain_scope_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_seconds_str_plain_shield_str_plain_scope_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_str_plain_scope_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deadline_str_plain_shield_str_plain_scope_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_str_plain_shield_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_seconds_str_plain_shield_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_seconds_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_seconds_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deadline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deadline_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 13
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
static PyObject *module_var_accessor_trio$_timeouts$TooSlowError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_TooSlowError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TooSlowError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TooSlowError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TooSlowError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TooSlowError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_TooSlowError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_TooSlowError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TooSlowError);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$c(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$contextmanager(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextmanager);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextmanager, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$fail_after(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_after);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fail_after);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fail_after, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fail_after);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fail_after, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_after);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_after);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_after);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$fail_at(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_at);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fail_at);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fail_at, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_fail_at);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_fail_at, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_at);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_at);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_at);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$math(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_math);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_math, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_math);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$move_on_after(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_after);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_move_on_after);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_move_on_after, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_move_on_after);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_move_on_after, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_after);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_after);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_after);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$move_on_at(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_at);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_move_on_at);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_move_on_at, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_move_on_at);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_move_on_at, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_at);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_at);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_at);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$sleep_forever(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_forever);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sleep_forever);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sleep_forever, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sleep_forever);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sleep_forever, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_forever);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_forever);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_forever);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$sleep_until(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_until);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sleep_until);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sleep_until, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sleep_until);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sleep_until, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_until);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_until);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_until);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_timeouts$trio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_timeouts->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_timeouts->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_timeouts->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_trio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_trio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_trio);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a82f3644aa2e33a0b28018a31c546f58;
static PyCodeObject *code_objects_ad1306df1af25247ed9ccce0b4fa4906;
static PyCodeObject *code_objects_d1a7361271e1503607db21b2b25ecce6;
static PyCodeObject *code_objects_dc44c3cc612304dd719ede0076b4614c;
static PyCodeObject *code_objects_17acf0db1899346c5b07e853f07d94cd;
static PyCodeObject *code_objects_4f204183b1917d2f4f95b697ab1385b3;
static PyCodeObject *code_objects_e5096cd6d4b541ed543a3c240931436f;
static PyCodeObject *code_objects_91c2fe74311fc78c9b05441d7e0c095e;
static PyCodeObject *code_objects_6f6feeff508ba12a42a5b8be92a6dc1c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e656d5c74c8e8261054f6d73e546ae4c); CHECK_OBJECT(module_filename_obj);
code_objects_a82f3644aa2e33a0b28018a31c546f58 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_lambda, mod_consts.const_str_digest_663157ddcd380ef4a9c4353fea0b2adc, mod_consts.const_tuple_str_underscore_tuple, NULL, 1, 0, 0);
code_objects_ad1306df1af25247ed9ccce0b4fa4906 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_92c1b67329aae35e200919117337b5bf, mod_consts.const_str_digest_92c1b67329aae35e200919117337b5bf, NULL, NULL, 0, 0, 0);
code_objects_d1a7361271e1503607db21b2b25ecce6 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fail_after, mod_consts.const_str_plain_fail_after, mod_consts.const_tuple_str_plain_seconds_str_plain_shield_str_plain_scope_tuple, NULL, 1, 1, 0);
code_objects_dc44c3cc612304dd719ede0076b4614c = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_fail_at, mod_consts.const_str_plain_fail_at, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_str_plain_scope_tuple, NULL, 1, 1, 0);
code_objects_17acf0db1899346c5b07e853f07d94cd = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_move_on_after, mod_consts.const_str_plain_move_on_after, mod_consts.const_tuple_str_plain_seconds_str_plain_shield_tuple, NULL, 1, 1, 0);
code_objects_4f204183b1917d2f4f95b697ab1385b3 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_move_on_at, mod_consts.const_str_plain_move_on_at, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple, NULL, 1, 1, 0);
code_objects_e5096cd6d4b541ed543a3c240931436f = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep, mod_consts.const_str_plain_sleep, mod_consts.const_tuple_str_plain_seconds_tuple, NULL, 1, 0, 0);
code_objects_91c2fe74311fc78c9b05441d7e0c095e = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep_forever, mod_consts.const_str_plain_sleep_forever, NULL, NULL, 0, 0, 0);
code_objects_6f6feeff508ba12a42a5b8be92a6dc1c = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_sleep_until, mod_consts.const_str_plain_sleep_until, mod_consts.const_tuple_str_plain_deadline_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__1_move_on_at(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__2_move_on_after(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__3_sleep_forever(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__4_sleep_until(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__5_sleep(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__6_fail_at(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__7_fail_after(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$_timeouts$$$function__1_move_on_at(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_deadline = python_pars[0];
PyObject *par_shield = python_pars[1];
struct Nuitka_FrameObject *frame_frame_trio$_timeouts$$$function__1_move_on_at;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_timeouts$$$function__1_move_on_at = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_timeouts$$$function__1_move_on_at)) {
    Py_XDECREF(cache_frame_frame_trio$_timeouts$$$function__1_move_on_at);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_timeouts$$$function__1_move_on_at == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_timeouts$$$function__1_move_on_at = MAKE_FUNCTION_FRAME(tstate, code_objects_4f204183b1917d2f4f95b697ab1385b3, module_trio$_timeouts, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_timeouts$$$function__1_move_on_at->m_type_description == NULL);
frame_frame_trio$_timeouts$$$function__1_move_on_at = cache_frame_frame_trio$_timeouts$$$function__1_move_on_at;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_timeouts$$$function__1_move_on_at);
assert(Py_REFCNT(frame_frame_trio$_timeouts$$$function__1_move_on_at) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_1 = module_var_accessor_trio$_timeouts$trio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CancelScope);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deadline);
tmp_kw_call_value_0_1 = par_deadline;
CHECK_OBJECT(par_shield);
tmp_kw_call_value_1_1 = par_shield;
frame_frame_trio$_timeouts$$$function__1_move_on_at->m_frame.f_lineno = 28;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_deadline_str_plain_shield_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_timeouts$$$function__1_move_on_at, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_timeouts$$$function__1_move_on_at->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_timeouts$$$function__1_move_on_at, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_timeouts$$$function__1_move_on_at,
    type_description_1,
    par_deadline,
    par_shield
);


// Release cached frame if used for exception.
if (frame_frame_trio$_timeouts$$$function__1_move_on_at == cache_frame_frame_trio$_timeouts$$$function__1_move_on_at) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_timeouts$$$function__1_move_on_at);
    cache_frame_frame_trio$_timeouts$$$function__1_move_on_at = NULL;
}

assertFrameObject(frame_frame_trio$_timeouts$$$function__1_move_on_at);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_deadline);
Py_DECREF(par_deadline);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_deadline);
Py_DECREF(par_deadline);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_timeouts$$$function__2_move_on_after(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_seconds = python_pars[0];
PyObject *par_shield = python_pars[1];
struct Nuitka_FrameObject *frame_frame_trio$_timeouts$$$function__2_move_on_after;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_timeouts$$$function__2_move_on_after = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_timeouts$$$function__2_move_on_after)) {
    Py_XDECREF(cache_frame_frame_trio$_timeouts$$$function__2_move_on_after);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_timeouts$$$function__2_move_on_after == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_timeouts$$$function__2_move_on_after = MAKE_FUNCTION_FRAME(tstate, code_objects_17acf0db1899346c5b07e853f07d94cd, module_trio$_timeouts, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_timeouts$$$function__2_move_on_after->m_type_description == NULL);
frame_frame_trio$_timeouts$$$function__2_move_on_after = cache_frame_frame_trio$_timeouts$$$function__2_move_on_after;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_timeouts$$$function__2_move_on_after);
assert(Py_REFCNT(frame_frame_trio$_timeouts$$$function__2_move_on_after) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_seconds);
tmp_cmp_expr_left_1 = par_seconds;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9d0d7af99bdbcc6dd8b9e1d5e11bc270;
frame_frame_trio$_timeouts$$$function__2_move_on_after->m_frame.f_lineno = 52;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 52;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_trio$_timeouts$math(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_math);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_seconds);
tmp_args_element_value_1 = par_seconds;
frame_frame_trio$_timeouts$$$function__2_move_on_after->m_frame.f_lineno = 53;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isnan, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 53;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_d4abb2c9a7063c58e206c1158ad5a13c;
frame_frame_trio$_timeouts$$$function__2_move_on_after->m_frame.f_lineno = 54;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 54;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_1 = module_var_accessor_trio$_timeouts$trio(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_CancelScope);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_shield);
tmp_kw_call_value_0_1 = par_shield;
CHECK_OBJECT(par_seconds);
tmp_kw_call_value_1_1 = par_seconds;
frame_frame_trio$_timeouts$$$function__2_move_on_after->m_frame.f_lineno = 55;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_shield_str_plain_relative_deadline_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_timeouts$$$function__2_move_on_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_timeouts$$$function__2_move_on_after->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_timeouts$$$function__2_move_on_after, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_timeouts$$$function__2_move_on_after,
    type_description_1,
    par_seconds,
    par_shield
);


// Release cached frame if used for exception.
if (frame_frame_trio$_timeouts$$$function__2_move_on_after == cache_frame_frame_trio$_timeouts$$$function__2_move_on_after) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_timeouts$$$function__2_move_on_after);
    cache_frame_frame_trio$_timeouts$$$function__2_move_on_after = NULL;
}

assertFrameObject(frame_frame_trio$_timeouts$$$function__2_move_on_after);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_seconds);
Py_DECREF(par_seconds);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_seconds);
Py_DECREF(par_seconds);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_timeouts$$$function__3_sleep_forever(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.

tmp_return_value = MAKE_COROUTINE_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever(tstate);

goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever_locals *coroutine_heap = (struct trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_91c2fe74311fc78c9b05441d7e0c095e, module_trio$_timeouts, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 71;
tmp_expression_value_3 = module_var_accessor_trio$_timeouts$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 71;

    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = MAKE_FUNCTION_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda(tstate);

coroutine->m_frame->m_frame.f_lineno = 71;
tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_wait_task_rescheduled, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 71;

    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ce69efbe0bb99d79fbf54a7a21499230;
coroutine->m_frame->m_frame.f_lineno = 72;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 72;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);

goto frame_exception_exit_1;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever_context,
        module_trio$_timeouts,
        mod_consts.const_str_plain_sleep_forever,
        NULL,
        code_objects_91c2fe74311fc78c9b05441d7e0c095e,
        NULL,
        0,
#if 1
        sizeof(struct trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par__ = python_pars[0];
struct Nuitka_FrameObject *frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_a82f3644aa2e33a0b28018a31c546f58, module_trio$_timeouts, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda->m_type_description == NULL);
frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda = cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_trio$_timeouts$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_lowlevel);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_Abort);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_SUCCEEDED);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda,
    type_description_1,
    par__
);


// Release cached frame if used for exception.
if (frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda == cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda);
    cache_frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par__);
Py_DECREF(par__);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par__);
Py_DECREF(par__);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_timeouts$$$function__4_sleep_until(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_deadline = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_deadline;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_deadline);
CHECK_OBJECT(par_deadline);
Py_DECREF(par_deadline);
par_deadline = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until_locals {
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until_locals *coroutine_heap = (struct trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->tmp_with_1__enter = NULL;
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
coroutine_heap->tmp_with_1__source = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_6f6feeff508ba12a42a5b8be92a6dc1c, module_trio$_timeouts, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_trio$_timeouts$move_on_at(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_move_on_at);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_deadline);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__source == NULL);
coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__enter == NULL);
coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
assert(coroutine_heap->tmp_with_1__exit == NULL);
coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 92;
tmp_called_value_3 = module_var_accessor_trio$_timeouts$sleep_forever(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sleep_forever);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 92;
tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_3;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_5;
tmp_assign_source_5 = NUITKA_BOOL_FALSE;
coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
tmp_args_element_value_2 = EXC_TYPE(tstate);
tmp_args_element_value_3 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_3); 
tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_4 == NULL) {
    tmp_args_element_value_4 = Py_None;
}
coroutine->m_frame->m_frame.f_lineno = 91;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_4;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 91;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_4;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 91;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_4;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&coroutine_heap->exception_keeper_name_3);

coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
coroutine->m_frame->m_frame.f_lineno = 91;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_6, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 91;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
Py_XDECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
Py_DECREF(coroutine_heap->tmp_with_1__source);
coroutine_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
Py_DECREF(coroutine_heap->tmp_with_1__enter);
coroutine_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
Py_DECREF(coroutine_heap->tmp_with_1__exit);
coroutine_heap->tmp_with_1__exit = NULL;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until_context,
        module_trio$_timeouts,
        mod_consts.const_str_plain_sleep_until,
        NULL,
        code_objects_6f6feeff508ba12a42a5b8be92a6dc1c,
        closure,
        1,
#if 1
        sizeof(struct trio$_timeouts$$$function__4_sleep_until$$$coroutine__1_sleep_until_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_timeouts$$$function__5_sleep(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_seconds = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_seconds;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_seconds);
CHECK_OBJECT(par_seconds);
Py_DECREF(par_seconds);
par_seconds = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep_locals *coroutine_heap = (struct trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_e5096cd6d4b541ed543a3c240931436f, module_trio$_timeouts, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_seconds);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 106;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 106;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_9d0d7af99bdbcc6dd8b9e1d5e11bc270;
coroutine->m_frame->m_frame.f_lineno = 107;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 107;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "c";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_seconds);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 109;
tmp_expression_value_3 = module_var_accessor_trio$_timeouts$trio(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_lowlevel);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 109;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_checkpoint);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_await_result_2;
coroutine->m_frame->m_frame.f_lineno = 111;
tmp_called_value_1 = module_var_accessor_trio$_timeouts$sleep_until(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_sleep_until);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = module_var_accessor_trio$_timeouts$trio(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 111;
tmp_add_expr_left_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_current_time);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_seconds);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_add_expr_right_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 111;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 111;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_end_2:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[0]
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep_context,
        module_trio$_timeouts,
        mod_consts.const_str_plain_sleep,
        NULL,
        code_objects_e5096cd6d4b541ed543a3c240931436f,
        closure,
        1,
#if 1
        sizeof(struct trio$_timeouts$$$function__5_sleep$$$coroutine__1_sleep_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_timeouts$$$function__6_fail_at(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_deadline = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_shield = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_deadline;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_shield;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_deadline);
CHECK_OBJECT(par_deadline);
Py_DECREF(par_deadline);
par_deadline = NULL;
CHECK_OBJECT(par_shield);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);
par_shield = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at_locals {
PyObject *var_scope;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at_locals *generator_heap = (struct trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_scope = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_dc44c3cc612304dd719ede0076b4614c, module_trio$_timeouts, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_trio$_timeouts$move_on_at(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_move_on_at);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_deadline);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_shield);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 149;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_shield_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_1 = generator_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 149;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_2 = generator_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_5 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_scope == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_scope = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_scope);
tmp_expression_value_3 = generator_heap->var_scope;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 150;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_3 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 149;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_5;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 149;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 149;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 149;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 149;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 149;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_scope);
tmp_expression_value_4 = generator_heap->var_scope;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_cancelled_caught);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 151;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 151;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_trio$_timeouts$TooSlowError(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_TooSlowError);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 152;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 152;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cco";
goto frame_exception_exit_1;
}
branch_no_5:;

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
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_scope
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
goto try_end_5;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_scope);
generator_heap->var_scope = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->var_scope);
CHECK_OBJECT(generator_heap->var_scope);
Py_DECREF(generator_heap->var_scope);
generator_heap->var_scope = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at_context,
        module_trio$_timeouts,
        mod_consts.const_str_plain_fail_at,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_dc44c3cc612304dd719ede0076b4614c,
        closure,
        2,
#if 1
        sizeof(struct trio$_timeouts$$$function__6_fail_at$$$genobj__1_fail_at_locals)
#else
        0
#endif
    );
}


static PyObject *impl_trio$_timeouts$$$function__7_fail_after(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_seconds = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_shield = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_seconds;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_shield;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_GENERATOR_trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_seconds);
CHECK_OBJECT(par_seconds);
Py_DECREF(par_seconds);
par_seconds = NULL;
CHECK_OBJECT(par_shield);
CHECK_OBJECT(par_shield);
Py_DECREF(par_shield);
par_shield = NULL;
goto function_return_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after_locals {
PyObject *var_scope;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after_locals *generator_heap = (struct trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_scope = NULL;
generator_heap->tmp_with_1__enter = NULL;
generator_heap->tmp_with_1__exit = NULL;
generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_with_1__source = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d1a7361271e1503607db21b2b25ecce6, module_trio$_timeouts, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_trio$_timeouts$move_on_after(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_move_on_after);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_seconds);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_shield);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 184;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_shield_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__source == NULL);
generator_heap->tmp_with_1__source = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_1 = generator_heap->tmp_with_1__source;
tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, const_str_plain___enter__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 184;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__enter == NULL);
generator_heap->tmp_with_1__enter = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
tmp_expression_value_2 = generator_heap->tmp_with_1__source;
tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, const_str_plain___exit__);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_with_1__exit == NULL);
generator_heap->tmp_with_1__exit = tmp_assign_source_3;
}
{
nuitka_bool tmp_assign_source_4;
tmp_assign_source_4 = NUITKA_BOOL_TRUE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
tmp_assign_source_5 = generator_heap->tmp_with_1__enter;
assert(generator_heap->var_scope == NULL);
Py_INCREF(tmp_assign_source_5);
generator_heap->var_scope = tmp_assign_source_5;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_scope);
tmp_expression_value_3 = generator_heap->var_scope;
Py_INCREF(tmp_expression_value_3);
generator->m_yield_return_index = 1;
return tmp_expression_value_3;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_4;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
nuitka_bool tmp_assign_source_6;
tmp_assign_source_6 = NUITKA_BOOL_FALSE;
generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_3 = generator_heap->tmp_with_1__exit;
tmp_args_element_value_1 = EXC_TYPE(tstate);
tmp_args_element_value_2 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_2); 
tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_3 == NULL) {
    tmp_args_element_value_3 = Py_None;
}
generator->m_frame->m_frame.f_lineno = 184;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_5;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_5;
}
tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 184;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_5;
branch_no_2:;
goto branch_end_1;
branch_no_1:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 184;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "cco";
goto try_except_handler_5;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
bool tmp_condition_result_3;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_4 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 184;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_4, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&generator_heap->exception_keeper_name_3);

generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_3:;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
try_end_3:;
{
bool tmp_condition_result_4;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
tmp_called_value_5 = generator_heap->tmp_with_1__exit;
generator->m_frame->m_frame.f_lineno = 184;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_5, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
Py_XDECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
Py_XDECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_with_1__source);
CHECK_OBJECT(generator_heap->tmp_with_1__source);
Py_DECREF(generator_heap->tmp_with_1__source);
generator_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
CHECK_OBJECT(generator_heap->tmp_with_1__enter);
Py_DECREF(generator_heap->tmp_with_1__enter);
generator_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
CHECK_OBJECT(generator_heap->tmp_with_1__exit);
Py_DECREF(generator_heap->tmp_with_1__exit);
generator_heap->tmp_with_1__exit = NULL;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(generator_heap->var_scope);
tmp_expression_value_4 = generator_heap->var_scope;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_cancelled_caught);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
tmp_raise_type_input_1 = module_var_accessor_trio$_timeouts$TooSlowError(tstate);
if (unlikely(tmp_raise_type_input_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_TooSlowError);
}

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 187;
generator_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
generator_heap->exception_state.exception_value = tmp_raise_type_1;
generator_heap->exception_lineno = 187;
RAISE_EXCEPTION_WITH_VALUE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "cco";
goto frame_exception_exit_1;
}
branch_no_5:;

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
    generator->m_closure[0],
    generator->m_closure[1],
    generator_heap->var_scope
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
goto try_end_5;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_scope);
generator_heap->var_scope = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:
try_end_5:;
CHECK_OBJECT(generator_heap->var_scope);
CHECK_OBJECT(generator_heap->var_scope);
Py_DECREF(generator_heap->var_scope);
generator_heap->var_scope = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after_context,
        module_trio$_timeouts,
        mod_consts.const_str_plain_fail_after,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_d1a7361271e1503607db21b2b25ecce6,
        closure,
        2,
#if 1
        sizeof(struct trio$_timeouts$$$function__7_fail_after$$$genobj__1_fail_after_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__1_move_on_at(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__1_move_on_at,
        mod_consts.const_str_plain_move_on_at,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4f204183b1917d2f4f95b697ab1385b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_timeouts,
        mod_consts.const_str_digest_2984fac9abcb5e10b97b2f21b586e683,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__2_move_on_after(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__2_move_on_after,
        mod_consts.const_str_plain_move_on_after,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_17acf0db1899346c5b07e853f07d94cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_timeouts,
        mod_consts.const_str_digest_dc4c6a0ce866831d2641c826c016d7d6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__3_sleep_forever(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__3_sleep_forever,
        mod_consts.const_str_plain_sleep_forever,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_91c2fe74311fc78c9b05441d7e0c095e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_timeouts,
        mod_consts.const_str_digest_1ca2d4082d3b0b55949e06e3957e217c,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_663157ddcd380ef4a9c4353fea0b2adc,
#endif
        code_objects_a82f3644aa2e33a0b28018a31c546f58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_trio$_timeouts,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__4_sleep_until(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__4_sleep_until,
        mod_consts.const_str_plain_sleep_until,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6f6feeff508ba12a42a5b8be92a6dc1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_timeouts,
        mod_consts.const_str_digest_a1e40cfdd690f56514384d72dc3e63ef,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__5_sleep(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__5_sleep,
        mod_consts.const_str_plain_sleep,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e5096cd6d4b541ed543a3c240931436f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_timeouts,
        mod_consts.const_str_digest_19b6faa6e4173ea5f8ebabb9a59d66bc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__6_fail_at(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__6_fail_at,
        mod_consts.const_str_plain_fail_at,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dc44c3cc612304dd719ede0076b4614c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_timeouts,
        mod_consts.const_str_digest_e07e7bb8a857848c7a88cd84b94d7083,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_timeouts$$$function__7_fail_after(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_timeouts$$$function__7_fail_after,
        mod_consts.const_str_plain_fail_after,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d1a7361271e1503607db21b2b25ecce6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_timeouts,
        mod_consts.const_str_digest_dda5b8e3118c7143c9d97c717c1998b3,
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

static function_impl_code const function_table_trio$_timeouts[] = {
impl_trio$_timeouts$$$function__3_sleep_forever$$$coroutine__1_sleep_forever$$$function__1_lambda,
impl_trio$_timeouts$$$function__1_move_on_at,
impl_trio$_timeouts$$$function__2_move_on_after,
impl_trio$_timeouts$$$function__3_sleep_forever,
impl_trio$_timeouts$$$function__4_sleep_until,
impl_trio$_timeouts$$$function__5_sleep,
impl_trio$_timeouts$$$function__6_fail_at,
impl_trio$_timeouts$$$function__7_fail_after,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_timeouts);
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
        module_trio$_timeouts,
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
        function_table_trio$_timeouts,
        sizeof(function_table_trio$_timeouts) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._timeouts";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_timeouts(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_timeouts");

    // Store the module for future use.
    module_trio$_timeouts = module;

    moduledict_trio$_timeouts = MODULE_DICT(module_trio$_timeouts);

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
        PRINT_STRING("trio$_timeouts: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_timeouts: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_timeouts: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._timeouts" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_timeouts\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_timeouts,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_timeouts,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_timeouts,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_timeouts,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_timeouts,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_timeouts);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_timeouts);
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

        UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_timeouts;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_trio$_timeouts$$$class__1_TooSlowError_114 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_timeouts = MAKE_MODULE_FRAME(code_objects_ad1306df1af25247ed9ccce0b4fa4906, module_trio$_timeouts);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_timeouts);
assert(Py_REFCNT(frame_frame_trio$_timeouts) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_timeouts$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_timeouts$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_math;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_timeouts;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_trio$_timeouts->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_math, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_timeouts;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_contextmanager_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_trio$_timeouts->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$_timeouts,
        mod_consts.const_str_plain_contextmanager,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_contextmanager);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_contextmanager, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_9);
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$_timeouts,
        mod_consts.const_str_plain_NoReturn,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_NoReturn);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_NoReturn, tmp_assign_source_10);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_trio;
tmp_globals_arg_value_3 = (PyObject *)moduledict_trio$_timeouts;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_trio$_timeouts->m_frame.f_lineno = 8;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_trio, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_48c1d6f3b0b467fd05c9d94e06068e39);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_dbc6406b3e9332bcfc3f394c02787866);

tmp_assign_source_12 = MAKE_FUNCTION_trio$_timeouts$$$function__1_move_on_at(tstate, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_at, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_2;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_48c1d6f3b0b467fd05c9d94e06068e39);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_04a53dbbb86ab8a2ce2accc0266e323c);

tmp_assign_source_13 = MAKE_FUNCTION_trio$_timeouts$$$function__2_move_on_after(tstate, tmp_kw_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_move_on_after, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_a70b9bd9ff1b4e80a4864e34af82b0a8);

tmp_assign_source_14 = MAKE_FUNCTION_trio$_timeouts$$$function__3_sleep_forever(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_forever, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_32b4a33ef73c2e7e709e495868dde582);

tmp_assign_source_15 = MAKE_FUNCTION_trio$_timeouts$$$function__4_sleep_until(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep_until, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_96e33e64502d93203969ec1e25ab967e);

tmp_assign_source_16 = MAKE_FUNCTION_trio$_timeouts$$$function__5_sleep(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_sleep, tmp_assign_source_16);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_direct_call_arg1_1;
tmp_direct_call_arg1_1 = mod_consts.const_tuple_type_Exception_tuple;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_17 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_19 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_19;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
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
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
tmp_tuple_element_1 = mod_consts.const_str_plain_TooSlowError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_1 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_timeouts->m_frame.f_lineno = 114;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_20;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
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
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_2;
}
frame_frame_trio$_timeouts->m_frame.f_lineno = 114;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 114;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_21;
}
branch_end_1:;
{
PyObject *tmp_assign_source_22;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_trio$_timeouts$$$class__1_TooSlowError_114 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_feb7df2057606cac751c693709a0284e;
tmp_res = PyObject_SetItem(locals_trio$_timeouts$$$class__1_TooSlowError_114, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_digest_3115ef9cc61017eb0a15ef3ab55a339c;
tmp_res = PyObject_SetItem(locals_trio$_timeouts$$$class__1_TooSlowError_114, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_TooSlowError;
tmp_res = PyObject_SetItem(locals_trio$_timeouts$$$class__1_TooSlowError_114, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_114;
tmp_res = PyObject_SetItem(locals_trio$_timeouts$$$class__1_TooSlowError_114, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_trio$_timeouts$$$class__1_TooSlowError_114, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_Exception_tuple;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_tuple_type_Exception_tuple;
tmp_res = PyObject_SetItem(locals_trio$_timeouts$$$class__1_TooSlowError_114, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_3 = mod_consts.const_str_plain_TooSlowError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = locals_trio$_timeouts$$$class__1_TooSlowError_114;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_trio$_timeouts->m_frame.f_lineno = 114;
tmp_assign_source_23 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto try_except_handler_4;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_23;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_22 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_22);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_trio$_timeouts$$$class__1_TooSlowError_114);
locals_trio$_timeouts$$$class__1_TooSlowError_114 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_trio$_timeouts$$$class__1_TooSlowError_114);
locals_trio$_timeouts$$$class__1_TooSlowError_114 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 114;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_TooSlowError, tmp_assign_source_22);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_assign_source_24;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_6;
tmp_called_value_3 = module_var_accessor_trio$_timeouts$contextmanager(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 121;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_48c1d6f3b0b467fd05c9d94e06068e39);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_3add8c5dcc77fbc3388c9bb75fb91a56);

tmp_args_element_value_1 = MAKE_FUNCTION_trio$_timeouts$$$function__6_fail_at(tstate, tmp_kw_defaults_3, tmp_annotations_6);

frame_frame_trio$_timeouts->m_frame.f_lineno = 121;
tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_at, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_annotations_7;
tmp_called_value_4 = module_var_accessor_trio$_timeouts$contextmanager(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextmanager);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_48c1d6f3b0b467fd05c9d94e06068e39);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_735c1f4ab455b28d261f88cc9e51f1ae);

tmp_args_element_value_2 = MAKE_FUNCTION_trio$_timeouts$$$function__7_fail_after(tstate, tmp_kw_defaults_4, tmp_annotations_7);

frame_frame_trio$_timeouts->m_frame.f_lineno = 155;
tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_fail_after, tmp_assign_source_25);
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
tmp_cmp_expr_left_2 = mod_consts.const_str_digest_44d48db298f5f5fa1d07dee7c475dfe0;
tmp_expression_value_7 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_7 == NULL));
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_modules);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;

    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_5 = const_str_plain_inspect;
tmp_globals_arg_value_4 = (PyObject *)moduledict_trio$_timeouts;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_trio$_timeouts->m_frame.f_lineno = 194;
tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_iter_arg_1;
PyObject *tmp_tuple_element_4;
tmp_tuple_element_4 = module_var_accessor_trio$_timeouts$fail_at(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fail_at);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;

    goto frame_exception_exit_1;
}
tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_iter_arg_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_trio$_timeouts$fail_after(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fail_after);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 196;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_iter_arg_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_27 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
assert(!(tmp_assign_source_27 == NULL));
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_27;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_28 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_28 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 196;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_29 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_trio$_timeouts, (Nuitka_StringObject *)mod_consts.const_str_plain_c, tmp_assign_source_29);
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_3;
tmp_expression_value_10 = module_var_accessor_trio$_timeouts$inspect(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_Signature);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_from_callable);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_args_element_value_3 = module_var_accessor_trio$_timeouts$c(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 197;

    goto try_except_handler_5;
}
frame_frame_trio$_timeouts->m_frame.f_lineno = 197;
tmp_expression_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_replace);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_expression_value_11 = module_var_accessor_trio$_timeouts$trio(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_trio);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_CancelScope);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 197;

    goto try_except_handler_5;
}
frame_frame_trio$_timeouts->m_frame.f_lineno = 197;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assattr_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_return_annotation_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_assattr_target_3 = module_var_accessor_trio$_timeouts$c(tstate);
if (unlikely(tmp_assattr_target_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c);
}

if (tmp_assattr_target_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_assattr_value_3);

exception_lineno = 197;

    goto try_except_handler_5;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain___signature__, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 197;

    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;

    goto try_except_handler_5;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_timeouts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_timeouts->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_timeouts, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_timeouts);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_timeouts", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._timeouts" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_timeouts);
    return module_trio$_timeouts;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_timeouts, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_timeouts", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

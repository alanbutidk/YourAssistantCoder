/* Generated code for Python module 'trio$_core$_generated_run'
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



/* The "module_trio$_core$_generated_run" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_trio$_core$_generated_run;
PyDictObject *moduledict_trio$_core$_generated_run;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_GLOBAL_RUN_CONTEXT;
PyObject *const_str_plain_runner;
PyObject *const_str_plain_current_statistics;
PyObject *const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
PyObject *const_str_digest_f23fe4b46b009b1a12b5c2703ff6e51b;
PyObject *const_str_plain_current_time;
PyObject *const_str_digest_cab0f80ae96f8b9bce58c066cb2b5f32;
PyObject *const_str_plain_current_clock;
PyObject *const_str_digest_6bd25650b53a865bf5d22ff926effd2d;
PyObject *const_str_plain_current_root_task;
PyObject *const_str_digest_09ca0378a8140b22a6318e065165f502;
PyObject *const_str_plain_reschedule;
PyObject *const_str_digest_498af75f7b1879a84312c2aa51622aee;
PyObject *const_str_plain_spawn_system_task;
PyObject *const_str_plain_context;
PyObject *const_str_digest_e4d119e5c0a52176eae76ca2374f9885;
PyObject *const_str_plain_current_trio_token;
PyObject *const_str_digest_09a3f9db4605f379cb8f43e47fd71e97;
PyObject *const_str_digest_3fb03cbccc2cf12a387a351940524658;
PyObject *const_str_plain_wait_all_tasks_blocked;
PyObject *const_str_plain_cushion;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain__ki;
PyObject *const_tuple_str_plain_enable_ki_protection_tuple;
PyObject *const_str_plain_enable_ki_protection;
PyObject *const_str_plain__run;
PyObject *const_tuple_48937971a26281123a932ca7855533c7_tuple;
PyObject *const_str_plain__NO_SEND;
PyObject *const_str_plain_RunStatistics;
PyObject *const_str_plain_Task;
PyObject *const_list_b71c13aa95f3cc941bb5597c63bd39a7_list;
PyObject *const_dict_de39ce9112317edce445069ae5c3204c;
PyObject *const_dict_19141050eff162b9ef06122f75e4a0a6;
PyObject *const_dict_70d15b2e21be1cd67ed8910366eec26e;
PyObject *const_dict_b1e9e7af62d11ac2a4a773bf9ed82119;
PyObject *const_dict_17eb5b6c3222befe9d3764b9e07e2bde;
PyObject *const_dict_48ee79807c1c7083843a9ad1c59b34ce;
PyObject *const_dict_82aaa4acef435a1558d5eefa02a91f07;
PyObject *const_dict_6b85af5612ece976ccb778fe9bf55b74;
PyObject *const_tuple_float_0_0_tuple;
PyObject *const_dict_dc9bcbb03442e444eb1b1bd874156f95;
PyObject *const_str_digest_9bfa65f79701f5b7da00c5c31dab1a90;
PyObject *const_str_digest_b0e353f0b44d238b5d0a0b44f586ddf8;
PyObject *const_tuple_str_plain_task_str_plain_next_send_tuple;
PyObject *const_tuple_5d6bc6f67fb7fc950093db6414c5af8c_tuple;
PyObject *const_tuple_str_plain_cushion_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[49];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("trio._core._generated_run"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_runner);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_statistics);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_f23fe4b46b009b1a12b5c2703ff6e51b);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_time);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_cab0f80ae96f8b9bce58c066cb2b5f32);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_clock);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_6bd25650b53a865bf5d22ff926effd2d);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_root_task);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_09ca0378a8140b22a6318e065165f502);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_reschedule);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_498af75f7b1879a84312c2aa51622aee);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_spawn_system_task);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_context);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_e4d119e5c0a52176eae76ca2374f9885);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_trio_token);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_09a3f9db4605f379cb8f43e47fd71e97);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fb03cbccc2cf12a387a351940524658);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_wait_all_tasks_blocked);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_cushion);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__ki);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_enable_ki_protection_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_ki_protection);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__run);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_48937971a26281123a932ca7855533c7_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__NO_SEND);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_RunStatistics);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Task);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_list_b71c13aa95f3cc941bb5597c63bd39a7_list);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_dict_de39ce9112317edce445069ae5c3204c);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_dict_70d15b2e21be1cd67ed8910366eec26e);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_dict_b1e9e7af62d11ac2a4a773bf9ed82119);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_17eb5b6c3222befe9d3764b9e07e2bde);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_dict_48ee79807c1c7083843a9ad1c59b34ce);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_dict_82aaa4acef435a1558d5eefa02a91f07);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_dict_6b85af5612ece976ccb778fe9bf55b74);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_float_0_0_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_dict_dc9bcbb03442e444eb1b1bd874156f95);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bfa65f79701f5b7da00c5c31dab1a90);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_b0e353f0b44d238b5d0a0b44f586ddf8);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_task_str_plain_next_send_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_5d6bc6f67fb7fc950093db6414c5af8c_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cushion_tuple);
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
void checkModuleConstants_trio$_core$_generated_run(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_runner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_runner);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_statistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_statistics);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_f23fe4b46b009b1a12b5c2703ff6e51b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f23fe4b46b009b1a12b5c2703ff6e51b);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_time);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_cab0f80ae96f8b9bce58c066cb2b5f32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cab0f80ae96f8b9bce58c066cb2b5f32);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_clock));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_clock);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_6bd25650b53a865bf5d22ff926effd2d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6bd25650b53a865bf5d22ff926effd2d);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_root_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_root_task);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_09ca0378a8140b22a6318e065165f502));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09ca0378a8140b22a6318e065165f502);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_reschedule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reschedule);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_498af75f7b1879a84312c2aa51622aee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_498af75f7b1879a84312c2aa51622aee);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_spawn_system_task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_spawn_system_task);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_context);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_e4d119e5c0a52176eae76ca2374f9885));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e4d119e5c0a52176eae76ca2374f9885);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_trio_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_trio_token);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_09a3f9db4605f379cb8f43e47fd71e97));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09a3f9db4605f379cb8f43e47fd71e97);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fb03cbccc2cf12a387a351940524658));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fb03cbccc2cf12a387a351940524658);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_wait_all_tasks_blocked));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wait_all_tasks_blocked);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_cushion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cushion);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__ki));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ki);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_enable_ki_protection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_enable_ki_protection_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_ki_protection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enable_ki_protection);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__run));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__run);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_48937971a26281123a932ca7855533c7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_48937971a26281123a932ca7855533c7_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__NO_SEND));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__NO_SEND);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_RunStatistics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RunStatistics);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Task));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Task);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_list_b71c13aa95f3cc941bb5597c63bd39a7_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_b71c13aa95f3cc941bb5597c63bd39a7_list);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_dict_de39ce9112317edce445069ae5c3204c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_de39ce9112317edce445069ae5c3204c);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_dict_70d15b2e21be1cd67ed8910366eec26e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_70d15b2e21be1cd67ed8910366eec26e);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_dict_b1e9e7af62d11ac2a4a773bf9ed82119));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b1e9e7af62d11ac2a4a773bf9ed82119);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_17eb5b6c3222befe9d3764b9e07e2bde));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17eb5b6c3222befe9d3764b9e07e2bde);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_dict_48ee79807c1c7083843a9ad1c59b34ce));
CHECK_OBJECT_DEEP(mod_consts.const_dict_48ee79807c1c7083843a9ad1c59b34ce);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_dict_82aaa4acef435a1558d5eefa02a91f07));
CHECK_OBJECT_DEEP(mod_consts.const_dict_82aaa4acef435a1558d5eefa02a91f07);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_dict_6b85af5612ece976ccb778fe9bf55b74));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6b85af5612ece976ccb778fe9bf55b74);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_float_0_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_float_0_0_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_dict_dc9bcbb03442e444eb1b1bd874156f95));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dc9bcbb03442e444eb1b1bd874156f95);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bfa65f79701f5b7da00c5c31dab1a90));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bfa65f79701f5b7da00c5c31dab1a90);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_b0e353f0b44d238b5d0a0b44f586ddf8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b0e353f0b44d238b5d0a0b44f586ddf8);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_task_str_plain_next_send_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_task_str_plain_next_send_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_5d6bc6f67fb7fc950093db6414c5af8c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5d6bc6f67fb7fc950093db6414c5af8c_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cushion_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cushion_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 4
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
static PyObject *module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_generated_run->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_generated_run->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_generated_run->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_generated_run$_NO_SEND(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_generated_run->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_generated_run->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_SEND);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_generated_run->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NO_SEND);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NO_SEND, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__NO_SEND);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__NO_SEND, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_SEND);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_SEND);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_SEND);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_generated_run$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_generated_run->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_generated_run->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_generated_run->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_trio$_core$_generated_run$enable_ki_protection(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_trio$_core$_generated_run->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_trio$_core$_generated_run->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_ki_protection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_trio$_core$_generated_run->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enable_ki_protection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enable_ki_protection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_enable_ki_protection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_enable_ki_protection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_ki_protection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_ki_protection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_ki_protection);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_4491e064cea82d0d33cffb7d9f9eeabb;
static PyCodeObject *code_objects_a15fd1e6efb3498906021017d49324b2;
static PyCodeObject *code_objects_b7fb9360d744c3d30b7d3b27503b0d67;
static PyCodeObject *code_objects_6c12720ff757fad7a48c3fa1c872f42b;
static PyCodeObject *code_objects_f32a6978e69aba024760ddc98c4b7e29;
static PyCodeObject *code_objects_b869d1ce208e158c57651f48365a6f65;
static PyCodeObject *code_objects_44eed524d3feac6d8e52675501086e37;
static PyCodeObject *code_objects_487e2e377ff744c89e0d5973bb499939;
static PyCodeObject *code_objects_8f1d1d4a8a9318325eee094e8f14864c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9bfa65f79701f5b7da00c5c31dab1a90); CHECK_OBJECT(module_filename_obj);
code_objects_4491e064cea82d0d33cffb7d9f9eeabb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_b0e353f0b44d238b5d0a0b44f586ddf8, mod_consts.const_str_digest_b0e353f0b44d238b5d0a0b44f586ddf8, NULL, NULL, 0, 0, 0);
code_objects_a15fd1e6efb3498906021017d49324b2 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_clock, mod_consts.const_str_plain_current_clock, NULL, NULL, 0, 0, 0);
code_objects_b7fb9360d744c3d30b7d3b27503b0d67 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_root_task, mod_consts.const_str_plain_current_root_task, NULL, NULL, 0, 0, 0);
code_objects_6c12720ff757fad7a48c3fa1c872f42b = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_statistics, mod_consts.const_str_plain_current_statistics, NULL, NULL, 0, 0, 0);
code_objects_f32a6978e69aba024760ddc98c4b7e29 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_time, mod_consts.const_str_plain_current_time, NULL, NULL, 0, 0, 0);
code_objects_b869d1ce208e158c57651f48365a6f65 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_current_trio_token, mod_consts.const_str_plain_current_trio_token, NULL, NULL, 0, 0, 0);
code_objects_44eed524d3feac6d8e52675501086e37 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_reschedule, mod_consts.const_str_plain_reschedule, mod_consts.const_tuple_str_plain_task_str_plain_next_send_tuple, NULL, 2, 0, 0);
code_objects_487e2e377ff744c89e0d5973bb499939 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_spawn_system_task, mod_consts.const_str_plain_spawn_system_task, mod_consts.const_tuple_5d6bc6f67fb7fc950093db6414c5af8c_tuple, NULL, 1, 2, 0);
code_objects_8f1d1d4a8a9318325eee094e8f14864c = MAKE_CODE_OBJECT(module_filename_obj, 208, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_wait_all_tasks_blocked, mod_consts.const_str_plain_wait_all_tasks_blocked, mod_consts.const_tuple_str_plain_cushion_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__1_current_statistics(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__2_current_time(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__3_current_clock(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__4_current_root_task(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__5_reschedule(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__6_spawn_system_task(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__7_current_trio_token(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_trio$_core$_generated_run$$$function__1_current_statistics(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run$$$function__1_current_statistics;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics = MAKE_FUNCTION_FRAME(tstate, code_objects_6c12720ff757fad7a48c3fa1c872f42b, module_trio$_core$_generated_run, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics->m_type_description == NULL);
frame_frame_trio$_core$_generated_run$$$function__1_current_statistics = cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run$$$function__1_current_statistics);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run$$$function__1_current_statistics) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;

    goto try_except_handler_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runner);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_1;
}
frame_frame_trio$_core$_generated_run$$$function__1_current_statistics->m_frame.f_lineno = 60;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_statistics);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;

    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__1_current_statistics, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__1_current_statistics, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
frame_frame_trio$_core$_generated_run$$$function__1_current_statistics->m_frame.f_lineno = 62;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 62;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 59;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_core$_generated_run$$$function__1_current_statistics->m_frame)) {
        frame_frame_trio$_core$_generated_run$$$function__1_current_statistics->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__1_current_statistics, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run$$$function__1_current_statistics->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__1_current_statistics, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_generated_run$$$function__1_current_statistics,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_generated_run$$$function__1_current_statistics == cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics);
    cache_frame_frame_trio$_core$_generated_run$$$function__1_current_statistics = NULL;
}

assertFrameObject(frame_frame_trio$_core$_generated_run$$$function__1_current_statistics);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_generated_run$$$function__2_current_time(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run$$$function__2_current_time;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time = MAKE_FUNCTION_FRAME(tstate, code_objects_f32a6978e69aba024760ddc98c4b7e29, module_trio$_core$_generated_run, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time->m_type_description == NULL);
frame_frame_trio$_core$_generated_run$$$function__2_current_time = cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run$$$function__2_current_time);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run$$$function__2_current_time) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto try_except_handler_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runner);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_1;
}
frame_frame_trio$_core$_generated_run$$$function__2_current_time->m_frame.f_lineno = 77;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_time);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;

    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__2_current_time, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__2_current_time, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
frame_frame_trio$_core$_generated_run$$$function__2_current_time->m_frame.f_lineno = 79;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 79;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 76;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_core$_generated_run$$$function__2_current_time->m_frame)) {
        frame_frame_trio$_core$_generated_run$$$function__2_current_time->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__2_current_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run$$$function__2_current_time->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__2_current_time, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_generated_run$$$function__2_current_time,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_generated_run$$$function__2_current_time == cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time);
    cache_frame_frame_trio$_core$_generated_run$$$function__2_current_time = NULL;
}

assertFrameObject(frame_frame_trio$_core$_generated_run$$$function__2_current_time);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_generated_run$$$function__3_current_clock(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run$$$function__3_current_clock;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock = MAKE_FUNCTION_FRAME(tstate, code_objects_a15fd1e6efb3498906021017d49324b2, module_trio$_core$_generated_run, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock->m_type_description == NULL);
frame_frame_trio$_core$_generated_run$$$function__3_current_clock = cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run$$$function__3_current_clock);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run$$$function__3_current_clock) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto try_except_handler_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runner);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_1;
}
frame_frame_trio$_core$_generated_run$$$function__3_current_clock->m_frame.f_lineno = 86;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_clock);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__3_current_clock, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__3_current_clock, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
frame_frame_trio$_core$_generated_run$$$function__3_current_clock->m_frame.f_lineno = 88;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 88;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 85;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_core$_generated_run$$$function__3_current_clock->m_frame)) {
        frame_frame_trio$_core$_generated_run$$$function__3_current_clock->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__3_current_clock, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run$$$function__3_current_clock->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__3_current_clock, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_generated_run$$$function__3_current_clock,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_generated_run$$$function__3_current_clock == cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock);
    cache_frame_frame_trio$_core$_generated_run$$$function__3_current_clock = NULL;
}

assertFrameObject(frame_frame_trio$_core$_generated_run$$$function__3_current_clock);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_generated_run$$$function__4_current_root_task(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run$$$function__4_current_root_task;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task = MAKE_FUNCTION_FRAME(tstate, code_objects_b7fb9360d744c3d30b7d3b27503b0d67, module_trio$_core$_generated_run, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task->m_type_description == NULL);
frame_frame_trio$_core$_generated_run$$$function__4_current_root_task = cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run$$$function__4_current_root_task);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run$$$function__4_current_root_task) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;

    goto try_except_handler_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runner);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_1;
}
frame_frame_trio$_core$_generated_run$$$function__4_current_root_task->m_frame.f_lineno = 99;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_root_task);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__4_current_root_task, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__4_current_root_task, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
frame_frame_trio$_core$_generated_run$$$function__4_current_root_task->m_frame.f_lineno = 101;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 101;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 98;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_core$_generated_run$$$function__4_current_root_task->m_frame)) {
        frame_frame_trio$_core$_generated_run$$$function__4_current_root_task->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__4_current_root_task, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run$$$function__4_current_root_task->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__4_current_root_task, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_generated_run$$$function__4_current_root_task,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_generated_run$$$function__4_current_root_task == cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task);
    cache_frame_frame_trio$_core$_generated_run$$$function__4_current_root_task = NULL;
}

assertFrameObject(frame_frame_trio$_core$_generated_run$$$function__4_current_root_task);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_generated_run$$$function__5_reschedule(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_task = python_pars[0];
PyObject *par_next_send = python_pars[1];
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run$$$function__5_reschedule;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule = MAKE_FUNCTION_FRAME(tstate, code_objects_44eed524d3feac6d8e52675501086e37, module_trio$_core$_generated_run, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule->m_type_description == NULL);
frame_frame_trio$_core$_generated_run$$$function__5_reschedule = cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run$$$function__5_reschedule);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run$$$function__5_reschedule) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_1 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runner);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_task);
tmp_args_element_value_1 = par_task;
CHECK_OBJECT(par_next_send);
tmp_args_element_value_2 = par_next_send;
frame_frame_trio$_core$_generated_run$$$function__5_reschedule->m_frame.f_lineno = 124;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_reschedule,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__5_reschedule, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__5_reschedule, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
frame_frame_trio$_core$_generated_run$$$function__5_reschedule->m_frame.f_lineno = 126;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 126;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 123;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_core$_generated_run$$$function__5_reschedule->m_frame)) {
        frame_frame_trio$_core$_generated_run$$$function__5_reschedule->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__5_reschedule, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run$$$function__5_reschedule->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__5_reschedule, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_generated_run$$$function__5_reschedule,
    type_description_1,
    par_task,
    par_next_send
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_generated_run$$$function__5_reschedule == cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule);
    cache_frame_frame_trio$_core$_generated_run$$$function__5_reschedule = NULL;
}

assertFrameObject(frame_frame_trio$_core$_generated_run$$$function__5_reschedule);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_task);
Py_DECREF(par_task);
CHECK_OBJECT(par_next_send);
Py_DECREF(par_next_send);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_task);
Py_DECREF(par_task);
CHECK_OBJECT(par_next_send);
Py_DECREF(par_next_send);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_generated_run$$$function__6_spawn_system_task(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_async_fn = python_pars[0];
PyObject *par_name = python_pars[1];
PyObject *par_context = python_pars[2];
PyObject *par_args = python_pars[3];
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task = MAKE_FUNCTION_FRAME(tstate, code_objects_487e2e377ff744c89e0d5973bb499939, module_trio$_core$_generated_run, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task->m_type_description == NULL);
frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task = cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg4_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_2 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_runner);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_spawn_system_task);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
CHECK_OBJECT(par_async_fn);
tmp_tuple_element_1 = par_async_fn;
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_args);
tmp_direct_call_arg3_1 = par_args;
tmp_dict_key_1 = const_str_plain_name;
CHECK_OBJECT(par_name);
tmp_dict_value_1 = par_name;
tmp_direct_call_arg4_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_direct_call_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_context;
CHECK_OBJECT(par_context);
tmp_dict_value_1 = par_context;
tmp_res = PyDict_SetItem(tmp_direct_call_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1, tmp_direct_call_arg4_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "oooo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task->m_frame.f_lineno = 192;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 192;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oooo";
goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 187;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task->m_frame)) {
        frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooo";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task,
    type_description_1,
    par_async_fn,
    par_name,
    par_context,
    par_args
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task == cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task);
    cache_frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task = NULL;
}

assertFrameObject(frame_frame_trio$_core$_generated_run$$$function__6_spawn_system_task);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_async_fn);
Py_DECREF(par_async_fn);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_async_fn);
Py_DECREF(par_async_fn);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_generated_run$$$function__7_current_trio_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token)) {
    Py_XDECREF(cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token = MAKE_FUNCTION_FRAME(tstate, code_objects_b869d1ce208e158c57651f48365a6f65, module_trio$_core$_generated_run, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token->m_type_description == NULL);
frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token = cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto try_except_handler_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_runner);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_1;
}
frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token->m_frame.f_lineno = 202;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_current_trio_token);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token->m_frame.f_lineno = 204;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 204;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);

goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 201;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token->m_frame)) {
        frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token == cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token);
    cache_frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token = NULL;
}

assertFrameObject(frame_frame_trio$_core$_generated_run$$$function__7_current_trio_token);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cushion = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_cushion;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cushion);
CHECK_OBJECT(par_cushion);
Py_DECREF(par_cushion);
par_cushion = NULL;
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
struct trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals {
char const *type_description_1;
PyObject *tmp_return_value;
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
};
#endif

static PyObject *trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals *coroutine_heap = (struct trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8f1d1d4a8a9318325eee094e8f14864c, module_trio$_core$_generated_run, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
coroutine->m_frame->m_frame.f_lineno = 267;
tmp_expression_value_4 = module_var_accessor_trio$_core$_generated_run$GLOBAL_RUN_CONTEXT(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_runner);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_wait_all_tasks_blocked);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cushion);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 267;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 267;
coroutine_heap->type_description_1 = "c";
    goto try_except_handler_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
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
tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_13cb01d066a536ec9c4171dae95a5d93;
coroutine->m_frame->m_frame.f_lineno = 269;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
tmp_raise_cause_1 = Py_None;
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
coroutine_heap->exception_lineno = 269;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &coroutine_heap->exception_state, tmp_raise_cause_1);
coroutine_heap->type_description_1 = "c";
goto try_except_handler_2;
}
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 266;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "c";
goto try_except_handler_2;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
// End of try:

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto function_return_exit;

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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_context,
        module_trio$_core$_generated_run,
        mod_consts.const_str_plain_wait_all_tasks_blocked,
        NULL,
        code_objects_8f1d1d4a8a9318325eee094e8f14864c,
        closure,
        1,
#if 1
        sizeof(struct trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked$$$coroutine__1_wait_all_tasks_blocked_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__1_current_statistics(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__1_current_statistics,
        mod_consts.const_str_plain_current_statistics,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6c12720ff757fad7a48c3fa1c872f42b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_f23fe4b46b009b1a12b5c2703ff6e51b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__2_current_time(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__2_current_time,
        mod_consts.const_str_plain_current_time,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f32a6978e69aba024760ddc98c4b7e29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_cab0f80ae96f8b9bce58c066cb2b5f32,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__3_current_clock(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__3_current_clock,
        mod_consts.const_str_plain_current_clock,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a15fd1e6efb3498906021017d49324b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_6bd25650b53a865bf5d22ff926effd2d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__4_current_root_task(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__4_current_root_task,
        mod_consts.const_str_plain_current_root_task,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b7fb9360d744c3d30b7d3b27503b0d67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_09ca0378a8140b22a6318e065165f502,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__5_reschedule(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__5_reschedule,
        mod_consts.const_str_plain_reschedule,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_44eed524d3feac6d8e52675501086e37,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_498af75f7b1879a84312c2aa51622aee,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__6_spawn_system_task(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__6_spawn_system_task,
        mod_consts.const_str_plain_spawn_system_task,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_487e2e377ff744c89e0d5973bb499939,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_e4d119e5c0a52176eae76ca2374f9885,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__7_current_trio_token(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__7_current_trio_token,
        mod_consts.const_str_plain_current_trio_token,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b869d1ce208e158c57651f48365a6f65,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_09a3f9db4605f379cb8f43e47fd71e97,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked,
        mod_consts.const_str_plain_wait_all_tasks_blocked,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8f1d1d4a8a9318325eee094e8f14864c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_trio$_core$_generated_run,
        mod_consts.const_str_digest_3fb03cbccc2cf12a387a351940524658,
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

static function_impl_code const function_table_trio$_core$_generated_run[] = {
impl_trio$_core$_generated_run$$$function__1_current_statistics,
impl_trio$_core$_generated_run$$$function__2_current_time,
impl_trio$_core$_generated_run$$$function__3_current_clock,
impl_trio$_core$_generated_run$$$function__4_current_root_task,
impl_trio$_core$_generated_run$$$function__5_reschedule,
impl_trio$_core$_generated_run$$$function__6_spawn_system_task,
impl_trio$_core$_generated_run$$$function__7_current_trio_token,
impl_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked,
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

    return Nuitka_Function_GetFunctionState(function, function_table_trio$_core$_generated_run);
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
        module_trio$_core$_generated_run,
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
        function_table_trio$_core$_generated_run,
        sizeof(function_table_trio$_core$_generated_run) / sizeof(function_impl_code)
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
static char const *module_full_name = "trio._core._generated_run";
#endif

// Internal entry point for module code.
PyObject *module_code_trio$_core$_generated_run(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("trio$_core$_generated_run");

    // Store the module for future use.
    module_trio$_core$_generated_run = module;

    moduledict_trio$_core$_generated_run = MODULE_DICT(module_trio$_core$_generated_run);

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
        PRINT_STRING("trio$_core$_generated_run: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("trio$_core$_generated_run: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("trio$_core$_generated_run: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._core._generated_run" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittrio$_core$_generated_run\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_trio$_core$_generated_run,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_trio$_core$_generated_run,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_trio$_core$_generated_run,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_core$_generated_run,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_trio$_core$_generated_run,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_trio$_core$_generated_run);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_trio$_core$_generated_run);
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

        UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_trio$_core$_generated_run;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_trio$_core$_generated_run = MAKE_MODULE_FRAME(code_objects_4491e064cea82d0d33cffb7d9f9eeabb, module_trio$_core$_generated_run);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_trio$_core$_generated_run);
assert(Py_REFCNT(frame_frame_trio$_core$_generated_run) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_trio$_core$_generated_run$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_trio$_core$_generated_run$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_False;
UPDATE_STRING_DICT0(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__ki;
tmp_globals_arg_value_1 = (PyObject *)moduledict_trio$_core$_generated_run;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_enable_ki_protection_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 8;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_trio$_core$_generated_run,
        mod_consts.const_str_plain_enable_ki_protection,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_enable_ki_protection);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_enable_ki_protection, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__run;
tmp_globals_arg_value_2 = (PyObject *)moduledict_trio$_core$_generated_run;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_48937971a26281123a932ca7855533c7_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 9;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_trio$_core$_generated_run,
        mod_consts.const_str_plain__NO_SEND,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__NO_SEND);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain__NO_SEND, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_trio$_core$_generated_run,
        mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_GLOBAL_RUN_CONTEXT, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_trio$_core$_generated_run,
        mod_consts.const_str_plain_RunStatistics,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_RunStatistics);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_RunStatistics, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_trio$_core$_generated_run,
        mod_consts.const_str_plain_Task,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Task);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_Task, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_LIST8(tstate, mod_consts.const_list_b71c13aa95f3cc941bb5597c63bd39a7_list);
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_1;
tmp_called_value_1 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_de39ce9112317edce445069ae5c3204c);

tmp_args_element_value_1 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__1_current_statistics(tstate, tmp_annotations_1);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 35;
tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_current_statistics, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_2;
tmp_called_value_2 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_19141050eff162b9ef06122f75e4a0a6);

tmp_args_element_value_2 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__2_current_time(tstate, tmp_annotations_2);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 65;
tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_current_time, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_3;
tmp_called_value_3 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_70d15b2e21be1cd67ed8910366eec26e);

tmp_args_element_value_3 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__3_current_clock(tstate, tmp_annotations_3);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 82;
tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_current_clock, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_4;
tmp_called_value_4 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_b1e9e7af62d11ac2a4a773bf9ed82119);

tmp_args_element_value_4 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__4_current_root_task(tstate, tmp_annotations_4);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 91;
tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_current_root_task, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_annotations_5;
tmp_called_value_5 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_trio$_core$_generated_run$_NO_SEND(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__NO_SEND);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_1);
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_17eb5b6c3222befe9d3764b9e07e2bde);

tmp_args_element_value_5 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__5_reschedule(tstate, tmp_defaults_1, tmp_annotations_5);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 104;
tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_reschedule, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_6;
tmp_called_value_6 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_48ee79807c1c7083843a9ad1c59b34ce);
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_82aaa4acef435a1558d5eefa02a91f07);

tmp_args_element_value_6 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__6_spawn_system_task(tstate, tmp_kw_defaults_1, tmp_annotations_6);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 129;
tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_spawn_system_task, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_7;
tmp_called_value_7 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 195;

    goto frame_exception_exit_1;
}
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_6b85af5612ece976ccb778fe9bf55b74);

tmp_args_element_value_7 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__7_current_trio_token(tstate, tmp_annotations_7);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 195;
tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_current_trio_token, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_8;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_8;
tmp_called_value_8 = module_var_accessor_trio$_core$_generated_run$enable_ki_protection(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_enable_ki_protection);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 207;

    goto frame_exception_exit_1;
}
tmp_defaults_2 = mod_consts.const_tuple_float_0_0_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_dc9bcbb03442e444eb1b1bd874156f95);
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_8 = MAKE_FUNCTION_trio$_core$_generated_run$$$function__8_wait_all_tasks_blocked(tstate, tmp_defaults_2, tmp_annotations_8);

frame_frame_trio$_core$_generated_run->m_frame.f_lineno = 207;
tmp_assign_source_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)mod_consts.const_str_plain_wait_all_tasks_blocked, tmp_assign_source_20);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_trio$_core$_generated_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_trio$_core$_generated_run->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_trio$_core$_generated_run, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_trio$_core$_generated_run);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("trio$_core$_generated_run", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "trio._core._generated_run" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_trio$_core$_generated_run);
    return module_trio$_core$_generated_run;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_trio$_core$_generated_run, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("trio$_core$_generated_run", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

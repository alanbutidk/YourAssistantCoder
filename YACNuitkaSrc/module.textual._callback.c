/* Generated code for Python module 'textual$_callback'
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



/* The "module_textual$_callback" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$_callback;
PyDictObject *moduledict_textual$_callback;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__param_count;
PyObject *const_str_plain_partial;
PyObject *const_str_plain__count_parameters;
PyObject *const_str_plain_func;
PyObject *const_str_plain_keywords;
PyObject *const_str_plain___self__;
PyObject *const_str_plain___func__;
PyObject *const_str_digest_84f505b16e196d2d8085e97af079adbe;
PyObject *const_str_plain_signature;
PyObject *const_str_plain_parameters;
PyObject *const_str_digest_0e3be1f0249e471c5a1cc1e67633496a;
PyObject *const_str_plain_count_parameters;
PyObject *const_str_plain_callback;
PyObject *const_str_plain_params;
PyObject *const_str_plain_isawaitable;
PyObject *const_str_plain_result;
PyObject *const_str_plain__invoke;
PyObject *const_str_plain_active_app;
PyObject *const_str_plain_debug;
PyObject *const_str_plain_features;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_4341a42ffdc384fbf150b4977cdc010a;
PyObject *const_str_plain_log_slow;
PyObject *const_str_digest_0e5fdb45866c9753bc28cf43f6e6223b;
PyObject *const_str_plain_asyncio;
PyObject *const_str_plain_get_running_loop;
PyObject *const_str_plain_call_later;
PyObject *const_str_plain_INVOKE_TIMEOUT_WARNING;
PyObject *const_str_plain_cancel;
PyObject *const_str_plain_invoke;
PyObject *const_str_plain_app;
PyObject *const_str_plain_log;
PyObject *const_str_plain_warning;
PyObject *const_str_digest_d558831a6b5b34fda97cbd9df231990d;
PyObject *const_str_digest_bc9591d57ce5b5b9746eab0de0a1edb8;
PyObject *const_str_digest_3b696bf9274a5117e5f4134eb89c8387;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_tuple_str_plain_isawaitable_str_plain_signature_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_textual;
PyObject *const_tuple_str_plain_active_app_tuple;
PyObject *const_int_pos_3;
PyObject *const_dict_f9e055ebc07257986242654af1b42d90;
PyObject *const_dict_fc09163595bf4d3f3821a9181c211c1f;
PyObject *const_dict_b5706e1b957781779d5481206ae6e91d;
PyObject *const_str_digest_ae3ea009d7f5c9aefd8689cc60e86fd9;
PyObject *const_str_digest_576e2452385956185a664dc0c924c6d7;
PyObject *const_tuple_str_plain_func_tuple;
PyObject *const_tuple_410b4994e0abdbe1dc4427c1cc0eedd5_tuple;
PyObject *const_tuple_str_plain_func_str_plain_param_count_tuple;
PyObject *const_tuple_1d2dea27a3346d30fdc051d5cc77414f_tuple;
PyObject *const_tuple_str_plain_app_str_plain_callback_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[56];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual._callback"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__param_count);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__count_parameters);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_func);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_keywords);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain___self__);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain___func__);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_84f505b16e196d2d8085e97af079adbe);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_parameters);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e3be1f0249e471c5a1cc1e67633496a);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_count_parameters);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_callback);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_params);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_isawaitable);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_result);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__invoke);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_active_app);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_debug);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_features);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_4341a42ffdc384fbf150b4977cdc010a);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_log_slow);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_0e5fdb45866c9753bc28cf43f6e6223b);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_call_later);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_cancel);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_invoke);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_app);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_log);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_warning);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_d558831a6b5b34fda97cbd9df231990d);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc9591d57ce5b5b9746eab0de0a1edb8);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b696bf9274a5117e5f4134eb89c8387);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isawaitable_str_plain_signature_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_textual);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_active_app_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_dict_f9e055ebc07257986242654af1b42d90);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_dict_fc09163595bf4d3f3821a9181c211c1f);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_b5706e1b957781779d5481206ae6e91d);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae3ea009d7f5c9aefd8689cc60e86fd9);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_576e2452385956185a664dc0c924c6d7);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_410b4994e0abdbe1dc4427c1cc0eedd5_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_param_count_tuple);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_1d2dea27a3346d30fdc051d5cc77414f_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_app_str_plain_callback_tuple);
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
void checkModuleConstants_textual$_callback(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__param_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__param_count);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__count_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__count_parameters);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_func));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_keywords));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_keywords);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain___self__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___self__);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain___func__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___func__);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_84f505b16e196d2d8085e97af079adbe));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84f505b16e196d2d8085e97af079adbe);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signature);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parameters);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e3be1f0249e471c5a1cc1e67633496a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e3be1f0249e471c5a1cc1e67633496a);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_count_parameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_count_parameters);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_callback));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_callback);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_params);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_isawaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isawaitable);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_result);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__invoke));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__invoke);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_active_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_active_app);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_debug));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_debug);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_features));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_features);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_4341a42ffdc384fbf150b4977cdc010a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4341a42ffdc384fbf150b4977cdc010a);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_log_slow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log_slow);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_0e5fdb45866c9753bc28cf43f6e6223b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0e5fdb45866c9753bc28cf43f6e6223b);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_asyncio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asyncio);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_running_loop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_running_loop);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_call_later));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_call_later);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_cancel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cancel);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_invoke));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_invoke);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_app));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_app);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_log));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_log);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warning);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_d558831a6b5b34fda97cbd9df231990d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d558831a6b5b34fda97cbd9df231990d);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc9591d57ce5b5b9746eab0de0a1edb8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc9591d57ce5b5b9746eab0de0a1edb8);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b696bf9274a5117e5f4134eb89c8387));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b696bf9274a5117e5f4134eb89c8387);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_isawaitable_str_plain_signature_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_isawaitable_str_plain_signature_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_textual));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_textual);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_active_app_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_active_app_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_dict_f9e055ebc07257986242654af1b42d90));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f9e055ebc07257986242654af1b42d90);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_dict_fc09163595bf4d3f3821a9181c211c1f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fc09163595bf4d3f3821a9181c211c1f);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_b5706e1b957781779d5481206ae6e91d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b5706e1b957781779d5481206ae6e91d);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae3ea009d7f5c9aefd8689cc60e86fd9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae3ea009d7f5c9aefd8689cc60e86fd9);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_576e2452385956185a664dc0c924c6d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_576e2452385956185a664dc0c924c6d7);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_func_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_410b4994e0abdbe1dc4427c1cc0eedd5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_410b4994e0abdbe1dc4427c1cc0eedd5_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_func_str_plain_param_count_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_func_str_plain_param_count_tuple);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_1d2dea27a3346d30fdc051d5cc77414f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1d2dea27a3346d30fdc051d5cc77414f_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_app_str_plain_callback_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_app_str_plain_callback_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_textual$_callback$INVOKE_TIMEOUT_WARNING(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$_count_parameters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__count_parameters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__count_parameters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__count_parameters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__count_parameters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__count_parameters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__count_parameters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__count_parameters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__count_parameters);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$_invoke(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__invoke);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__invoke);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__invoke, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__invoke);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__invoke, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__invoke);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__invoke);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__invoke);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$active_app(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_active_app);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_active_app, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_active_app);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_active_app, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$asyncio(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_asyncio);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_asyncio, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$count_parameters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_count_parameters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_count_parameters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_count_parameters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_count_parameters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_count_parameters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_count_parameters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_count_parameters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_count_parameters);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$isawaitable(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_isawaitable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isawaitable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isawaitable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_isawaitable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_isawaitable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_isawaitable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_isawaitable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_isawaitable);
    }

    return result;
}

static PyObject *module_var_accessor_textual$_callback$signature(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$_callback->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$_callback->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_signature);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$_callback->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_signature);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_signature, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_signature);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_signature, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_signature);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_signature);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_signature);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e9675025df4e35b9da270897609e34b6;
static PyCodeObject *code_objects_622fbf8d674698906a958cf76e3a26b5;
static PyCodeObject *code_objects_5a3909c3a7dbdb792853f0a00a2f6a6b;
static PyCodeObject *code_objects_d0169b774d110719a187c9e1210bcbac;
static PyCodeObject *code_objects_8c59dba6ed1197e081f9b7ce48d33e47;
static PyCodeObject *code_objects_2a16c3bb12f6865945ea3bf4f6c2a6d5;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ae3ea009d7f5c9aefd8689cc60e86fd9); CHECK_OBJECT(module_filename_obj);
code_objects_e9675025df4e35b9da270897609e34b6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_576e2452385956185a664dc0c924c6d7, mod_consts.const_str_digest_576e2452385956185a664dc0c924c6d7, NULL, NULL, 0, 0, 0);
code_objects_622fbf8d674698906a958cf76e3a26b5 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__count_parameters, mod_consts.const_str_plain__count_parameters, mod_consts.const_tuple_str_plain_func_tuple, NULL, 1, 0, 0);
code_objects_5a3909c3a7dbdb792853f0a00a2f6a6b = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__invoke, mod_consts.const_str_plain__invoke, mod_consts.const_tuple_410b4994e0abdbe1dc4427c1cc0eedd5_tuple, NULL, 1, 0, 0);
code_objects_d0169b774d110719a187c9e1210bcbac = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_count_parameters, mod_consts.const_str_plain_count_parameters, mod_consts.const_tuple_str_plain_func_str_plain_param_count_tuple, NULL, 1, 0, 0);
code_objects_8c59dba6ed1197e081f9b7ce48d33e47 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_invoke, mod_consts.const_str_plain_invoke, mod_consts.const_tuple_1d2dea27a3346d30fdc051d5cc77414f_tuple, NULL, 1, 0, 0);
code_objects_2a16c3bb12f6865945ea3bf4f6c2a6d5 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_log_slow, mod_consts.const_str_digest_0e5fdb45866c9753bc28cf43f6e6223b, mod_consts.const_tuple_str_plain_app_str_plain_callback_tuple, mod_consts.const_tuple_str_plain_app_str_plain_callback_tuple, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_textual$_callback$$$function__3__invoke$$$coroutine__1__invoke(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_textual$_callback$$$function__1_count_parameters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_callback$$$function__2__count_parameters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_callback$$$function__3__invoke(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_callback$$$function__4_invoke(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_textual$_callback$$$function__1_count_parameters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_func = python_pars[0];
PyObject *var_param_count = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_callback$$$function__1_count_parameters;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_callback$$$function__1_count_parameters = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$_callback$$$function__1_count_parameters)) {
    Py_XDECREF(cache_frame_frame_textual$_callback$$$function__1_count_parameters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_callback$$$function__1_count_parameters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_callback$$$function__1_count_parameters = MAKE_FUNCTION_FRAME(tstate, code_objects_d0169b774d110719a187c9e1210bcbac, module_textual$_callback, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_callback$$$function__1_count_parameters->m_type_description == NULL);
frame_frame_textual$_callback$$$function__1_count_parameters = cache_frame_frame_textual$_callback$$$function__1_count_parameters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_callback$$$function__1_count_parameters);
assert(Py_REFCNT(frame_frame_textual$_callback$$$function__1_count_parameters) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_func);
tmp_expression_value_1 = par_func;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__param_count);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_callback$$$function__1_count_parameters, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_callback$$$function__1_count_parameters, exception_keeper_lineno_1);
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
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 19;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$_callback$$$function__1_count_parameters->m_frame)) {
        frame_frame_textual$_callback$$$function__1_count_parameters->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_3;
branch_no_1:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_func);
tmp_isinstance_inst_1 = par_func;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_isinstance_cls_1 == NULL));
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = module_var_accessor_textual$_callback$_count_parameters(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__count_parameters);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_expression_value_2 = par_func;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_func);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_textual$_callback$$$function__1_count_parameters->m_frame.f_lineno = 24;
tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_expression_value_3 = par_func;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_args);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);

exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_expression_value_4 = par_func;
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_keywords);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_sub_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_sub_expr_right_1 == NULL));
tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
CHECK_OBJECT(tmp_sub_expr_right_1);
Py_DECREF(tmp_sub_expr_right_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_param_count == NULL);
var_param_count = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_func);
tmp_expression_value_5 = par_func;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___self__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_func);
tmp_expression_value_6 = par_func;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain___func__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_func;
    assert(old != NULL);
    par_func = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_textual$_callback$_count_parameters(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__count_parameters);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_args_element_value_2 = par_func;
frame_frame_textual$_callback$$$function__1_count_parameters->m_frame.f_lineno = 30;
tmp_sub_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_param_count == NULL);
var_param_count = tmp_assign_source_3;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_textual$_callback$_count_parameters(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__count_parameters);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_args_element_value_3 = par_func;
frame_frame_textual$_callback$$$function__1_count_parameters->m_frame.f_lineno = 32;
tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_param_count == NULL);
var_param_count = tmp_assign_source_4;
}
branch_end_3:;
branch_end_2:;
// Tried code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_param_count);
tmp_assattr_value_1 = var_param_count;
if (par_func == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_4;
}

tmp_assattr_target_1 = par_func;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__param_count, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oo";
    goto try_except_handler_4;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_callback$$$function__1_count_parameters, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_callback$$$function__1_count_parameters, exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_3);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 33;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_textual$_callback$$$function__1_count_parameters->m_frame)) {
        frame_frame_textual$_callback$$$function__1_count_parameters->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_5;
branch_no_4:;
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_callback$$$function__1_count_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_callback$$$function__1_count_parameters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_callback$$$function__1_count_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_callback$$$function__1_count_parameters,
    type_description_1,
    par_func,
    var_param_count
);


// Release cached frame if used for exception.
if (frame_frame_textual$_callback$$$function__1_count_parameters == cache_frame_frame_textual$_callback$$$function__1_count_parameters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_callback$$$function__1_count_parameters);
    cache_frame_frame_textual$_callback$$$function__1_count_parameters = NULL;
}

assertFrameObject(frame_frame_textual$_callback$$$function__1_count_parameters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_param_count);
tmp_return_value = var_param_count;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_func);
par_func = NULL;
Py_XDECREF(var_param_count);
var_param_count = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_func);
par_func = NULL;
Py_XDECREF(var_param_count);
var_param_count = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

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


static PyObject *impl_textual$_callback$$$function__2__count_parameters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_func = python_pars[0];
struct Nuitka_FrameObject *frame_frame_textual$_callback$$$function__2__count_parameters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_callback$$$function__2__count_parameters = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_callback$$$function__2__count_parameters)) {
    Py_XDECREF(cache_frame_frame_textual$_callback$$$function__2__count_parameters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_callback$$$function__2__count_parameters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_callback$$$function__2__count_parameters = MAKE_FUNCTION_FRAME(tstate, code_objects_622fbf8d674698906a958cf76e3a26b5, module_textual$_callback, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_callback$$$function__2__count_parameters->m_type_description == NULL);
frame_frame_textual$_callback$$$function__2__count_parameters = cache_frame_frame_textual$_callback$$$function__2__count_parameters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_callback$$$function__2__count_parameters);
assert(Py_REFCNT(frame_frame_textual$_callback$$$function__2__count_parameters) == 2);

// Framed code:
{
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$_callback$signature(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signature);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func);
tmp_args_element_value_1 = par_func;
frame_frame_textual$_callback$$$function__2__count_parameters->m_frame.f_lineno = 42;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_parameters);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_callback$$$function__2__count_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_callback$$$function__2__count_parameters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_callback$$$function__2__count_parameters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_callback$$$function__2__count_parameters,
    type_description_1,
    par_func
);


// Release cached frame if used for exception.
if (frame_frame_textual$_callback$$$function__2__count_parameters == cache_frame_frame_textual$_callback$$$function__2__count_parameters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_callback$$$function__2__count_parameters);
    cache_frame_frame_textual$_callback$$$function__2__count_parameters = NULL;
}

assertFrameObject(frame_frame_textual$_callback$$$function__2__count_parameters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_func);
Py_DECREF(par_func);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_func);
Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$_callback$$$function__3__invoke(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_callback = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_params = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_params;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_textual$_callback$$$function__3__invoke$$$coroutine__1__invoke(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_callback);
CHECK_OBJECT(par_callback);
Py_DECREF(par_callback);
par_callback = NULL;
CHECK_OBJECT(par_params);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
par_params = NULL;
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
struct textual$_callback$$$function__3__invoke$$$coroutine__1__invoke_locals {
PyObject *var_parameter_count;
PyObject *var_result;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *textual$_callback$$$function__3__invoke$$$coroutine__1__invoke_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_callback$$$function__3__invoke$$$coroutine__1__invoke_locals *coroutine_heap = (struct textual$_callback$$$function__3__invoke$$$coroutine__1__invoke_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_parameter_count = NULL;
coroutine_heap->var_result = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5a3909c3a7dbdb792853f0a00a2f6a6b, module_textual$_callback, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_textual$_callback$count_parameters(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_count_parameters);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 55;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_parameter_count == NULL);
coroutine_heap->var_parameter_count = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_stop_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 56;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg1_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 56;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
CHECK_OBJECT(coroutine_heap->var_parameter_count);
tmp_stop_value_1 = coroutine_heap->var_parameter_count;
tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
assert(!(tmp_subscript_value_1 == NULL));
tmp_direct_call_arg2_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_direct_call_arg2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 56;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_2 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 56;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_result == NULL);
coroutine_heap->var_result = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
tmp_called_value_2 = module_var_accessor_textual$_callback$isawaitable(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_isawaitable);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_result);
tmp_args_element_value_2 = coroutine_heap->var_result;
coroutine->m_frame->m_frame.f_lineno = 57;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 57;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
coroutine->m_frame->m_frame.f_lineno = 58;
CHECK_OBJECT(coroutine_heap->var_result);
tmp_expression_value_3 = coroutine_heap->var_result;
tmp_expression_value_2 = ASYNC_AWAIT(tstate, tmp_expression_value_3, await_normal);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 58;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_2;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 58;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_result;
    assert(old != NULL);
    coroutine_heap->var_result = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
if (coroutine_heap->var_result == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_result);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 59;
coroutine_heap->type_description_1 = "ccNoo";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = coroutine_heap->var_result;
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;

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

goto try_return_handler_1;

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
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    NULL,
    coroutine_heap->var_parameter_count,
    coroutine_heap->var_result
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
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_parameter_count);
CHECK_OBJECT(coroutine_heap->var_parameter_count);
Py_DECREF(coroutine_heap->var_parameter_count);
coroutine_heap->var_parameter_count = NULL;
Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_parameter_count);
coroutine_heap->var_parameter_count = NULL;
Py_XDECREF(coroutine_heap->var_result);
coroutine_heap->var_result = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$_callback$$$function__3__invoke$$$coroutine__1__invoke(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$_callback$$$function__3__invoke$$$coroutine__1__invoke_context,
        module_textual$_callback,
        mod_consts.const_str_plain__invoke,
        NULL,
        code_objects_5a3909c3a7dbdb792853f0a00a2f6a6b,
        closure,
        2,
#if 1
        sizeof(struct textual$_callback$$$function__3__invoke$$$coroutine__1__invoke_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_callback$$$function__4_invoke(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_callback = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_params = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_callback;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_params;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_callback);
CHECK_OBJECT(par_callback);
Py_DECREF(par_callback);
par_callback = NULL;
CHECK_OBJECT(par_params);
CHECK_OBJECT(par_params);
Py_DECREF(par_params);
par_params = NULL;
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
struct textual$_callback$$$function__4_invoke$$$coroutine__1_invoke_locals {
struct Nuitka_CellObject *var_app;
PyObject *var_log_slow;
PyObject *var_call_later_handle;
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
PyObject *tmp_return_value;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
};
#endif

static PyObject *textual$_callback$$$function__4_invoke$$$coroutine__1_invoke_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$_callback$$$function__4_invoke$$$coroutine__1_invoke_locals *coroutine_heap = (struct textual$_callback$$$function__4_invoke$$$coroutine__1_invoke_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_app = Nuitka_Cell_NewEmpty();
coroutine_heap->var_log_slow = NULL;
coroutine_heap->var_call_later_handle = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_8c59dba6ed1197e081f9b7ce48d33e47, module_textual$_callback, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$_callback$active_app(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_active_app);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 74;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 74;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 74;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 74;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_2;
}
assert(Nuitka_Cell_GET(coroutine_heap->var_app) == NULL);
Nuitka_Cell_SET(coroutine_heap->var_app, tmp_assign_source_1);

}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
tmp_cmp_expr_right_1 = PyExc_LookupError;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = Py_None;
assert(Nuitka_Cell_GET(coroutine_heap->var_app) == NULL);
Py_INCREF(tmp_assign_source_2);
Nuitka_Cell_SET(coroutine_heap->var_app, tmp_assign_source_2);

}
goto branch_end_1;
branch_no_1:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 73;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cccoo";
goto try_except_handler_3;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_app));
tmp_cmp_expr_left_2 = Nuitka_Cell_GET(coroutine_heap->var_app);
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_3 = mod_consts.const_str_plain_debug;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_app));
tmp_expression_value_2 = Nuitka_Cell_GET(coroutine_heap->var_app);
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_features);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 79;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 79;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (coroutine_heap->tmp_res == 1) ? true : false;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = coroutine_heap->var_app;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = coroutine->m_closure[0];
Py_INCREF(tmp_closure_1[1]);
tmp_assign_source_3 = MAKE_FUNCTION_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow(tstate, tmp_annotations_1, tmp_closure_1);

assert(coroutine_heap->var_log_slow == NULL);
coroutine_heap->var_log_slow = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_textual$_callback$asyncio(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_asyncio);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 88;
tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_running_loop);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_call_later);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_textual$_callback$INVOKE_TIMEOUT_WARNING(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_log_slow);
tmp_args_element_value_2 = coroutine_heap->var_log_slow;
coroutine->m_frame->m_frame.f_lineno = 88;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_call_later_handle == NULL);
coroutine_heap->var_call_later_handle = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_direct_call_arg3_1;
coroutine->m_frame->m_frame.f_lineno = 92;
tmp_direct_call_arg1_1 = module_var_accessor_textual$_callback$_invoke(tstate);
if (unlikely(tmp_direct_call_arg1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__invoke);
}

if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_direct_call_arg2_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}

tmp_direct_call_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
Py_INCREF(tmp_direct_call_arg1_1);
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_expression_value_5 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_direct_call_arg1_1, sizeof(PyObject *), &tmp_direct_call_arg2_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_direct_call_arg3_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 92;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_4;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
CHECK_OBJECT(coroutine_heap->var_call_later_handle);
tmp_called_instance_2 = coroutine_heap->var_call_later_handle;
coroutine->m_frame->m_frame.f_lineno = 94;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_cancel);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 94;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_3 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_3);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_3, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_3);
// Tried code:
{
PyObject *tmp_called_instance_3;
PyObject *tmp_call_result_2;
CHECK_OBJECT(coroutine_heap->var_call_later_handle);
tmp_called_instance_3 = coroutine_heap->var_call_later_handle;
coroutine->m_frame->m_frame.f_lineno = 94;
tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts.const_str_plain_cancel);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 94;
coroutine_heap->type_description_1 = "cccoo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
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
coroutine_heap->type_description_1 = "cccoo";
goto try_except_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_4;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
// End of try:
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_direct_call_arg3_2;
coroutine->m_frame->m_frame.f_lineno = 96;
tmp_direct_call_arg1_2 = module_var_accessor_textual$_callback$_invoke(tstate);
if (unlikely(tmp_direct_call_arg1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__invoke);
}

if (tmp_direct_call_arg1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_2);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
Py_DECREF(tmp_direct_call_arg2_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_params);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}

tmp_direct_call_arg3_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
Py_INCREF(tmp_direct_call_arg1_2);
Py_INCREF(tmp_direct_call_arg3_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2, tmp_direct_call_arg3_2};
    tmp_expression_value_7 = impl___main__$$$helper_function_complex_call_helper_pos_star_list(tstate, dir_call_args);
}
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_direct_call_arg2_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_direct_call_arg3_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_direct_call_arg1_2, sizeof(PyObject *), &tmp_direct_call_arg2_2, sizeof(PyObject *), &tmp_tuple_element_2, sizeof(PyObject *), &tmp_direct_call_arg3_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 96;
coroutine_heap->type_description_1 = "cccoo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}
branch_end_2:;

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

goto try_return_handler_1;

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
    coroutine->m_closure[0],
    coroutine->m_closure[1],
    coroutine_heap->var_app,
    coroutine_heap->var_log_slow,
    coroutine_heap->var_call_later_handle
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
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_app);
CHECK_OBJECT(coroutine_heap->var_app);
Py_DECREF(coroutine_heap->var_app);
coroutine_heap->var_app = NULL;
Py_XDECREF(coroutine_heap->var_log_slow);
coroutine_heap->var_log_slow = NULL;
Py_XDECREF(coroutine_heap->var_call_later_handle);
coroutine_heap->var_call_later_handle = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->var_app);
CHECK_OBJECT(coroutine_heap->var_app);
Py_DECREF(coroutine_heap->var_app);
coroutine_heap->var_app = NULL;
Py_XDECREF(coroutine_heap->var_log_slow);
coroutine_heap->var_log_slow = NULL;
Py_XDECREF(coroutine_heap->var_call_later_handle);
coroutine_heap->var_call_later_handle = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        textual$_callback$$$function__4_invoke$$$coroutine__1_invoke_context,
        module_textual$_callback,
        mod_consts.const_str_plain_invoke,
        NULL,
        code_objects_8c59dba6ed1197e081f9b7ce48d33e47,
        closure,
        2,
#if 1
        sizeof(struct textual$_callback$$$function__4_invoke$$$coroutine__1_invoke_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow)) {
    Py_XDECREF(cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow = MAKE_FUNCTION_FRAME(tstate, code_objects_2a16c3bb12f6865945ea3bf4f6c2a6d5, module_textual$_callback, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow->m_type_description == NULL);
frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow = cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow);
assert(Py_REFCNT(frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 83;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow->m_frame.f_lineno = 83;
tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AssertionError);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 83;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "cc";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_app);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 84;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_log);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_warning);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "cc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = mod_consts.const_str_digest_d558831a6b5b34fda97cbd9df231990d;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_callback);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 85;
type_description_1 = "cc";
    goto tuple_build_exception_1;
}

tmp_format_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "cc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_bc9591d57ce5b5b9746eab0de0a1edb8;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_format_value_2 = module_var_accessor_textual$_callback$INVOKE_TIMEOUT_WARNING(tstate);
if (unlikely(tmp_format_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING);
}

if (tmp_format_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;
type_description_1 = "cc";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "cc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_3b696bf9274a5117e5f4134eb89c8387;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow->m_frame.f_lineno = 84;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "cc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow,
    type_description_1,
    self->m_closure[0],
    self->m_closure[1]
);


// Release cached frame if used for exception.
if (frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow == cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow);
    cache_frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow = NULL;
}

assertFrameObject(frame_frame_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow);

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



static PyObject *MAKE_FUNCTION_textual$_callback$$$function__1_count_parameters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_callback$$$function__1_count_parameters,
        mod_consts.const_str_plain_count_parameters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d0169b774d110719a187c9e1210bcbac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_callback,
        mod_consts.const_str_digest_84f505b16e196d2d8085e97af079adbe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_callback$$$function__2__count_parameters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_callback$$$function__2__count_parameters,
        mod_consts.const_str_plain__count_parameters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_622fbf8d674698906a958cf76e3a26b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_callback,
        mod_consts.const_str_digest_84f505b16e196d2d8085e97af079adbe,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_callback$$$function__3__invoke(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_callback$$$function__3__invoke,
        mod_consts.const_str_plain__invoke,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5a3909c3a7dbdb792853f0a00a2f6a6b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_callback,
        mod_consts.const_str_digest_0e3be1f0249e471c5a1cc1e67633496a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_callback$$$function__4_invoke(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_callback$$$function__4_invoke,
        mod_consts.const_str_plain_invoke,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8c59dba6ed1197e081f9b7ce48d33e47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_callback,
        mod_consts.const_str_digest_0e3be1f0249e471c5a1cc1e67633496a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow,
        mod_consts.const_str_plain_log_slow,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0e5fdb45866c9753bc28cf43f6e6223b,
#endif
        code_objects_2a16c3bb12f6865945ea3bf4f6c2a6d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$_callback,
        mod_consts.const_str_digest_4341a42ffdc384fbf150b4977cdc010a,
        closure,
        2
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

static function_impl_code const function_table_textual$_callback[] = {
impl_textual$_callback$$$function__4_invoke$$$coroutine__1_invoke$$$function__1_log_slow,
impl_textual$_callback$$$function__1_count_parameters,
impl_textual$_callback$$$function__2__count_parameters,
impl_textual$_callback$$$function__3__invoke,
impl_textual$_callback$$$function__4_invoke,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$_callback);
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
        module_textual$_callback,
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
        function_table_textual$_callback,
        sizeof(function_table_textual$_callback) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual._callback";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$_callback(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$_callback");

    // Store the module for future use.
    module_textual$_callback = module;

    moduledict_textual$_callback = MODULE_DICT(module_textual$_callback);

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
        PRINT_STRING("textual$_callback: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$_callback: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$_callback: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._callback" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$_callback\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$_callback,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$_callback,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$_callback,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_callback,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$_callback,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$_callback);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$_callback);
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

        UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$_callback;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$_callback = MAKE_MODULE_FRAME(code_objects_e9675025df4e35b9da270897609e34b6, module_textual$_callback);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$_callback);
assert(Py_REFCNT(frame_frame_textual$_callback) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$_callback$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$_callback$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_asyncio;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$_callback;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_textual$_callback->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_asyncio, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_partial, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_plain_inspect;
tmp_globals_arg_value_2 = (PyObject *)moduledict_textual$_callback;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_isawaitable_str_plain_signature_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_textual$_callback->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$_callback,
        mod_consts.const_str_plain_isawaitable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_isawaitable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_isawaitable, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$_callback,
        mod_consts.const_str_plain_signature,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_signature);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_signature, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_10);
tmp_import_from_2__module = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_11);
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$_callback,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_textual$_callback,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_13);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_textual;
tmp_globals_arg_value_3 = (PyObject *)moduledict_textual$_callback;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_active_app_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_textual$_callback->m_frame.f_lineno = 8;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_textual$_callback,
        mod_consts.const_str_plain_active_app,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_active_app);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_active_app, tmp_assign_source_14);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$_callback->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$_callback, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$_callback);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_int_pos_3;
UPDATE_STRING_DICT0(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_INVOKE_TIMEOUT_WARNING, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f9e055ebc07257986242654af1b42d90);

tmp_assign_source_16 = MAKE_FUNCTION_textual$_callback$$$function__1_count_parameters(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_count_parameters, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_f9e055ebc07257986242654af1b42d90);

tmp_assign_source_17 = MAKE_FUNCTION_textual$_callback$$$function__2__count_parameters(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__count_parameters, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_fc09163595bf4d3f3821a9181c211c1f);

tmp_assign_source_18 = MAKE_FUNCTION_textual$_callback$$$function__3__invoke(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain__invoke, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_b5706e1b957781779d5481206ae6e91d);

tmp_assign_source_19 = MAKE_FUNCTION_textual$_callback$$$function__4_invoke(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_textual$_callback, (Nuitka_StringObject *)mod_consts.const_str_plain_invoke, tmp_assign_source_19);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$_callback", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual._callback" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$_callback);
    return module_textual$_callback;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$_callback, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$_callback", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

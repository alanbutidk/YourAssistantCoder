/* Generated code for Python module 'openai$lib$_old_api'
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



/* The "module_openai$lib$_old_api" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$lib$_old_api;
PyDictObject *moduledict_openai$lib$_old_api;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_INSTRUCTIONS;
PyObject *const_tuple_str_plain_symbol_tuple;
PyObject *const_str_plain__symbol;
PyObject *const_str_plain_APIRemovedInV1;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_override_tuple;
PyObject *const_str_plain_override;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_LazyProxy_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_LazyProxy;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_OpenAIError_tuple;
PyObject *const_str_plain_OpenAIError;
PyObject *const_str_digest_ffc52f59ab7491948b61168ea15c2c03;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_5ac8e0c507bcff2393aad1edd7300f9f;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_21;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_79feabcc2844f36a76e7187a660a77b3;
PyObject *const_str_digest_3f051a46b44051bba6f3b35c6a225415;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_APIRemovedInV1Proxy;
PyObject *const_int_pos_26;
PyObject *const_str_digest_ccbf6a117fcaa8dea0117e6dfcfeb28e;
PyObject *const_dict_649327bbc9f137cd11fab40cb48175a1;
PyObject *const_str_plain___load__;
PyObject *const_str_digest_53b0442d71556370dfc0d824a8fa698b;
PyObject *const_dict_02a25b1488d4df805d709b1b72840e66;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_8e9a3daad90308a90ec3124606613ef6;
PyObject *const_tuple_str_plain__symbol_tuple;
PyObject *const_list_c3f093546672d87340d47d67e2a33ec6_list;
PyObject *const_str_plain_SYMBOLS;
PyObject *const_str_plain___locals;
PyObject *const_str_plain_symbol;
PyObject *const_str_digest_c78d1f53d0f1c177e81a3701a410cc0e;
PyObject *const_str_digest_1909fc52f719896066fb2cac9bd0153b;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain__args_str_plain__kwargs_tuple;
PyObject *const_tuple_str_plain_self_str_plain_symbol_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[52];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.lib._old_api"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_INSTRUCTIONS);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_symbol_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__symbol);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIRemovedInV1);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_override_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_override);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LazyProxy_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_LazyProxy);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenAIError_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAIError);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_ffc52f59ab7491948b61168ea15c2c03);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ac8e0c507bcff2393aad1edd7300f9f);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_79feabcc2844f36a76e7187a660a77b3);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f051a46b44051bba6f3b35c6a225415);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIRemovedInV1Proxy);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_int_pos_26);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccbf6a117fcaa8dea0117e6dfcfeb28e);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain___load__);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_53b0442d71556370dfc0d824a8fa698b);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_02a25b1488d4df805d709b1b72840e66);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_8e9a3daad90308a90ec3124606613ef6);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__symbol_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_list_c3f093546672d87340d47d67e2a33ec6_list);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_SYMBOLS);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___locals);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_symbol);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_c78d1f53d0f1c177e81a3701a410cc0e);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_digest_1909fc52f719896066fb2cac9bd0153b);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__args_str_plain__kwargs_tuple);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_symbol_str_plain___class___tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
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
void checkModuleConstants_openai$lib$_old_api(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_INSTRUCTIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INSTRUCTIONS);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_symbol_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_symbol_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__symbol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__symbol);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIRemovedInV1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIRemovedInV1);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_override_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_override_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_override);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LazyProxy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_LazyProxy_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_LazyProxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LazyProxy);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenAIError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OpenAIError_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenAIError);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_ffc52f59ab7491948b61168ea15c2c03));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ffc52f59ab7491948b61168ea15c2c03);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ac8e0c507bcff2393aad1edd7300f9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ac8e0c507bcff2393aad1edd7300f9f);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_int_pos_21));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_21);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_79feabcc2844f36a76e7187a660a77b3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_79feabcc2844f36a76e7187a660a77b3);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f051a46b44051bba6f3b35c6a225415));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f051a46b44051bba6f3b35c6a225415);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIRemovedInV1Proxy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIRemovedInV1Proxy);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_int_pos_26));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_26);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccbf6a117fcaa8dea0117e6dfcfeb28e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccbf6a117fcaa8dea0117e6dfcfeb28e);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain___load__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___load__);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_53b0442d71556370dfc0d824a8fa698b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_53b0442d71556370dfc0d824a8fa698b);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_02a25b1488d4df805d709b1b72840e66));
CHECK_OBJECT_DEEP(mod_consts.const_dict_02a25b1488d4df805d709b1b72840e66);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_8e9a3daad90308a90ec3124606613ef6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8e9a3daad90308a90ec3124606613ef6);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__symbol_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__symbol_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_list_c3f093546672d87340d47d67e2a33ec6_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_c3f093546672d87340d47d67e2a33ec6_list);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_SYMBOLS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SYMBOLS);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___locals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___locals);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_symbol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_symbol);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_c78d1f53d0f1c177e81a3701a410cc0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c78d1f53d0f1c177e81a3701a410cc0e);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_digest_1909fc52f719896066fb2cac9bd0153b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1909fc52f719896066fb2cac9bd0153b);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain__args_str_plain__kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain__args_str_plain__kwargs_tuple);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_symbol_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_symbol_str_plain___class___tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 11
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
static PyObject *module_var_accessor_openai$lib$_old_api$APIRemovedInV1(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIRemovedInV1);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIRemovedInV1, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIRemovedInV1);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIRemovedInV1, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$APIRemovedInV1Proxy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1Proxy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIRemovedInV1Proxy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIRemovedInV1Proxy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIRemovedInV1Proxy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIRemovedInV1Proxy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1Proxy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1Proxy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1Proxy);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Any);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Any, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$INSTRUCTIONS(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_INSTRUCTIONS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INSTRUCTIONS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INSTRUCTIONS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_INSTRUCTIONS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_INSTRUCTIONS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_INSTRUCTIONS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_INSTRUCTIONS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_INSTRUCTIONS);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$LazyProxy(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyProxy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LazyProxy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LazyProxy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LazyProxy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LazyProxy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyProxy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyProxy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyProxy);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$OpenAIError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OpenAIError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OpenAIError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OpenAIError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OpenAIError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$SYMBOLS(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_SYMBOLS);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SYMBOLS);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SYMBOLS, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SYMBOLS);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SYMBOLS, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_SYMBOLS);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_SYMBOLS);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SYMBOLS);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$__locals(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___locals);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___locals, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___locals);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___locals, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$override(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$_old_api$symbol(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$_old_api->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$_old_api->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_symbol);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$_old_api->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_symbol);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_symbol, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_symbol);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_symbol, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_symbol);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_symbol);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_symbol);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_49f18450c8bc4e59ece81d99f24b14df;
static PyCodeObject *code_objects_4f97c8d345dc7e851bcaad7090ec82b7;
static PyCodeObject *code_objects_deb59943622d41753575e4465e014b3f;
static PyCodeObject *code_objects_e5714fdd2072cf8c1ca33ae7fdf089e7;
static PyCodeObject *code_objects_6ca7809801158538e0761c6230f6c7cc;
static PyCodeObject *code_objects_a97da83be17feae2e2c494a0eac1af7f;
static PyCodeObject *code_objects_282c887c2ab13f126e7a69585e3c98a1;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c78d1f53d0f1c177e81a3701a410cc0e); CHECK_OBJECT(module_filename_obj);
code_objects_49f18450c8bc4e59ece81d99f24b14df = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_1909fc52f719896066fb2cac9bd0153b, mod_consts.const_str_digest_1909fc52f719896066fb2cac9bd0153b, NULL, NULL, 0, 0, 0);
code_objects_4f97c8d345dc7e851bcaad7090ec82b7 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_APIRemovedInV1, mod_consts.const_str_plain_APIRemovedInV1, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_deb59943622d41753575e4465e014b3f = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_APIRemovedInV1Proxy, mod_consts.const_str_plain_APIRemovedInV1Proxy, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e5714fdd2072cf8c1ca33ae7fdf089e7 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_8e9a3daad90308a90ec3124606613ef6, mod_consts.const_tuple_str_plain_self_str_plain__args_str_plain__kwargs_tuple, NULL, 1, 0, 0);
code_objects_6ca7809801158538e0761c6230f6c7cc = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_3f051a46b44051bba6f3b35c6a225415, mod_consts.const_tuple_str_plain_self_str_plain_symbol_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 1, 0);
code_objects_a97da83be17feae2e2c494a0eac1af7f = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ccbf6a117fcaa8dea0117e6dfcfeb28e, mod_consts.const_tuple_str_plain_self_str_plain_symbol_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 1, 0);
code_objects_282c887c2ab13f126e7a69585e3c98a1 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___load__, mod_consts.const_str_digest_53b0442d71556370dfc0d824a8fa698b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__2___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__3___load__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__4___call__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$lib$_old_api$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_symbol = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$lib$_old_api$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_old_api$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_old_api$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_old_api$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_old_api$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_old_api$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6ca7809801158538e0761c6230f6c7cc, module_openai$lib$_old_api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_old_api$$$function__1___init__->m_type_description == NULL);
frame_frame_openai$lib$_old_api$$$function__1___init__ = cache_frame_frame_openai$lib$_old_api$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_old_api$$$function__1___init__);
assert(Py_REFCNT(frame_frame_openai$lib$_old_api$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 23;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$_old_api, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_openai$lib$_old_api$INSTRUCTIONS(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_INSTRUCTIONS);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 23;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_format);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 23;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_symbol);
tmp_kw_call_value_0_1 = par_symbol;
frame_frame_openai$lib$_old_api$$$function__1___init__->m_frame.f_lineno = 23;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_args_element_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_symbol_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 23;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_old_api$$$function__1___init__->m_frame.f_lineno = 23;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_old_api$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_old_api$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_old_api$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_old_api$$$function__1___init__,
    type_description_1,
    par_self,
    par_symbol,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_old_api$$$function__1___init__ == cache_frame_frame_openai$lib$_old_api$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_old_api$$$function__1___init__);
    cache_frame_frame_openai$lib$_old_api$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_openai$lib$_old_api$$$function__1___init__);

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
CHECK_OBJECT(par_symbol);
Py_DECREF(par_symbol);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_symbol);
Py_DECREF(par_symbol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_old_api$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_symbol = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$lib$_old_api$$$function__2___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_old_api$$$function__2___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_old_api$$$function__2___init__)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_old_api$$$function__2___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_old_api$$$function__2___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_old_api$$$function__2___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a97da83be17feae2e2c494a0eac1af7f, module_openai$lib$_old_api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_old_api$$$function__2___init__->m_type_description == NULL);
frame_frame_openai$lib$_old_api$$$function__2___init__ = cache_frame_frame_openai$lib$_old_api$$$function__2___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_old_api$$$function__2___init__);
assert(Py_REFCNT(frame_frame_openai$lib$_old_api$$$function__2___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$_old_api, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_old_api$$$function__2___init__->m_frame.f_lineno = 28;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain___init__);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_symbol);
tmp_assattr_value_1 = par_symbol;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__symbol, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_old_api$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_old_api$$$function__2___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_old_api$$$function__2___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_old_api$$$function__2___init__,
    type_description_1,
    par_self,
    par_symbol,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_old_api$$$function__2___init__ == cache_frame_frame_openai$lib$_old_api$$$function__2___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_old_api$$$function__2___init__);
    cache_frame_frame_openai$lib$_old_api$$$function__2___init__ = NULL;
}

assertFrameObject(frame_frame_openai$lib$_old_api$$$function__2___init__);

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
CHECK_OBJECT(par_symbol);
Py_DECREF(par_symbol);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_symbol);
Py_DECREF(par_symbol);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$_old_api$$$function__3___load__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *tmp_return_value = NULL;

    // Actual function body.
CHECK_OBJECT(par_self);
tmp_return_value = par_self;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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


static PyObject *impl_openai$lib$_old_api$$$function__4___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par__args = python_pars[1];
PyObject *par__kwargs = python_pars[2];
struct Nuitka_FrameObject *frame_frame_openai$lib$_old_api$$$function__4___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$_old_api$$$function__4___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$_old_api$$$function__4___call__)) {
    Py_XDECREF(cache_frame_frame_openai$lib$_old_api$$$function__4___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$_old_api$$$function__4___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$_old_api$$$function__4___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_e5714fdd2072cf8c1ca33ae7fdf089e7, module_openai$lib$_old_api, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$_old_api$$$function__4___call__->m_type_description == NULL);
frame_frame_openai$lib$_old_api$$$function__4___call__ = cache_frame_frame_openai$lib$_old_api$$$function__4___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_old_api$$$function__4___call__);
assert(Py_REFCNT(frame_frame_openai$lib$_old_api$$$function__4___call__) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_1;
tmp_called_value_1 = module_var_accessor_openai$lib$_old_api$APIRemovedInV1(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIRemovedInV1);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__symbol);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$_old_api$$$function__4___call__->m_frame.f_lineno = 39;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_raise_type_input_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_symbol_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 39;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_old_api$$$function__4___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_old_api$$$function__4___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_old_api$$$function__4___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_old_api$$$function__4___call__,
    type_description_1,
    par_self,
    par__args,
    par__kwargs
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$_old_api$$$function__4___call__ == cache_frame_frame_openai$lib$_old_api$$$function__4___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$_old_api$$$function__4___call__);
    cache_frame_frame_openai$lib$_old_api$$$function__4___call__ = NULL;
}

assertFrameObject(frame_frame_openai$lib$_old_api$$$function__4___call__);

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
CHECK_OBJECT(par__args);
Py_DECREF(par__args);
CHECK_OBJECT(par__kwargs);
Py_DECREF(par__kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}



static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_old_api$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3f051a46b44051bba6f3b35c6a225415,
#endif
        code_objects_6ca7809801158538e0761c6230f6c7cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_old_api,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__2___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_old_api$$$function__2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ccbf6a117fcaa8dea0117e6dfcfeb28e,
#endif
        code_objects_a97da83be17feae2e2c494a0eac1af7f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_old_api,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__3___load__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_old_api$$$function__3___load__,
        mod_consts.const_str_plain___load__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_53b0442d71556370dfc0d824a8fa698b,
#endif
        code_objects_282c887c2ab13f126e7a69585e3c98a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_old_api,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$_old_api$$$function__4___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$_old_api$$$function__4___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8e9a3daad90308a90ec3124606613ef6,
#endif
        code_objects_e5714fdd2072cf8c1ca33ae7fdf089e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$_old_api,
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

static function_impl_code const function_table_openai$lib$_old_api[] = {
impl_openai$lib$_old_api$$$function__1___init__,
impl_openai$lib$_old_api$$$function__2___init__,
impl_openai$lib$_old_api$$$function__3___load__,
impl_openai$lib$_old_api$$$function__4___call__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$lib$_old_api);
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
        module_openai$lib$_old_api,
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
        function_table_openai$lib$_old_api,
        sizeof(function_table_openai$lib$_old_api) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.lib._old_api";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$lib$_old_api(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$lib$_old_api");

    // Store the module for future use.
    module_openai$lib$_old_api = module;

    moduledict_openai$lib$_old_api = MODULE_DICT(module_openai$lib$_old_api);

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
        PRINT_STRING("openai$lib$_old_api: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$lib$_old_api: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$lib$_old_api: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.lib._old_api" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$lib$_old_api\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$lib$_old_api,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$lib$_old_api,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$lib$_old_api,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$lib$_old_api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$lib$_old_api,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$lib$_old_api);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$lib$_old_api);
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

        UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
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
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_old_api;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$lib$_old_api = MAKE_MODULE_FRAME(code_objects_49f18450c8bc4e59ece81d99f24b14df, module_openai$lib$_old_api);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_old_api);
assert(Py_REFCNT(frame_frame_openai$lib$_old_api) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$lib$_old_api$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$lib$_old_api$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$lib$_old_api,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$lib$_old_api;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_override_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 4;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$lib$_old_api,
        mod_consts.const_str_plain_override,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_override);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_override, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$lib$_old_api;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_LazyProxy_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$lib$_old_api,
        mod_consts.const_str_plain_LazyProxy,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_LazyProxy);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyProxy, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$lib$_old_api;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_OpenAIError_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 7;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$lib$_old_api,
        mod_consts.const_str_plain_OpenAIError,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_OpenAIError);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_str_digest_ffc52f59ab7491948b61168ea15c2c03;
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_INSTRUCTIONS, tmp_assign_source_12);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_openai$lib$_old_api$OpenAIError(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_13 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_13, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_14 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
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


exception_lineno = 21;

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


exception_lineno = 21;

    goto try_except_handler_2;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_16 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_16;
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


exception_lineno = 21;

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
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_APIRemovedInV1;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 21;
tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_17;
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


exception_lineno = 21;

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
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_4 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_4, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_2;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


exception_lineno = 21;

    goto try_except_handler_2;
}
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 21;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 21;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_2;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
branch_end_1:;
{
PyObject *tmp_assign_source_19;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5ac8e0c507bcff2393aad1edd7300f9f;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_str_plain_APIRemovedInV1;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
tmp_dictset_value = mod_consts.const_int_pos_21;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2 = MAKE_CLASS_FRAME(tstate, code_objects_4f97c8d345dc7e851bcaad7090ec82b7, module_openai$lib$_old_api, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2);
assert(Py_REFCNT(frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_79feabcc2844f36a76e7187a660a77b3);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_openai$lib$_old_api$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$lib$_old_api$$$class__1_APIRemovedInV1_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_4;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
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


exception_lineno = 21;

    goto try_except_handler_4;
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
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
branch_no_3:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_APIRemovedInV1;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 21;
tmp_assign_source_20 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_4;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_20);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_19 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_19);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_DECREF(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21);
locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21);
locals_openai$lib$_old_api$$$class__1_APIRemovedInV1_21 = NULL;
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
exception_lineno = 21;
goto try_except_handler_2;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1, tmp_assign_source_19);
}
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
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
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
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
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
tmp_expression_value_7 = module_var_accessor_openai$lib$_old_api$LazyProxy(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LazyProxy);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto try_except_handler_5;
}
tmp_subscript_value_2 = module_var_accessor_openai$lib$_old_api$Any(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto try_except_handler_5;
}
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_21, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_8 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_3, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_24;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_APIRemovedInV1Proxy;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 26;
tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_25;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_11 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
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
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_name_value_5;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_5 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_5, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_13;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_5;
}
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 26;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 26;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_5;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_26;
tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
}
branch_end_4:;
{
PyObject *tmp_assign_source_27;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_5ac8e0c507bcff2393aad1edd7300f9f;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_str_plain_APIRemovedInV1Proxy;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_7;
}
tmp_dictset_value = mod_consts.const_int_pos_26;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_7;
}
frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3 = MAKE_CLASS_FRAME(tstate, code_objects_deb59943622d41753575e4465e014b3f, module_openai$lib$_old_api, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3);
assert(Py_REFCNT(frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_79feabcc2844f36a76e7187a660a77b3);
tmp_closure_2[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_dictset_value = MAKE_FUNCTION_openai$lib$_old_api$$$function__2___init__(tstate, tmp_annotations_2, tmp_closure_2);

tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
tmp_called_value_4 = PyObject_GetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, mod_consts.const_str_plain_override);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_openai$lib$_old_api$override(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_649327bbc9f137cd11fab40cb48175a1);

tmp_args_element_value_1 = MAKE_FUNCTION_openai$lib$_old_api$$$function__3___load__(tstate, tmp_annotations_3);

frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3->m_frame.f_lineno = 31;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, mod_consts.const_str_plain___load__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_02a25b1488d4df805d709b1b72840e66);

tmp_dictset_value = MAKE_FUNCTION_openai$lib$_old_api$$$function__4___call__(tstate, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_7;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__symbol_tuple;
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_7;
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


exception_lineno = 26;

    goto try_except_handler_7;
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
tmp_res = PyObject_SetItem(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_7;
}
branch_no_6:;
{
PyObject *tmp_assign_source_28;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_APIRemovedInV1Proxy;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 26;
tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto try_except_handler_7;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_28);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_27 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_27);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_DECREF(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26);
locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26);
locals_openai$lib$_old_api$$$class__2_APIRemovedInV1Proxy_26 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 26;
goto try_except_handler_5;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_APIRemovedInV1Proxy, tmp_assign_source_27);
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = LIST_COPY(tstate, mod_consts.const_list_c3f093546672d87340d47d67e2a33ec6_list);
UPDATE_STRING_DICT1(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_SYMBOLS, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = module_var_accessor_openai$lib$_old_api$SYMBOLS(tstate);
assert(!(tmp_assign_source_30 == NULL));
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = (PyObject *)moduledict_openai$lib$_old_api;
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain___locals, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_openai$lib$_old_api$SYMBOLS(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SYMBOLS);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_32;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_33 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 71;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_34;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_34 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)mod_consts.const_str_plain_symbol, tmp_assign_source_34);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_6;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_called_value_6 = module_var_accessor_openai$lib$_old_api$APIRemovedInV1Proxy(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIRemovedInV1Proxy);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto try_except_handler_8;
}
tmp_kw_call_value_0_1 = module_var_accessor_openai$lib$_old_api$symbol(tstate);
assert(!(tmp_kw_call_value_0_1 == NULL));
frame_frame_openai$lib$_old_api->m_frame.f_lineno = 72;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_symbol_tuple);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_8;
}
tmp_ass_subscribed_1 = module_var_accessor_openai$lib$_old_api$__locals(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___locals);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 72;

    goto try_except_handler_8;
}
tmp_ass_subscript_1 = module_var_accessor_openai$lib$_old_api$symbol(tstate);
if (unlikely(tmp_ass_subscript_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_symbol);
}

if (tmp_ass_subscript_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 72;

    goto try_except_handler_8;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto try_except_handler_8;
}
goto loop_start_1;
loop_end_1:;
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$_old_api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$_old_api->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$_old_api, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$lib$_old_api);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$lib$_old_api", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.lib._old_api" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$lib$_old_api);
    return module_openai$lib$_old_api;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$_old_api, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$lib$_old_api", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

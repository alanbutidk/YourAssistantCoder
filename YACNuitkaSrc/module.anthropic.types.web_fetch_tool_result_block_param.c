/* Generated code for Python module 'anthropic$types$web_fetch_tool_result_block_param'
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



/* The "module_anthropic$types$web_fetch_tool_result_block_param" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$types$web_fetch_tool_result_block_param;
PyDictObject *moduledict_anthropic$types$web_fetch_tool_result_block_param;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Required;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain_TypedDict;
PyObject *const_str_plain_direct_caller_param;
PyObject *const_tuple_str_plain_DirectCallerParam_tuple;
PyObject *const_str_plain_DirectCallerParam;
PyObject *const_str_plain_web_fetch_block_param;
PyObject *const_tuple_str_plain_WebFetchBlockParam_tuple;
PyObject *const_str_plain_WebFetchBlockParam;
PyObject *const_str_plain_server_tool_caller_param;
PyObject *const_tuple_str_plain_ServerToolCallerParam_tuple;
PyObject *const_str_plain_ServerToolCallerParam;
PyObject *const_str_plain_cache_control_ephemeral_param;
PyObject *const_tuple_str_plain_CacheControlEphemeralParam_tuple;
PyObject *const_str_plain_CacheControlEphemeralParam;
PyObject *const_str_plain_server_tool_caller_20260120_param;
PyObject *const_tuple_str_plain_ServerToolCaller20260120Param_tuple;
PyObject *const_str_plain_ServerToolCaller20260120Param;
PyObject *const_str_plain_web_fetch_tool_result_error_block_param;
PyObject *const_tuple_str_plain_WebFetchToolResultErrorBlockParam_tuple;
PyObject *const_str_plain_WebFetchToolResultErrorBlockParam;
PyObject *const_str_plain_WebFetchToolResultBlockParam;
PyObject *const_str_plain_Content;
PyObject *const_str_plain_Caller;
PyObject *const_dict_b697b7227c7766cd5072bdb0d1ed9479;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_093f001a1a7b275dac7735db4e10e541;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_22;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_7b2f1926c8f555b259477ed95b376353;
PyObject *const_str_plain_content;
PyObject *const_str_digest_a9021537fea859ba8304d6087727e1a0;
PyObject *const_str_plain_tool_use_id;
PyObject *const_str_digest_31f045cf4152069aed441505506d31eb;
PyObject *const_str_digest_8ffce6c35a17729968436b4468a1273b;
PyObject *const_str_plain_cache_control;
PyObject *const_str_plain_caller;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_dbda3027d914b2549bd0b19bb75852d3;
PyObject *const_str_digest_57829402e6361ae77be5c2f03328dc0b;
PyObject *const_tuple_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[54];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.types.web_fetch_tool_result_block_param"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_Required);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_direct_caller_param);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DirectCallerParam_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirectCallerParam);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_web_fetch_block_param);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebFetchBlockParam_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchBlockParam);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_server_tool_caller_param);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerToolCallerParam_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServerToolCallerParam);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_cache_control_ephemeral_param);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CacheControlEphemeralParam_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_CacheControlEphemeralParam);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_server_tool_caller_20260120_param);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerToolCaller20260120Param_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_ServerToolCaller20260120Param);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_web_fetch_tool_result_error_block_param);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebFetchToolResultErrorBlockParam_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchToolResultBlockParam);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_Content);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Caller);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_093f001a1a7b275dac7735db4e10e541);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_int_pos_22);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b2f1926c8f555b259477ed95b376353);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_content);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_use_id);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_31f045cf4152069aed441505506d31eb);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ffce6c35a17729968436b4468a1273b);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_cache_control);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_caller);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_dbda3027d914b2549bd0b19bb75852d3);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_57829402e6361ae77be5c2f03328dc0b);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
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
void checkModuleConstants_anthropic$types$web_fetch_tool_result_block_param(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_Required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Required);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedDict);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_direct_caller_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_direct_caller_param);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DirectCallerParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DirectCallerParam_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirectCallerParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirectCallerParam);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_web_fetch_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_web_fetch_block_param);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebFetchBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebFetchBlockParam_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebFetchBlockParam);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_server_tool_caller_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server_tool_caller_param);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerToolCallerParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ServerToolCallerParam_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServerToolCallerParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServerToolCallerParam);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_cache_control_ephemeral_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cache_control_ephemeral_param);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CacheControlEphemeralParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CacheControlEphemeralParam_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_CacheControlEphemeralParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CacheControlEphemeralParam);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_server_tool_caller_20260120_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_server_tool_caller_20260120_param);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ServerToolCaller20260120Param_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ServerToolCaller20260120Param_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_ServerToolCaller20260120Param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ServerToolCaller20260120Param);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_web_fetch_tool_result_error_block_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_web_fetch_tool_result_error_block_param);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebFetchToolResultErrorBlockParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebFetchToolResultErrorBlockParam_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebFetchToolResultBlockParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebFetchToolResultBlockParam);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_Content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Content);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Caller));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Caller);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_093f001a1a7b275dac7735db4e10e541));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_093f001a1a7b275dac7735db4e10e541);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_int_pos_22));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_22);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b2f1926c8f555b259477ed95b376353));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b2f1926c8f555b259477ed95b376353);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_content);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_use_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_use_id);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_31f045cf4152069aed441505506d31eb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_31f045cf4152069aed441505506d31eb);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ffce6c35a17729968436b4468a1273b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ffce6c35a17729968436b4468a1273b);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_cache_control));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cache_control);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_caller));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_caller);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_dbda3027d914b2549bd0b19bb75852d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dbda3027d914b2549bd0b19bb75852d3);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_57829402e6361ae77be5c2f03328dc0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57829402e6361ae77be5c2f03328dc0b);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
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
static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$DirectCallerParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectCallerParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirectCallerParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirectCallerParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DirectCallerParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DirectCallerParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectCallerParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectCallerParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectCallerParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$ServerToolCaller20260120Param(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCaller20260120Param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerToolCaller20260120Param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerToolCaller20260120Param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerToolCaller20260120Param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerToolCaller20260120Param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCaller20260120Param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCaller20260120Param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCaller20260120Param);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$ServerToolCallerParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCallerParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerToolCallerParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerToolCallerParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ServerToolCallerParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ServerToolCallerParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCallerParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCallerParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCallerParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$TypedDict(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypedDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypedDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$WebFetchBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebFetchBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebFetchBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebFetchBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebFetchBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$WebFetchToolResultErrorBlockParam(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$types$web_fetch_tool_result_block_param->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_efb28d769d84a05e18eaf3bb1bb96883;
static PyCodeObject *code_objects_e5ffa9ebf3c32f4519b9d303a264efed;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_dbda3027d914b2549bd0b19bb75852d3); CHECK_OBJECT(module_filename_obj);
code_objects_efb28d769d84a05e18eaf3bb1bb96883 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_57829402e6361ae77be5c2f03328dc0b, mod_consts.const_str_digest_57829402e6361ae77be5c2f03328dc0b, NULL, NULL, 0, 0, 0);
code_objects_e5ffa9ebf3c32f4519b9d303a264efed = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_WebFetchToolResultBlockParam, mod_consts.const_str_plain_WebFetchToolResultBlockParam, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


// The module function definitions.


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

static function_impl_code const function_table_anthropic$types$web_fetch_tool_result_block_param[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$types$web_fetch_tool_result_block_param);
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
        module_anthropic$types$web_fetch_tool_result_block_param,
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
        function_table_anthropic$types$web_fetch_tool_result_block_param,
        sizeof(function_table_anthropic$types$web_fetch_tool_result_block_param) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.types.web_fetch_tool_result_block_param";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$types$web_fetch_tool_result_block_param(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$types$web_fetch_tool_result_block_param");

    // Store the module for future use.
    module_anthropic$types$web_fetch_tool_result_block_param = module;

    moduledict_anthropic$types$web_fetch_tool_result_block_param = MODULE_DICT(module_anthropic$types$web_fetch_tool_result_block_param);

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
        PRINT_STRING("anthropic$types$web_fetch_tool_result_block_param: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$types$web_fetch_tool_result_block_param: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$types$web_fetch_tool_result_block_param: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.web_fetch_tool_result_block_param" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$types$web_fetch_tool_result_block_param\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$types$web_fetch_tool_result_block_param,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$web_fetch_tool_result_block_param,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$types$web_fetch_tool_result_block_param,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$web_fetch_tool_result_block_param,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$types$web_fetch_tool_result_block_param,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$types$web_fetch_tool_result_block_param);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$types$web_fetch_tool_result_block_param);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$types$web_fetch_tool_result_block_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$types$web_fetch_tool_result_block_param = MAKE_MODULE_FRAME(code_objects_efb28d769d84a05e18eaf3bb1bb96883, module_anthropic$types$web_fetch_tool_result_block_param);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$web_fetch_tool_result_block_param);
assert(Py_REFCNT(frame_frame_anthropic$types$web_fetch_tool_result_block_param) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_8);
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
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_606d0566d8b6cb4d1c78486d78db7464_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 6;
tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_9;
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_Required,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Required);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Required, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_TypedDict,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_TypedDict);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_TypedDict, tmp_assign_source_13);
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
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_direct_caller_param;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_DirectCallerParam_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 8;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_DirectCallerParam,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_DirectCallerParam);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_DirectCallerParam, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_web_fetch_block_param;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_WebFetchBlockParam_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 9;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_WebFetchBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_WebFetchBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchBlockParam, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_server_tool_caller_param;
tmp_globals_arg_value_4 = (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ServerToolCallerParam_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 10;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_ServerToolCallerParam,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ServerToolCallerParam);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCallerParam, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_cache_control_ephemeral_param;
tmp_globals_arg_value_5 = (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_CacheControlEphemeralParam_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 11;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_CacheControlEphemeralParam,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_CacheControlEphemeralParam);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_CacheControlEphemeralParam, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_server_tool_caller_20260120_param;
tmp_globals_arg_value_6 = (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ServerToolCaller20260120Param_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 12;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_ServerToolCaller20260120Param,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ServerToolCaller20260120Param);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_ServerToolCaller20260120Param, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_web_fetch_tool_result_error_block_param;
tmp_globals_arg_value_7 = (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_WebFetchToolResultErrorBlockParam_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 13;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_anthropic$types$web_fetch_tool_result_block_param,
        mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultErrorBlockParam, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = MAKE_LIST3(tstate, mod_consts.const_str_plain_WebFetchToolResultBlockParam,mod_consts.const_str_plain_Content,mod_consts.const_str_plain_Caller);
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
tmp_expression_value_1 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$WebFetchToolResultErrorBlockParam(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$WebFetchBlockParam(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_WebFetchBlockParam);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Content, tmp_assign_source_21);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_1 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_Content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_2 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$DirectCallerParam(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DirectCallerParam);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$ServerToolCallerParam(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ServerToolCallerParam);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$ServerToolCaller20260120Param(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ServerToolCaller20260120Param);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_Caller, tmp_assign_source_22);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_TypeAlias;
tmp_ass_subscribed_2 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_Caller;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_anthropic$types$web_fetch_tool_result_block_param$TypedDict(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypedDict);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_assign_source_23 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_23, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_24 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
tmp_assign_source_25 = DICT_COPY(tstate, mod_consts.const_dict_b697b7227c7766cd5072bdb0d1ed9479);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_25;
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_26 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_26;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_WebFetchToolResultBlockParam;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 22;
tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_27;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_3;
}
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 22;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 22;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_28;
tmp_assign_source_28 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_28;
}
branch_end_1:;
{
PyObject *tmp_assign_source_29;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_093f001a1a7b275dac7735db4e10e541;
tmp_res = PyObject_SetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_WebFetchToolResultBlockParam;
tmp_res = PyObject_SetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_22;
tmp_res = PyObject_SetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2 = MAKE_CLASS_FRAME(tstate, code_objects_e5ffa9ebf3c32f4519b9d303a264efed, module_anthropic$types$web_fetch_tool_result_block_param, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2);
assert(Py_REFCNT(frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_7b2f1926c8f555b259477ed95b376353;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_content;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_a9021537fea859ba8304d6087727e1a0;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_tool_use_id;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_31f045cf4152069aed441505506d31eb;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_5 = const_str_plain_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_8ffce6c35a17729968436b4468a1273b;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_cache_control;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_Caller;
tmp_ass_subscribed_7 = PyObject_GetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_caller;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subscribed_7);
Py_DECREF(tmp_ass_subscribed_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
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


exception_lineno = 22;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_WebFetchToolResultBlockParam;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame.f_lineno = 22;
tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_30;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_29 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_29);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22);
locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22);
locals_anthropic$types$web_fetch_tool_result_block_param$$$class__1_WebFetchToolResultBlockParam_22 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 22;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)mod_consts.const_str_plain_WebFetchToolResultBlockParam, tmp_assign_source_29);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$types$web_fetch_tool_result_block_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$types$web_fetch_tool_result_block_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$types$web_fetch_tool_result_block_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$types$web_fetch_tool_result_block_param);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$types$web_fetch_tool_result_block_param", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.types.web_fetch_tool_result_block_param" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$types$web_fetch_tool_result_block_param);
    return module_anthropic$types$web_fetch_tool_result_block_param;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$types$web_fetch_tool_result_block_param, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$types$web_fetch_tool_result_block_param", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'h11$_abnf'
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



/* The "module_h11$_abnf" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_h11$_abnf;
PyDictObject *moduledict_h11$_abnf;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_d84e831aa4f1bd8d61ea8c643da18188;
PyObject *const_str_plain_OWS;
PyObject *const_str_digest_45ce616ddc08bf5c55499ffd3ba1bfe6;
PyObject *const_str_plain_token;
PyObject *const_str_plain_field_name;
PyObject *const_str_digest_c3d1dcb0a7e2a7717db5012998602bae;
PyObject *const_str_plain_vchar;
PyObject *const_str_digest_9d97d9c33fe53e9587464de8f7258a66;
PyObject *const_str_plain_vchar_or_obs_text;
PyObject *const_str_plain_field_vchar;
PyObject *const_str_digest_4c45fa9a89f407e74162e3c6e457de08;
PyObject *const_str_plain_field_content;
PyObject *const_str_digest_5ec5286ed7e4c2c5a2d6d0d0677a66e0;
PyObject *const_str_plain_field_value;
PyObject *const_str_digest_547a3660e35a18dd3b0e3df8b1ff1bf3;
PyObject *const_str_plain_header_field;
PyObject *const_str_plain_method;
PyObject *const_str_digest_0423f1dd1255f21976d4ab1a3a9f08dd;
PyObject *const_str_plain_request_target;
PyObject *const_str_digest_42c5a420e5a866ec139217973bb71ab8;
PyObject *const_str_plain_http_version;
PyObject *const_str_digest_0a6edd498f45a805bea74de25f561d5e;
PyObject *const_str_plain_request_line;
PyObject *const_str_digest_8ebff6adb1c86784e4ece53729af7991;
PyObject *const_str_plain_status_code;
PyObject *const_str_digest_7b57b32281e79c91f204c762a37cf50a;
PyObject *const_str_plain_reason_phrase;
PyObject *const_str_digest_ea2d0644452a6ac981a240e9fc9371cc;
PyObject *const_str_plain_status_line;
PyObject *const_str_digest_f46c75e1277895161cfd61a1ea507644;
PyObject *const_str_plain_HEXDIG;
PyObject *const_str_digest_991a044b5b6f2164712801cf0859741c;
PyObject *const_str_plain_chunk_size;
PyObject *const_str_digest_eef7e5c0de62eda71c9c839c64f9e245;
PyObject *const_str_plain_chunk_ext;
PyObject *const_str_digest_822a3c50cf0db3dde872c67f302ed530;
PyObject *const_str_plain_chunk_header;
PyObject *const_str_digest_deed107a76d231f1c870c34796f27264;
PyObject *const_str_digest_8dbd5e1f2ac6130125e70d11e028057f;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[41];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("h11._abnf"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_d84e831aa4f1bd8d61ea8c643da18188);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_OWS);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_45ce616ddc08bf5c55499ffd3ba1bfe6);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_name);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3d1dcb0a7e2a7717db5012998602bae);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_vchar);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d97d9c33fe53e9587464de8f7258a66);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_vchar_or_obs_text);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_vchar);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c45fa9a89f407e74162e3c6e457de08);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_content);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ec5286ed7e4c2c5a2d6d0d0677a66e0);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_value);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_547a3660e35a18dd3b0e3df8b1ff1bf3);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_header_field);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_0423f1dd1255f21976d4ab1a3a9f08dd);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_target);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_42c5a420e5a866ec139217973bb71ab8);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_version);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_0a6edd498f45a805bea74de25f561d5e);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_request_line);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ebff6adb1c86784e4ece53729af7991);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b57b32281e79c91f204c762a37cf50a);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason_phrase);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea2d0644452a6ac981a240e9fc9371cc);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_line);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_f46c75e1277895161cfd61a1ea507644);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_HEXDIG);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_991a044b5b6f2164712801cf0859741c);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_eef7e5c0de62eda71c9c839c64f9e245);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_ext);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_822a3c50cf0db3dde872c67f302ed530);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_header);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_deed107a76d231f1c870c34796f27264);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dbd5e1f2ac6130125e70d11e028057f);
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
void checkModuleConstants_h11$_abnf(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_d84e831aa4f1bd8d61ea8c643da18188));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d84e831aa4f1bd8d61ea8c643da18188);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_OWS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OWS);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_45ce616ddc08bf5c55499ffd3ba1bfe6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_45ce616ddc08bf5c55499ffd3ba1bfe6);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_name);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3d1dcb0a7e2a7717db5012998602bae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3d1dcb0a7e2a7717db5012998602bae);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_vchar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vchar);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d97d9c33fe53e9587464de8f7258a66));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d97d9c33fe53e9587464de8f7258a66);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_vchar_or_obs_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vchar_or_obs_text);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_vchar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_vchar);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c45fa9a89f407e74162e3c6e457de08));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c45fa9a89f407e74162e3c6e457de08);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_content);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ec5286ed7e4c2c5a2d6d0d0677a66e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ec5286ed7e4c2c5a2d6d0d0677a66e0);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_value);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_547a3660e35a18dd3b0e3df8b1ff1bf3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_547a3660e35a18dd3b0e3df8b1ff1bf3);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_header_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_header_field);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_0423f1dd1255f21976d4ab1a3a9f08dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0423f1dd1255f21976d4ab1a3a9f08dd);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_target));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_target);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_42c5a420e5a866ec139217973bb71ab8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_42c5a420e5a866ec139217973bb71ab8);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_version);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_0a6edd498f45a805bea74de25f561d5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0a6edd498f45a805bea74de25f561d5e);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_request_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_request_line);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ebff6adb1c86784e4ece53729af7991));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ebff6adb1c86784e4ece53729af7991);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b57b32281e79c91f204c762a37cf50a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b57b32281e79c91f204c762a37cf50a);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason_phrase));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason_phrase);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea2d0644452a6ac981a240e9fc9371cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea2d0644452a6ac981a240e9fc9371cc);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_line));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_line);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_f46c75e1277895161cfd61a1ea507644));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f46c75e1277895161cfd61a1ea507644);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_HEXDIG));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HEXDIG);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_991a044b5b6f2164712801cf0859741c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_991a044b5b6f2164712801cf0859741c);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_size));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_size);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_eef7e5c0de62eda71c9c839c64f9e245));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eef7e5c0de62eda71c9c839c64f9e245);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_ext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_ext);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_822a3c50cf0db3dde872c67f302ed530));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_822a3c50cf0db3dde872c67f302ed530);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_chunk_header));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chunk_header);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_deed107a76d231f1c870c34796f27264));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_deed107a76d231f1c870c34796f27264);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dbd5e1f2ac6130125e70d11e028057f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dbd5e1f2ac6130125e70d11e028057f);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_h11$_abnf$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_abnf->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_abnf->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_abnf->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_abnf$token(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_abnf->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_abnf->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_abnf->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_token);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_token, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_token);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_token, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_token);
    }

    return result;
}

static PyObject *module_var_accessor_h11$_abnf$vchar_or_obs_text(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_h11$_abnf->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_h11$_abnf->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_vchar_or_obs_text);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_h11$_abnf->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_vchar_or_obs_text);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_vchar_or_obs_text, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_vchar_or_obs_text);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_vchar_or_obs_text, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_vchar_or_obs_text);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_vchar_or_obs_text);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_vchar_or_obs_text);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_2ed1161dc146cee547ca6b65ec7b2433;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_deed107a76d231f1c870c34796f27264); CHECK_OBJECT(module_filename_obj);
code_objects_2ed1161dc146cee547ca6b65ec7b2433 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_8dbd5e1f2ac6130125e70d11e028057f, mod_consts.const_str_digest_8dbd5e1f2ac6130125e70d11e028057f, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


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

static function_impl_code const function_table_h11$_abnf[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_h11$_abnf);
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
        module_h11$_abnf,
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
        function_table_h11$_abnf,
        sizeof(function_table_h11$_abnf) / sizeof(function_impl_code)
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
static char const *module_full_name = "h11._abnf";
#endif

// Internal entry point for module code.
PyObject *module_code_h11$_abnf(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("h11$_abnf");

    // Store the module for future use.
    module_h11$_abnf = module;

    moduledict_h11$_abnf = MODULE_DICT(module_h11$_abnf);

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
        PRINT_STRING("h11$_abnf: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("h11$_abnf: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("h11$_abnf: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._abnf" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inith11$_abnf\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_h11$_abnf,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_h11$_abnf,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_h11$_abnf,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_abnf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_h11$_abnf,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_h11$_abnf);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_h11$_abnf);
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

        UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_h11$_abnf;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_h11$_abnf = MAKE_MODULE_FRAME(code_objects_2ed1161dc146cee547ca6b65ec7b2433, module_h11$_abnf);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_h11$_abnf);
assert(Py_REFCNT(frame_frame_h11$_abnf) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_h11$_abnf$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_h11$_abnf$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_str_digest_d84e831aa4f1bd8d61ea8c643da18188;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_OWS, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = mod_consts.const_str_digest_45ce616ddc08bf5c55499ffd3ba1bfe6;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_token, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = module_var_accessor_h11$_abnf$token(tstate);
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_field_name, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_digest_c3d1dcb0a7e2a7717db5012998602bae;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_vchar, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_digest_9d97d9c33fe53e9587464de8f7258a66;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_vchar_or_obs_text, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = module_var_accessor_h11$_abnf$vchar_or_obs_text(tstate);
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_field_vchar, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_direct_call_arg2_1;
tmp_expression_value_1 = mod_consts.const_str_digest_4c45fa9a89f407e74162e3c6e457de08;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_format);
assert(!(tmp_direct_call_arg1_1 == NULL));
tmp_direct_call_arg2_1 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_assign_source_10 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_field_content, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_direct_call_arg2_2;
tmp_expression_value_2 = mod_consts.const_str_digest_5ec5286ed7e4c2c5a2d6d0d0677a66e0;
tmp_direct_call_arg1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_format);
assert(!(tmp_direct_call_arg1_2 == NULL));
tmp_direct_call_arg2_2 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_assign_source_11 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_field_value, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_direct_call_arg2_3;
tmp_expression_value_3 = mod_consts.const_str_digest_547a3660e35a18dd3b0e3df8b1ff1bf3;
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_format);
assert(!(tmp_direct_call_arg1_3 == NULL));
tmp_direct_call_arg2_3 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_3};
    tmp_assign_source_12 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_header_field, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = module_var_accessor_h11$_abnf$token(tstate);
assert(!(tmp_assign_source_13 == NULL));
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_method, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_direct_call_arg1_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_4;
tmp_expression_value_4 = mod_consts.const_str_digest_0423f1dd1255f21976d4ab1a3a9f08dd;
tmp_direct_call_arg1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_format);
assert(!(tmp_direct_call_arg1_4 == NULL));
tmp_direct_call_arg2_4 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4, tmp_direct_call_arg2_4};
    tmp_assign_source_14 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_request_target, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = mod_consts.const_str_digest_42c5a420e5a866ec139217973bb71ab8;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_http_version, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_direct_call_arg1_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg2_5;
tmp_expression_value_5 = mod_consts.const_str_digest_0a6edd498f45a805bea74de25f561d5e;
tmp_direct_call_arg1_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_format);
assert(!(tmp_direct_call_arg1_5 == NULL));
tmp_direct_call_arg2_5 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_5);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_5, tmp_direct_call_arg2_5};
    tmp_assign_source_16 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_request_line, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = mod_consts.const_str_digest_8ebff6adb1c86784e4ece53729af7991;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_status_code, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_direct_call_arg1_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg2_6;
tmp_expression_value_6 = mod_consts.const_str_digest_7b57b32281e79c91f204c762a37cf50a;
tmp_direct_call_arg1_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_format);
assert(!(tmp_direct_call_arg1_6 == NULL));
tmp_direct_call_arg2_6 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_6);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_6, tmp_direct_call_arg2_6};
    tmp_assign_source_18 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_reason_phrase, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_direct_call_arg1_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_direct_call_arg2_7;
tmp_expression_value_7 = mod_consts.const_str_digest_ea2d0644452a6ac981a240e9fc9371cc;
tmp_direct_call_arg1_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_format);
assert(!(tmp_direct_call_arg1_7 == NULL));
tmp_direct_call_arg2_7 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_7);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_7, tmp_direct_call_arg2_7};
    tmp_assign_source_19 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_status_line, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = mod_consts.const_str_digest_f46c75e1277895161cfd61a1ea507644;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_HEXDIG, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_direct_call_arg1_8;
PyObject *tmp_expression_value_8;
PyObject *tmp_direct_call_arg2_8;
tmp_expression_value_8 = mod_consts.const_str_digest_991a044b5b6f2164712801cf0859741c;
tmp_direct_call_arg1_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_format);
assert(!(tmp_direct_call_arg1_8 == NULL));
tmp_direct_call_arg2_8 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_8);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_8, tmp_direct_call_arg2_8};
    tmp_assign_source_21 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_size, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
tmp_assign_source_22 = mod_consts.const_str_digest_eef7e5c0de62eda71c9c839c64f9e245;
UPDATE_STRING_DICT0(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_ext, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_9;
PyObject *tmp_expression_value_9;
PyObject *tmp_direct_call_arg2_9;
tmp_expression_value_9 = mod_consts.const_str_digest_822a3c50cf0db3dde872c67f302ed530;
tmp_direct_call_arg1_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_format);
assert(!(tmp_direct_call_arg1_9 == NULL));
tmp_direct_call_arg2_9 = (PyObject *)moduledict_h11$_abnf;
Py_INCREF(tmp_direct_call_arg2_9);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_9, tmp_direct_call_arg2_9};
    tmp_assign_source_23 = impl___main__$$$helper_function_complex_call_helper_star_dict(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_h11$_abnf, (Nuitka_StringObject *)mod_consts.const_str_plain_chunk_header, tmp_assign_source_23);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_h11$_abnf, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_h11$_abnf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_h11$_abnf, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_h11$_abnf);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("h11$_abnf", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "h11._abnf" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_h11$_abnf);
    return module_h11$_abnf;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_h11$_abnf, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("h11$_abnf", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

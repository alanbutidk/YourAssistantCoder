/* Generated code for Python module 'anthropic$lib$_retry'
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



/* The "module_anthropic$lib$_retry" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$_retry;
PyDictObject *moduledict_anthropic$lib$_retry;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_min;
PyObject *const_str_digest_dc072633f4c1fb4a1603cb3e56e909e7;
PyObject *const_str_plain_random;
PyObject *const_str_plain_uniform;
PyObject *const_str_digest_dc3884c9ed563c079cdd9972edf607e8;
PyObject *const_str_plain_APIStatusError;
PyObject *const_str_plain_status_code;
PyObject *const_int_pos_400;
PyObject *const_int_pos_500;
PyObject *const_str_plain__RETRYABLE_4XX;
PyObject *const_str_digest_4f7a47636ee284838353ab25e505fb2e;
PyObject *const_str_digest_95f9493dc1079247d7ffb02982d6986d;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_httpx;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_APIError_str_plain_APIStatusError_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_APIError;
PyObject *const_list_93eebf5d9094fe7c0673d4e1c4172c72_list;
PyObject *const_str_plain_HTTPError;
PyObject *const_str_plain_TRANSIENT_ERRORS;
PyObject *const_str_digest_72abf3838f5f41c3dd5f730daa19614c;
PyObject *const_frozenset_21d59f8cb4867509871927b9e23038a7;
PyObject *const_dict_e8ea56ffee43bafa94c12ba9e2cef99c;
PyObject *const_dict_067448e97ab4cce79b0f2e50e01f0f4c;
PyObject *const_str_plain_backoff;
PyObject *const_dict_5035bb294b98ee030d52ded7e01da760;
PyObject *const_str_plain_jitter;
PyObject *const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e;
PyObject *const_str_plain_is_fatal_status_error;
PyObject *const_str_digest_081667cc76a832b754567ca589ecc359;
PyObject *const_str_digest_09d4cfc29f6d85ba2bad5de6dee45ee4;
PyObject *const_tuple_str_plain_attempt_str_plain_cap_str_plain_base_tuple;
PyObject *const_tuple_str_plain_err_tuple;
PyObject *const_tuple_str_plain_low_str_plain_high_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[37];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib._retry"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc072633f4c1fb4a1603cb3e56e909e7);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_random);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_uniform);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc3884c9ed563c079cdd9972edf607e8);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_int_pos_400);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_int_pos_500);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__RETRYABLE_4XX);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f7a47636ee284838353ab25e505fb2e);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_95f9493dc1079247d7ffb02982d6986d);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIError_str_plain_APIStatusError_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIError);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_list_93eebf5d9094fe7c0673d4e1c4172c72_list);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSIENT_ERRORS);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_frozenset_21d59f8cb4867509871927b9e23038a7);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_dict_e8ea56ffee43bafa94c12ba9e2cef99c);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_067448e97ab4cce79b0f2e50e01f0f4c);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_backoff);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_jitter);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_fatal_status_error);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_081667cc76a832b754567ca589ecc359);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_09d4cfc29f6d85ba2bad5de6dee45ee4);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attempt_str_plain_cap_str_plain_base_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_err_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_low_str_plain_high_tuple);
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
void checkModuleConstants_anthropic$lib$_retry(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc072633f4c1fb4a1603cb3e56e909e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc072633f4c1fb4a1603cb3e56e909e7);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_random));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_random);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_uniform));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uniform);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc3884c9ed563c079cdd9972edf607e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc3884c9ed563c079cdd9972edf607e8);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIStatusError);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_int_pos_400));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_400);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_int_pos_500));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_500);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__RETRYABLE_4XX));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__RETRYABLE_4XX);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f7a47636ee284838353ab25e505fb2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f7a47636ee284838353ab25e505fb2e);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_95f9493dc1079247d7ffb02982d6986d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95f9493dc1079247d7ffb02982d6986d);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIError_str_plain_APIStatusError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_APIError_str_plain_APIStatusError_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIError);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_list_93eebf5d9094fe7c0673d4e1c4172c72_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_93eebf5d9094fe7c0673d4e1c4172c72_list);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_HTTPError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HTTPError);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_TRANSIENT_ERRORS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TRANSIENT_ERRORS);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_frozenset_21d59f8cb4867509871927b9e23038a7));
CHECK_OBJECT_DEEP(mod_consts.const_frozenset_21d59f8cb4867509871927b9e23038a7);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_dict_e8ea56ffee43bafa94c12ba9e2cef99c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8ea56ffee43bafa94c12ba9e2cef99c);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_067448e97ab4cce79b0f2e50e01f0f4c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_067448e97ab4cce79b0f2e50e01f0f4c);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_backoff));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_backoff);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_jitter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jitter);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_fatal_status_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_fatal_status_error);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_081667cc76a832b754567ca589ecc359));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_081667cc76a832b754567ca589ecc359);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_09d4cfc29f6d85ba2bad5de6dee45ee4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09d4cfc29f6d85ba2bad5de6dee45ee4);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_attempt_str_plain_cap_str_plain_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_attempt_str_plain_cap_str_plain_base_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_err_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_err_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_low_str_plain_high_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_low_str_plain_high_tuple);
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
static PyObject *module_var_accessor_anthropic$lib$_retry$APIError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_retry$APIStatusError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIStatusError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIStatusError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIStatusError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIStatusError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_retry$_RETRYABLE_4XX(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain__RETRYABLE_4XX);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__RETRYABLE_4XX);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__RETRYABLE_4XX, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__RETRYABLE_4XX);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__RETRYABLE_4XX, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain__RETRYABLE_4XX);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain__RETRYABLE_4XX);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__RETRYABLE_4XX);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_retry$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_retry->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_retry$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_retry->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_retry$httpx(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_retry->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_retry$random(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_retry->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_retry->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_retry->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_random);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a7fcdaf9897ca15574f8e29b8ada07fa;
static PyCodeObject *code_objects_0199d29dccb25d1a880dbc71702d3c43;
static PyCodeObject *code_objects_148fe71f5eabc913453ef32926aa3a5c;
static PyCodeObject *code_objects_ed2d83dfe6c98ec96452e35f65230a68;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_081667cc76a832b754567ca589ecc359); CHECK_OBJECT(module_filename_obj);
code_objects_a7fcdaf9897ca15574f8e29b8ada07fa = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_09d4cfc29f6d85ba2bad5de6dee45ee4, mod_consts.const_str_digest_09d4cfc29f6d85ba2bad5de6dee45ee4, NULL, NULL, 0, 0, 0);
code_objects_0199d29dccb25d1a880dbc71702d3c43 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_backoff, mod_consts.const_str_plain_backoff, mod_consts.const_tuple_str_plain_attempt_str_plain_cap_str_plain_base_tuple, NULL, 1, 2, 0);
code_objects_148fe71f5eabc913453ef32926aa3a5c = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_fatal_status_error, mod_consts.const_str_plain_is_fatal_status_error, mod_consts.const_tuple_str_plain_err_tuple, NULL, 1, 0, 0);
code_objects_ed2d83dfe6c98ec96452e35f65230a68 = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_jitter, mod_consts.const_str_plain_jitter, mod_consts.const_tuple_str_plain_low_str_plain_high_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_anthropic$lib$_retry$$$function__1_backoff(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$_retry$$$function__2_jitter(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$_retry$$$function__3_is_fatal_status_error(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$_retry$$$function__1_backoff(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_attempt = python_pars[0];
PyObject *par_cap = python_pars[1];
PyObject *par_base = python_pars[2];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_retry$$$function__1_backoff;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff = MAKE_FUNCTION_FRAME(tstate, code_objects_0199d29dccb25d1a880dbc71702d3c43, module_anthropic$lib$_retry, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff->m_type_description == NULL);
frame_frame_anthropic$lib$_retry$$$function__1_backoff = cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_retry$$$function__1_backoff);
assert(Py_REFCNT(frame_frame_anthropic$lib$_retry$$$function__1_backoff) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_pow_expr_left_1;
PyObject *tmp_pow_expr_right_1;
tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_1 != NULL);
CHECK_OBJECT(par_cap);
tmp_args_element_value_1 = par_cap;
CHECK_OBJECT(par_base);
tmp_pow_expr_left_1 = par_base;
CHECK_OBJECT(par_attempt);
tmp_pow_expr_right_1 = par_attempt;
tmp_args_element_value_2 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_retry$$$function__1_backoff->m_frame.f_lineno = 34;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_retry$$$function__1_backoff, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_retry$$$function__1_backoff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_retry$$$function__1_backoff, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_retry$$$function__1_backoff,
    type_description_1,
    par_attempt,
    par_cap,
    par_base
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_retry$$$function__1_backoff == cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff);
    cache_frame_frame_anthropic$lib$_retry$$$function__1_backoff = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_retry$$$function__1_backoff);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_attempt);
Py_DECREF(par_attempt);
CHECK_OBJECT(par_cap);
Py_DECREF(par_cap);
CHECK_OBJECT(par_base);
Py_DECREF(par_base);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_attempt);
Py_DECREF(par_attempt);
CHECK_OBJECT(par_cap);
Py_DECREF(par_cap);
CHECK_OBJECT(par_base);
Py_DECREF(par_base);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$_retry$$$function__2_jitter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_low = python_pars[0];
PyObject *par_high = python_pars[1];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_retry$$$function__2_jitter;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter = MAKE_FUNCTION_FRAME(tstate, code_objects_ed2d83dfe6c98ec96452e35f65230a68, module_anthropic$lib$_retry, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter->m_type_description == NULL);
frame_frame_anthropic$lib$_retry$$$function__2_jitter = cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_retry$$$function__2_jitter);
assert(Py_REFCNT(frame_frame_anthropic$lib$_retry$$$function__2_jitter) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$_retry$random(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_random);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_low);
tmp_args_element_value_1 = par_low;
CHECK_OBJECT(par_high);
tmp_args_element_value_2 = par_high;
frame_frame_anthropic$lib$_retry$$$function__2_jitter->m_frame.f_lineno = 39;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_uniform,
        call_args
    );
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_retry$$$function__2_jitter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_retry$$$function__2_jitter->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_retry$$$function__2_jitter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_retry$$$function__2_jitter,
    type_description_1,
    par_low,
    par_high
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_retry$$$function__2_jitter == cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter);
    cache_frame_frame_anthropic$lib$_retry$$$function__2_jitter = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_retry$$$function__2_jitter);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_low);
Py_DECREF(par_low);
CHECK_OBJECT(par_high);
Py_DECREF(par_high);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_low);
Py_DECREF(par_low);
CHECK_OBJECT(par_high);
Py_DECREF(par_high);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$_retry$$$function__3_is_fatal_status_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_err = python_pars[0];
PyObject *tmp_comparison_chain_1__comparison_result = NULL;
PyObject *tmp_comparison_chain_1__operand_2 = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error = MAKE_FUNCTION_FRAME(tstate, code_objects_148fe71f5eabc913453ef32926aa3a5c, module_anthropic$lib$_retry, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error->m_type_description == NULL);
frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error = cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error);
assert(Py_REFCNT(frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_err);
tmp_isinstance_inst_1 = par_err;
tmp_isinstance_cls_1 = module_var_accessor_anthropic$lib$_retry$APIStatusError(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIStatusError);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_err);
tmp_expression_value_1 = par_err;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__operand_2 == NULL);
tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_int_pos_400;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_comparison_chain_1__comparison_result == NULL);
tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
tmp_and_left_value_2 = tmp_comparison_chain_1__comparison_result;
Py_INCREF(tmp_and_left_value_2);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_500;
tmp_and_left_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_and_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto try_except_handler_1;
}
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
Py_DECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
Py_DECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_comparison_chain_1__operand_2);
tmp_comparison_chain_1__operand_2 = NULL;
Py_XDECREF(tmp_comparison_chain_1__comparison_result);
tmp_comparison_chain_1__comparison_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_2);

exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(tmp_and_left_value_2);
Py_DECREF(tmp_and_left_value_2);
CHECK_OBJECT(par_err);
tmp_expression_value_2 = par_err;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_anthropic$lib$_retry$_RETRYABLE_4XX(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__RETRYABLE_4XX);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_2);
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
Py_INCREF(tmp_and_left_value_1);
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error,
    type_description_1,
    par_err
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error == cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error);
    cache_frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_retry$$$function__3_is_fatal_status_error);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_err);
Py_DECREF(par_err);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_err);
Py_DECREF(par_err);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_retry$$$function__1_backoff(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_retry$$$function__1_backoff,
        mod_consts.const_str_plain_backoff,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0199d29dccb25d1a880dbc71702d3c43,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anthropic$lib$_retry,
        mod_consts.const_str_digest_dc072633f4c1fb4a1603cb3e56e909e7,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_retry$$$function__2_jitter(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_retry$$$function__2_jitter,
        mod_consts.const_str_plain_jitter,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ed2d83dfe6c98ec96452e35f65230a68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$_retry,
        mod_consts.const_str_digest_dc3884c9ed563c079cdd9972edf607e8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_retry$$$function__3_is_fatal_status_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_retry$$$function__3_is_fatal_status_error,
        mod_consts.const_str_plain_is_fatal_status_error,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_148fe71f5eabc913453ef32926aa3a5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$_retry,
        mod_consts.const_str_digest_4f7a47636ee284838353ab25e505fb2e,
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

static function_impl_code const function_table_anthropic$lib$_retry[] = {
impl_anthropic$lib$_retry$$$function__1_backoff,
impl_anthropic$lib$_retry$$$function__2_jitter,
impl_anthropic$lib$_retry$$$function__3_is_fatal_status_error,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$_retry);
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
        module_anthropic$lib$_retry,
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
        function_table_anthropic$lib$_retry,
        sizeof(function_table_anthropic$lib$_retry) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib._retry";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$_retry(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$_retry");

    // Store the module for future use.
    module_anthropic$lib$_retry = module;

    moduledict_anthropic$lib$_retry = MODULE_DICT(module_anthropic$lib$_retry);

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
        PRINT_STRING("anthropic$lib$_retry: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$_retry: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$_retry: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib._retry" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$_retry\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$_retry,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$_retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$_retry,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$_retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$_retry,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$_retry);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$_retry);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_retry;
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
tmp_assign_source_1 = mod_consts.const_str_digest_95f9493dc1079247d7ffb02982d6986d;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$_retry = MAKE_MODULE_FRAME(code_objects_a7fcdaf9897ca15574f8e29b8ada07fa, module_anthropic$lib$_retry);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_retry);
assert(Py_REFCNT(frame_frame_anthropic$lib$_retry) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$_retry$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$_retry$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_random;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$_retry;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$_retry->m_frame.f_lineno = 10;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_random, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$_retry;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$lib$_retry->m_frame.f_lineno = 12;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$lib$_retry;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_APIError_str_plain_APIStatusError_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_2;
frame_frame_anthropic$lib$_retry->m_frame.f_lineno = 14;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_anthropic$lib$_retry,
        mod_consts.const_str_plain_APIError,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_APIError);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_anthropic$lib$_retry,
        mod_consts.const_str_plain_APIStatusError,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_APIStatusError);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError, tmp_assign_source_10);
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
tmp_assign_source_11 = MAKE_LIST4(tstate, mod_consts.const_list_93eebf5d9094fe7c0673d4e1c4172c72_list);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_anthropic$lib$_retry$httpx(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_HTTPError);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_assign_source_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_anthropic$lib$_retry$APIError(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIError);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_assign_source_12, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_assign_source_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_TRANSIENT_ERRORS, tmp_assign_source_12);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_72abf3838f5f41c3dd5f730daa19614c;
tmp_ass_subscribed_1 = module_var_accessor_anthropic$lib$_retry$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_TRANSIENT_ERRORS;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_retry->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_retry, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$_retry);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_13;
tmp_assign_source_13 = mod_consts.const_frozenset_21d59f8cb4867509871927b9e23038a7;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain__RETRYABLE_4XX, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_1;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_e8ea56ffee43bafa94c12ba9e2cef99c);
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_067448e97ab4cce79b0f2e50e01f0f4c);

tmp_assign_source_14 = MAKE_FUNCTION_anthropic$lib$_retry$$$function__1_backoff(tstate, tmp_kw_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_backoff, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_5035bb294b98ee030d52ded7e01da760);

tmp_assign_source_15 = MAKE_FUNCTION_anthropic$lib$_retry$$$function__2_jitter(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_jitter, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_cf5b7b3d5c104d52d1cd532465fa7d0e);

tmp_assign_source_16 = MAKE_FUNCTION_anthropic$lib$_retry$$$function__3_is_fatal_status_error(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)mod_consts.const_str_plain_is_fatal_status_error, tmp_assign_source_16);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$_retry", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib._retry" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$_retry);
    return module_anthropic$lib$_retry;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_retry, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$_retry", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

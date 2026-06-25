/* Generated code for Python module 'google$genai$_base_url'
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



/* The "module_google$genai$_base_url" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$_base_url;
PyDictObject *moduledict_google$genai$_base_url;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__default_base_gemini_url;
PyObject *const_str_plain__default_base_vertex_url;
PyObject *const_str_digest_3032085a34cc91d3ec06956e32f97158;
PyObject *const_str_plain_base_url;
PyObject *const_str_plain_getenv;
PyObject *const_tuple_str_plain_GOOGLE_VERTEX_BASE_URL_tuple;
PyObject *const_tuple_str_plain_GOOGLE_GEMINI_BASE_URL_tuple;
PyObject *const_str_digest_35d8df0a2b452cf587faa6874924eba2;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_os;
PyObject *const_str_plain_Optional;
PyObject *const_tuple_str_plain_HttpOptions_tuple;
PyObject *const_str_plain_HttpOptions;
PyObject *const_str_plain_gemini_url;
PyObject *const_str_plain_vertex_url;
PyObject *const_str_plain_return;
PyObject *const_str_plain_set_default_base_urls;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_vertexai;
PyObject *const_str_plain_http_options;
PyObject *const_str_plain_get_base_url;
PyObject *const_str_digest_ccda2b415911dd0ca00d4b0c8707dc82;
PyObject *const_str_digest_6520cba48d888f2b3b1901fdd7fc4986;
PyObject *const_tuple_str_plain_vertexai_str_plain_http_options_tuple;
PyObject *const_tuple_str_plain_gemini_url_str_plain_vertex_url_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[26];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai._base_url"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_base_gemini_url);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_base_vertex_url);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_3032085a34cc91d3ec06956e32f97158);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_url);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_getenv);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GOOGLE_VERTEX_BASE_URL_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GOOGLE_GEMINI_BASE_URL_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_35d8df0a2b452cf587faa6874924eba2);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HttpOptions_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_HttpOptions);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_gemini_url);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_vertex_url);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_base_urls);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_vertexai);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_options);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_base_url);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_digest_ccda2b415911dd0ca00d4b0c8707dc82);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_6520cba48d888f2b3b1901fdd7fc4986);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vertexai_str_plain_http_options_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gemini_url_str_plain_vertex_url_tuple);
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
void checkModuleConstants_google$genai$_base_url(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_base_gemini_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_base_gemini_url);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_base_vertex_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_base_vertex_url);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_3032085a34cc91d3ec06956e32f97158));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3032085a34cc91d3ec06956e32f97158);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_url);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_getenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getenv);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GOOGLE_VERTEX_BASE_URL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_GOOGLE_VERTEX_BASE_URL_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GOOGLE_GEMINI_BASE_URL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_GOOGLE_GEMINI_BASE_URL_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_35d8df0a2b452cf587faa6874924eba2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_35d8df0a2b452cf587faa6874924eba2);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HttpOptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HttpOptions_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_HttpOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HttpOptions);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_gemini_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_gemini_url);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_vertex_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vertex_url);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_base_urls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_default_base_urls);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_vertexai));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vertexai);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_options);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_base_url);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_digest_ccda2b415911dd0ca00d4b0c8707dc82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ccda2b415911dd0ca00d4b0c8707dc82);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_6520cba48d888f2b3b1901fdd7fc4986));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6520cba48d888f2b3b1901fdd7fc4986);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_vertexai_str_plain_http_options_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_vertexai_str_plain_http_options_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_gemini_url_str_plain_vertex_url_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_gemini_url_str_plain_vertex_url_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 5
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
static PyObject *module_var_accessor_google$genai$_base_url$HttpOptions(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_base_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_base_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpOptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_base_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HttpOptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HttpOptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_HttpOptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_HttpOptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpOptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpOptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpOptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_base_url$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_base_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_base_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_base_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_base_url$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_base_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_base_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_base_url->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_base_url$_default_base_gemini_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_base_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_base_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_gemini_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_base_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_base_gemini_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_base_gemini_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_base_gemini_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_base_gemini_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_gemini_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_gemini_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_gemini_url);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_base_url$_default_base_vertex_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_base_url->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_base_url->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_vertex_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_base_url->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_base_vertex_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_base_vertex_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__default_base_vertex_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__default_base_vertex_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_vertex_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_vertex_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_vertex_url);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e08f3d588b4d747d16eb3146480de517;
static PyCodeObject *code_objects_880f7691713432f8d12e18cbfc9a65f8;
static PyCodeObject *code_objects_65353ca504fdbcca1142bb8c00f6ada1;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_ccda2b415911dd0ca00d4b0c8707dc82); CHECK_OBJECT(module_filename_obj);
code_objects_e08f3d588b4d747d16eb3146480de517 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6520cba48d888f2b3b1901fdd7fc4986, mod_consts.const_str_digest_6520cba48d888f2b3b1901fdd7fc4986, NULL, NULL, 0, 0, 0);
code_objects_880f7691713432f8d12e18cbfc9a65f8 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_base_url, mod_consts.const_str_plain_get_base_url, mod_consts.const_tuple_str_plain_vertexai_str_plain_http_options_tuple, NULL, 2, 0, 0);
code_objects_65353ca504fdbcca1142bb8c00f6ada1 = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_default_base_urls, mod_consts.const_str_plain_set_default_base_urls, mod_consts.const_tuple_str_plain_gemini_url_str_plain_vertex_url_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$genai$_base_url$$$function__1_set_default_base_urls(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_base_url$$$function__2_get_base_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$genai$_base_url$$$function__1_set_default_base_urls(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_gemini_url = python_pars[0];
PyObject *par_vertex_url = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_gemini_url);
tmp_assign_source_1 = par_gemini_url;
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_gemini_url, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(par_vertex_url);
tmp_assign_source_2 = par_vertex_url;
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_vertex_url, tmp_assign_source_2);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_gemini_url);
Py_DECREF(par_gemini_url);
CHECK_OBJECT(par_vertex_url);
Py_DECREF(par_vertex_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_base_url$$$function__2_get_base_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_vertexai = python_pars[0];
PyObject *par_http_options = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$genai$_base_url$$$function__2_get_base_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url)) {
    Py_XDECREF(cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url = MAKE_FUNCTION_FRAME(tstate, code_objects_880f7691713432f8d12e18cbfc9a65f8, module_google$genai$_base_url, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url->m_type_description == NULL);
frame_frame_google$genai$_base_url$$$function__2_get_base_url = cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_base_url$$$function__2_get_base_url);
assert(Py_REFCNT(frame_frame_google$genai$_base_url$$$function__2_get_base_url) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_http_options);
tmp_truth_name_1 = CHECK_IF_TRUE(par_http_options);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_http_options);
tmp_expression_value_1 = par_http_options;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_base_url);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 44;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_http_options);
tmp_expression_value_2 = par_http_options;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_base_url);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_vertexai);
tmp_truth_name_3 = CHECK_IF_TRUE(par_vertexai);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_instance_1;
tmp_or_left_value_1 = module_var_accessor_google$genai$_base_url$_default_base_vertex_url(tstate);
if (unlikely(tmp_or_left_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__default_base_vertex_url);
}

if (tmp_or_left_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_google$genai$_base_url$$$function__2_get_base_url->m_frame.f_lineno = 48;
tmp_or_right_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getenv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_GOOGLE_VERTEX_BASE_URL_tuple, 0)
);

if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_called_instance_2;
tmp_or_left_value_2 = module_var_accessor_google$genai$_base_url$_default_base_gemini_url(tstate);
if (unlikely(tmp_or_left_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__default_base_gemini_url);
}

if (tmp_or_left_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_called_instance_2 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_2 == NULL));
frame_frame_google$genai$_base_url$$$function__2_get_base_url->m_frame.f_lineno = 50;
tmp_or_right_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_getenv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_GOOGLE_GEMINI_BASE_URL_tuple, 0)
);

if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_return_value = tmp_or_left_value_2;
or_end_2:;
goto frame_return_exit_1;
}
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_base_url$$$function__2_get_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_base_url$$$function__2_get_base_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_base_url$$$function__2_get_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_base_url$$$function__2_get_base_url,
    type_description_1,
    par_vertexai,
    par_http_options
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_base_url$$$function__2_get_base_url == cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url);
    cache_frame_frame_google$genai$_base_url$$$function__2_get_base_url = NULL;
}

assertFrameObject(frame_frame_google$genai$_base_url$$$function__2_get_base_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_vertexai);
Py_DECREF(par_vertexai);
CHECK_OBJECT(par_http_options);
Py_DECREF(par_http_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_vertexai);
Py_DECREF(par_vertexai);
CHECK_OBJECT(par_http_options);
Py_DECREF(par_http_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$genai$_base_url$$$function__1_set_default_base_urls(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_base_url$$$function__1_set_default_base_urls,
        mod_consts.const_str_plain_set_default_base_urls,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_65353ca504fdbcca1142bb8c00f6ada1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_base_url,
        mod_consts.const_str_digest_3032085a34cc91d3ec06956e32f97158,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_base_url$$$function__2_get_base_url(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_base_url$$$function__2_get_base_url,
        mod_consts.const_str_plain_get_base_url,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_880f7691713432f8d12e18cbfc9a65f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_base_url,
        mod_consts.const_str_digest_35d8df0a2b452cf587faa6874924eba2,
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

static function_impl_code const function_table_google$genai$_base_url[] = {
impl_google$genai$_base_url$$$function__1_set_default_base_urls,
impl_google$genai$_base_url$$$function__2_get_base_url,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$_base_url);
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
        module_google$genai$_base_url,
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
        function_table_google$genai$_base_url,
        sizeof(function_table_google$genai$_base_url) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai._base_url";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$_base_url(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$_base_url");

    // Store the module for future use.
    module_google$genai$_base_url = module;

    moduledict_google$genai$_base_url = MODULE_DICT(module_google$genai$_base_url);

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
        PRINT_STRING("google$genai$_base_url: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$_base_url: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$_base_url: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._base_url" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$_base_url\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$_base_url,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$_base_url,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$_base_url,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_base_url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_base_url,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$_base_url);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$_base_url);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$genai$_base_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$_base_url = MAKE_MODULE_FRAME(code_objects_e08f3d588b4d747d16eb3146480de517, module_google$genai$_base_url);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_base_url);
assert(Py_REFCNT(frame_frame_google$genai$_base_url) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$_base_url$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$_base_url$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_base_url,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_types;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_base_url;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_HttpOptions_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_base_url->m_frame.f_lineno = 19;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$genai$_base_url,
        mod_consts.const_str_plain_HttpOptions,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_HttpOptions);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpOptions, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_gemini_url, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain__default_base_vertex_url, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_gemini_url;
tmp_expression_value_1 = module_var_accessor_google$genai$_base_url$Optional(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_vertex_url;
tmp_expression_value_2 = module_var_accessor_google$genai$_base_url$Optional(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto dict_build_exception_1;
}
tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_9 = MAKE_FUNCTION_google$genai$_base_url$$$function__1_set_default_base_urls(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_set_default_base_urls, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_vertexai;
tmp_dict_value_2 = (PyObject *)&PyBool_Type;
tmp_annotations_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_http_options;
tmp_expression_value_3 = module_var_accessor_google$genai$_base_url$Optional(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_subscript_value_3 = module_var_accessor_google$genai$_base_url$HttpOptions(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_HttpOptions);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_4 = module_var_accessor_google$genai$_base_url$Optional(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto dict_build_exception_2;
}
tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_10 = MAKE_FUNCTION_google$genai$_base_url$$$function__2_get_base_url(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$genai$_base_url, (Nuitka_StringObject *)mod_consts.const_str_plain_get_base_url, tmp_assign_source_10);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_base_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$_base_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$_base_url", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._base_url" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$_base_url);
    return module_google$genai$_base_url;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_base_url, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$_base_url", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'google$auth$crypt'
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



/* The "module_google$auth$crypt" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$auth$crypt;
PyDictObject *moduledict_google$auth$crypt;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_type_str_type_bytes_tuple;
PyObject *const_str_plain_verifier_cls;
PyObject *const_str_plain_from_string;
PyObject *const_str_plain_verify;
PyObject *const_str_plain_message;
PyObject *const_str_plain_signature;
PyObject *const_str_digest_a121be10d7c2f7ad3266b1667c14e308;
PyObject *const_str_digest_f410fa3c85189079c86d951e8ed1dd85;
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_2a5a7c287e191e28412429f68fdff0ea_tuple;
PyObject *const_str_digest_b8a3bc35b690490d9a09308859df78e9;
PyObject *const_tuple_c5e070f7764f1154ef7d21393417a63e_tuple;
PyObject *const_str_plain_crypt;
PyObject *const_tuple_67c189733155a7e2d24799cd3f57da61_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
PyObject *const_tuple_str_plain_base_tuple;
PyObject *const_str_plain_base;
PyObject *const_tuple_str_plain_es_tuple;
PyObject *const_str_plain_es;
PyObject *const_tuple_str_plain_es256_tuple;
PyObject *const_str_plain_es256;
PyObject *const_tuple_str_plain_rsa_tuple;
PyObject *const_str_plain_rsa;
PyObject *const_str_plain_EsSigner;
PyObject *const_str_plain_EsVerifier;
PyObject *const_str_plain_ES256Signer;
PyObject *const_str_plain_ES256Verifier;
PyObject *const_str_plain_Signer;
PyObject *const_str_plain_Verifier;
PyObject *const_str_plain_RSASigner;
PyObject *const_str_plain_RSAVerifier;
PyObject *const_str_plain_verify_signature;
PyObject *const_list_cfeed562f843757dad5f09f8590739aa_list;
PyObject *const_str_digest_560aef8623fc0db412f0fcf13b162f77;
PyObject *const_str_digest_f6f73f3b2ffc27aee4d7c78904741cb0;
PyObject *const_tuple_d3ca9f11c8255eed7b6eed85f500e5e2_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[40];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.auth.crypt"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_verifier_cls);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_string);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_signature);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_a121be10d7c2f7ad3266b1667c14e308);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_f410fa3c85189079c86d951e8ed1dd85);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_2a5a7c287e191e28412429f68fdff0ea_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8a3bc35b690490d9a09308859df78e9);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_c5e070f7764f1154ef7d21393417a63e_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_crypt);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_67c189733155a7e2d24799cd3f57da61_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_base_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_base);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_es_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_es);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_es256_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_es256);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rsa_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_rsa);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_EsSigner);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_EsVerifier);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ES256Signer);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ES256Verifier);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Signer);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSASigner);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_RSAVerifier);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_verify_signature);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_list_cfeed562f843757dad5f09f8590739aa_list);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_560aef8623fc0db412f0fcf13b162f77);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6f73f3b2ffc27aee4d7c78904741cb0);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_d3ca9f11c8255eed7b6eed85f500e5e2_tuple);
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
void checkModuleConstants_google$auth$crypt(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_type_bytes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_type_bytes_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_verifier_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verifier_cls);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_string);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signature);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_a121be10d7c2f7ad3266b1667c14e308));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a121be10d7c2f7ad3266b1667c14e308);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_f410fa3c85189079c86d951e8ed1dd85));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f410fa3c85189079c86d951e8ed1dd85);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_2a5a7c287e191e28412429f68fdff0ea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2a5a7c287e191e28412429f68fdff0ea_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8a3bc35b690490d9a09308859df78e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8a3bc35b690490d9a09308859df78e9);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_c5e070f7764f1154ef7d21393417a63e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c5e070f7764f1154ef7d21393417a63e_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_crypt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_crypt);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_67c189733155a7e2d24799cd3f57da61_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_67c189733155a7e2d24799cd3f57da61_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_base_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_base_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_base));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_es_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_es_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_es));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_es);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_es256_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_es256_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_es256));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_es256);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_rsa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_rsa_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_rsa));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rsa);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_EsSigner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EsSigner);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_EsVerifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EsVerifier);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ES256Signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ES256Signer);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ES256Verifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ES256Verifier);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Signer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Signer);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Verifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Verifier);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSASigner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RSASigner);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_RSAVerifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RSAVerifier);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_verify_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_verify_signature);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_list_cfeed562f843757dad5f09f8590739aa_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_cfeed562f843757dad5f09f8590739aa_list);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_560aef8623fc0db412f0fcf13b162f77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_560aef8623fc0db412f0fcf13b162f77);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6f73f3b2ffc27aee4d7c78904741cb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f6f73f3b2ffc27aee4d7c78904741cb0);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_d3ca9f11c8255eed7b6eed85f500e5e2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d3ca9f11c8255eed7b6eed85f500e5e2_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 6
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
static PyObject *module_var_accessor_google$auth$crypt$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$base(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$es(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_es);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_es, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_es);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_es, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_es);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$es256(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es256);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_es256);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_es256, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_es256);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_es256, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es256);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es256);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_es256);
    }

    return result;
}

static PyObject *module_var_accessor_google$auth$crypt$rsa(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$auth$crypt->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$auth$crypt->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$auth$crypt->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rsa);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rsa, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_rsa);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_rsa, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_cd92af0a46f34ad355a0a71c0276c237;
static PyCodeObject *code_objects_c0d5b3a213ee0a761aa215895ed5897c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_560aef8623fc0db412f0fcf13b162f77); CHECK_OBJECT(module_filename_obj);
code_objects_cd92af0a46f34ad355a0a71c0276c237 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_f6f73f3b2ffc27aee4d7c78904741cb0, mod_consts.const_str_digest_f6f73f3b2ffc27aee4d7c78904741cb0, NULL, NULL, 0, 0, 0);
code_objects_c0d5b3a213ee0a761aa215895ed5897c = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_verify_signature, mod_consts.const_str_plain_verify_signature, mod_consts.const_tuple_d3ca9f11c8255eed7b6eed85f500e5e2_tuple, NULL, 4, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$auth$crypt$$$function__1_verify_signature(PyThreadState *tstate, PyObject *defaults);


// The module function definitions.
static PyObject *impl_google$auth$crypt$$$function__1_verify_signature(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_signature = python_pars[1];
PyObject *par_certs = python_pars[2];
PyObject *par_verifier_cls = python_pars[3];
PyObject *var_cert = NULL;
PyObject *var_verifier = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_google$auth$crypt$$$function__1_verify_signature;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
static struct Nuitka_FrameObject *cache_frame_frame_google$auth$crypt$$$function__1_verify_signature = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$auth$crypt$$$function__1_verify_signature)) {
    Py_XDECREF(cache_frame_frame_google$auth$crypt$$$function__1_verify_signature);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$auth$crypt$$$function__1_verify_signature == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$auth$crypt$$$function__1_verify_signature = MAKE_FUNCTION_FRAME(tstate, code_objects_c0d5b3a213ee0a761aa215895ed5897c, module_google$auth$crypt, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$auth$crypt$$$function__1_verify_signature->m_type_description == NULL);
frame_frame_google$auth$crypt$$$function__1_verify_signature = cache_frame_frame_google$auth$crypt$$$function__1_verify_signature;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt$$$function__1_verify_signature);
assert(Py_REFCNT(frame_frame_google$auth$crypt$$$function__1_verify_signature) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_certs);
tmp_isinstance_inst_1 = par_certs;
tmp_isinstance_cls_1 = mod_consts.const_tuple_type_str_type_bytes_tuple;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_list_element_1;
CHECK_OBJECT(par_certs);
tmp_list_element_1 = par_certs;
tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 1);
PyList_SET_ITEM0(tmp_assign_source_1, 0, tmp_list_element_1);
{
    PyObject *old = par_certs;
    assert(old != NULL);
    par_certs = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_certs);
tmp_iter_arg_1 = par_certs;
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 80;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_4 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_cert;
    var_cert = tmp_assign_source_4;
    Py_INCREF(var_cert);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
if (par_verifier_cls == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_verifier_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_called_instance_1 = par_verifier_cls;
CHECK_OBJECT(var_cert);
tmp_args_element_value_1 = var_cert;
frame_frame_google$auth$crypt$$$function__1_verify_signature->m_frame.f_lineno = 81;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_from_string, tmp_args_element_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = var_verifier;
    var_verifier = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_verifier);
tmp_expression_value_1 = var_verifier;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_verify);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
if (par_message == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_message);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_2 = par_message;
if (par_signature == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_signature);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}

tmp_args_element_value_3 = par_signature;
frame_frame_google$auth$crypt$$$function__1_verify_signature->m_frame.f_lineno = 82;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 82;
type_description_1 = "oooooo";
    goto try_except_handler_2;
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
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_2;
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
CHECK_OBJECT(tmp_for_loop_1__iter_value);
Py_DECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
goto frame_return_exit_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt$$$function__1_verify_signature, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt$$$function__1_verify_signature->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt$$$function__1_verify_signature, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$auth$crypt$$$function__1_verify_signature,
    type_description_1,
    par_message,
    par_signature,
    par_certs,
    par_verifier_cls,
    var_cert,
    var_verifier
);


// Release cached frame if used for exception.
if (frame_frame_google$auth$crypt$$$function__1_verify_signature == cache_frame_frame_google$auth$crypt$$$function__1_verify_signature) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$auth$crypt$$$function__1_verify_signature);
    cache_frame_frame_google$auth$crypt$$$function__1_verify_signature = NULL;
}

assertFrameObject(frame_frame_google$auth$crypt$$$function__1_verify_signature);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_certs);
CHECK_OBJECT(par_certs);
Py_DECREF(par_certs);
par_certs = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
Py_XDECREF(var_verifier);
var_verifier = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_certs);
par_certs = NULL;
Py_XDECREF(var_cert);
var_cert = NULL;
Py_XDECREF(var_verifier);
var_verifier = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
CHECK_OBJECT(par_verifier_cls);
Py_DECREF(par_verifier_cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_signature);
Py_DECREF(par_signature);
CHECK_OBJECT(par_verifier_cls);
Py_DECREF(par_verifier_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$auth$crypt$$$function__1_verify_signature(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$auth$crypt$$$function__1_verify_signature,
        mod_consts.const_str_plain_verify_signature,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c0d5b3a213ee0a761aa215895ed5897c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_google$auth$crypt,
        mod_consts.const_str_digest_a121be10d7c2f7ad3266b1667c14e308,
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

static function_impl_code const function_table_google$auth$crypt[] = {
impl_google$auth$crypt$$$function__1_verify_signature,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$auth$crypt);
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
        module_google$auth$crypt,
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
        function_table_google$auth$crypt,
        sizeof(function_table_google$auth$crypt) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.auth.crypt";
#endif

// Internal entry point for module code.
PyObject *module_code_google$auth$crypt(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$auth$crypt");

    // Store the module for future use.
    module_google$auth$crypt = module;

    moduledict_google$auth$crypt = MODULE_DICT(module_google$auth$crypt);

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
        PRINT_STRING("google$auth$crypt: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$auth$crypt: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$auth$crypt: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.crypt" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$auth$crypt\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$auth$crypt,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$auth$crypt,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$auth$crypt,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$auth$crypt,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$auth$crypt);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$auth$crypt);
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

        UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_google$auth$crypt;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_f410fa3c85189079c86d951e8ed1dd85;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$auth$crypt = MAKE_MODULE_FRAME(code_objects_cd92af0a46f34ad355a0a71c0276c237, module_google$auth$crypt);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$auth$crypt);
assert(Py_REFCNT(frame_frame_google$auth$crypt) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_2a5a7c287e191e28412429f68fdff0ea_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_b8a3bc35b690490d9a09308859df78e9;
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_5 = NULL;
    }
}
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_c5e070f7764f1154ef7d21393417a63e_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_crypt;
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_6 = NULL;
    }
}
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_google$auth$crypt->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_67c189733155a7e2d24799cd3f57da61_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$auth$crypt$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$auth$crypt$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_google$auth$crypt$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_google$auth$crypt$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$auth$crypt;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_base_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$auth$crypt->m_frame.f_lineno = 40;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$auth$crypt,
        mod_consts.const_str_plain_base,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_base);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_base, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$auth$crypt;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_es_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_google$auth$crypt->m_frame.f_lineno = 41;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$auth$crypt,
        mod_consts.const_str_plain_es,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_es);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$auth$crypt;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_es256_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_google$auth$crypt->m_frame.f_lineno = 42;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$auth$crypt,
        mod_consts.const_str_plain_es256,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_es256);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_es256, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_8590e7eb2bca806d8ce623eb5a6bfac7;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$auth$crypt;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_rsa_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_google$auth$crypt->m_frame.f_lineno = 43;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$auth$crypt,
        mod_consts.const_str_plain_rsa,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_rsa);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_rsa, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_7;
tmp_expression_value_7 = module_var_accessor_google$auth$crypt$es(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto frame_exception_exit_1;
}
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_EsSigner);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_EsSigner, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = module_var_accessor_google$auth$crypt$es(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_EsVerifier);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_EsVerifier, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_google$auth$crypt$es256(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es256);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto frame_exception_exit_1;
}
tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_ES256Signer);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_ES256Signer, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_google$auth$crypt$es256(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_es256);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto frame_exception_exit_1;
}
tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ES256Verifier);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_ES256Verifier, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = module_var_accessor_google$auth$crypt$base(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;

    goto frame_exception_exit_1;
}
tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Signer);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_Signer, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = module_var_accessor_google$auth$crypt$base(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;

    goto frame_exception_exit_1;
}
tmp_assign_source_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_Verifier);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_Verifier, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_google$auth$crypt$rsa(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;

    goto frame_exception_exit_1;
}
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_RSASigner);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_RSASigner, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_expression_value_14;
tmp_expression_value_14 = module_var_accessor_google$auth$crypt$rsa(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;

    goto frame_exception_exit_1;
}
tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_RSAVerifier);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_RSAVerifier, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = module_var_accessor_google$auth$crypt$rsa(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_rsa);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_RSAVerifier);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_1);

tmp_assign_source_17 = MAKE_FUNCTION_google$auth$crypt$$$function__1_verify_signature(tstate, tmp_defaults_1);

UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)mod_consts.const_str_plain_verify_signature, tmp_assign_source_17);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$auth$crypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$auth$crypt->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$auth$crypt, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$auth$crypt);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_18;
tmp_assign_source_18 = MAKE_LIST8(tstate, mod_consts.const_list_cfeed562f843757dad5f09f8590739aa_list);
UPDATE_STRING_DICT1(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$auth$crypt", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.auth.crypt" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$auth$crypt);
    return module_google$auth$crypt;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$auth$crypt, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$auth$crypt", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

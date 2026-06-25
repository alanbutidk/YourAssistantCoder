/* Generated code for Python module 'dotenv'
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



/* The "module_dotenv" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dotenv;
PyDictObject *moduledict_dotenv;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_664be846826569a4309ad4599fe393ce;
PyObject *const_str_plain_dotenv;
PyObject *const_str_digest_72d080aaac7bed4d9406f9e7c42f85d3;
PyObject *const_str_digest_ee699f38b0b5be5dc9f50f4497299cc0;
PyObject *const_str_space;
PyObject *const_str_chr_34;
PyObject *const_str_digest_c01e5b7daab5b9a62100fecb5a7086b0;
PyObject *const_str_plain_environ;
PyObject *const_tuple_a5658d5b5d5f92493ad304d3c5bb1602_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_main;
PyObject *const_tuple_2ba985b28c4c415e4c5745a76bafcdec_tuple;
PyObject *const_str_plain_dotenv_values;
PyObject *const_str_plain_find_dotenv;
PyObject *const_str_plain_get_key;
PyObject *const_str_plain_load_dotenv;
PyObject *const_str_plain_set_key;
PyObject *const_str_plain_unset_key;
PyObject *const_str_plain_ipython;
PyObject *const_str_plain_return;
PyObject *const_str_plain_load_ipython_extension;
PyObject *const_tuple_none_none_none_none_none_tuple;
PyObject *const_str_plain_action;
PyObject *const_str_plain_key;
PyObject *const_str_plain_value;
PyObject *const_str_plain_quote;
PyObject *const_str_plain_get_cli_string;
PyObject *const_list_621c057bc43bc050039c919b9d43c5e0_list;
PyObject *const_str_digest_81d5b171d90277b7ba7d79e6bf1af2e0;
PyObject *const_str_digest_dd2d3242bf0ec97b51b1e1062b942def;
PyObject *const_tuple_675a3ba07ce8393adf1ccd39d1a1c79a_tuple;
PyObject *const_tuple_str_plain_ipython_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[36];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("dotenv"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_664be846826569a4309ad4599fe393ce);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_dotenv);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_72d080aaac7bed4d9406f9e7c42f85d3);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_ee699f38b0b5be5dc9f50f4497299cc0);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_space);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_chr_34);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_c01e5b7daab5b9a62100fecb5a7086b0);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_a5658d5b5d5f92493ad304d3c5bb1602_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_main);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_2ba985b28c4c415e4c5745a76bafcdec_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_dotenv_values);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_find_dotenv);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_key);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_dotenv);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_key);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_unset_key);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ipython);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_load_ipython_extension);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_action);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_key);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_quote);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_cli_string);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_list_621c057bc43bc050039c919b9d43c5e0_list);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_81d5b171d90277b7ba7d79e6bf1af2e0);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd2d3242bf0ec97b51b1e1062b942def);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_675a3ba07ce8393adf1ccd39d1a1c79a_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ipython_tuple);
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
void checkModuleConstants_dotenv(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_664be846826569a4309ad4599fe393ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_664be846826569a4309ad4599fe393ce);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_dotenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dotenv);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_72d080aaac7bed4d9406f9e7c42f85d3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72d080aaac7bed4d9406f9e7c42f85d3);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_ee699f38b0b5be5dc9f50f4497299cc0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ee699f38b0b5be5dc9f50f4497299cc0);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_space));
CHECK_OBJECT_DEEP(mod_consts.const_str_space);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_chr_34));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_34);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_c01e5b7daab5b9a62100fecb5a7086b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c01e5b7daab5b9a62100fecb5a7086b0);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_a5658d5b5d5f92493ad304d3c5bb1602_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a5658d5b5d5f92493ad304d3c5bb1602_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_main));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_main);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_2ba985b28c4c415e4c5745a76bafcdec_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_2ba985b28c4c415e4c5745a76bafcdec_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_dotenv_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dotenv_values);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_find_dotenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_find_dotenv);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_key);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_dotenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_dotenv);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_key);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_unset_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unset_key);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ipython));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ipython);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_load_ipython_extension));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_load_ipython_extension);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_none_none_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_action));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_action);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_key);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_quote));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_quote);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_cli_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_cli_string);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_list_621c057bc43bc050039c919b9d43c5e0_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_621c057bc43bc050039c919b9d43c5e0_list);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_81d5b171d90277b7ba7d79e6bf1af2e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81d5b171d90277b7ba7d79e6bf1af2e0);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd2d3242bf0ec97b51b1e1062b942def));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd2d3242bf0ec97b51b1e1062b942def);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_675a3ba07ce8393adf1ccd39d1a1c79a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_675a3ba07ce8393adf1ccd39d1a1c79a_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ipython_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ipython_tuple);
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
static PyObject *module_var_accessor_dotenv$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dotenv->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dotenv->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dotenv->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_dotenv$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dotenv->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dotenv->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dotenv->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_dotenv$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dotenv->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dotenv->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dotenv->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_dotenv$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_dotenv->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_dotenv->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_dotenv->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1e934c59857b9c86b7fcac7733d89339;
static PyCodeObject *code_objects_fa9441550c2d5b93c635729aa8c78b53;
static PyCodeObject *code_objects_f21eb92299d6f341e3989790c89e02e9;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_81d5b171d90277b7ba7d79e6bf1af2e0); CHECK_OBJECT(module_filename_obj);
code_objects_1e934c59857b9c86b7fcac7733d89339 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_dd2d3242bf0ec97b51b1e1062b942def, mod_consts.const_str_digest_dd2d3242bf0ec97b51b1e1062b942def, NULL, NULL, 0, 0, 0);
code_objects_fa9441550c2d5b93c635729aa8c78b53 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_get_cli_string, mod_consts.const_str_plain_get_cli_string, mod_consts.const_tuple_675a3ba07ce8393adf1ccd39d1a1c79a_tuple, NULL, 5, 0, 0);
code_objects_f21eb92299d6f341e3989790c89e02e9 = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_load_ipython_extension, mod_consts.const_str_plain_load_ipython_extension, mod_consts.const_tuple_str_plain_ipython_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_dotenv$$$function__1_load_ipython_extension(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_dotenv$$$function__2_get_cli_string(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_dotenv$$$function__1_load_ipython_extension(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ipython = python_pars[0];
struct Nuitka_FrameObject *frame_frame_dotenv$$$function__1_load_ipython_extension;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_dotenv$$$function__1_load_ipython_extension = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_dotenv$$$function__1_load_ipython_extension)) {
    Py_XDECREF(cache_frame_frame_dotenv$$$function__1_load_ipython_extension);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_dotenv$$$function__1_load_ipython_extension == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_dotenv$$$function__1_load_ipython_extension = MAKE_FUNCTION_FRAME(tstate, code_objects_f21eb92299d6f341e3989790c89e02e9, module_dotenv, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_dotenv$$$function__1_load_ipython_extension->m_type_description == NULL);
frame_frame_dotenv$$$function__1_load_ipython_extension = cache_frame_frame_dotenv$$$function__1_load_ipython_extension;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_dotenv$$$function__1_load_ipython_extension);
assert(Py_REFCNT(frame_frame_dotenv$$$function__1_load_ipython_extension) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_664be846826569a4309ad4599fe393ce;
frame_frame_dotenv$$$function__1_load_ipython_extension->m_frame.f_lineno = 1;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 1;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "o";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_dotenv$$$function__1_load_ipython_extension, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_dotenv$$$function__1_load_ipython_extension->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dotenv$$$function__1_load_ipython_extension, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_dotenv$$$function__1_load_ipython_extension,
    type_description_1,
    par_ipython
);


// Release cached frame if used for exception.
if (frame_frame_dotenv$$$function__1_load_ipython_extension == cache_frame_frame_dotenv$$$function__1_load_ipython_extension) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_dotenv$$$function__1_load_ipython_extension);
    cache_frame_frame_dotenv$$$function__1_load_ipython_extension = NULL;
}

assertFrameObject(frame_frame_dotenv$$$function__1_load_ipython_extension);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ipython);
Py_DECREF(par_ipython);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_dotenv$$$function__2_get_cli_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_path = python_pars[0];
PyObject *par_action = python_pars[1];
PyObject *par_key = python_pars[2];
PyObject *par_value = python_pars[3];
PyObject *par_quote = python_pars[4];
PyObject *var_command = NULL;
struct Nuitka_FrameObject *frame_frame_dotenv$$$function__2_get_cli_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_dotenv$$$function__2_get_cli_string = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_LIST1(tstate, mod_consts.const_str_plain_dotenv);
assert(var_command == NULL);
var_command = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_dotenv$$$function__2_get_cli_string)) {
    Py_XDECREF(cache_frame_frame_dotenv$$$function__2_get_cli_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_dotenv$$$function__2_get_cli_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_dotenv$$$function__2_get_cli_string = MAKE_FUNCTION_FRAME(tstate, code_objects_fa9441550c2d5b93c635729aa8c78b53, module_dotenv, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_dotenv$$$function__2_get_cli_string->m_type_description == NULL);
frame_frame_dotenv$$$function__2_get_cli_string = cache_frame_frame_dotenv$$$function__2_get_cli_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_dotenv$$$function__2_get_cli_string);
assert(Py_REFCNT(frame_frame_dotenv$$$function__2_get_cli_string) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_quote);
tmp_truth_name_1 = CHECK_IF_TRUE(par_quote);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_command);
tmp_list_arg_value_1 = var_command;
tmp_tuple_element_1 = mod_consts.const_str_digest_72d080aaac7bed4d9406f9e7c42f85d3;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_quote);
tmp_format_value_1 = par_quote;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_item_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_item_value_1 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_path);
tmp_truth_name_2 = CHECK_IF_TRUE(par_path);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_command);
tmp_list_arg_value_2 = var_command;
tmp_tuple_element_2 = mod_consts.const_str_digest_ee699f38b0b5be5dc9f50f4497299cc0;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_path);
tmp_format_value_2 = par_path;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;
type_description_1 = "oooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_item_value_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_item_value_2 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_3;
CHECK_OBJECT(par_action);
tmp_truth_name_3 = CHECK_IF_TRUE(par_action);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
CHECK_OBJECT(var_command);
tmp_list_arg_value_3 = var_command;
CHECK_OBJECT(par_action);
tmp_item_value_3 = par_action;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_4;
CHECK_OBJECT(par_key);
tmp_truth_name_4 = CHECK_IF_TRUE(par_key);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
CHECK_OBJECT(var_command);
tmp_list_arg_value_4 = var_command;
CHECK_OBJECT(par_key);
tmp_item_value_4 = par_key;
tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_5;
CHECK_OBJECT(par_value);
tmp_truth_name_5 = CHECK_IF_TRUE(par_value);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_space;
CHECK_OBJECT(par_value);
tmp_cmp_expr_right_1 = par_value;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_list_arg_value_5;
PyObject *tmp_item_value_5;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_command);
tmp_list_arg_value_5 = var_command;
tmp_tuple_element_3 = mod_consts.const_str_chr_34;
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_value);
tmp_format_value_3 = par_value;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_34;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_item_value_5 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_item_value_5 == NULL));
tmp_result = LIST_APPEND1(tmp_list_arg_value_5, tmp_item_value_5);
assert(!(tmp_result == false));
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_list_arg_value_6;
PyObject *tmp_item_value_6;
CHECK_OBJECT(var_command);
tmp_list_arg_value_6 = var_command;
CHECK_OBJECT(par_value);
tmp_item_value_6 = par_value;
tmp_result = LIST_APPEND0(tmp_list_arg_value_6, tmp_item_value_6);
assert(!(tmp_result == false));
}
branch_end_6:;
branch_no_5:;
branch_no_4:;
branch_no_3:;
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_str_arg_value_2;
PyObject *tmp_iterable_value_1;
tmp_str_arg_value_2 = mod_consts.const_str_space;
CHECK_OBJECT(var_command);
tmp_iterable_value_1 = var_command;
tmp_str_arg_value_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_2, tmp_iterable_value_1);
if (tmp_str_arg_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_return_value = UNICODE_STRIP1(tstate, tmp_str_arg_value_1);
CHECK_OBJECT(tmp_str_arg_value_1);
Py_DECREF(tmp_str_arg_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_dotenv$$$function__2_get_cli_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_dotenv$$$function__2_get_cli_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dotenv$$$function__2_get_cli_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_dotenv$$$function__2_get_cli_string,
    type_description_1,
    par_path,
    par_action,
    par_key,
    par_value,
    par_quote,
    var_command
);


// Release cached frame if used for exception.
if (frame_frame_dotenv$$$function__2_get_cli_string == cache_frame_frame_dotenv$$$function__2_get_cli_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_dotenv$$$function__2_get_cli_string);
    cache_frame_frame_dotenv$$$function__2_get_cli_string = NULL;
}

assertFrameObject(frame_frame_dotenv$$$function__2_get_cli_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_command);
CHECK_OBJECT(var_command);
Py_DECREF(var_command);
var_command = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_command);
CHECK_OBJECT(var_command);
Py_DECREF(var_command);
var_command = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_action);
Py_DECREF(par_action);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_quote);
Py_DECREF(par_quote);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_path);
Py_DECREF(par_path);
CHECK_OBJECT(par_action);
Py_DECREF(par_action);
CHECK_OBJECT(par_key);
Py_DECREF(par_key);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
CHECK_OBJECT(par_quote);
Py_DECREF(par_quote);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dotenv$$$function__1_load_ipython_extension(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dotenv$$$function__1_load_ipython_extension,
        mod_consts.const_str_plain_load_ipython_extension,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f21eb92299d6f341e3989790c89e02e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_dotenv,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dotenv$$$function__2_get_cli_string(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dotenv$$$function__2_get_cli_string,
        mod_consts.const_str_plain_get_cli_string,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fa9441550c2d5b93c635729aa8c78b53,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_dotenv,
        mod_consts.const_str_digest_c01e5b7daab5b9a62100fecb5a7086b0,
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

static function_impl_code const function_table_dotenv[] = {
impl_dotenv$$$function__1_load_ipython_extension,
impl_dotenv$$$function__2_get_cli_string,
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

    return Nuitka_Function_GetFunctionState(function, function_table_dotenv);
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
        module_dotenv,
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
        function_table_dotenv,
        sizeof(function_table_dotenv) / sizeof(function_impl_code)
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
static char const *module_full_name = "dotenv";
#endif

// Internal entry point for module code.
PyObject *module_code_dotenv(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("dotenv");

    // Store the module for future use.
    module_dotenv = module;

    moduledict_dotenv = MODULE_DICT(module_dotenv);

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
        PRINT_STRING("dotenv: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("dotenv: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("dotenv: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "dotenv" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initdotenv\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dotenv,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dotenv,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dotenv,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dotenv,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dotenv,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dotenv);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_dotenv);
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

        UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_dotenv;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_dotenv = MAKE_MODULE_FRAME(code_objects_1e934c59857b9c86b7fcac7733d89339, module_dotenv);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_dotenv);
assert(Py_REFCNT(frame_frame_dotenv) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_dotenv->m_frame.f_lineno = 1;
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
frame_frame_dotenv->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_dotenv->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_dotenv->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_a5658d5b5d5f92493ad304d3c5bb1602_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_dotenv$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_dotenv$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_dotenv$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_dotenv$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_main;
tmp_globals_arg_value_1 = (PyObject *)moduledict_dotenv;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_2ba985b28c4c415e4c5745a76bafcdec_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_dotenv->m_frame.f_lineno = 3;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_dotenv_values,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_dotenv_values);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_dotenv_values, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_find_dotenv,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_find_dotenv);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_find_dotenv, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_get_key,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_get_key);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_get_key, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_load_dotenv,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_load_dotenv);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_load_dotenv, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_set_key,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_set_key);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_set_key, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_dotenv,
        mod_consts.const_str_plain_unset_key,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_unset_key);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_unset_key, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_ipython;
tmp_dict_value_1 = module_var_accessor_dotenv$Any(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 6;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));

tmp_assign_source_15 = MAKE_FUNCTION_dotenv$$$function__1_load_ipython_extension(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_load_ipython_extension, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_none_none_none_tuple;
tmp_dict_key_2 = const_str_plain_path;
tmp_expression_value_3 = module_var_accessor_dotenv$Optional(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 5 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_action;
tmp_expression_value_4 = module_var_accessor_dotenv$Optional(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 14;

    goto dict_build_exception_1;
}
tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_key;
tmp_expression_value_5 = module_var_accessor_dotenv$Optional(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 15;

    goto dict_build_exception_1;
}
tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_value;
tmp_expression_value_6 = module_var_accessor_dotenv$Optional(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 16;

    goto dict_build_exception_1;
}
tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_quote;
tmp_expression_value_7 = module_var_accessor_dotenv$Optional(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 17;

    goto dict_build_exception_1;
}
tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_16 = MAKE_FUNCTION_dotenv$$$function__2_get_cli_string(tstate, tmp_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)mod_consts.const_str_plain_get_cli_string, tmp_assign_source_16);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_dotenv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_dotenv->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_dotenv, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_dotenv);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_LIST8(tstate, mod_consts.const_list_621c057bc43bc050039c919b9d43c5e0_list);
UPDATE_STRING_DICT1(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_17);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("dotenv", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "dotenv" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_dotenv);
    return module_dotenv;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dotenv, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("dotenv", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

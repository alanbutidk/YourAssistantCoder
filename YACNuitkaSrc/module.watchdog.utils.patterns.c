/* Generated code for Python module 'watchdog$utils$patterns'
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



/* The "module_watchdog$utils$patterns" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchdog$utils$patterns;
PyDictObject *moduledict_watchdog$utils$patterns;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_PurePosixPath;
PyObject *const_str_plain_PureWindowsPath;
PyObject *const_str_digest_51f7bfc3c9cf77b7b13632f659b7cb93;
PyObject *const_str_digest_8a682b030d401edc10cf0d4d8898cc32;
PyObject *const_str_digest_ce34c2d141a3371882571af274058a6d;
PyObject *const_str_plain_match;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_fbc4b0204107d51cf6edc490aeb085fa;
PyObject *const_str_digest_6347231f2f345b4826195a4e606d596a;
PyObject *const_str_plain_included_patterns;
PyObject *const_str_chr_42;
PyObject *const_str_plain_excluded_patterns;
PyObject *const_str_plain_paths;
PyObject *const_str_plain__match_path;
PyObject *const_str_plain_included;
PyObject *const_str_plain_excluded;
PyObject *const_str_plain_case_sensitive;
PyObject *const_tuple_str_plain_case_sensitive_tuple;
PyObject *const_str_plain_filter_paths;
PyObject *const_tuple_0bb94fd17039ff6af75c52bda1b13908_tuple;
PyObject *const_str_digest_50873692031be080b3d3dc54d0be4745;
PyObject *const_str_digest_d20ad6379831955465e6ce395b754fe8;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_pathlib;
PyObject *const_tuple_str_plain_PurePosixPath_str_plain_PureWindowsPath_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_dict_f22ef1dc7efca6d5ce16dc807ba4b8d3;
PyObject *const_dict_d7bc0bf06226b30f6f4215ff7cfde7bd;
PyObject *const_dict_07cc51162e92c4a54d189f10c633db67;
PyObject *const_dict_8efb41ab700bb2ad6c6f99b41175e2d5;
PyObject *const_str_plain_match_any_paths;
PyObject *const_str_digest_1792023831027a7226e64c2c491b20c4;
PyObject *const_tuple_6ed6ad77767d793b61cb7e66cd0ff3db_tuple;
PyObject *const_str_digest_823943ed433aed571ec9181f1b8fc555;
PyObject *const_tuple_53bf0c7915907e31b4678a9ddddaa265_tuple;
PyObject *const_tuple_670e99de34b86dfbba85ea681eb61908_tuple;
PyObject *const_tuple_e535cbe96f0b18cf10f4ae51413f913e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[39];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("watchdog.utils.patterns"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_PurePosixPath);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_PureWindowsPath);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_51f7bfc3c9cf77b7b13632f659b7cb93);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_8a682b030d401edc10cf0d4d8898cc32);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce34c2d141a3371882571af274058a6d);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_fbc4b0204107d51cf6edc490aeb085fa);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_6347231f2f345b4826195a4e606d596a);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_included_patterns);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_chr_42);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_excluded_patterns);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_paths);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__match_path);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_included);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_excluded);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_case_sensitive);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_case_sensitive_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_filter_paths);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_0bb94fd17039ff6af75c52bda1b13908_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_50873692031be080b3d3dc54d0be4745);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_d20ad6379831955465e6ce395b754fe8);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PurePosixPath_str_plain_PureWindowsPath_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_f22ef1dc7efca6d5ce16dc807ba4b8d3);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_d7bc0bf06226b30f6f4215ff7cfde7bd);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_dict_07cc51162e92c4a54d189f10c633db67);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_8efb41ab700bb2ad6c6f99b41175e2d5);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_match_any_paths);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_1792023831027a7226e64c2c491b20c4);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_6ed6ad77767d793b61cb7e66cd0ff3db_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_823943ed433aed571ec9181f1b8fc555);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_53bf0c7915907e31b4678a9ddddaa265_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_670e99de34b86dfbba85ea681eb61908_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_e535cbe96f0b18cf10f4ae51413f913e_tuple);
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
void checkModuleConstants_watchdog$utils$patterns(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_PurePosixPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PurePosixPath);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_PureWindowsPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PureWindowsPath);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_51f7bfc3c9cf77b7b13632f659b7cb93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_51f7bfc3c9cf77b7b13632f659b7cb93);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_8a682b030d401edc10cf0d4d8898cc32));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8a682b030d401edc10cf0d4d8898cc32);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce34c2d141a3371882571af274058a6d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce34c2d141a3371882571af274058a6d);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_fbc4b0204107d51cf6edc490aeb085fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fbc4b0204107d51cf6edc490aeb085fa);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_6347231f2f345b4826195a4e606d596a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6347231f2f345b4826195a4e606d596a);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_included_patterns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_included_patterns);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_chr_42));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_42);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_excluded_patterns));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_excluded_patterns);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_paths);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__match_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__match_path);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_included));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_included);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_excluded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_excluded);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_case_sensitive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_case_sensitive);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_case_sensitive_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_case_sensitive_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_filter_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_filter_paths);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_0bb94fd17039ff6af75c52bda1b13908_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0bb94fd17039ff6af75c52bda1b13908_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_50873692031be080b3d3dc54d0be4745));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50873692031be080b3d3dc54d0be4745);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_d20ad6379831955465e6ce395b754fe8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d20ad6379831955465e6ce395b754fe8);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathlib);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PurePosixPath_str_plain_PureWindowsPath_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PurePosixPath_str_plain_PureWindowsPath_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_f22ef1dc7efca6d5ce16dc807ba4b8d3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f22ef1dc7efca6d5ce16dc807ba4b8d3);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_d7bc0bf06226b30f6f4215ff7cfde7bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d7bc0bf06226b30f6f4215ff7cfde7bd);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_dict_07cc51162e92c4a54d189f10c633db67));
CHECK_OBJECT_DEEP(mod_consts.const_dict_07cc51162e92c4a54d189f10c633db67);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_8efb41ab700bb2ad6c6f99b41175e2d5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8efb41ab700bb2ad6c6f99b41175e2d5);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_match_any_paths));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match_any_paths);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_1792023831027a7226e64c2c491b20c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1792023831027a7226e64c2c491b20c4);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_6ed6ad77767d793b61cb7e66cd0ff3db_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6ed6ad77767d793b61cb7e66cd0ff3db_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_823943ed433aed571ec9181f1b8fc555));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_823943ed433aed571ec9181f1b8fc555);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_53bf0c7915907e31b4678a9ddddaa265_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_53bf0c7915907e31b4678a9ddddaa265_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_670e99de34b86dfbba85ea681eb61908_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_670e99de34b86dfbba85ea681eb61908_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_e535cbe96f0b18cf10f4ae51413f913e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e535cbe96f0b18cf10f4ae51413f913e_tuple);
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
static PyObject *module_var_accessor_watchdog$utils$patterns$PurePosixPath(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$patterns->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$patterns->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PurePosixPath);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$patterns->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PurePosixPath);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PurePosixPath, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PurePosixPath);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PurePosixPath, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PurePosixPath);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PurePosixPath);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PurePosixPath);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$patterns$PureWindowsPath(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$patterns->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$patterns->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PureWindowsPath);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$patterns->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PureWindowsPath);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PureWindowsPath, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PureWindowsPath);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PureWindowsPath, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PureWindowsPath);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PureWindowsPath);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PureWindowsPath);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$patterns$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$patterns->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$patterns->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$patterns->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$patterns$_match_path(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$patterns->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$patterns->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain__match_path);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$patterns->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__match_path);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__match_path, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__match_path);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__match_path, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain__match_path);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain__match_path);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__match_path);
    }

    return result;
}

static PyObject *module_var_accessor_watchdog$utils$patterns$filter_paths(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_watchdog$utils$patterns->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_watchdog$utils$patterns->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_filter_paths);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_watchdog$utils$patterns->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_filter_paths);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_filter_paths, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_filter_paths);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_filter_paths, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_filter_paths);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_filter_paths);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_filter_paths);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_631a42cb392ae574d45baa68e3359de6;
static PyCodeObject *code_objects_daaf9e858357c3eedabba891c76ac41f;
static PyCodeObject *code_objects_4d4aaef6183a3ef42ecf08b0fbebca64;
static PyCodeObject *code_objects_37a41afb35d3022efe2907bd00941cde;
static PyCodeObject *code_objects_eec6cc79435e50578035214994d7ffce;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_1792023831027a7226e64c2c491b20c4); CHECK_OBJECT(module_filename_obj);
code_objects_631a42cb392ae574d45baa68e3359de6 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_fbc4b0204107d51cf6edc490aeb085fa, mod_consts.const_tuple_6ed6ad77767d793b61cb7e66cd0ff3db_tuple, NULL, 1, 0, 0);
code_objects_daaf9e858357c3eedabba891c76ac41f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_823943ed433aed571ec9181f1b8fc555, mod_consts.const_str_digest_823943ed433aed571ec9181f1b8fc555, NULL, NULL, 0, 0, 0);
code_objects_4d4aaef6183a3ef42ecf08b0fbebca64 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__match_path, mod_consts.const_str_plain__match_path, mod_consts.const_tuple_53bf0c7915907e31b4678a9ddddaa265_tuple, NULL, 3, 1, 0);
code_objects_37a41afb35d3022efe2907bd00941cde = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_filter_paths, mod_consts.const_str_plain_filter_paths, mod_consts.const_tuple_670e99de34b86dfbba85ea681eb61908_tuple, NULL, 1, 3, 0);
code_objects_eec6cc79435e50578035214994d7ffce = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_match_any_paths, mod_consts.const_str_plain_match_any_paths, mod_consts.const_tuple_e535cbe96f0b18cf10f4ae51413f913e_tuple, NULL, 1, 3, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_watchdog$utils$patterns$$$function__1__match_path(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$patterns$$$function__2_filter_paths(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchdog$utils$patterns$$$function__3_match_any_paths(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_watchdog$utils$patterns$$$function__1__match_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_raw_path = python_pars[0];
PyObject *par_included_patterns = python_pars[1];
PyObject *par_excluded_patterns = python_pars[2];
PyObject *par_case_sensitive = python_pars[3];
struct Nuitka_CellObject *var_path = Nuitka_Cell_NewEmpty();
PyObject *var_common_patterns = NULL;
PyObject *var_error = NULL;
PyObject *outline_0_var_pattern = NULL;
PyObject *outline_1_var_pattern = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
PyObject *tmp_setcontraction_1__$0 = NULL;
PyObject *tmp_setcontraction_1__contraction = NULL;
PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
PyObject *tmp_setcontraction_2__$0 = NULL;
PyObject *tmp_setcontraction_2__contraction = NULL;
PyObject *tmp_setcontraction_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$patterns$$$function__1__match_path;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path = MAKE_FUNCTION_FRAME(tstate, code_objects_4d4aaef6183a3ef42ecf08b0fbebca64, module_watchdog$utils$patterns, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path->m_type_description == NULL);
frame_frame_watchdog$utils$patterns$$$function__1__match_path = cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$patterns$$$function__1__match_path);
assert(Py_REFCNT(frame_frame_watchdog$utils$patterns$$$function__1__match_path) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_case_sensitive);
tmp_truth_name_1 = CHECK_IF_TRUE(par_case_sensitive);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "oooocoo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_watchdog$utils$patterns$PurePosixPath(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PurePosixPath);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_raw_path);
tmp_args_element_value_1 = par_raw_path;
frame_frame_watchdog$utils$patterns$$$function__1__match_path->m_frame.f_lineno = 34;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_path) == NULL);
Nuitka_Cell_SET(var_path, tmp_assign_source_1);

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_included_patterns);
tmp_iter_arg_1 = par_included_patterns;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooocoo";
    goto try_except_handler_2;
}
assert(tmp_setcontraction_1__$0 == NULL);
tmp_setcontraction_1__$0 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = PySet_New(NULL);
assert(tmp_setcontraction_1__contraction == NULL);
tmp_setcontraction_1__contraction = tmp_assign_source_4;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_setcontraction_1__$0);
tmp_next_source_1 = tmp_setcontraction_1__$0;
tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_5 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooocoo";
exception_lineno = 36;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_setcontraction_1__iter_value_0;
    tmp_setcontraction_1__iter_value_0 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_setcontraction_1__iter_value_0);
tmp_assign_source_6 = tmp_setcontraction_1__iter_value_0;
{
    PyObject *old = outline_0_var_pattern;
    outline_0_var_pattern = tmp_assign_source_6;
    Py_INCREF(outline_0_var_pattern);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_add_set_1;
PyObject *tmp_add_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
tmp_add_set_1 = tmp_setcontraction_1__contraction;
CHECK_OBJECT(outline_0_var_pattern);
tmp_expression_value_1 = outline_0_var_pattern;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_lower);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooocoo";
    goto try_except_handler_3;
}
frame_frame_watchdog$utils$patterns$$$function__1__match_path->m_frame.f_lineno = 36;
tmp_add_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_add_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooocoo";
    goto try_except_handler_3;
}
assert(PySet_Check(tmp_add_set_1));
tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
CHECK_OBJECT(tmp_add_value_1);
Py_DECREF(tmp_add_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooocoo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oooocoo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
tmp_assign_source_2 = tmp_setcontraction_1__contraction;
Py_INCREF(tmp_assign_source_2);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_setcontraction_1__$0);
CHECK_OBJECT(tmp_setcontraction_1__$0);
Py_DECREF(tmp_setcontraction_1__$0);
tmp_setcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
CHECK_OBJECT(tmp_setcontraction_1__contraction);
Py_DECREF(tmp_setcontraction_1__contraction);
tmp_setcontraction_1__contraction = NULL;
Py_XDECREF(tmp_setcontraction_1__iter_value_0);
tmp_setcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_setcontraction_1__$0);
CHECK_OBJECT(tmp_setcontraction_1__$0);
Py_DECREF(tmp_setcontraction_1__$0);
tmp_setcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
CHECK_OBJECT(tmp_setcontraction_1__contraction);
Py_DECREF(tmp_setcontraction_1__contraction);
tmp_setcontraction_1__contraction = NULL;
Py_XDECREF(tmp_setcontraction_1__iter_value_0);
tmp_setcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_pattern);
outline_0_var_pattern = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_pattern);
outline_0_var_pattern = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 36;
goto frame_exception_exit_1;
outline_result_1:;
{
    PyObject *old = par_included_patterns;
    assert(old != NULL);
    par_included_patterns = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(par_excluded_patterns);
tmp_iter_arg_2 = par_excluded_patterns;
tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooocoo";
    goto try_except_handler_4;
}
assert(tmp_setcontraction_2__$0 == NULL);
tmp_setcontraction_2__$0 = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = PySet_New(NULL);
assert(tmp_setcontraction_2__contraction == NULL);
tmp_setcontraction_2__contraction = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_setcontraction_2__$0);
tmp_next_source_2 = tmp_setcontraction_2__$0;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooocoo";
exception_lineno = 37;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_setcontraction_2__iter_value_0;
    tmp_setcontraction_2__iter_value_0 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_setcontraction_2__iter_value_0);
tmp_assign_source_11 = tmp_setcontraction_2__iter_value_0;
{
    PyObject *old = outline_1_var_pattern;
    outline_1_var_pattern = tmp_assign_source_11;
    Py_INCREF(outline_1_var_pattern);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_add_set_2;
PyObject *tmp_add_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_setcontraction_2__contraction);
tmp_add_set_2 = tmp_setcontraction_2__contraction;
CHECK_OBJECT(outline_1_var_pattern);
tmp_expression_value_2 = outline_1_var_pattern;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_lower);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooocoo";
    goto try_except_handler_5;
}
frame_frame_watchdog$utils$patterns$$$function__1__match_path->m_frame.f_lineno = 37;
tmp_add_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_add_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooocoo";
    goto try_except_handler_5;
}
assert(PySet_Check(tmp_add_set_2));
tmp_res = PySet_Add(tmp_add_set_2, tmp_add_value_2);
CHECK_OBJECT(tmp_add_value_2);
Py_DECREF(tmp_add_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooocoo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oooocoo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_setcontraction_2__contraction);
tmp_assign_source_7 = tmp_setcontraction_2__contraction;
Py_INCREF(tmp_assign_source_7);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_setcontraction_2__$0);
CHECK_OBJECT(tmp_setcontraction_2__$0);
Py_DECREF(tmp_setcontraction_2__$0);
tmp_setcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_setcontraction_2__contraction);
CHECK_OBJECT(tmp_setcontraction_2__contraction);
Py_DECREF(tmp_setcontraction_2__contraction);
tmp_setcontraction_2__contraction = NULL;
Py_XDECREF(tmp_setcontraction_2__iter_value_0);
tmp_setcontraction_2__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_setcontraction_2__$0);
CHECK_OBJECT(tmp_setcontraction_2__$0);
Py_DECREF(tmp_setcontraction_2__$0);
tmp_setcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_setcontraction_2__contraction);
CHECK_OBJECT(tmp_setcontraction_2__contraction);
Py_DECREF(tmp_setcontraction_2__contraction);
tmp_setcontraction_2__contraction = NULL;
Py_XDECREF(tmp_setcontraction_2__iter_value_0);
tmp_setcontraction_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_pattern);
outline_1_var_pattern = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_pattern);
outline_1_var_pattern = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 37;
goto frame_exception_exit_1;
outline_result_2:;
{
    PyObject *old = par_excluded_patterns;
    assert(old != NULL);
    par_excluded_patterns = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor_watchdog$utils$patterns$PureWindowsPath(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PureWindowsPath);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_raw_path);
tmp_args_element_value_2 = par_raw_path;
frame_frame_watchdog$utils$patterns$$$function__1__match_path->m_frame.f_lineno = 38;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
assert(Nuitka_Cell_GET(var_path) == NULL);
Nuitka_Cell_SET(var_path, tmp_assign_source_12);

}
branch_end_1:;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_bitand_expr_left_1;
PyObject *tmp_bitand_expr_right_1;
CHECK_OBJECT(par_included_patterns);
tmp_bitand_expr_left_1 = par_included_patterns;
CHECK_OBJECT(par_excluded_patterns);
tmp_bitand_expr_right_1 = par_excluded_patterns;
tmp_assign_source_13 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
assert(var_common_patterns == NULL);
var_common_patterns = tmp_assign_source_13;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_common_patterns);
tmp_truth_name_2 = CHECK_IF_TRUE(var_common_patterns);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooocoo";
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
PyObject *tmp_assign_source_14;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_51f7bfc3c9cf77b7b13632f659b7cb93;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_common_patterns);
tmp_format_value_1 = var_common_patterns;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooocoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_8a682b030d401edc10cf0d4d8898cc32;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_14 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_14 == NULL));
assert(var_error == NULL);
var_error = tmp_assign_source_14;
}
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_error);
tmp_make_exception_arg_1 = var_error;
frame_frame_watchdog$utils$patterns$$$function__1__match_path->m_frame.f_lineno = 43;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 43;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooocoo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_any_arg_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_any_arg_2;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(par_included_patterns);
tmp_iter_arg_3 = par_included_patterns;
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_15;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = var_path;
Py_INCREF(tmp_closure_1[1]);
tmp_any_arg_1 = MAKE_GENERATOR_watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_6;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
tmp_and_left_value_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
{
PyObject *tmp_assign_source_16;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(par_excluded_patterns);
tmp_iter_arg_4 = par_excluded_patterns;
tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_2__$0 == NULL);
tmp_genexpr_2__$0 = tmp_assign_source_16;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_closure_2[1] = var_path;
Py_INCREF(tmp_closure_2[1]);
tmp_any_arg_2 = MAKE_GENERATOR_watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_4:;
tmp_operand_value_1 = BUILTIN_ANY(tstate, tmp_any_arg_2);
CHECK_OBJECT(tmp_any_arg_2);
Py_DECREF(tmp_any_arg_2);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "oooocoo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
Py_INCREF(tmp_and_right_value_1);
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$patterns$$$function__1__match_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$patterns$$$function__1__match_path->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$patterns$$$function__1__match_path, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$patterns$$$function__1__match_path,
    type_description_1,
    par_raw_path,
    par_included_patterns,
    par_excluded_patterns,
    par_case_sensitive,
    var_path,
    var_common_patterns,
    var_error
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$patterns$$$function__1__match_path == cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path);
    cache_frame_frame_watchdog$utils$patterns$$$function__1__match_path = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$patterns$$$function__1__match_path);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_included_patterns);
CHECK_OBJECT(par_included_patterns);
Py_DECREF(par_included_patterns);
par_included_patterns = NULL;
CHECK_OBJECT(par_excluded_patterns);
CHECK_OBJECT(par_excluded_patterns);
Py_DECREF(par_excluded_patterns);
par_excluded_patterns = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
CHECK_OBJECT(var_common_patterns);
CHECK_OBJECT(var_common_patterns);
Py_DECREF(var_common_patterns);
var_common_patterns = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_included_patterns);
par_included_patterns = NULL;
Py_XDECREF(par_excluded_patterns);
par_excluded_patterns = NULL;
CHECK_OBJECT(var_path);
CHECK_OBJECT(var_path);
Py_DECREF(var_path);
var_path = NULL;
Py_XDECREF(var_common_patterns);
var_common_patterns = NULL;
Py_XDECREF(var_error);
var_error = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_raw_path);
Py_DECREF(par_raw_path);
CHECK_OBJECT(par_case_sensitive);
Py_DECREF(par_case_sensitive);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_raw_path);
Py_DECREF(par_raw_path);
CHECK_OBJECT(par_case_sensitive);
Py_DECREF(par_case_sensitive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr_locals {
PyObject *var_p;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr_locals *generator_heap = (struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_p = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_631a42cb392ae574d45baa68e3359de6, module_watchdog$utils$patterns, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 45;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_p;
    generator_heap->var_p = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_p);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_p);
tmp_args_element_value_1 = generator_heap->var_p;
generator->m_frame->m_frame.f_lineno = 45;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_p,
    generator->m_closure[1]
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr_context,
        module_watchdog$utils$patterns,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_fbc4b0204107d51cf6edc490aeb085fa,
#endif
        code_objects_631a42cb392ae574d45baa68e3359de6,
        closure,
        2,
#if 1
        sizeof(struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr_locals {
PyObject *var_p;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr_locals *generator_heap = (struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_p = NULL;
generator_heap->tmp_iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_631a42cb392ae574d45baa68e3359de6, module_watchdog$utils$patterns, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_1;
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 45;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
{
    PyObject *old = generator_heap->var_p;
    generator_heap->var_p = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_p);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, const_str_plain_path);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_p);
tmp_args_element_value_1 = generator_heap->var_p;
generator->m_frame->m_frame.f_lineno = 45;
tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_match, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 45;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    NULL,
    generator_heap->var_p,
    generator->m_closure[1]
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_p);
generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr_context,
        module_watchdog$utils$patterns,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_fbc4b0204107d51cf6edc490aeb085fa,
#endif
        code_objects_631a42cb392ae574d45baa68e3359de6,
        closure,
        2,
#if 1
        sizeof(struct watchdog$utils$patterns$$$function__1__match_path$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_watchdog$utils$patterns$$$function__2_filter_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_paths = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_included_patterns = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_excluded_patterns = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_case_sensitive = Nuitka_Cell_New1(python_pars[3]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[4];
tmp_closure_1[0] = par_case_sensitive;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_excluded_patterns;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_included_patterns;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_paths;
Py_INCREF(tmp_closure_1[3]);
tmp_return_value = MAKE_GENERATOR_watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_paths);
CHECK_OBJECT(par_paths);
Py_DECREF(par_paths);
par_paths = NULL;
CHECK_OBJECT(par_included_patterns);
CHECK_OBJECT(par_included_patterns);
Py_DECREF(par_included_patterns);
par_included_patterns = NULL;
CHECK_OBJECT(par_excluded_patterns);
CHECK_OBJECT(par_excluded_patterns);
Py_DECREF(par_excluded_patterns);
par_excluded_patterns = NULL;
CHECK_OBJECT(par_case_sensitive);
CHECK_OBJECT(par_case_sensitive);
Py_DECREF(par_case_sensitive);
par_case_sensitive = NULL;
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
struct watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths_locals {
PyObject *var_included;
PyObject *var_excluded;
PyObject *var_path;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths_locals *generator_heap = (struct watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_included = NULL;
generator_heap->var_excluded = NULL;
generator_heap->var_path = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_37a41afb35d3022efe2907bd00941cde, module_watchdog$utils$patterns, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
{
PyObject *tmp_assign_source_1;
PyObject *tmp_set_arg_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_included_patterns);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_set_arg_1 = MAKE_LIST1(tstate, mod_consts.const_str_chr_42);
goto condexpr_end_1;
condexpr_false_1:;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_included_patterns);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}

tmp_set_arg_1 = Nuitka_Cell_GET(generator->m_closure[2]);
Py_INCREF(tmp_set_arg_1);
condexpr_end_1:;
tmp_assign_source_1 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 73;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_included == NULL);
generator_heap->var_included = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_set_arg_2;
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_excluded_patterns);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_set_arg_2 = MAKE_LIST_EMPTY(tstate, 0);
goto condexpr_end_2;
condexpr_false_2:;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_excluded_patterns);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}

tmp_set_arg_2 = Nuitka_Cell_GET(generator->m_closure[1]);
Py_INCREF(tmp_set_arg_2);
condexpr_end_2:;
tmp_assign_source_2 = PySet_New(tmp_set_arg_2);
CHECK_OBJECT(tmp_set_arg_2);
Py_DECREF(tmp_set_arg_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 74;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_excluded == NULL);
generator_heap->var_excluded = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_paths);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "ccccooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccooo";
generator_heap->exception_lineno = 76;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_assign_source_5 = generator_heap->tmp_for_loop_1__iter_value;
{
    PyObject *old = generator_heap->var_path;
    generator_heap->var_path = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_path);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_arg_value_2_1;
PyObject *tmp_kw_call_dict_value_0_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_watchdog$utils$patterns$_match_path(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__match_path);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_path);
tmp_kw_call_arg_value_0_1 = generator_heap->var_path;
if (generator_heap->var_included == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_included);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_1_1 = generator_heap->var_included;
if (generator_heap->var_excluded == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_excluded);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_2_1 = generator_heap->var_excluded;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_case_sensitive);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 77;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_case_sensitive_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 77;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_path);
tmp_expression_value_1 = generator_heap->var_path;
Py_INCREF(tmp_expression_value_1);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 76;
generator_heap->type_description_1 = "ccccooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
try_end_1:;

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
    generator->m_closure[3],
    generator->m_closure[2],
    generator->m_closure[1],
    generator->m_closure[0],
    generator_heap->var_included,
    generator_heap->var_excluded,
    generator_heap->var_path
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
goto try_end_2;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_included);
generator_heap->var_included = NULL;
Py_XDECREF(generator_heap->var_excluded);
generator_heap->var_excluded = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
Py_XDECREF(generator_heap->var_included);
generator_heap->var_included = NULL;
Py_XDECREF(generator_heap->var_excluded);
generator_heap->var_excluded = NULL;
Py_XDECREF(generator_heap->var_path);
generator_heap->var_path = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths_context,
        module_watchdog$utils$patterns,
        mod_consts.const_str_plain_filter_paths,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_37a41afb35d3022efe2907bd00941cde,
        closure,
        4,
#if 1
        sizeof(struct watchdog$utils$patterns$$$function__2_filter_paths$$$genobj__1_filter_paths_locals)
#else
        0
#endif
    );
}


static PyObject *impl_watchdog$utils$patterns$$$function__3_match_any_paths(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_paths = python_pars[0];
PyObject *par_included_patterns = python_pars[1];
PyObject *par_excluded_patterns = python_pars[2];
PyObject *par_case_sensitive = python_pars[3];
struct Nuitka_FrameObject *frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths)) {
    Py_XDECREF(cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths = MAKE_FUNCTION_FRAME(tstate, code_objects_eec6cc79435e50578035214994d7ffce, module_watchdog$utils$patterns, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths->m_type_description == NULL);
frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths = cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths);
assert(Py_REFCNT(frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths) == 2);

// Framed code:
{
PyObject *tmp_any_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_1 = module_var_accessor_watchdog$utils$patterns$filter_paths(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_filter_paths);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_paths);
tmp_kw_call_arg_value_0_1 = par_paths;
CHECK_OBJECT(par_included_patterns);
tmp_kw_call_dict_value_0_1 = par_included_patterns;
CHECK_OBJECT(par_excluded_patterns);
tmp_kw_call_dict_value_1_1 = par_excluded_patterns;
CHECK_OBJECT(par_case_sensitive);
tmp_kw_call_dict_value_2_1 = par_case_sensitive;
frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths->m_frame.f_lineno = 93;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_any_arg_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_0bb94fd17039ff6af75c52bda1b13908_tuple);
}

if (tmp_any_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_return_value = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths,
    type_description_1,
    par_paths,
    par_included_patterns,
    par_excluded_patterns,
    par_case_sensitive
);


// Release cached frame if used for exception.
if (frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths == cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths);
    cache_frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths = NULL;
}

assertFrameObject(frame_frame_watchdog$utils$patterns$$$function__3_match_any_paths);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_paths);
Py_DECREF(par_paths);
CHECK_OBJECT(par_included_patterns);
Py_DECREF(par_included_patterns);
CHECK_OBJECT(par_excluded_patterns);
Py_DECREF(par_excluded_patterns);
CHECK_OBJECT(par_case_sensitive);
Py_DECREF(par_case_sensitive);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_paths);
Py_DECREF(par_paths);
CHECK_OBJECT(par_included_patterns);
Py_DECREF(par_included_patterns);
CHECK_OBJECT(par_excluded_patterns);
Py_DECREF(par_excluded_patterns);
CHECK_OBJECT(par_case_sensitive);
Py_DECREF(par_case_sensitive);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$patterns$$$function__1__match_path(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$patterns$$$function__1__match_path,
        mod_consts.const_str_plain__match_path,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4d4aaef6183a3ef42ecf08b0fbebca64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchdog$utils$patterns,
        mod_consts.const_str_digest_ce34c2d141a3371882571af274058a6d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$patterns$$$function__2_filter_paths(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$patterns$$$function__2_filter_paths,
        mod_consts.const_str_plain_filter_paths,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_37a41afb35d3022efe2907bd00941cde,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$utils$patterns,
        mod_consts.const_str_digest_6347231f2f345b4826195a4e606d596a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchdog$utils$patterns$$$function__3_match_any_paths(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchdog$utils$patterns$$$function__3_match_any_paths,
        mod_consts.const_str_plain_match_any_paths,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_eec6cc79435e50578035214994d7ffce,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchdog$utils$patterns,
        mod_consts.const_str_digest_50873692031be080b3d3dc54d0be4745,
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

static function_impl_code const function_table_watchdog$utils$patterns[] = {
impl_watchdog$utils$patterns$$$function__1__match_path,
impl_watchdog$utils$patterns$$$function__2_filter_paths,
impl_watchdog$utils$patterns$$$function__3_match_any_paths,
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

    return Nuitka_Function_GetFunctionState(function, function_table_watchdog$utils$patterns);
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
        module_watchdog$utils$patterns,
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
        function_table_watchdog$utils$patterns,
        sizeof(function_table_watchdog$utils$patterns) / sizeof(function_impl_code)
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
static char const *module_full_name = "watchdog.utils.patterns";
#endif

// Internal entry point for module code.
PyObject *module_code_watchdog$utils$patterns(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchdog$utils$patterns");

    // Store the module for future use.
    module_watchdog$utils$patterns = module;

    moduledict_watchdog$utils$patterns = MODULE_DICT(module_watchdog$utils$patterns);

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
        PRINT_STRING("watchdog$utils$patterns: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("watchdog$utils$patterns: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchdog$utils$patterns: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.utils.patterns" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initwatchdog$utils$patterns\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchdog$utils$patterns,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$patterns,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchdog$utils$patterns,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$patterns,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchdog$utils$patterns,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchdog$utils$patterns);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchdog$utils$patterns);
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

        UPDATE_STRING_DICT1(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_watchdog$utils$patterns;
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
tmp_assign_source_1 = mod_consts.const_str_digest_d20ad6379831955465e6ce395b754fe8;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_watchdog$utils$patterns = MAKE_MODULE_FRAME(code_objects_daaf9e858357c3eedabba891c76ac41f, module_watchdog$utils$patterns);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_watchdog$utils$patterns);
assert(Py_REFCNT(frame_frame_watchdog$utils$patterns) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_watchdog$utils$patterns$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_watchdog$utils$patterns$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_pathlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_watchdog$utils$patterns;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_PurePosixPath_str_plain_PureWindowsPath_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_watchdog$utils$patterns->m_frame.f_lineno = 17;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_watchdog$utils$patterns,
        mod_consts.const_str_plain_PurePosixPath,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PurePosixPath);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PurePosixPath, tmp_assign_source_6);
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
        (PyObject *)moduledict_watchdog$utils$patterns,
        mod_consts.const_str_plain_PureWindowsPath,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_PureWindowsPath);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_PureWindowsPath, tmp_assign_source_7);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_watchdog$utils$patterns, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_watchdog$utils$patterns->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_watchdog$utils$patterns, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_watchdog$utils$patterns);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_1__module);
CHECK_OBJECT(tmp_import_from_1__module);
Py_DECREF(tmp_import_from_1__module);
tmp_import_from_1__module = NULL;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = Py_False;
UPDATE_STRING_DICT0(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_f22ef1dc7efca6d5ce16dc807ba4b8d3);

tmp_assign_source_9 = MAKE_FUNCTION_watchdog$utils$patterns$$$function__1__match_path(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain__match_path, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_2;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_d7bc0bf06226b30f6f4215ff7cfde7bd);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_07cc51162e92c4a54d189f10c633db67);

tmp_assign_source_10 = MAKE_FUNCTION_watchdog$utils$patterns$$$function__2_filter_paths(tstate, tmp_kw_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_filter_paths, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_3;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_d7bc0bf06226b30f6f4215ff7cfde7bd);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8efb41ab700bb2ad6c6f99b41175e2d5);

tmp_assign_source_11 = MAKE_FUNCTION_watchdog$utils$patterns$$$function__3_match_any_paths(tstate, tmp_kw_defaults_2, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)mod_consts.const_str_plain_match_any_paths, tmp_assign_source_11);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchdog$utils$patterns", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "watchdog.utils.patterns" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_watchdog$utils$patterns);
    return module_watchdog$utils$patterns;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchdog$utils$patterns, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchdog$utils$patterns", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

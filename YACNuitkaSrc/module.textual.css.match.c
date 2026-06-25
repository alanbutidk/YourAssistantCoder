/* Generated code for Python module 'textual$css$match'
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



/* The "module_textual$css$match" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$css$match;
PyDictObject *moduledict_textual$css$match;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_5fc21c311bf7c50afa17475759e3876f;
PyObject *const_str_plain__check_selectors;
PyObject *const_str_plain_selectors;
PyObject *const_str_plain_node;
PyObject *const_str_plain_css_path_nodes;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_792ef6169d68f97c64e3daef7b6495e7;
PyObject *const_str_plain_CombinatorType;
PyObject *const_str_plain_DESCENDENT;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_append;
PyObject *const_str_plain_pop;
PyObject *const_str_plain_stack;
PyObject *const_str_plain_selector_count;
PyObject *const_str_plain_combinator;
PyObject *const_str_plain_check;
PyObject *const_str_plain_advance;
PyObject *const_str_plain_push;
PyObject *const_str_digest_d1c6c0d381af82a5e3cb416781e811aa;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Iterable;
PyObject *const_str_digest_15082faffab5be7907e3bf39213a79fa;
PyObject *const_tuple_df99daec698f3ace5016f1d4b3caa49f_tuple;
PyObject *const_str_plain_Selector;
PyObject *const_str_plain_SelectorSet;
PyObject *const_dict_6f77f765f14c420a8dfeb39f4703c240;
PyObject *const_str_plain_match;
PyObject *const_dict_9d2318bb8bbceabeec69e9baeba86205;
PyObject *const_str_digest_efa09b96a4ad0ab818b2b1559486630e;
PyObject *const_tuple_91645faa7a0ccb3e0c0a221908f4dec8_tuple;
PyObject *const_str_digest_d80270cd5b4dcfc548f0afcbe4cb83f5;
PyObject *const_tuple_8137ac33c7c373baa2a0600850f5e8b9_tuple;
PyObject *const_tuple_str_plain_selector_sets_str_plain_node_tuple;
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
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.css.match"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_5fc21c311bf7c50afa17475759e3876f);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__check_selectors);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_selectors);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_node);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_css_path_nodes);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_792ef6169d68f97c64e3daef7b6495e7);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_CombinatorType);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_DESCENDENT);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_stack);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_selector_count);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_combinator);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_check);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_advance);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_push);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_d1c6c0d381af82a5e3cb416781e811aa);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_df99daec698f3ace5016f1d4b3caa49f_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Selector);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_SelectorSet);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_6f77f765f14c420a8dfeb39f4703c240);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_match);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_dict_9d2318bb8bbceabeec69e9baeba86205);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_efa09b96a4ad0ab818b2b1559486630e);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_91645faa7a0ccb3e0c0a221908f4dec8_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_d80270cd5b4dcfc548f0afcbe4cb83f5);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_8137ac33c7c373baa2a0600850f5e8b9_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_selector_sets_str_plain_node_tuple);
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
void checkModuleConstants_textual$css$match(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_5fc21c311bf7c50afa17475759e3876f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5fc21c311bf7c50afa17475759e3876f);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__check_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__check_selectors);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_selectors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selectors);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_node));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_node);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_css_path_nodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_css_path_nodes);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_792ef6169d68f97c64e3daef7b6495e7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_792ef6169d68f97c64e3daef7b6495e7);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_CombinatorType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CombinatorType);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_DESCENDENT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DESCENDENT);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_int_0_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_stack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stack);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_selector_count));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_selector_count);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_combinator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_combinator);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_check));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_check);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_advance));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_advance);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_push));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_d1c6c0d381af82a5e3cb416781e811aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d1c6c0d381af82a5e3cb416781e811aa);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_df99daec698f3ace5016f1d4b3caa49f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_df99daec698f3ace5016f1d4b3caa49f_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Selector));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Selector);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_SelectorSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SelectorSet);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_6f77f765f14c420a8dfeb39f4703c240));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6f77f765f14c420a8dfeb39f4703c240);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_match));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_match);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_dict_9d2318bb8bbceabeec69e9baeba86205));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9d2318bb8bbceabeec69e9baeba86205);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_efa09b96a4ad0ab818b2b1559486630e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_efa09b96a4ad0ab818b2b1559486630e);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_91645faa7a0ccb3e0c0a221908f4dec8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_91645faa7a0ccb3e0c0a221908f4dec8_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_d80270cd5b4dcfc548f0afcbe4cb83f5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d80270cd5b4dcfc548f0afcbe4cb83f5);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_8137ac33c7c373baa2a0600850f5e8b9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8137ac33c7c373baa2a0600850f5e8b9_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_selector_sets_str_plain_node_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_selector_sets_str_plain_node_tuple);
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
static PyObject *module_var_accessor_textual$css$match$CombinatorType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$match->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$match->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$match->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CombinatorType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CombinatorType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CombinatorType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CombinatorType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$match$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$match->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$match->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$match->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$css$match$_check_selectors(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$css$match->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$css$match->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain__check_selectors);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$css$match->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__check_selectors);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__check_selectors, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__check_selectors);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__check_selectors, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain__check_selectors);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain__check_selectors);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__check_selectors);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_933fb3605f29f0543de67521f769a360;
static PyCodeObject *code_objects_4d19e79b95d5074e6a945296dfe00aa9;
static PyCodeObject *code_objects_a7c0866a26d352bf449b4914e6433474;
static PyCodeObject *code_objects_3e029746d06c20d5dad3c9444da7567b;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_efa09b96a4ad0ab818b2b1559486630e); CHECK_OBJECT(module_filename_obj);
code_objects_933fb3605f29f0543de67521f769a360 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_792ef6169d68f97c64e3daef7b6495e7, mod_consts.const_tuple_91645faa7a0ccb3e0c0a221908f4dec8_tuple, NULL, 1, 0, 0);
code_objects_4d19e79b95d5074e6a945296dfe00aa9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d80270cd5b4dcfc548f0afcbe4cb83f5, mod_consts.const_str_digest_d80270cd5b4dcfc548f0afcbe4cb83f5, NULL, NULL, 0, 0, 0);
code_objects_a7c0866a26d352bf449b4914e6433474 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__check_selectors, mod_consts.const_str_plain__check_selectors, mod_consts.const_tuple_8137ac33c7c373baa2a0600850f5e8b9_tuple, NULL, 2, 0, 0);
code_objects_3e029746d06c20d5dad3c9444da7567b = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_match, mod_consts.const_str_plain_match, mod_consts.const_tuple_str_plain_selector_sets_str_plain_node_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_textual$css$match$$$function__1_match$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_textual$css$match$$$function__1_match(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$css$match$$$function__2__check_selectors(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$css$match$$$function__1_match(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_selector_sets = python_pars[0];
struct Nuitka_CellObject *par_node = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$match$$$function__1_match;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$match$$$function__1_match = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$match$$$function__1_match)) {
    Py_XDECREF(cache_frame_frame_textual$css$match$$$function__1_match);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$match$$$function__1_match == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$match$$$function__1_match = MAKE_FUNCTION_FRAME(tstate, code_objects_3e029746d06c20d5dad3c9444da7567b, module_textual$css$match, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$match$$$function__1_match->m_type_description == NULL);
frame_frame_textual$css$match$$$function__1_match = cache_frame_frame_textual$css$match$$$function__1_match;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$match$$$function__1_match);
assert(Py_REFCNT(frame_frame_textual$css$match$$$function__1_match) == 2);

// Framed code:
{
PyObject *tmp_any_arg_1;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_selector_sets);
tmp_iter_arg_1 = par_selector_sets;
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[1] = par_node;
Py_INCREF(tmp_closure_1[1]);
tmp_any_arg_1 = MAKE_GENERATOR_textual$css$match$$$function__1_match$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_2;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_return_value = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$match$$$function__1_match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$match$$$function__1_match->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$match$$$function__1_match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$match$$$function__1_match,
    type_description_1,
    par_selector_sets,
    par_node
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$match$$$function__1_match == cache_frame_frame_textual$css$match$$$function__1_match) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$match$$$function__1_match);
    cache_frame_frame_textual$css$match$$$function__1_match = NULL;
}

assertFrameObject(frame_frame_textual$css$match$$$function__1_match);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_node);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
par_node = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_node);
CHECK_OBJECT(par_node);
Py_DECREF(par_node);
par_node = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_selector_sets);
Py_DECREF(par_selector_sets);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_selector_sets);
Py_DECREF(par_selector_sets);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct textual$css$match$$$function__1_match$$$genexpr__1_genexpr_locals {
PyObject *var_selector_set;
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

static PyObject *textual$css$match$$$function__1_match$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct textual$css$match$$$function__1_match$$$genexpr__1_genexpr_locals *generator_heap = (struct textual$css$match$$$function__1_match$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_selector_set = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_933fb3605f29f0543de67521f769a360, module_textual$css$match, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 21;
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
    PyObject *old = generator_heap->var_selector_set;
    generator_heap->var_selector_set = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_selector_set);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_textual$css$match$_check_selectors(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__check_selectors);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_selector_set);
tmp_expression_value_2 = generator_heap->var_selector_set;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_selectors);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_node);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_css_path_nodes);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_args_element_value_1);

generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 22;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 22;
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


generator_heap->exception_lineno = 21;
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
    generator_heap->var_selector_set,
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

Py_XDECREF(generator_heap->var_selector_set);
generator_heap->var_selector_set = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_selector_set);
generator_heap->var_selector_set = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_textual$css$match$$$function__1_match$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        textual$css$match$$$function__1_match$$$genexpr__1_genexpr_context,
        module_textual$css$match,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_792ef6169d68f97c64e3daef7b6495e7,
#endif
        code_objects_933fb3605f29f0543de67521f769a360,
        closure,
        2,
#if 1
        sizeof(struct textual$css$match$$$function__1_match$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_textual$css$match$$$function__2__check_selectors(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_selectors = python_pars[0];
PyObject *par_css_path_nodes = python_pars[1];
PyObject *var_stack = NULL;
PyObject *var_DESCENDENT = NULL;
PyObject *var_node = NULL;
PyObject *var_path_count = NULL;
PyObject *var_selector_count = NULL;
PyObject *var_push = NULL;
PyObject *var_pop = NULL;
PyObject *var_selector_index = NULL;
PyObject *var_node_index = NULL;
PyObject *var_path_node = NULL;
PyObject *var_selector = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$match$$$function__2__check_selectors;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_textual$css$match$$$function__2__check_selectors = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$css$match$$$function__2__check_selectors)) {
    Py_XDECREF(cache_frame_frame_textual$css$match$$$function__2__check_selectors);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$css$match$$$function__2__check_selectors == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$css$match$$$function__2__check_selectors = MAKE_FUNCTION_FRAME(tstate, code_objects_a7c0866a26d352bf449b4914e6433474, module_textual$css$match, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$css$match$$$function__2__check_selectors->m_type_description == NULL);
frame_frame_textual$css$match$$$function__2__check_selectors = cache_frame_frame_textual$css$match$$$function__2__check_selectors;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$match$$$function__2__check_selectors);
assert(Py_REFCNT(frame_frame_textual$css$match$$$function__2__check_selectors) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_textual$css$match$CombinatorType(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_DESCENDENT);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_DESCENDENT == NULL);
var_DESCENDENT = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_css_path_nodes);
tmp_expression_value_2 = par_css_path_nodes;
tmp_subscript_value_1 = const_int_neg_1;
tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, -1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_node == NULL);
var_node = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_css_path_nodes);
tmp_len_arg_1 = par_css_path_nodes;
tmp_assign_source_3 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_path_count == NULL);
var_path_count = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_len_arg_2;
CHECK_OBJECT(par_selectors);
tmp_len_arg_2 = par_selectors;
tmp_assign_source_4 = BUILTIN_LEN(tstate, tmp_len_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_selector_count == NULL);
var_selector_count = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST1(tstate, mod_consts.const_tuple_int_0_int_0_tuple);
assert(var_stack == NULL);
var_stack = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_stack);
tmp_expression_value_3 = var_stack;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_append);
assert(!(tmp_assign_source_6 == NULL));
assert(var_push == NULL);
var_push = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_stack);
tmp_expression_value_4 = var_stack;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_pop);
assert(!(tmp_assign_source_7 == NULL));
assert(var_pop == NULL);
var_pop = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
assert(var_selector_index == NULL);
Py_INCREF(tmp_assign_source_8);
var_selector_index = tmp_assign_source_8;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 50;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = var_stack;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
if (var_stack == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_5 = var_stack;
tmp_subscript_value_2 = const_int_neg_1;
tmp_iter_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_2, -1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_10 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_selector_index;
    var_selector_index = tmp_assign_source_12;
    Py_INCREF(var_selector_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_node_index;
    var_node_index = tmp_assign_source_13;
    Py_INCREF(var_node_index);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_selector_index);
tmp_cmp_expr_left_1 = var_selector_index;
if (var_selector_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selector_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 52;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_right_1 = var_selector_count;
tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_node_index);
tmp_cmp_expr_left_2 = var_node_index;
CHECK_OBJECT(var_path_count);
tmp_cmp_expr_right_2 = var_path_count;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
if (var_pop == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pop);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 53;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_1 = var_pop;
frame_frame_textual$css$match$$$function__2__check_selectors->m_frame.f_lineno = 53;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_css_path_nodes);
tmp_expression_value_6 = par_css_path_nodes;
CHECK_OBJECT(var_node_index);
tmp_subscript_value_3 = var_node_index;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_3);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_path_node;
    var_path_node = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_selectors);
tmp_expression_value_7 = par_selectors;
CHECK_OBJECT(var_selector_index);
tmp_subscript_value_4 = var_selector_index;
tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_selector;
    var_selector = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_selector);
tmp_expression_value_8 = var_selector;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_combinator);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_DESCENDENT);
tmp_cmp_expr_right_3 = var_DESCENDENT;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_selector);
tmp_called_instance_1 = var_selector;
CHECK_OBJECT(var_path_node);
tmp_args_element_value_1 = var_path_node;
frame_frame_textual$css$match$$$function__2__check_selectors->m_frame.f_lineno = 59;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_check, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 59;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
CHECK_OBJECT(var_path_node);
tmp_cmp_expr_left_4 = var_path_node;
CHECK_OBJECT(var_node);
tmp_cmp_expr_right_4 = var_node;
tmp_and_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_selector_index);
tmp_cmp_expr_left_5 = var_selector_index;
if (var_selector_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selector_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_1 = var_selector_count;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_cmp_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_5 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_5:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
int tmp_ass_subscript_res_1;
CHECK_OBJECT(var_selector_index);
tmp_add_expr_left_1 = var_selector_index;
tmp_add_expr_right_1 = const_int_pos_1;
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM(tmp_ass_subvalue_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_node_index);
tmp_add_expr_left_2 = var_node_index;
CHECK_OBJECT(var_selector);
tmp_expression_value_9 = var_selector;
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_advance);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_ass_subvalue_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
if (var_stack == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 62;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_1 = var_stack;
tmp_ass_subscript_1 = const_int_neg_1;
tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_ass_subscript_res_1 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_tuple_element_2;
if (var_push == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_push);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_2 = var_push;
CHECK_OBJECT(var_selector_index);
tmp_tuple_element_2 = var_selector_index;
tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_node_index);
tmp_add_expr_left_3 = var_node_index;
tmp_add_expr_right_3 = const_int_pos_1;
tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_args_element_value_2, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
frame_frame_textual$css$match$$$function__2__check_selectors->m_frame.f_lineno = 63;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
int tmp_ass_subscript_res_2;
CHECK_OBJECT(var_selector_index);
tmp_tuple_element_3 = var_selector_index;
tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_node_index);
tmp_add_expr_left_4 = var_node_index;
tmp_add_expr_right_4 = const_int_pos_1;
tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_ass_subvalue_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
if (var_stack == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 65;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_2 = var_stack;
tmp_ass_subscript_2 = const_int_neg_1;
tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, -1, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_ass_subscript_res_2 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_end_4:;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_selector);
tmp_called_instance_2 = var_selector;
CHECK_OBJECT(var_path_node);
tmp_args_element_value_3 = var_path_node;
frame_frame_textual$css$match$$$function__2__check_selectors->m_frame.f_lineno = 68;
tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_check, tmp_args_element_value_3);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 68;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
CHECK_OBJECT(var_path_node);
tmp_cmp_expr_left_6 = var_path_node;
CHECK_OBJECT(var_node);
tmp_cmp_expr_right_6 = var_node;
tmp_and_left_value_2 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_selector_index);
tmp_cmp_expr_left_7 = var_selector_index;
if (var_selector_count == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_selector_count);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 69;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_2 = var_selector_count;
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_cmp_expr_right_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
if (tmp_cmp_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_right_7);
Py_DECREF(tmp_cmp_expr_right_7);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_7:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_tuple_element_4;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
int tmp_ass_subscript_res_3;
CHECK_OBJECT(var_selector_index);
tmp_add_expr_left_5 = var_selector_index;
tmp_add_expr_right_5 = const_int_pos_1;
tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_5, tmp_add_expr_right_5);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subvalue_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_expression_value_10;
PyTuple_SET_ITEM(tmp_ass_subvalue_3, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_node_index);
tmp_add_expr_left_6 = var_node_index;
CHECK_OBJECT(var_selector);
tmp_expression_value_10 = var_selector;
tmp_add_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_advance);
if (tmp_add_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_right_6);
Py_DECREF(tmp_add_expr_right_6);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_ass_subvalue_3, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_ass_subvalue_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
if (var_stack == NULL) {
Py_DECREF(tmp_ass_subvalue_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_stack);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_3 = var_stack;
tmp_ass_subscript_3 = const_int_neg_1;
tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, -1, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subvalue_3);
Py_DECREF(tmp_ass_subvalue_3);
if (tmp_ass_subscript_res_3 == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_5;
if (var_pop == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pop);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_called_value_3 = var_pop;
frame_frame_textual$css$match$$$function__2__check_selectors->m_frame.f_lineno = 73;
tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_end_6:;
branch_end_3:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$match$$$function__2__check_selectors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$match$$$function__2__check_selectors->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$match$$$function__2__check_selectors, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$css$match$$$function__2__check_selectors,
    type_description_1,
    par_selectors,
    par_css_path_nodes,
    var_stack,
    var_DESCENDENT,
    var_node,
    var_path_count,
    var_selector_count,
    var_push,
    var_pop,
    var_selector_index,
    var_node_index,
    var_path_node,
    var_selector
);


// Release cached frame if used for exception.
if (frame_frame_textual$css$match$$$function__2__check_selectors == cache_frame_frame_textual$css$match$$$function__2__check_selectors) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$css$match$$$function__2__check_selectors);
    cache_frame_frame_textual$css$match$$$function__2__check_selectors = NULL;
}

assertFrameObject(frame_frame_textual$css$match$$$function__2__check_selectors);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_stack);
var_stack = NULL;
CHECK_OBJECT(var_DESCENDENT);
CHECK_OBJECT(var_DESCENDENT);
Py_DECREF(var_DESCENDENT);
var_DESCENDENT = NULL;
CHECK_OBJECT(var_node);
CHECK_OBJECT(var_node);
Py_DECREF(var_node);
var_node = NULL;
CHECK_OBJECT(var_path_count);
CHECK_OBJECT(var_path_count);
Py_DECREF(var_path_count);
var_path_count = NULL;
Py_XDECREF(var_selector_count);
var_selector_count = NULL;
Py_XDECREF(var_push);
var_push = NULL;
Py_XDECREF(var_pop);
var_pop = NULL;
Py_XDECREF(var_selector_index);
var_selector_index = NULL;
Py_XDECREF(var_node_index);
var_node_index = NULL;
Py_XDECREF(var_path_node);
var_path_node = NULL;
Py_XDECREF(var_selector);
var_selector = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_stack);
var_stack = NULL;
Py_XDECREF(var_DESCENDENT);
var_DESCENDENT = NULL;
Py_XDECREF(var_node);
var_node = NULL;
Py_XDECREF(var_path_count);
var_path_count = NULL;
Py_XDECREF(var_selector_count);
var_selector_count = NULL;
Py_XDECREF(var_push);
var_push = NULL;
Py_XDECREF(var_pop);
var_pop = NULL;
Py_XDECREF(var_selector_index);
var_selector_index = NULL;
Py_XDECREF(var_node_index);
var_node_index = NULL;
Py_XDECREF(var_path_node);
var_path_node = NULL;
Py_XDECREF(var_selector);
var_selector = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_selectors);
Py_DECREF(par_selectors);
CHECK_OBJECT(par_css_path_nodes);
Py_DECREF(par_css_path_nodes);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_selectors);
Py_DECREF(par_selectors);
CHECK_OBJECT(par_css_path_nodes);
Py_DECREF(par_css_path_nodes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$css$match$$$function__1_match(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$match$$$function__1_match,
        mod_consts.const_str_plain_match,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3e029746d06c20d5dad3c9444da7567b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$match,
        mod_consts.const_str_digest_5fc21c311bf7c50afa17475759e3876f,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$css$match$$$function__2__check_selectors(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$css$match$$$function__2__check_selectors,
        mod_consts.const_str_plain__check_selectors,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a7c0866a26d352bf449b4914e6433474,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$css$match,
        mod_consts.const_str_digest_d1c6c0d381af82a5e3cb416781e811aa,
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

static function_impl_code const function_table_textual$css$match[] = {
impl_textual$css$match$$$function__1_match,
impl_textual$css$match$$$function__2__check_selectors,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$css$match);
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
        module_textual$css$match,
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
        function_table_textual$css$match,
        sizeof(function_table_textual$css$match) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.css.match";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$css$match(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$css$match");

    // Store the module for future use.
    module_textual$css$match = module;

    moduledict_textual$css$match = MODULE_DICT(module_textual$css$match);

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
        PRINT_STRING("textual$css$match: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$css$match: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$css$match: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.match" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$css$match\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$css$match,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$css$match,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$css$match,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$match,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$css$match,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$css$match);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$css$match);
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

        UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_textual$css$match;
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
UPDATE_STRING_DICT0(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$css$match = MAKE_MODULE_FRAME(code_objects_4d19e79b95d5074e6a945296dfe00aa9, module_textual$css$match);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$css$match);
assert(Py_REFCNT(frame_frame_textual$css$match) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$css$match$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$css$match$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_5);
tmp_import_from_1__module = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = Py_False;
UPDATE_STRING_DICT0(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
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
        (PyObject *)moduledict_textual$css$match,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_7);
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
tmp_name_value_1 = mod_consts.const_str_digest_15082faffab5be7907e3bf39213a79fa;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$css$match;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_df99daec698f3ace5016f1d4b3caa49f_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$css$match->m_frame.f_lineno = 5;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_2 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$css$match,
        mod_consts.const_str_plain_CombinatorType,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_CombinatorType);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_CombinatorType, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_textual$css$match,
        mod_consts.const_str_plain_Selector,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Selector);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_Selector, tmp_assign_source_10);
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
        (PyObject *)moduledict_textual$css$match,
        mod_consts.const_str_plain_SelectorSet,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_SelectorSet);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_SelectorSet, tmp_assign_source_11);
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$css$match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$css$match->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$css$match, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$css$match);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(tmp_import_from_2__module);
CHECK_OBJECT(tmp_import_from_2__module);
Py_DECREF(tmp_import_from_2__module);
tmp_import_from_2__module = NULL;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6f77f765f14c420a8dfeb39f4703c240);

tmp_assign_source_12 = MAKE_FUNCTION_textual$css$match$$$function__1_match(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain_match, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9d2318bb8bbceabeec69e9baeba86205);

tmp_assign_source_13 = MAKE_FUNCTION_textual$css$match$$$function__2__check_selectors(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$css$match, (Nuitka_StringObject *)mod_consts.const_str_plain__check_selectors, tmp_assign_source_13);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$css$match", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.css.match" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$css$match);
    return module_textual$css$match;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$css$match, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$css$match", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

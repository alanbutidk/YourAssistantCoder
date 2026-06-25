/* Generated code for Python module 'markdown_it$rules_inline$balance_pairs'
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



/* The "module_markdown_it$rules_inline$balance_pairs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_markdown_it$rules_inline$balance_pairs;
PyDictObject *moduledict_markdown_it$rules_inline$balance_pairs;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_int_neg_2;
PyObject *const_str_plain_closerIdx;
PyObject *const_str_plain_jumps;
PyObject *const_str_plain_append;
PyObject *const_tuple_int_0_tuple;
PyObject *const_str_plain_headerIdx;
PyObject *const_str_plain_marker;
PyObject *const_str_plain_lastTokenIdx;
PyObject *const_str_plain_token;
PyObject *const_str_plain_length;
PyObject *const_str_plain_openersBottom;
PyObject *const_int_pos_3;
PyObject *const_str_plain_openerIdx;
PyObject *const_str_plain_closer;
PyObject *const_str_digest_4e1d305d223dce32ad9d37106a9528ce;
PyObject *const_str_plain_tokens_meta;
PyObject *const_str_plain_processDelimiters;
PyObject *const_str_plain_delimiters;
PyObject *const_str_plain_curr;
PyObject *const_str_plain_state;
PyObject *const_str_digest_8b99358fcbd5ed34ace987eaecd0aca6;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_state_inline;
PyObject *const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple;
PyObject *const_str_plain_Delimiter;
PyObject *const_str_plain_StateInline;
PyObject *const_dict_3192b5c58b32eb825f13079cae49f470;
PyObject *const_dict_cfbb4f58f9571197e34ff5758d06bfce;
PyObject *const_str_plain_link_pairs;
PyObject *const_str_digest_a313a06ff554dd967a956551175ce1ef;
PyObject *const_str_digest_304794d5adc7a35b2943bfa17bd5839d;
PyObject *const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple;
PyObject *const_tuple_cc74cc47a16bb26f2c7fde7c3a75963d_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[35];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("markdown_it.rules_inline.balance_pairs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_int_neg_2);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_closerIdx);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_jumps);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_headerIdx);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_marker);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_lastTokenIdx);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_length);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_openersBottom);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_openerIdx);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_closer);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e1d305d223dce32ad9d37106a9528ce);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_tokens_meta);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_processDelimiters);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_delimiters);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_curr);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_state);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b99358fcbd5ed34ace987eaecd0aca6);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_state_inline);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_Delimiter);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_StateInline);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_link_pairs);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_a313a06ff554dd967a956551175ce1ef);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_304794d5adc7a35b2943bfa17bd5839d);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_cc74cc47a16bb26f2c7fde7c3a75963d_tuple);
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
void checkModuleConstants_markdown_it$rules_inline$balance_pairs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_int_neg_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_neg_2);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_closerIdx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closerIdx);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_jumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_jumps);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_int_0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_int_0_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_headerIdx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headerIdx);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_marker));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_marker);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_lastTokenIdx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lastTokenIdx);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_length));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_length);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_openersBottom));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_openersBottom);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_openerIdx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_openerIdx);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_closer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_closer);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e1d305d223dce32ad9d37106a9528ce));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e1d305d223dce32ad9d37106a9528ce);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_tokens_meta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tokens_meta);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_processDelimiters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_processDelimiters);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_delimiters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_delimiters);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_curr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_curr);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_state));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b99358fcbd5ed34ace987eaecd0aca6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b99358fcbd5ed34ace987eaecd0aca6);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_state_inline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_state_inline);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_Delimiter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Delimiter);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_StateInline));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StateInline);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_link_pairs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_link_pairs);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_a313a06ff554dd967a956551175ce1ef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a313a06ff554dd967a956551175ce1ef);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_304794d5adc7a35b2943bfa17bd5839d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_304794d5adc7a35b2943bfa17bd5839d);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_cc74cc47a16bb26f2c7fde7c3a75963d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cc74cc47a16bb26f2c7fde7c3a75963d_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_markdown_it$rules_inline$balance_pairs$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$balance_pairs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$balance_pairs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$balance_pairs->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_markdown_it$rules_inline$balance_pairs$processDelimiters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_markdown_it$rules_inline$balance_pairs->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_markdown_it$rules_inline$balance_pairs->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_processDelimiters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_markdown_it$rules_inline$balance_pairs->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_processDelimiters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_processDelimiters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_processDelimiters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_processDelimiters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_processDelimiters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_processDelimiters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_processDelimiters);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_3d2130e0a9af99bdf58e2bfc67d14c94;
static PyCodeObject *code_objects_55ffa5f653a4c709dfc4b58a9d08a893;
static PyCodeObject *code_objects_71784d060a2f73cadd7102a9bbeb03eb;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a313a06ff554dd967a956551175ce1ef); CHECK_OBJECT(module_filename_obj);
code_objects_3d2130e0a9af99bdf58e2bfc67d14c94 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_304794d5adc7a35b2943bfa17bd5839d, mod_consts.const_str_digest_304794d5adc7a35b2943bfa17bd5839d, NULL, NULL, 0, 0, 0);
code_objects_55ffa5f653a4c709dfc4b58a9d08a893 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_link_pairs, mod_consts.const_str_plain_link_pairs, mod_consts.const_tuple_8f5f74bc78e999f1d52a4f01a4538d28_tuple, NULL, 1, 0, 0);
code_objects_71784d060a2f73cadd7102a9bbeb03eb = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_processDelimiters, mod_consts.const_str_plain_processDelimiters, mod_consts.const_tuple_cc74cc47a16bb26f2c7fde7c3a75963d_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *par_delimiters = python_pars[1];
PyObject *var_jumps = NULL;
PyObject *var_openersBottom = NULL;
PyObject *var_maximum = NULL;
PyObject *var_headerIdx = NULL;
PyObject *var_lastTokenIdx = NULL;
PyObject *var_closerIdx = NULL;
PyObject *var_closer = NULL;
PyObject *var_minOpenerIdx = NULL;
PyObject *var_openerIdx = NULL;
PyObject *var_newMinOpenerIdx = NULL;
PyObject *var_opener = NULL;
PyObject *var_isOddMatch = NULL;
PyObject *var_lastJump = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters = MAKE_FUNCTION_FRAME(tstate, code_objects_71784d060a2f73cadd7102a9bbeb03eb, module_markdown_it$rules_inline$balance_pairs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters->m_type_description == NULL);
frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters = cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_delimiters);
tmp_operand_value_1 = par_delimiters;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;
type_description_1 = "ooooooooooooooo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_openersBottom == NULL);
var_openersBottom = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(par_delimiters);
tmp_len_arg_1 = par_delimiters;
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(var_headerIdx == NULL);
Py_INCREF(tmp_assign_source_3);
var_headerIdx = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_int_neg_2;
assert(var_lastTokenIdx == NULL);
Py_INCREF(tmp_assign_source_4);
var_lastTokenIdx = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_jumps == NULL);
var_jumps = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = const_int_0;
assert(var_closerIdx == NULL);
Py_INCREF(tmp_assign_source_6);
var_closerIdx = tmp_assign_source_6;
}
loop_start_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_closerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 21;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_closerIdx;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_1 = var_maximum;
tmp_operand_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
goto loop_end_1;
branch_no_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_delimiters);
tmp_expression_value_1 = par_delimiters;
if (var_closerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 22;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_1 = var_closerIdx;
tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_closer;
    var_closer = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
if (var_jumps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jumps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 24;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = var_jumps;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_append);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters->m_frame.f_lineno = 24;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_int_0_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_delimiters);
tmp_expression_value_4 = par_delimiters;
if (var_headerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 31;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_2 = var_headerIdx;
tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_marker);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_closer);
tmp_expression_value_5 = var_closer;
tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_marker);
if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_2);

exception_lineno = 31;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
CHECK_OBJECT(tmp_cmp_expr_right_2);
Py_DECREF(tmp_cmp_expr_right_2);
if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (var_lastTokenIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_lastTokenIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 32;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = var_lastTokenIdx;
CHECK_OBJECT(var_closer);
tmp_expression_value_6 = var_closer;
tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_token);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_cmp_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_8;
if (var_closerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 34;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assign_source_8 = var_closerIdx;
{
    PyObject *old = var_headerIdx;
    var_headerIdx = tmp_assign_source_8;
    Py_INCREF(var_headerIdx);
    Py_XDECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_closer);
tmp_expression_value_7 = var_closer;
tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_token);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lastTokenIdx;
    var_lastTokenIdx = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_closer);
tmp_expression_value_8 = var_closer;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_length);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 41;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(tmp_or_left_value_2);
Py_DECREF(tmp_or_left_value_2);
tmp_or_right_value_2 = const_int_0;
Py_INCREF(tmp_or_right_value_2);
tmp_assattr_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assattr_value_1 = tmp_or_left_value_2;
or_end_2:;
CHECK_OBJECT(var_closer);
tmp_assattr_target_1 = var_closer;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_length, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_closer);
tmp_expression_value_9 = var_closer;
tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_close);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
if (var_closerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 44;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_closerIdx;
tmp_iadd_expr_right_1 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_10 = tmp_iadd_expr_left_1;
var_closerIdx = tmp_assign_source_10;

}
goto loop_start_1;
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_key_value_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_dict_arg_value_1;
CHECK_OBJECT(var_closer);
tmp_expression_value_10 = var_closer;
tmp_key_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_marker);
if (tmp_key_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_openersBottom == NULL) {
Py_DECREF(tmp_key_value_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openersBottom);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 51;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_arg_value_1 = var_openersBottom;
tmp_res = DICT_HAS_ITEM(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
CHECK_OBJECT(tmp_key_value_1);
Py_DECREF(tmp_key_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_11;
tmp_dictset_value = MAKE_LIST_REPEATED(tstate, 6, const_int_neg_1);
if (var_openersBottom == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openersBottom);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 52;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dictset_dict = var_openersBottom;
CHECK_OBJECT(var_closer);
tmp_expression_value_11 = var_closer;
tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_marker);
if (tmp_dictset_key == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_dictset_value);

exception_lineno = 52;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_key);
Py_DECREF(tmp_dictset_key);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_5:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_4;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_expression_value_16;
if (var_openersBottom == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openersBottom);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 54;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = var_openersBottom;
CHECK_OBJECT(var_closer);
tmp_expression_value_14 = var_closer;
tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_marker);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_closer);
tmp_expression_value_15 = var_closer;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_open);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 55;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 55;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_add_expr_left_1 = mod_consts.const_int_pos_3;
goto condexpr_end_1;
condexpr_false_1:;
tmp_add_expr_left_1 = const_int_0;
condexpr_end_1:;
CHECK_OBJECT(var_closer);
tmp_expression_value_16 = var_closer;
tmp_mod_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_length);
if (tmp_mod_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 55;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_1 = mod_consts.const_int_pos_3;
tmp_add_expr_right_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_left_1);
Py_DECREF(tmp_mod_expr_left_1);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 55;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_subscript_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_expression_value_12);

exception_lineno = 55;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_minOpenerIdx;
    var_minOpenerIdx = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_sub_expr_left_2;
PyObject *tmp_sub_expr_right_2;
PyObject *tmp_sub_expr_left_3;
PyObject *tmp_sub_expr_right_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_5;
if (var_headerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_3 = var_headerIdx;
if (var_jumps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jumps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_17 = var_jumps;
if (var_headerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_headerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 58;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_5 = var_headerIdx;
tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_5);
if (tmp_sub_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
CHECK_OBJECT(tmp_sub_expr_right_3);
Py_DECREF(tmp_sub_expr_right_3);
if (tmp_sub_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_sub_expr_right_2 = const_int_pos_1;
tmp_assign_source_12 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
CHECK_OBJECT(tmp_sub_expr_left_2);
Py_DECREF(tmp_sub_expr_left_2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_openerIdx;
    var_openerIdx = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(var_openerIdx);
tmp_assign_source_13 = var_openerIdx;
{
    PyObject *old = var_newMinOpenerIdx;
    var_newMinOpenerIdx = tmp_assign_source_13;
    Py_INCREF(var_newMinOpenerIdx);
    Py_XDECREF(old);
}

}
loop_start_2:;
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 62;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_4 = var_openerIdx;
CHECK_OBJECT(var_minOpenerIdx);
tmp_cmp_expr_right_4 = var_minOpenerIdx;
tmp_operand_value_4 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
goto loop_end_2;
branch_no_6:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_6;
CHECK_OBJECT(par_delimiters);
tmp_expression_value_18 = par_delimiters;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_6 = var_openerIdx;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_6);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_opener;
    var_opener = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(var_opener);
tmp_expression_value_19 = var_opener;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_marker);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_closer == NULL) {
Py_DECREF(tmp_cmp_expr_left_5);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 65;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_20 = var_closer;
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_marker);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 65;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_7;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_1 = var_openerIdx;
if (var_jumps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jumps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = var_jumps;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 66;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_7 = var_openerIdx;
tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_7);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = const_int_pos_1;
tmp_isub_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_15 = tmp_isub_expr_left_1;
var_openerIdx = tmp_assign_source_15;

}
goto loop_start_2;
branch_no_7:;
{
nuitka_bool tmp_condition_result_9;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_22;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(var_opener);
tmp_expression_value_22 = var_opener;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_open);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 69;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_opener);
tmp_expression_value_23 = var_opener;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_end);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = const_int_0;
tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_9 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = Py_False;
{
    PyObject *old = var_isOddMatch;
    var_isOddMatch = tmp_assign_source_16;
    Py_INCREF(var_isOddMatch);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_10;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_expression_value_24;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
PyObject *tmp_expression_value_25;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
int tmp_or_left_truth_4;
nuitka_bool tmp_or_left_value_4;
nuitka_bool tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_expression_value_28;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(var_opener);
tmp_expression_value_24 = var_opener;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_close);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 80;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
if (var_closer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 80;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = var_closer;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_open);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 80;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
tmp_and_left_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_and_left_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_opener);
tmp_expression_value_26 = var_opener;
tmp_add_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_length);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_closer == NULL) {
Py_DECREF(tmp_add_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_27 = var_closer;
tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain_length);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_3);

exception_lineno = 81;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_mod_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_2 = mod_consts.const_int_pos_3;
tmp_cmp_expr_left_7 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_left_2);
Py_DECREF(tmp_mod_expr_left_2);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = const_int_0;
tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_opener);
tmp_expression_value_28 = var_opener;
tmp_mod_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_length);
if (tmp_mod_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_3 = mod_consts.const_int_pos_3;
tmp_cmp_expr_left_8 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_left_3);
Py_DECREF(tmp_mod_expr_left_3);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = const_int_0;
tmp_or_left_value_4 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_or_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = tmp_or_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
if (var_closer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_29 = var_closer;
tmp_mod_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_length);
if (tmp_mod_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_mod_expr_right_4 = mod_consts.const_int_pos_3;
tmp_cmp_expr_left_9 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_left_4);
Py_DECREF(tmp_mod_expr_left_4);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = const_int_0;
tmp_or_right_value_4 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_or_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_and_right_value_3 = tmp_or_left_value_4;
or_end_4:;
tmp_and_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_10 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_10 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = Py_True;
{
    PyObject *old = var_isOddMatch;
    assert(old != NULL);
    var_isOddMatch = tmp_assign_source_17;
    Py_INCREF(var_isOddMatch);
    Py_DECREF(old);
}

}
branch_no_9:;
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_5;
CHECK_OBJECT(var_isOddMatch);
tmp_operand_value_5 = var_isOddMatch;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_condition_result_12;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_operand_value_6;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_8;
PyObject *tmp_sub_expr_left_4;
PyObject *tmp_sub_expr_right_4;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_10 = var_openerIdx;
tmp_cmp_expr_right_10 = const_int_0;
tmp_and_left_value_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(par_delimiters);
tmp_expression_value_31 = par_delimiters;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_4 = var_openerIdx;
tmp_sub_expr_right_4 = const_int_pos_1;
tmp_subscript_value_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
if (tmp_subscript_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain_open);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_12 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_12 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_9;
PyObject *tmp_sub_expr_left_5;
PyObject *tmp_sub_expr_right_5;
if (var_jumps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jumps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_32 = var_jumps;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_5 = var_openerIdx;
tmp_sub_expr_right_5 = const_int_pos_1;
tmp_subscript_value_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
if (tmp_subscript_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_add_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_4 = const_int_pos_1;
tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_left_4);
Py_DECREF(tmp_add_expr_left_4);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_lastJump;
    var_lastJump = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
goto branch_end_11;
branch_no_11:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = const_int_0;
{
    PyObject *old = var_lastJump;
    var_lastJump = tmp_assign_source_19;
    Py_INCREF(var_lastJump);
    Py_XDECREF(old);
}

}
branch_end_11:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_add_expr_left_5;
PyObject *tmp_add_expr_right_5;
PyObject *tmp_sub_expr_left_6;
PyObject *tmp_sub_expr_right_6;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
if (var_closerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_left_6 = var_closerIdx;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_sub_expr_right_6 = var_openerIdx;
tmp_add_expr_left_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
if (tmp_add_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_lastJump);
tmp_add_expr_right_5 = var_lastJump;
tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
CHECK_OBJECT(tmp_add_expr_left_5);
Py_DECREF(tmp_add_expr_left_5);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_jumps == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jumps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_1 = var_jumps;
if (var_closerIdx == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 96;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_1 = var_closerIdx;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_lastJump);
tmp_ass_subvalue_2 = var_lastJump;
if (var_jumps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jumps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscribed_2 = var_jumps;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_ass_subscript_2 = var_openerIdx;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
tmp_assattr_value_2 = Py_False;
if (var_closer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_2 = var_closer;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain_open, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
if (var_closerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_value_3 = var_closerIdx;
CHECK_OBJECT(var_opener);
tmp_assattr_target_3 = var_opener;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_end, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_False;
CHECK_OBJECT(var_opener);
tmp_assattr_target_4 = var_opener;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, const_str_plain_close, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_20;
tmp_assign_source_20 = const_int_neg_1;
{
    PyObject *old = var_newMinOpenerIdx;
    assert(old != NULL);
    var_newMinOpenerIdx = tmp_assign_source_20;
    Py_INCREF(var_newMinOpenerIdx);
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = mod_consts.const_int_neg_2;
{
    PyObject *old = var_lastTokenIdx;
    assert(old != NULL);
    var_lastTokenIdx = tmp_assign_source_21;
    Py_INCREF(var_lastTokenIdx);
    Py_DECREF(old);
}

}
goto loop_end_2;
branch_no_10:;
branch_no_8:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
PyObject *tmp_add_expr_left_6;
PyObject *tmp_add_expr_right_6;
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_10;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_isub_expr_left_2 = var_openerIdx;
if (var_jumps == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_jumps);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_33 = var_jumps;
if (var_openerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 110;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_10 = var_openerIdx;
tmp_add_expr_left_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_10);
if (tmp_add_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_6 = const_int_pos_1;
tmp_isub_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_6, tmp_add_expr_right_6);
CHECK_OBJECT(tmp_add_expr_left_6);
Py_DECREF(tmp_add_expr_left_6);
if (tmp_isub_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
CHECK_OBJECT(tmp_isub_expr_right_2);
Py_DECREF(tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_22 = tmp_isub_expr_left_2;
var_openerIdx = tmp_assign_source_22;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
goto loop_start_2;
loop_end_2:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_newMinOpenerIdx);
tmp_cmp_expr_left_11 = var_newMinOpenerIdx;
tmp_cmp_expr_right_11 = const_int_neg_1;
tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_11;
PyObject *tmp_expression_value_35;
PyObject *tmp_ass_subscript_3;
PyObject *tmp_add_expr_left_7;
PyObject *tmp_add_expr_right_7;
nuitka_bool tmp_condition_result_14;
PyObject *tmp_expression_value_36;
PyObject *tmp_attribute_value_5;
int tmp_truth_name_5;
PyObject *tmp_mod_expr_left_5;
PyObject *tmp_mod_expr_right_5;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(var_newMinOpenerIdx);
tmp_ass_subvalue_3 = var_newMinOpenerIdx;
if (var_openersBottom == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_openersBottom);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 120;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_34 = var_openersBottom;
if (var_closer == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 120;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_35 = var_closer;
tmp_subscript_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_marker);
if (tmp_subscript_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_11);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_closer == NULL) {
Py_DECREF(tmp_ass_subscribed_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_36 = var_closer;
tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain_open);
if (tmp_attribute_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_3);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_5);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_3);
Py_DECREF(tmp_attribute_value_5);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_5);
Py_DECREF(tmp_attribute_value_5);
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_add_expr_left_7 = mod_consts.const_int_pos_3;
goto condexpr_end_2;
condexpr_false_2:;
tmp_add_expr_left_7 = const_int_0;
condexpr_end_2:;
if (var_closer == NULL) {
Py_DECREF(tmp_ass_subscribed_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closer);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_37 = var_closer;
tmp_or_left_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_length);
if (tmp_or_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_3);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_3);
Py_DECREF(tmp_or_left_value_5);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(tmp_or_left_value_5);
Py_DECREF(tmp_or_left_value_5);
tmp_or_right_value_5 = const_int_0;
Py_INCREF(tmp_or_right_value_5);
tmp_mod_expr_left_5 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_mod_expr_left_5 = tmp_or_left_value_5;
or_end_5:;
tmp_mod_expr_right_5 = mod_consts.const_int_pos_3;
tmp_add_expr_right_7 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
CHECK_OBJECT(tmp_mod_expr_left_5);
Py_DECREF(tmp_mod_expr_left_5);
if (tmp_add_expr_right_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_3);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
CHECK_OBJECT(tmp_add_expr_right_7);
Py_DECREF(tmp_add_expr_right_7);
if (tmp_ass_subscript_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subscribed_3);

exception_lineno = 121;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
CHECK_OBJECT(tmp_ass_subscript_3);
Py_DECREF(tmp_ass_subscript_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_12:;
{
PyObject *tmp_assign_source_23;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
if (var_closerIdx == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_closerIdx);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 124;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_2 = var_closerIdx;
tmp_iadd_expr_right_2 = const_int_pos_1;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_23 = tmp_iadd_expr_left_2;
var_closerIdx = tmp_assign_source_23;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters,
    type_description_1,
    par_state,
    par_delimiters,
    var_jumps,
    var_openersBottom,
    var_maximum,
    var_headerIdx,
    var_lastTokenIdx,
    var_closerIdx,
    var_closer,
    var_minOpenerIdx,
    var_openerIdx,
    var_newMinOpenerIdx,
    var_opener,
    var_isOddMatch,
    var_lastJump
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters == cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters);
    cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_jumps);
var_jumps = NULL;
Py_XDECREF(var_openersBottom);
var_openersBottom = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_headerIdx);
var_headerIdx = NULL;
Py_XDECREF(var_lastTokenIdx);
var_lastTokenIdx = NULL;
Py_XDECREF(var_closerIdx);
var_closerIdx = NULL;
Py_XDECREF(var_closer);
var_closer = NULL;
Py_XDECREF(var_minOpenerIdx);
var_minOpenerIdx = NULL;
Py_XDECREF(var_openerIdx);
var_openerIdx = NULL;
Py_XDECREF(var_newMinOpenerIdx);
var_newMinOpenerIdx = NULL;
Py_XDECREF(var_opener);
var_opener = NULL;
Py_XDECREF(var_isOddMatch);
var_isOddMatch = NULL;
Py_XDECREF(var_lastJump);
var_lastJump = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_jumps);
var_jumps = NULL;
Py_XDECREF(var_openersBottom);
var_openersBottom = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_headerIdx);
var_headerIdx = NULL;
Py_XDECREF(var_lastTokenIdx);
var_lastTokenIdx = NULL;
Py_XDECREF(var_closerIdx);
var_closerIdx = NULL;
Py_XDECREF(var_closer);
var_closer = NULL;
Py_XDECREF(var_minOpenerIdx);
var_minOpenerIdx = NULL;
Py_XDECREF(var_openerIdx);
var_openerIdx = NULL;
Py_XDECREF(var_newMinOpenerIdx);
var_newMinOpenerIdx = NULL;
Py_XDECREF(var_opener);
var_opener = NULL;
Py_XDECREF(var_isOddMatch);
var_isOddMatch = NULL;
Py_XDECREF(var_lastJump);
var_lastJump = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_delimiters);
Py_DECREF(par_delimiters);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
CHECK_OBJECT(par_delimiters);
Py_DECREF(par_delimiters);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_state = python_pars[0];
PyObject *var_tokens_meta = NULL;
PyObject *var_maximum = NULL;
PyObject *var_curr = NULL;
PyObject *var_curr_meta = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs)) {
    Py_XDECREF(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs = MAKE_FUNCTION_FRAME(tstate, code_objects_55ffa5f653a4c709dfc4b58a9d08a893, module_markdown_it$rules_inline$balance_pairs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs->m_type_description == NULL);
frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs = cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_state);
tmp_expression_value_1 = par_state;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_tokens_meta);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_tokens_meta == NULL);
var_tokens_meta = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_state);
tmp_expression_value_2 = par_state;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_tokens_meta);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_maximum == NULL);
var_maximum = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_3;
tmp_called_value_1 = module_var_accessor_markdown_it$rules_inline$balance_pairs$processDelimiters(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_processDelimiters);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_state);
tmp_args_element_value_1 = par_state;
CHECK_OBJECT(par_state);
tmp_expression_value_3 = par_state;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_delimiters);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs->m_frame.f_lineno = 131;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = const_int_0;
assert(var_curr == NULL);
Py_INCREF(tmp_assign_source_3);
var_curr = tmp_assign_source_3;
}
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (var_curr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = var_curr;
CHECK_OBJECT(var_maximum);
tmp_cmp_expr_right_1 = var_maximum;
tmp_condition_result_1 = RICH_COMPARE_LT_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
tmp_condition_result_1 = !tmp_condition_result_1;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_tokens_meta);
tmp_expression_value_4 = var_tokens_meta;
if (var_curr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_subscript_value_1 = var_curr;
tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_curr_meta;
    var_curr_meta = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_curr_meta);
tmp_truth_name_1 = CHECK_IF_TRUE(var_curr_meta);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_2 = mod_consts.const_str_plain_delimiters;
CHECK_OBJECT(var_curr_meta);
tmp_cmp_expr_right_2 = var_curr_meta;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_2;
tmp_called_value_2 = module_var_accessor_markdown_it$rules_inline$balance_pairs$processDelimiters(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_processDelimiters);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
if (par_state == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_state);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = par_state;
CHECK_OBJECT(var_curr_meta);
tmp_expression_value_5 = var_curr_meta;
tmp_subscript_value_2 = mod_consts.const_str_plain_delimiters;
tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs->m_frame.f_lineno = 137;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_1;
nuitka_digit tmp_iadd_expr_right_1;
if (var_curr == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_curr);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 138;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}

tmp_iadd_expr_left_1 = var_curr;
tmp_iadd_expr_right_1 = 1;
tmp_result = INPLACE_OPERATION_ADD_LONG_DIGIT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
assert(!(tmp_result == false));
tmp_assign_source_5 = tmp_iadd_expr_left_1;
var_curr = tmp_assign_source_5;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs,
    type_description_1,
    par_state,
    var_tokens_meta,
    var_maximum,
    var_curr,
    var_curr_meta
);


// Release cached frame if used for exception.
if (frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs == cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs);
    cache_frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs = NULL;
}

assertFrameObject(frame_frame_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_tokens_meta);
CHECK_OBJECT(var_tokens_meta);
Py_DECREF(var_tokens_meta);
var_tokens_meta = NULL;
CHECK_OBJECT(var_maximum);
CHECK_OBJECT(var_maximum);
Py_DECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_curr);
var_curr = NULL;
Py_XDECREF(var_curr_meta);
var_curr_meta = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_tokens_meta);
var_tokens_meta = NULL;
Py_XDECREF(var_maximum);
var_maximum = NULL;
Py_XDECREF(var_curr);
var_curr = NULL;
Py_XDECREF(var_curr_meta);
var_curr_meta = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_state);
Py_DECREF(par_state);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_state);
Py_DECREF(par_state);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters,
        mod_consts.const_str_plain_processDelimiters,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_71784d060a2f73cadd7102a9bbeb03eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_inline$balance_pairs,
        mod_consts.const_str_digest_4e1d305d223dce32ad9d37106a9528ce,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs,
        mod_consts.const_str_plain_link_pairs,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_55ffa5f653a4c709dfc4b58a9d08a893,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_markdown_it$rules_inline$balance_pairs,
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

static function_impl_code const function_table_markdown_it$rules_inline$balance_pairs[] = {
impl_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters,
impl_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs,
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

    return Nuitka_Function_GetFunctionState(function, function_table_markdown_it$rules_inline$balance_pairs);
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
        module_markdown_it$rules_inline$balance_pairs,
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
        function_table_markdown_it$rules_inline$balance_pairs,
        sizeof(function_table_markdown_it$rules_inline$balance_pairs) / sizeof(function_impl_code)
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
static char const *module_full_name = "markdown_it.rules_inline.balance_pairs";
#endif

// Internal entry point for module code.
PyObject *module_code_markdown_it$rules_inline$balance_pairs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("markdown_it$rules_inline$balance_pairs");

    // Store the module for future use.
    module_markdown_it$rules_inline$balance_pairs = module;

    moduledict_markdown_it$rules_inline$balance_pairs = MODULE_DICT(module_markdown_it$rules_inline$balance_pairs);

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
        PRINT_STRING("markdown_it$rules_inline$balance_pairs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("markdown_it$rules_inline$balance_pairs: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("markdown_it$rules_inline$balance_pairs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_inline.balance_pairs" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmarkdown_it$rules_inline$balance_pairs\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_markdown_it$rules_inline$balance_pairs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_inline$balance_pairs,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_markdown_it$rules_inline$balance_pairs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_inline$balance_pairs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_markdown_it$rules_inline$balance_pairs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_markdown_it$rules_inline$balance_pairs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_markdown_it$rules_inline$balance_pairs);
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

        UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_markdown_it$rules_inline$balance_pairs;
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
tmp_assign_source_1 = mod_consts.const_str_digest_8b99358fcbd5ed34ace987eaecd0aca6;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_markdown_it$rules_inline$balance_pairs = MAKE_MODULE_FRAME(code_objects_3d2130e0a9af99bdf58e2bfc67d14c94, module_markdown_it$rules_inline$balance_pairs);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_markdown_it$rules_inline$balance_pairs);
assert(Py_REFCNT(frame_frame_markdown_it$rules_inline$balance_pairs) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_markdown_it$rules_inline$balance_pairs$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_markdown_it$rules_inline$balance_pairs$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_state_inline;
tmp_globals_arg_value_1 = (PyObject *)moduledict_markdown_it$rules_inline$balance_pairs;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Delimiter_str_plain_StateInline_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_markdown_it$rules_inline$balance_pairs->m_frame.f_lineno = 5;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

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
        (PyObject *)moduledict_markdown_it$rules_inline$balance_pairs,
        mod_consts.const_str_plain_Delimiter,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Delimiter);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_Delimiter, tmp_assign_source_6);
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
        (PyObject *)moduledict_markdown_it$rules_inline$balance_pairs,
        mod_consts.const_str_plain_StateInline,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_StateInline);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_StateInline, tmp_assign_source_7);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_markdown_it$rules_inline$balance_pairs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_markdown_it$rules_inline$balance_pairs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_markdown_it$rules_inline$balance_pairs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_markdown_it$rules_inline$balance_pairs);

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
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_3192b5c58b32eb825f13079cae49f470);

tmp_assign_source_8 = MAKE_FUNCTION_markdown_it$rules_inline$balance_pairs$$$function__1_processDelimiters(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_processDelimiters, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_cfbb4f58f9571197e34ff5758d06bfce);

tmp_assign_source_9 = MAKE_FUNCTION_markdown_it$rules_inline$balance_pairs$$$function__2_link_pairs(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)mod_consts.const_str_plain_link_pairs, tmp_assign_source_9);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("markdown_it$rules_inline$balance_pairs", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "markdown_it.rules_inline.balance_pairs" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_markdown_it$rules_inline$balance_pairs);
    return module_markdown_it$rules_inline$balance_pairs;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_markdown_it$rules_inline$balance_pairs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("markdown_it$rules_inline$balance_pairs", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

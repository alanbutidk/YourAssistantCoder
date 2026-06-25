/* Generated code for Python module 'textual$suggestions'
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



/* The "module_textual$suggestions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_textual$suggestions;
PyDictObject *moduledict_textual$suggestions;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_get_close_matches;
PyObject *const_dict_718643e484f3338179d32b6cf4ef8fb3;
PyObject *const_str_digest_f3aabc58da226d9956d6fe8261d8d9a5;
PyObject *const_tuple_str_plain_n_tuple;
PyObject *const_str_digest_df42d7d9849ee2c8b71859dac3ee75f2;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_difflib;
PyObject *const_tuple_str_plain_get_close_matches_tuple;
PyObject *const_str_plain_Sequence;
PyObject *const_dict_a4c69e7bd55e7bd35c9ee9516d36cd5e;
PyObject *const_str_plain_get_suggestion;
PyObject *const_dict_afc5701c635cf6ac7d519c0b1894796d;
PyObject *const_str_plain_get_suggestions;
PyObject *const_str_digest_a3f6b683d438576b3fe8fc23049734ed;
PyObject *const_str_digest_22f607d19e7f8a3c9d8d94b832b865e2;
PyObject *const_tuple_216a1670a9479d7c47f15633d98774a2_tuple;
PyObject *const_tuple_str_plain_word_str_plain_possible_words_str_plain_count_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[19];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("textual.suggestions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_close_matches);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_dict_718643e484f3338179d32b6cf4ef8fb3);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3aabc58da226d9956d6fe8261d8d9a5);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_tuple);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_df42d7d9849ee2c8b71859dac3ee75f2);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_difflib);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_close_matches_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_dict_a4c69e7bd55e7bd35c9ee9516d36cd5e);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_suggestion);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_dict_afc5701c635cf6ac7d519c0b1894796d);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_suggestions);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_a3f6b683d438576b3fe8fc23049734ed);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_22f607d19e7f8a3c9d8d94b832b865e2);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_216a1670a9479d7c47f15633d98774a2_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_word_str_plain_possible_words_str_plain_count_tuple);
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
void checkModuleConstants_textual$suggestions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_close_matches));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_close_matches);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_dict_718643e484f3338179d32b6cf4ef8fb3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_718643e484f3338179d32b6cf4ef8fb3);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3aabc58da226d9956d6fe8261d8d9a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3aabc58da226d9956d6fe8261d8d9a5);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_n_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_n_tuple);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_df42d7d9849ee2c8b71859dac3ee75f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_df42d7d9849ee2c8b71859dac3ee75f2);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_difflib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_difflib);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_close_matches_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_close_matches_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_dict_a4c69e7bd55e7bd35c9ee9516d36cd5e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a4c69e7bd55e7bd35c9ee9516d36cd5e);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_suggestion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_suggestion);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_dict_afc5701c635cf6ac7d519c0b1894796d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_afc5701c635cf6ac7d519c0b1894796d);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_suggestions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_suggestions);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_a3f6b683d438576b3fe8fc23049734ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a3f6b683d438576b3fe8fc23049734ed);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_22f607d19e7f8a3c9d8d94b832b865e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22f607d19e7f8a3c9d8d94b832b865e2);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_216a1670a9479d7c47f15633d98774a2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_216a1670a9479d7c47f15633d98774a2_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_word_str_plain_possible_words_str_plain_count_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_word_str_plain_possible_words_str_plain_count_tuple);
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
static PyObject *module_var_accessor_textual$suggestions$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$suggestions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$suggestions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$suggestions->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_textual$suggestions$get_close_matches(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_textual$suggestions->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_textual$suggestions->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_close_matches);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_textual$suggestions->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_close_matches);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_close_matches, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_close_matches);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_close_matches, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_close_matches);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_close_matches);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_close_matches);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_6f75fc533f4ba9cc881a483b0b61161f;
static PyCodeObject *code_objects_fdb98e4f20a1bc98730444f79b1122ae;
static PyCodeObject *code_objects_87b9bc151061d56acdac0dfae50ce611;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_a3f6b683d438576b3fe8fc23049734ed); CHECK_OBJECT(module_filename_obj);
code_objects_6f75fc533f4ba9cc881a483b0b61161f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_22f607d19e7f8a3c9d8d94b832b865e2, mod_consts.const_str_digest_22f607d19e7f8a3c9d8d94b832b865e2, NULL, NULL, 0, 0, 0);
code_objects_fdb98e4f20a1bc98730444f79b1122ae = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_suggestion, mod_consts.const_str_plain_get_suggestion, mod_consts.const_tuple_216a1670a9479d7c47f15633d98774a2_tuple, NULL, 2, 0, 0);
code_objects_87b9bc151061d56acdac0dfae50ce611 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_suggestions, mod_consts.const_str_plain_get_suggestions, mod_consts.const_tuple_str_plain_word_str_plain_possible_words_str_plain_count_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_textual$suggestions$$$function__1_get_suggestion(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_textual$suggestions$$$function__2_get_suggestions(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_textual$suggestions$$$function__1_get_suggestion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_word = python_pars[0];
PyObject *par_possible_words = python_pars[1];
PyObject *var_possible_matches = NULL;
struct Nuitka_FrameObject *frame_frame_textual$suggestions$$$function__1_get_suggestion;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_textual$suggestions$$$function__1_get_suggestion = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_textual$suggestions$$$function__1_get_suggestion)) {
    Py_XDECREF(cache_frame_frame_textual$suggestions$$$function__1_get_suggestion);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$suggestions$$$function__1_get_suggestion == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$suggestions$$$function__1_get_suggestion = MAKE_FUNCTION_FRAME(tstate, code_objects_fdb98e4f20a1bc98730444f79b1122ae, module_textual$suggestions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$suggestions$$$function__1_get_suggestion->m_type_description == NULL);
frame_frame_textual$suggestions$$$function__1_get_suggestion = cache_frame_frame_textual$suggestions$$$function__1_get_suggestion;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$suggestions$$$function__1_get_suggestion);
assert(Py_REFCNT(frame_frame_textual$suggestions$$$function__1_get_suggestion) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_textual$suggestions$get_close_matches(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_close_matches);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 20;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_word);
tmp_tuple_element_1 = par_word;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_possible_words);
tmp_tuple_element_1 = par_possible_words;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_718643e484f3338179d32b6cf4ef8fb3);
frame_frame_textual$suggestions$$$function__1_get_suggestion->m_frame.f_lineno = 20;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_possible_matches == NULL);
var_possible_matches = tmp_assign_source_1;
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_possible_matches);
tmp_operand_value_1 = var_possible_matches;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_return_value = Py_None;
Py_INCREF(tmp_return_value);
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(var_possible_matches);
tmp_expression_value_1 = var_possible_matches;
tmp_subscript_value_1 = const_int_0;
tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$suggestions$$$function__1_get_suggestion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$suggestions$$$function__1_get_suggestion->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$suggestions$$$function__1_get_suggestion, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$suggestions$$$function__1_get_suggestion,
    type_description_1,
    par_word,
    par_possible_words,
    var_possible_matches
);


// Release cached frame if used for exception.
if (frame_frame_textual$suggestions$$$function__1_get_suggestion == cache_frame_frame_textual$suggestions$$$function__1_get_suggestion) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$suggestions$$$function__1_get_suggestion);
    cache_frame_frame_textual$suggestions$$$function__1_get_suggestion = NULL;
}

assertFrameObject(frame_frame_textual$suggestions$$$function__1_get_suggestion);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_possible_matches);
CHECK_OBJECT(var_possible_matches);
Py_DECREF(var_possible_matches);
var_possible_matches = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_possible_matches);
var_possible_matches = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_word);
Py_DECREF(par_word);
CHECK_OBJECT(par_possible_words);
Py_DECREF(par_possible_words);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_word);
Py_DECREF(par_word);
CHECK_OBJECT(par_possible_words);
Py_DECREF(par_possible_words);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_textual$suggestions$$$function__2_get_suggestions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_word = python_pars[0];
PyObject *par_possible_words = python_pars[1];
PyObject *par_count = python_pars[2];
struct Nuitka_FrameObject *frame_frame_textual$suggestions$$$function__2_get_suggestions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_textual$suggestions$$$function__2_get_suggestions = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_textual$suggestions$$$function__2_get_suggestions)) {
    Py_XDECREF(cache_frame_frame_textual$suggestions$$$function__2_get_suggestions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_textual$suggestions$$$function__2_get_suggestions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_textual$suggestions$$$function__2_get_suggestions = MAKE_FUNCTION_FRAME(tstate, code_objects_87b9bc151061d56acdac0dfae50ce611, module_textual$suggestions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_textual$suggestions$$$function__2_get_suggestions->m_type_description == NULL);
frame_frame_textual$suggestions$$$function__2_get_suggestions = cache_frame_frame_textual$suggestions$$$function__2_get_suggestions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$suggestions$$$function__2_get_suggestions);
assert(Py_REFCNT(frame_frame_textual$suggestions$$$function__2_get_suggestions) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_textual$suggestions$get_close_matches(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_close_matches);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_word);
tmp_kw_call_arg_value_0_1 = par_word;
CHECK_OBJECT(par_possible_words);
tmp_kw_call_arg_value_1_1 = par_possible_words;
CHECK_OBJECT(par_count);
tmp_kw_call_dict_value_0_1 = par_count;
frame_frame_textual$suggestions$$$function__2_get_suggestions->m_frame.f_lineno = 38;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_n_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$suggestions$$$function__2_get_suggestions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$suggestions$$$function__2_get_suggestions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$suggestions$$$function__2_get_suggestions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_textual$suggestions$$$function__2_get_suggestions,
    type_description_1,
    par_word,
    par_possible_words,
    par_count
);


// Release cached frame if used for exception.
if (frame_frame_textual$suggestions$$$function__2_get_suggestions == cache_frame_frame_textual$suggestions$$$function__2_get_suggestions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_textual$suggestions$$$function__2_get_suggestions);
    cache_frame_frame_textual$suggestions$$$function__2_get_suggestions = NULL;
}

assertFrameObject(frame_frame_textual$suggestions$$$function__2_get_suggestions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_word);
Py_DECREF(par_word);
CHECK_OBJECT(par_possible_words);
Py_DECREF(par_possible_words);
CHECK_OBJECT(par_count);
Py_DECREF(par_count);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_word);
Py_DECREF(par_word);
CHECK_OBJECT(par_possible_words);
Py_DECREF(par_possible_words);
CHECK_OBJECT(par_count);
Py_DECREF(par_count);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_textual$suggestions$$$function__1_get_suggestion(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$suggestions$$$function__1_get_suggestion,
        mod_consts.const_str_plain_get_suggestion,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fdb98e4f20a1bc98730444f79b1122ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$suggestions,
        mod_consts.const_str_digest_f3aabc58da226d9956d6fe8261d8d9a5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_textual$suggestions$$$function__2_get_suggestions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_textual$suggestions$$$function__2_get_suggestions,
        mod_consts.const_str_plain_get_suggestions,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_87b9bc151061d56acdac0dfae50ce611,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_textual$suggestions,
        mod_consts.const_str_digest_df42d7d9849ee2c8b71859dac3ee75f2,
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

static function_impl_code const function_table_textual$suggestions[] = {
impl_textual$suggestions$$$function__1_get_suggestion,
impl_textual$suggestions$$$function__2_get_suggestions,
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

    return Nuitka_Function_GetFunctionState(function, function_table_textual$suggestions);
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
        module_textual$suggestions,
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
        function_table_textual$suggestions,
        sizeof(function_table_textual$suggestions) / sizeof(function_impl_code)
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
static char const *module_full_name = "textual.suggestions";
#endif

// Internal entry point for module code.
PyObject *module_code_textual$suggestions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("textual$suggestions");

    // Store the module for future use.
    module_textual$suggestions = module;

    moduledict_textual$suggestions = MODULE_DICT(module_textual$suggestions);

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
        PRINT_STRING("textual$suggestions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("textual$suggestions: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("textual$suggestions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.suggestions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in inittextual$suggestions\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_textual$suggestions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_textual$suggestions,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_textual$suggestions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_textual$suggestions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_textual$suggestions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_textual$suggestions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_textual$suggestions);
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

        UPDATE_STRING_DICT1(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_textual$suggestions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_textual$suggestions = MAKE_MODULE_FRAME(code_objects_6f75fc533f4ba9cc881a483b0b61161f, module_textual$suggestions);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_textual$suggestions);
assert(Py_REFCNT(frame_frame_textual$suggestions) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_textual$suggestions$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_textual$suggestions$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_difflib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_textual$suggestions;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_get_close_matches_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_textual$suggestions->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_textual$suggestions,
        mod_consts.const_str_plain_get_close_matches,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_get_close_matches);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_close_matches, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
tmp_import_name_from_2 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_2 == NULL));
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_textual$suggestions,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_6);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_textual$suggestions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_textual$suggestions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_textual$suggestions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_textual$suggestions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a4c69e7bd55e7bd35c9ee9516d36cd5e);

tmp_assign_source_7 = MAKE_FUNCTION_textual$suggestions$$$function__1_get_suggestion(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_suggestion, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_afc5701c635cf6ac7d519c0b1894796d);

tmp_assign_source_8 = MAKE_FUNCTION_textual$suggestions$$$function__2_get_suggestions(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_textual$suggestions, (Nuitka_StringObject *)mod_consts.const_str_plain_get_suggestions, tmp_assign_source_8);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("textual$suggestions", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "textual.suggestions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_textual$suggestions);
    return module_textual$suggestions;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_textual$suggestions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("textual$suggestions", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

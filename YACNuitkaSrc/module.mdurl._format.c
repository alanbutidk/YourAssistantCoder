/* Generated code for Python module 'mdurl$_format'
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



/* The "module_mdurl$_format" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mdurl$_format;
PyDictObject *moduledict_mdurl$_format;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_protocol;
PyObject *const_str_plain_slashes;
PyObject *const_str_digest_13971ae58b983978540cbb4bbf3b1360;
PyObject *const_str_plain_auth;
PyObject *const_str_chr_64;
PyObject *const_str_plain_hostname;
PyObject *const_str_chr_58;
PyObject *const_str_chr_91;
PyObject *const_str_chr_93;
PyObject *const_str_plain_port;
PyObject *const_str_plain_pathname;
PyObject *const_str_plain_search;
PyObject *const_str_plain_hash;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_dict_977ff8057275f2e1893c1c3280913c04;
PyObject *const_str_digest_bb3c21ed279702dedf12b893b75ba111;
PyObject *const_str_digest_4e07aba7db05d86d96e2929ad503cb4f;
PyObject *const_tuple_str_plain_url_str_plain_result_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[21];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("mdurl._format"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_protocol);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_slashes);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_chr_64);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_hostname);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_chr_91);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_chr_93);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_port);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_pathname);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_search);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_hash);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_dict_977ff8057275f2e1893c1c3280913c04);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb3c21ed279702dedf12b893b75ba111);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_4e07aba7db05d86d96e2929ad503cb4f);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_result_tuple);
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
void checkModuleConstants_mdurl$_format(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_protocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_protocol);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_slashes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_slashes);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_chr_64));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_64);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_hostname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hostname);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_chr_91));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_91);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_chr_93));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_93);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_port));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_port);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_pathname));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pathname);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_hash));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_hash);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_dict_977ff8057275f2e1893c1c3280913c04));
CHECK_OBJECT_DEEP(mod_consts.const_dict_977ff8057275f2e1893c1c3280913c04);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb3c21ed279702dedf12b893b75ba111));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb3c21ed279702dedf12b893b75ba111);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_4e07aba7db05d86d96e2929ad503cb4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4e07aba7db05d86d96e2929ad503cb4f);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_url_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_url_str_plain_result_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 1
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
static PyObject *module_var_accessor_mdurl$_format$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_mdurl$_format->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_mdurl$_format->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_mdurl$_format->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_1a919b0225e304a84fad23bf4af48730;
static PyCodeObject *code_objects_a3e8e05ccf65e6f0271ba648118cc8b9;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_bb3c21ed279702dedf12b893b75ba111); CHECK_OBJECT(module_filename_obj);
code_objects_1a919b0225e304a84fad23bf4af48730 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4e07aba7db05d86d96e2929ad503cb4f, mod_consts.const_str_digest_4e07aba7db05d86d96e2929ad503cb4f, NULL, NULL, 0, 0, 0);
code_objects_a3e8e05ccf65e6f0271ba648118cc8b9 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain_format, const_str_plain_format, mod_consts.const_tuple_str_plain_url_str_plain_result_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_mdurl$_format$$$function__1_format(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_mdurl$_format$$$function__1_format(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_url = python_pars[0];
PyObject *var_result = NULL;
struct Nuitka_FrameObject *frame_frame_mdurl$_format$$$function__1_format;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_mdurl$_format$$$function__1_format = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_mdurl$_format$$$function__1_format)) {
    Py_XDECREF(cache_frame_frame_mdurl$_format$$$function__1_format);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_mdurl$_format$$$function__1_format == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_mdurl$_format$$$function__1_format = MAKE_FUNCTION_FRAME(tstate, code_objects_a3e8e05ccf65e6f0271ba648118cc8b9, module_mdurl$_format, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_mdurl$_format$$$function__1_format->m_type_description == NULL);
frame_frame_mdurl$_format$$$function__1_format = cache_frame_frame_mdurl$_format$$$function__1_format;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_format$$$function__1_format);
assert(Py_REFCNT(frame_frame_mdurl$_format$$$function__1_format) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
tmp_iadd_expr_left_1 = const_str_empty;
CHECK_OBJECT(par_url);
tmp_expression_value_1 = par_url;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_protocol);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 12;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
tmp_or_right_value_1 = const_str_empty;
Py_INCREF(tmp_or_right_value_1);
tmp_iadd_expr_right_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_iadd_expr_right_1 = tmp_or_left_value_1;
or_end_1:;
Py_INCREF(tmp_iadd_expr_left_1);
tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_iadd_expr_left_1;
assert(var_result == NULL);
var_result = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iadd_expr_left_2;
PyObject *tmp_iadd_expr_right_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_2 = var_result;
CHECK_OBJECT(par_url);
tmp_expression_value_2 = par_url;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_slashes);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 13;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_iadd_expr_right_2 = mod_consts.const_str_digest_13971ae58b983978540cbb4bbf3b1360;
goto condexpr_end_1;
condexpr_false_1:;
tmp_iadd_expr_right_2 = const_str_empty;
condexpr_end_1:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_iadd_expr_left_2;
var_result = tmp_assign_source_2;

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iadd_expr_left_3;
PyObject *tmp_iadd_expr_right_3;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_3 = var_result;
CHECK_OBJECT(par_url);
tmp_expression_value_3 = par_url;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_auth);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 14;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(par_url);
tmp_expression_value_4 = par_url;
tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_auth);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_chr_64;
tmp_iadd_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_iadd_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_iadd_expr_right_3 = const_str_empty;
Py_INCREF(tmp_iadd_expr_right_3);
condexpr_end_2:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
CHECK_OBJECT(tmp_iadd_expr_right_3);
Py_DECREF(tmp_iadd_expr_right_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = tmp_iadd_expr_left_3;
var_result = tmp_assign_source_3;

}
{
nuitka_bool tmp_condition_result_3;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_url);
tmp_expression_value_5 = par_url;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_hostname);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 16;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_1 = mod_consts.const_str_chr_58;
CHECK_OBJECT(par_url);
tmp_expression_value_6 = par_url;
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_hostname);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iadd_expr_left_4;
PyObject *tmp_iadd_expr_right_4;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_4 = var_result;
tmp_add_expr_left_3 = mod_consts.const_str_chr_91;
CHECK_OBJECT(par_url);
tmp_expression_value_7 = par_url;
tmp_add_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_hostname);
if (tmp_add_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_right_3);
Py_DECREF(tmp_add_expr_right_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_str_chr_93;
tmp_iadd_expr_right_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_iadd_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
CHECK_OBJECT(tmp_iadd_expr_right_4);
Py_DECREF(tmp_iadd_expr_right_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_iadd_expr_left_4;
var_result = tmp_assign_source_4;

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iadd_expr_left_5;
PyObject *tmp_iadd_expr_right_5;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_5 = var_result;
CHECK_OBJECT(par_url);
tmp_expression_value_8 = par_url;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_hostname);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 20;
type_description_1 = "oo";
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
tmp_or_right_value_2 = const_str_empty;
Py_INCREF(tmp_or_right_value_2);
tmp_iadd_expr_right_5 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_iadd_expr_right_5 = tmp_or_left_value_2;
or_end_2:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
CHECK_OBJECT(tmp_iadd_expr_right_5);
Py_DECREF(tmp_iadd_expr_right_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_iadd_expr_left_5;
var_result = tmp_assign_source_5;

}
branch_end_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iadd_expr_left_6;
PyObject *tmp_iadd_expr_right_6;
nuitka_bool tmp_condition_result_4;
PyObject *tmp_expression_value_9;
PyObject *tmp_attribute_value_4;
int tmp_truth_name_4;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_6 = var_result;
CHECK_OBJECT(par_url);
tmp_expression_value_9 = par_url;
tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_port);
if (tmp_attribute_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_4);

exception_lineno = 22;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_4);
Py_DECREF(tmp_attribute_value_4);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
tmp_add_expr_left_4 = mod_consts.const_str_chr_58;
CHECK_OBJECT(par_url);
tmp_expression_value_10 = par_url;
tmp_add_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_port);
if (tmp_add_expr_right_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_iadd_expr_right_6 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
CHECK_OBJECT(tmp_add_expr_right_4);
Py_DECREF(tmp_add_expr_right_4);
if (tmp_iadd_expr_right_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_iadd_expr_right_6 = const_str_empty;
Py_INCREF(tmp_iadd_expr_right_6);
condexpr_end_3:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
CHECK_OBJECT(tmp_iadd_expr_right_6);
Py_DECREF(tmp_iadd_expr_right_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_iadd_expr_left_6;
var_result = tmp_assign_source_6;

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iadd_expr_left_7;
PyObject *tmp_iadd_expr_right_7;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_7 = var_result;
CHECK_OBJECT(par_url);
tmp_expression_value_11 = par_url;
tmp_or_left_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_pathname);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_or_right_value_3 = const_str_empty;
Py_INCREF(tmp_or_right_value_3);
tmp_iadd_expr_right_7 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_iadd_expr_right_7 = tmp_or_left_value_3;
or_end_3:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_7, tmp_iadd_expr_right_7);
CHECK_OBJECT(tmp_iadd_expr_right_7);
Py_DECREF(tmp_iadd_expr_right_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_iadd_expr_left_7;
var_result = tmp_assign_source_7;

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_iadd_expr_left_8;
PyObject *tmp_iadd_expr_right_8;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_8 = var_result;
CHECK_OBJECT(par_url);
tmp_expression_value_12 = par_url;
tmp_or_left_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_search);
if (tmp_or_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_4);

exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(tmp_or_left_value_4);
Py_DECREF(tmp_or_left_value_4);
tmp_or_right_value_4 = const_str_empty;
Py_INCREF(tmp_or_right_value_4);
tmp_iadd_expr_right_8 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_iadd_expr_right_8 = tmp_or_left_value_4;
or_end_4:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_8, tmp_iadd_expr_right_8);
CHECK_OBJECT(tmp_iadd_expr_right_8);
Py_DECREF(tmp_iadd_expr_right_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_8 = tmp_iadd_expr_left_8;
var_result = tmp_assign_source_8;

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iadd_expr_left_9;
PyObject *tmp_iadd_expr_right_9;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(var_result);
tmp_iadd_expr_left_9 = var_result;
CHECK_OBJECT(par_url);
tmp_expression_value_13 = par_url;
tmp_or_left_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_hash);
if (tmp_or_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_5);

exception_lineno = 25;
type_description_1 = "oo";
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
tmp_or_right_value_5 = const_str_empty;
Py_INCREF(tmp_or_right_value_5);
tmp_iadd_expr_right_9 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_iadd_expr_right_9 = tmp_or_left_value_5;
or_end_5:;
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_9, tmp_iadd_expr_right_9);
CHECK_OBJECT(tmp_iadd_expr_right_9);
Py_DECREF(tmp_iadd_expr_right_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = tmp_iadd_expr_left_9;
var_result = tmp_assign_source_9;

}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_format$$$function__1_format, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_format$$$function__1_format->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_format$$$function__1_format, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_mdurl$_format$$$function__1_format,
    type_description_1,
    par_url,
    var_result
);


// Release cached frame if used for exception.
if (frame_frame_mdurl$_format$$$function__1_format == cache_frame_frame_mdurl$_format$$$function__1_format) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_mdurl$_format$$$function__1_format);
    cache_frame_frame_mdurl$_format$$$function__1_format = NULL;
}

assertFrameObject(frame_frame_mdurl$_format$$$function__1_format);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_result);
CHECK_OBJECT(var_result);
Py_DECREF(var_result);
var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_result);
var_result = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_url);
Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_mdurl$_format$$$function__1_format(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mdurl$_format$$$function__1_format,
        const_str_plain_format,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a3e8e05ccf65e6f0271ba648118cc8b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_mdurl$_format,
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

static function_impl_code const function_table_mdurl$_format[] = {
impl_mdurl$_format$$$function__1_format,
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

    return Nuitka_Function_GetFunctionState(function, function_table_mdurl$_format);
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
        module_mdurl$_format,
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
        function_table_mdurl$_format,
        sizeof(function_table_mdurl$_format) / sizeof(function_impl_code)
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
static char const *module_full_name = "mdurl._format";
#endif

// Internal entry point for module code.
PyObject *module_code_mdurl$_format(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mdurl$_format");

    // Store the module for future use.
    module_mdurl$_format = module;

    moduledict_mdurl$_format = MODULE_DICT(module_mdurl$_format);

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
        PRINT_STRING("mdurl$_format: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("mdurl$_format: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("mdurl$_format: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "mdurl._format" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initmdurl$_format\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mdurl$_format,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mdurl$_format,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mdurl$_format,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mdurl$_format,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mdurl$_format,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mdurl$_format);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_mdurl$_format);
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

        UPDATE_STRING_DICT1(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_mdurl$_format;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_mdurl$_format = MAKE_MODULE_FRAME(code_objects_1a919b0225e304a84fad23bf4af48730, module_mdurl$_format);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_mdurl$_format);
assert(Py_REFCNT(frame_frame_mdurl$_format) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_mdurl$_format$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_mdurl$_format$__spec__(tstate);
assert(!(tmp_assattr_target_2 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_has_location, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_mdurl$_format, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_mdurl$_format->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_mdurl$_format, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_mdurl$_format);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_mdurl$_format, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = Py_False;
UPDATE_STRING_DICT0(moduledict_mdurl$_format, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_977ff8057275f2e1893c1c3280913c04);

tmp_assign_source_6 = MAKE_FUNCTION_mdurl$_format$$$function__1_format(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain_format, tmp_assign_source_6);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mdurl$_format", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "mdurl._format" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_mdurl$_format);
    return module_mdurl$_format;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mdurl$_format, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("mdurl$_format", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

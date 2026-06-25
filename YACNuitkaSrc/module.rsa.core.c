/* Generated code for Python module 'rsa$core'
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



/* The "module_rsa$core" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_rsa$core;
PyDictObject *moduledict_rsa$core;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e;
PyObject *const_str_plain_assert_int;
PyObject *const_str_plain_message;
PyObject *const_str_plain_ekey;
PyObject *const_str_plain_n;
PyObject *const_str_digest_6ffa01082e57cae8da1ce4750e9afb65;
PyObject *const_str_digest_2f13592eab59235e4783de3c59391ed7;
PyObject *const_str_plain_pow;
PyObject *const_str_digest_657a529c70c4f51d8665d77ec28e0635;
PyObject *const_str_plain_cyphertext;
PyObject *const_str_plain_dkey;
PyObject *const_str_digest_823dc7392d217ac8d54d878c27819303;
PyObject *const_str_digest_4a8fded047fc28b14705ebfa0682e947;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_dict_067b0105f49f25da72e701bba9dba151;
PyObject *const_dict_9f2c78c22c8fb4e74dfa6e49fbf7e2d2;
PyObject *const_str_plain_encrypt_int;
PyObject *const_dict_ba53df4de0dc67d61bb57cff5375ffcc;
PyObject *const_str_plain_decrypt_int;
PyObject *const_str_digest_9bdfaf88e51ea4c7c2aa9b4a1039bc00;
PyObject *const_str_digest_0bbed2a9507b54b5428613b88a005787;
PyObject *const_tuple_str_plain_var_str_plain_name_tuple;
PyObject *const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple;
PyObject *const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[25];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("rsa.core"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_int);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_message);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_ekey);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_n);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ffa01082e57cae8da1ce4750e9afb65);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f13592eab59235e4783de3c59391ed7);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_pow);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_657a529c70c4f51d8665d77ec28e0635);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_cyphertext);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_dkey);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_823dc7392d217ac8d54d878c27819303);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a8fded047fc28b14705ebfa0682e947);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_dict_067b0105f49f25da72e701bba9dba151);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_dict_9f2c78c22c8fb4e74dfa6e49fbf7e2d2);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_int);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_dict_ba53df4de0dc67d61bb57cff5375ffcc);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_int);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bdfaf88e51ea4c7c2aa9b4a1039bc00);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bbed2a9507b54b5428613b88a005787);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_var_str_plain_name_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple);
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
void checkModuleConstants_rsa$core(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_int);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_message);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_ekey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ekey);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_n));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_n);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ffa01082e57cae8da1ce4750e9afb65));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ffa01082e57cae8da1ce4750e9afb65);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f13592eab59235e4783de3c59391ed7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f13592eab59235e4783de3c59391ed7);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_pow));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pow);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_657a529c70c4f51d8665d77ec28e0635));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_657a529c70c4f51d8665d77ec28e0635);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_cyphertext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cyphertext);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_dkey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dkey);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_823dc7392d217ac8d54d878c27819303));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_823dc7392d217ac8d54d878c27819303);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a8fded047fc28b14705ebfa0682e947));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a8fded047fc28b14705ebfa0682e947);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_dict_067b0105f49f25da72e701bba9dba151));
CHECK_OBJECT_DEEP(mod_consts.const_dict_067b0105f49f25da72e701bba9dba151);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_dict_9f2c78c22c8fb4e74dfa6e49fbf7e2d2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9f2c78c22c8fb4e74dfa6e49fbf7e2d2);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_encrypt_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_encrypt_int);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_dict_ba53df4de0dc67d61bb57cff5375ffcc));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ba53df4de0dc67d61bb57cff5375ffcc);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_decrypt_int));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decrypt_int);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bdfaf88e51ea4c7c2aa9b4a1039bc00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bdfaf88e51ea4c7c2aa9b4a1039bc00);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bbed2a9507b54b5428613b88a005787));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bbed2a9507b54b5428613b88a005787);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_var_str_plain_name_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_var_str_plain_name_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple);
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
static PyObject *module_var_accessor_rsa$core$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$core->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_rsa$core$assert_int(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_rsa$core->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_rsa$core->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_int);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_rsa$core->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_assert_int);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_assert_int, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_assert_int);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_assert_int, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_int);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_int);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_int);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_ee3bfa9e76b753be5970f0737b84f932;
static PyCodeObject *code_objects_b74ee03c0e17656712a179f7ffd7af70;
static PyCodeObject *code_objects_a8d5951c174884591a962e646de301ca;
static PyCodeObject *code_objects_3cc8a1e754e4c6e0896942a440e16f75;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_9bdfaf88e51ea4c7c2aa9b4a1039bc00); CHECK_OBJECT(module_filename_obj);
code_objects_ee3bfa9e76b753be5970f0737b84f932 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_0bbed2a9507b54b5428613b88a005787, mod_consts.const_str_digest_0bbed2a9507b54b5428613b88a005787, NULL, NULL, 0, 0, 0);
code_objects_b74ee03c0e17656712a179f7ffd7af70 = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_assert_int, mod_consts.const_str_plain_assert_int, mod_consts.const_tuple_str_plain_var_str_plain_name_tuple, NULL, 2, 0, 0);
code_objects_a8d5951c174884591a962e646de301ca = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_decrypt_int, mod_consts.const_str_plain_decrypt_int, mod_consts.const_tuple_1bf88d999c4e2d6b4bfe3f9ec4fbcda9_tuple, NULL, 3, 0, 0);
code_objects_3cc8a1e754e4c6e0896942a440e16f75 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_encrypt_int, mod_consts.const_str_plain_encrypt_int, mod_consts.const_tuple_str_plain_message_str_plain_ekey_str_plain_n_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_rsa$core$$$function__1_assert_int(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$core$$$function__2_encrypt_int(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_rsa$core$$$function__3_decrypt_int(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_rsa$core$$$function__1_assert_int(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_var = python_pars[0];
PyObject *par_name = python_pars[1];
struct Nuitka_FrameObject *frame_frame_rsa$core$$$function__1_assert_int;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$core$$$function__1_assert_int = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$core$$$function__1_assert_int)) {
    Py_XDECREF(cache_frame_frame_rsa$core$$$function__1_assert_int);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$core$$$function__1_assert_int == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$core$$$function__1_assert_int = MAKE_FUNCTION_FRAME(tstate, code_objects_b74ee03c0e17656712a179f7ffd7af70, module_rsa$core, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$core$$$function__1_assert_int->m_type_description == NULL);
frame_frame_rsa$core$$$function__1_assert_int = cache_frame_frame_rsa$core$$$function__1_assert_int;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$core$$$function__1_assert_int);
assert(Py_REFCNT(frame_frame_rsa$core$$$function__1_assert_int) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_var);
tmp_isinstance_inst_1 = par_var;
tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;
type_description_1 = "oo";
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_8637edb7cfe14c30a3dd82d9856c1b6e;
CHECK_OBJECT(par_name);
tmp_tuple_element_1 = par_name;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_1;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_var);
tmp_expression_value_1 = par_var;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$core$$$function__1_assert_int->m_frame.f_lineno = 26;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 26;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$core$$$function__1_assert_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$core$$$function__1_assert_int->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$core$$$function__1_assert_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$core$$$function__1_assert_int,
    type_description_1,
    par_var,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_rsa$core$$$function__1_assert_int == cache_frame_frame_rsa$core$$$function__1_assert_int) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$core$$$function__1_assert_int);
    cache_frame_frame_rsa$core$$$function__1_assert_int = NULL;
}

assertFrameObject(frame_frame_rsa$core$$$function__1_assert_int);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_var);
Py_DECREF(par_var);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_var);
Py_DECREF(par_var);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$core$$$function__2_encrypt_int(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_message = python_pars[0];
PyObject *par_ekey = python_pars[1];
PyObject *par_n = python_pars[2];
struct Nuitka_FrameObject *frame_frame_rsa$core$$$function__2_encrypt_int;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$core$$$function__2_encrypt_int = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_rsa$core$$$function__2_encrypt_int)) {
    Py_XDECREF(cache_frame_frame_rsa$core$$$function__2_encrypt_int);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$core$$$function__2_encrypt_int == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$core$$$function__2_encrypt_int = MAKE_FUNCTION_FRAME(tstate, code_objects_3cc8a1e754e4c6e0896942a440e16f75, module_rsa$core, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$core$$$function__2_encrypt_int->m_type_description == NULL);
frame_frame_rsa$core$$$function__2_encrypt_int = cache_frame_frame_rsa$core$$$function__2_encrypt_int;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$core$$$function__2_encrypt_int);
assert(Py_REFCNT(frame_frame_rsa$core$$$function__2_encrypt_int) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_rsa$core$assert_int(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_assert_int);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_message);
tmp_args_element_value_1 = par_message;
tmp_args_element_value_2 = mod_consts.const_str_plain_message;
frame_frame_rsa$core$$$function__2_encrypt_int->m_frame.f_lineno = 32;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_rsa$core$assert_int(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_assert_int);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ekey);
tmp_args_element_value_3 = par_ekey;
tmp_args_element_value_4 = mod_consts.const_str_plain_ekey;
frame_frame_rsa$core$$$function__2_encrypt_int->m_frame.f_lineno = 33;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_rsa$core$assert_int(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_assert_int);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_args_element_value_5 = par_n;
tmp_args_element_value_6 = mod_consts.const_str_plain_n;
frame_frame_rsa$core$$$function__2_encrypt_int->m_frame.f_lineno = 34;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_message);
tmp_cmp_expr_left_1 = par_message;
tmp_cmp_expr_right_1 = const_int_0;
tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_6ffa01082e57cae8da1ce4750e9afb65;
frame_frame_rsa$core$$$function__2_encrypt_int->m_frame.f_lineno = 37;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 37;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_message);
tmp_cmp_expr_left_2 = par_message;
CHECK_OBJECT(par_n);
tmp_cmp_expr_right_2 = par_n;
tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_2f13592eab59235e4783de3c59391ed7;
CHECK_OBJECT(par_message);
tmp_tuple_element_1 = par_message;
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_n);
tmp_tuple_element_1 = par_n;
PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_rsa$core$$$function__2_encrypt_int->m_frame.f_lineno = 40;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_OverflowError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 40;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(par_message);
tmp_args_element_value_7 = par_message;
CHECK_OBJECT(par_ekey);
tmp_args_element_value_8 = par_ekey;
CHECK_OBJECT(par_n);
tmp_args_element_value_9 = par_n;
frame_frame_rsa$core$$$function__2_encrypt_int->m_frame.f_lineno = 42;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$core$$$function__2_encrypt_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$core$$$function__2_encrypt_int->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$core$$$function__2_encrypt_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$core$$$function__2_encrypt_int,
    type_description_1,
    par_message,
    par_ekey,
    par_n
);


// Release cached frame if used for exception.
if (frame_frame_rsa$core$$$function__2_encrypt_int == cache_frame_frame_rsa$core$$$function__2_encrypt_int) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$core$$$function__2_encrypt_int);
    cache_frame_frame_rsa$core$$$function__2_encrypt_int = NULL;
}

assertFrameObject(frame_frame_rsa$core$$$function__2_encrypt_int);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_ekey);
Py_DECREF(par_ekey);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_message);
Py_DECREF(par_message);
CHECK_OBJECT(par_ekey);
Py_DECREF(par_ekey);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_rsa$core$$$function__3_decrypt_int(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cyphertext = python_pars[0];
PyObject *par_dkey = python_pars[1];
PyObject *par_n = python_pars[2];
PyObject *var_message = NULL;
struct Nuitka_FrameObject *frame_frame_rsa$core$$$function__3_decrypt_int;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_rsa$core$$$function__3_decrypt_int = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_rsa$core$$$function__3_decrypt_int)) {
    Py_XDECREF(cache_frame_frame_rsa$core$$$function__3_decrypt_int);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_rsa$core$$$function__3_decrypt_int == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_rsa$core$$$function__3_decrypt_int = MAKE_FUNCTION_FRAME(tstate, code_objects_a8d5951c174884591a962e646de301ca, module_rsa$core, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_rsa$core$$$function__3_decrypt_int->m_type_description == NULL);
frame_frame_rsa$core$$$function__3_decrypt_int = cache_frame_frame_rsa$core$$$function__3_decrypt_int;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$core$$$function__3_decrypt_int);
assert(Py_REFCNT(frame_frame_rsa$core$$$function__3_decrypt_int) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_rsa$core$assert_int(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_assert_int);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cyphertext);
tmp_args_element_value_1 = par_cyphertext;
tmp_args_element_value_2 = mod_consts.const_str_plain_cyphertext;
frame_frame_rsa$core$$$function__3_decrypt_int->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_rsa$core$assert_int(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_assert_int);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_dkey);
tmp_args_element_value_3 = par_dkey;
tmp_args_element_value_4 = mod_consts.const_str_plain_dkey;
frame_frame_rsa$core$$$function__3_decrypt_int->m_frame.f_lineno = 49;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_3 = module_var_accessor_rsa$core$assert_int(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_assert_int);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_n);
tmp_args_element_value_5 = par_n;
tmp_args_element_value_6 = mod_consts.const_str_plain_n;
frame_frame_rsa$core$$$function__3_decrypt_int->m_frame.f_lineno = 50;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts.const_str_plain_pow);
assert(tmp_called_value_4 != NULL);
CHECK_OBJECT(par_cyphertext);
tmp_args_element_value_7 = par_cyphertext;
CHECK_OBJECT(par_dkey);
tmp_args_element_value_8 = par_dkey;
CHECK_OBJECT(par_n);
tmp_args_element_value_9 = par_n;
frame_frame_rsa$core$$$function__3_decrypt_int->m_frame.f_lineno = 52;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_message == NULL);
var_message = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$core$$$function__3_decrypt_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$core$$$function__3_decrypt_int->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$core$$$function__3_decrypt_int, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_rsa$core$$$function__3_decrypt_int,
    type_description_1,
    par_cyphertext,
    par_dkey,
    par_n,
    var_message
);


// Release cached frame if used for exception.
if (frame_frame_rsa$core$$$function__3_decrypt_int == cache_frame_frame_rsa$core$$$function__3_decrypt_int) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_rsa$core$$$function__3_decrypt_int);
    cache_frame_frame_rsa$core$$$function__3_decrypt_int = NULL;
}

assertFrameObject(frame_frame_rsa$core$$$function__3_decrypt_int);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_message);
tmp_return_value = var_message;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_message);
CHECK_OBJECT(var_message);
Py_DECREF(var_message);
var_message = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cyphertext);
Py_DECREF(par_cyphertext);
CHECK_OBJECT(par_dkey);
Py_DECREF(par_dkey);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cyphertext);
Py_DECREF(par_cyphertext);
CHECK_OBJECT(par_dkey);
Py_DECREF(par_dkey);
CHECK_OBJECT(par_n);
Py_DECREF(par_n);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_rsa$core$$$function__1_assert_int(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$core$$$function__1_assert_int,
        mod_consts.const_str_plain_assert_int,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b74ee03c0e17656712a179f7ffd7af70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$core,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$core$$$function__2_encrypt_int(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$core$$$function__2_encrypt_int,
        mod_consts.const_str_plain_encrypt_int,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3cc8a1e754e4c6e0896942a440e16f75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$core,
        mod_consts.const_str_digest_657a529c70c4f51d8665d77ec28e0635,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_rsa$core$$$function__3_decrypt_int(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_rsa$core$$$function__3_decrypt_int,
        mod_consts.const_str_plain_decrypt_int,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a8d5951c174884591a962e646de301ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_rsa$core,
        mod_consts.const_str_digest_823dc7392d217ac8d54d878c27819303,
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

static function_impl_code const function_table_rsa$core[] = {
impl_rsa$core$$$function__1_assert_int,
impl_rsa$core$$$function__2_encrypt_int,
impl_rsa$core$$$function__3_decrypt_int,
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

    return Nuitka_Function_GetFunctionState(function, function_table_rsa$core);
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
        module_rsa$core,
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
        function_table_rsa$core,
        sizeof(function_table_rsa$core) / sizeof(function_impl_code)
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
static char const *module_full_name = "rsa.core";
#endif

// Internal entry point for module code.
PyObject *module_code_rsa$core(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("rsa$core");

    // Store the module for future use.
    module_rsa$core = module;

    moduledict_rsa$core = MODULE_DICT(module_rsa$core);

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
        PRINT_STRING("rsa$core: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("rsa$core: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("rsa$core: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.core" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initrsa$core\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_rsa$core,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_rsa$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_rsa$core,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_rsa$core,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_rsa$core);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_rsa$core);
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

        UPDATE_STRING_DICT1(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_rsa$core;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_4a8fded047fc28b14705ebfa0682e947;
UPDATE_STRING_DICT0(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_rsa$core = MAKE_MODULE_FRAME(code_objects_ee3bfa9e76b753be5970f0737b84f932, module_rsa$core);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_rsa$core);
assert(Py_REFCNT(frame_frame_rsa$core) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_rsa$core$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_rsa$core$__spec__(tstate);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_rsa$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_rsa$core->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_rsa$core, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_rsa$core);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = Py_None;
UPDATE_STRING_DICT0(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_067b0105f49f25da72e701bba9dba151);

tmp_assign_source_4 = MAKE_FUNCTION_rsa$core$$$function__1_assert_int(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_rsa$core, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_int, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_9f2c78c22c8fb4e74dfa6e49fbf7e2d2);

tmp_assign_source_5 = MAKE_FUNCTION_rsa$core$$$function__2_encrypt_int(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_rsa$core, (Nuitka_StringObject *)mod_consts.const_str_plain_encrypt_int, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_ba53df4de0dc67d61bb57cff5375ffcc);

tmp_assign_source_6 = MAKE_FUNCTION_rsa$core$$$function__3_decrypt_int(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_rsa$core, (Nuitka_StringObject *)mod_consts.const_str_plain_decrypt_int, tmp_assign_source_6);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("rsa$core", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "rsa.core" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_rsa$core);
    return module_rsa$core;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_rsa$core, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("rsa$core", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

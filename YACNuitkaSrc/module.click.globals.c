/* Generated code for Python module 'click$globals'
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



/* The "module_click$globals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_click$globals;
PyDictObject *moduledict_click$globals;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Context;
PyObject *const_str_plain__local;
PyObject *const_str_plain_stack;
PyObject *const_tuple_type_AttributeError_type_IndexError_tuple;
PyObject *const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554;
PyObject *const_str_digest_47b71d7913161140a21c76b334dcfce5;
PyObject *const_str_plain_setdefault;
PyObject *const_str_plain_append;
PyObject *const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b;
PyObject *const_str_plain_pop;
PyObject *const_str_digest_98b06f2af894fbaecb13744dbc48683d;
PyObject *const_str_plain_get_current_context;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_silent_tuple;
PyObject *const_str_plain_color;
PyObject *const_str_digest_a8b948f4c82e14e481471144f037b915;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_t;
PyObject *const_str_plain_threading;
PyObject *const_tuple_str_plain_local_tuple;
PyObject *const_str_plain_local;
PyObject *const_str_plain_overload;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_89ae6d95bb79ad2eef4388e607bbffe7;
PyObject *const_tuple_ellipsis_tuple;
PyObject *const_dict_0f149cdf73626b6d4642cc0b38db9198;
PyObject *const_dict_ff3b7b336c93bd47cd79657ac09a52dd;
PyObject *const_str_plain_push_context;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_plain_pop_context;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_dce4e63795aec86590c30bd600c14b5a;
PyObject *const_str_plain_resolve_color_default;
PyObject *const_str_digest_60133964cb1efde41869d54d9dcdbad9;
PyObject *const_str_digest_84db718a6d3123cc1a774c8ca8d32810;
PyObject *const_tuple_str_plain_silent_str_plain_e_tuple;
PyObject *const_tuple_str_plain_ctx_tuple;
PyObject *const_tuple_str_plain_color_str_plain_ctx_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[41];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("click.globals"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_Context);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__local);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_stack);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_IndexError_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_47b71d7913161140a21c76b334dcfce5);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_98b06f2af894fbaecb13744dbc48683d);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_context);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_silent_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_color);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_a8b948f4c82e14e481471144f037b915);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_threading);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_local_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_local);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_89ae6d95bb79ad2eef4388e607bbffe7);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_dict_0f149cdf73626b6d4642cc0b38db9198);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_ff3b7b336c93bd47cd79657ac09a52dd);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_push_context);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop_context);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_dict_dce4e63795aec86590c30bd600c14b5a);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_color_default);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_60133964cb1efde41869d54d9dcdbad9);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_84db718a6d3123cc1a774c8ca8d32810);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_silent_str_plain_e_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ctx_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_color_str_plain_ctx_tuple);
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
void checkModuleConstants_click$globals(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_Context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Context);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__local));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__local);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_stack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stack);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_type_AttributeError_type_IndexError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_AttributeError_type_IndexError_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_47b71d7913161140a21c76b334dcfce5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47b71d7913161140a21c76b334dcfce5);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_setdefault));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setdefault);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_98b06f2af894fbaecb13744dbc48683d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98b06f2af894fbaecb13744dbc48683d);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_current_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_current_context);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_silent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_silent_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_color));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_color);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_a8b948f4c82e14e481471144f037b915));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a8b948f4c82e14e481471144f037b915);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_threading));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threading);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_local_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_local_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_local));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_local);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_89ae6d95bb79ad2eef4388e607bbffe7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_89ae6d95bb79ad2eef4388e607bbffe7);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_ellipsis_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ellipsis_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_dict_0f149cdf73626b6d4642cc0b38db9198));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0f149cdf73626b6d4642cc0b38db9198);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_ff3b7b336c93bd47cd79657ac09a52dd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ff3b7b336c93bd47cd79657ac09a52dd);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_push_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_push_context);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop_context);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_dict_dce4e63795aec86590c30bd600c14b5a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_dce4e63795aec86590c30bd600c14b5a);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_color_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_color_default);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_60133964cb1efde41869d54d9dcdbad9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60133964cb1efde41869d54d9dcdbad9);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_84db718a6d3123cc1a774c8ca8d32810));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84db718a6d3123cc1a774c8ca8d32810);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_silent_str_plain_e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_silent_str_plain_e_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ctx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ctx_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_color_str_plain_ctx_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_color_str_plain_ctx_tuple);
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
static PyObject *module_var_accessor_click$globals$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$globals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$globals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$globals->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_click$globals$_local(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$globals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$globals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain__local);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$globals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__local);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__local, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__local);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__local, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain__local);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain__local);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__local);
    }

    return result;
}

static PyObject *module_var_accessor_click$globals$get_current_context(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$globals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$globals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$globals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_current_context);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_current_context, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_current_context);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_current_context, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context);
    }

    return result;
}

static PyObject *module_var_accessor_click$globals$local(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_click$globals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_click$globals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_local);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_click$globals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_local);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_local, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_local);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_local, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_local);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_local);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_local);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_367143d7b79fb97893b65c87e9aed3b1;
static PyCodeObject *code_objects_36c1f2f577d9623accc012f552c2c520;
static PyCodeObject *code_objects_8e450fc98041673fc048341ef2472be3;
static PyCodeObject *code_objects_55c4617c662abd5ae06db4f935d17ea6;
static PyCodeObject *code_objects_6597b0296a8303009219cb3a0e3e049c;
static PyCodeObject *code_objects_d6d074a5047fbae59213a34b8efe8006;
static PyCodeObject *code_objects_8fa1f0ee9b8612d4344fa5ae400edeb1;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_60133964cb1efde41869d54d9dcdbad9); CHECK_OBJECT(module_filename_obj);
code_objects_367143d7b79fb97893b65c87e9aed3b1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_84db718a6d3123cc1a774c8ca8d32810, mod_consts.const_str_digest_84db718a6d3123cc1a774c8ca8d32810, NULL, NULL, 0, 0, 0);
code_objects_36c1f2f577d9623accc012f552c2c520 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_current_context, mod_consts.const_str_plain_get_current_context, mod_consts.const_tuple_str_plain_silent_tuple, NULL, 1, 0, 0);
code_objects_8e450fc98041673fc048341ef2472be3 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_current_context, mod_consts.const_str_plain_get_current_context, mod_consts.const_tuple_str_plain_silent_tuple, NULL, 1, 0, 0);
code_objects_55c4617c662abd5ae06db4f935d17ea6 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_current_context, mod_consts.const_str_plain_get_current_context, mod_consts.const_tuple_str_plain_silent_str_plain_e_tuple, NULL, 1, 0, 0);
code_objects_6597b0296a8303009219cb3a0e3e049c = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pop_context, mod_consts.const_str_plain_pop_context, NULL, NULL, 0, 0, 0);
code_objects_d6d074a5047fbae59213a34b8efe8006 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_push_context, mod_consts.const_str_plain_push_context, mod_consts.const_tuple_str_plain_ctx_tuple, NULL, 1, 0, 0);
code_objects_8fa1f0ee9b8612d4344fa5ae400edeb1 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_color_default, mod_consts.const_str_plain_resolve_color_default, mod_consts.const_tuple_str_plain_color_str_plain_ctx_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_click$globals$$$function__1_get_current_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$globals$$$function__2_get_current_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$globals$$$function__3_get_current_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$globals$$$function__4_push_context(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$globals$$$function__5_pop_context(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_click$globals$$$function__6_resolve_color_default(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_click$globals$$$function__3_get_current_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_silent = python_pars[0];
PyObject *var_e = NULL;
struct Nuitka_FrameObject *frame_frame_click$globals$$$function__3_get_current_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_click$globals$$$function__3_get_current_context = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$globals$$$function__3_get_current_context)) {
    Py_XDECREF(cache_frame_frame_click$globals$$$function__3_get_current_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$globals$$$function__3_get_current_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$globals$$$function__3_get_current_context = MAKE_FUNCTION_FRAME(tstate, code_objects_55c4617c662abd5ae06db4f935d17ea6, module_click$globals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$globals$$$function__3_get_current_context->m_type_description == NULL);
frame_frame_click$globals$$$function__3_get_current_context = cache_frame_frame_click$globals$$$function__3_get_current_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$globals$$$function__3_get_current_context);
assert(Py_REFCNT(frame_frame_click$globals$$$function__3_get_current_context) == 2);

// Framed code:
// Tried code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_cast);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_args_element_value_1 = mod_consts.const_str_plain_Context;
tmp_expression_value_3 = module_var_accessor_click$globals$_local(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__local);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 36;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_stack);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 36;
type_description_1 = "oo";
    goto try_except_handler_1;
}
tmp_subscript_value_1 = const_int_neg_1;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, -1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 36;
type_description_1 = "oo";
    goto try_except_handler_1;
}
frame_frame_click$globals$$$function__3_get_current_context->m_frame.f_lineno = 36;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_1 = "oo";
    goto try_except_handler_1;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$globals$$$function__3_get_current_context, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$globals$$$function__3_get_current_context, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = mod_consts.const_tuple_type_AttributeError_type_IndexError_tuple;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "oo";
    goto try_except_handler_2;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_1); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_1);
var_e = tmp_assign_source_1;
}
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(par_silent);
tmp_operand_value_1 = par_silent;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "oo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_raise_cause_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_b5b3b7ec3275b4aa1797c95a9c13d554;
frame_frame_click$globals$$$function__3_get_current_context->m_frame.f_lineno = 39;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(var_e);
tmp_raise_cause_1 = var_e;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 39;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "oo";
goto try_except_handler_3;
}
branch_no_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_1:;
Py_XDECREF(var_e);
var_e = NULL;

goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 35;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_click$globals$$$function__3_get_current_context->m_frame)) {
        frame_frame_click$globals$$$function__3_get_current_context->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oo";
goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_3;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$globals$$$function__3_get_current_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$globals$$$function__3_get_current_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$globals$$$function__3_get_current_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$globals$$$function__3_get_current_context,
    type_description_1,
    par_silent,
    var_e
);


// Release cached frame if used for exception.
if (frame_frame_click$globals$$$function__3_get_current_context == cache_frame_frame_click$globals$$$function__3_get_current_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$globals$$$function__3_get_current_context);
    cache_frame_frame_click$globals$$$function__3_get_current_context = NULL;
}

assertFrameObject(frame_frame_click$globals$$$function__3_get_current_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_silent);
Py_DECREF(par_silent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$globals$$$function__4_push_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_ctx = python_pars[0];
struct Nuitka_FrameObject *frame_frame_click$globals$$$function__4_push_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$globals$$$function__4_push_context = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$globals$$$function__4_push_context)) {
    Py_XDECREF(cache_frame_frame_click$globals$$$function__4_push_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$globals$$$function__4_push_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$globals$$$function__4_push_context = MAKE_FUNCTION_FRAME(tstate, code_objects_d6d074a5047fbae59213a34b8efe8006, module_click$globals, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$globals$$$function__4_push_context->m_type_description == NULL);
frame_frame_click$globals$$$function__4_push_context = cache_frame_frame_click$globals$$$function__4_push_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$globals$$$function__4_push_context);
assert(Py_REFCNT(frame_frame_click$globals$$$function__4_push_context) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_3 = module_var_accessor_click$globals$_local(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__local);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_setdefault);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_stack;
tmp_call_arg_element_2 = MAKE_LIST_EMPTY(tstate, 0);
frame_frame_click$globals$$$function__4_push_context->m_frame.f_lineno = 46;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_ctx);
tmp_args_element_value_1 = par_ctx;
frame_frame_click$globals$$$function__4_push_context->m_frame.f_lineno = 46;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$globals$$$function__4_push_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$globals$$$function__4_push_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$globals$$$function__4_push_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$globals$$$function__4_push_context,
    type_description_1,
    par_ctx
);


// Release cached frame if used for exception.
if (frame_frame_click$globals$$$function__4_push_context == cache_frame_frame_click$globals$$$function__4_push_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$globals$$$function__4_push_context);
    cache_frame_frame_click$globals$$$function__4_push_context = NULL;
}

assertFrameObject(frame_frame_click$globals$$$function__4_push_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_ctx);
Py_DECREF(par_ctx);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_ctx);
Py_DECREF(par_ctx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$globals$$$function__5_pop_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_click$globals$$$function__5_pop_context;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$globals$$$function__5_pop_context = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_click$globals$$$function__5_pop_context)) {
    Py_XDECREF(cache_frame_frame_click$globals$$$function__5_pop_context);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$globals$$$function__5_pop_context == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$globals$$$function__5_pop_context = MAKE_FUNCTION_FRAME(tstate, code_objects_6597b0296a8303009219cb3a0e3e049c, module_click$globals, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$globals$$$function__5_pop_context->m_type_description == NULL);
frame_frame_click$globals$$$function__5_pop_context = cache_frame_frame_click$globals$$$function__5_pop_context;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$globals$$$function__5_pop_context);
assert(Py_REFCNT(frame_frame_click$globals$$$function__5_pop_context) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
tmp_expression_value_2 = module_var_accessor_click$globals$_local(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__local);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_stack);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pop);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
frame_frame_click$globals$$$function__5_pop_context->m_frame.f_lineno = 51;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$globals$$$function__5_pop_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$globals$$$function__5_pop_context->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$globals$$$function__5_pop_context, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$globals$$$function__5_pop_context,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_click$globals$$$function__5_pop_context == cache_frame_frame_click$globals$$$function__5_pop_context) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$globals$$$function__5_pop_context);
    cache_frame_frame_click$globals$$$function__5_pop_context = NULL;
}

assertFrameObject(frame_frame_click$globals$$$function__5_pop_context);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_click$globals$$$function__6_resolve_color_default(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_color = python_pars[0];
PyObject *var_ctx = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_click$globals$$$function__6_resolve_color_default;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_click$globals$$$function__6_resolve_color_default = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_color);
tmp_cmp_expr_left_1 = par_color;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_color);
tmp_return_value = par_color;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_click$globals$$$function__6_resolve_color_default)) {
    Py_XDECREF(cache_frame_frame_click$globals$$$function__6_resolve_color_default);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_click$globals$$$function__6_resolve_color_default == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_click$globals$$$function__6_resolve_color_default = MAKE_FUNCTION_FRAME(tstate, code_objects_8fa1f0ee9b8612d4344fa5ae400edeb1, module_click$globals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_click$globals$$$function__6_resolve_color_default->m_type_description == NULL);
frame_frame_click$globals$$$function__6_resolve_color_default = cache_frame_frame_click$globals$$$function__6_resolve_color_default;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$globals$$$function__6_resolve_color_default);
assert(Py_REFCNT(frame_frame_click$globals$$$function__6_resolve_color_default) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_click$globals$get_current_context(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_current_context);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_click$globals$$$function__6_resolve_color_default->m_frame.f_lineno = 62;
tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_silent_tuple);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_ctx == NULL);
var_ctx = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_ctx);
tmp_cmp_expr_left_2 = var_ctx;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_ctx);
tmp_expression_value_1 = var_ctx;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_color);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_click$globals$$$function__6_resolve_color_default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$globals$$$function__6_resolve_color_default->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$globals$$$function__6_resolve_color_default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_click$globals$$$function__6_resolve_color_default,
    type_description_1,
    par_color,
    var_ctx
);


// Release cached frame if used for exception.
if (frame_frame_click$globals$$$function__6_resolve_color_default == cache_frame_frame_click$globals$$$function__6_resolve_color_default) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_click$globals$$$function__6_resolve_color_default);
    cache_frame_frame_click$globals$$$function__6_resolve_color_default = NULL;
}

assertFrameObject(frame_frame_click$globals$$$function__6_resolve_color_default);

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
Py_XDECREF(var_ctx);
var_ctx = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ctx);
var_ctx = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_color);
Py_DECREF(par_color);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_color);
Py_DECREF(par_color);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function__1_get_current_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_current_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_36c1f2f577d9623accc012f552c2c520,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$globals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function__2_get_current_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_get_current_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8e450fc98041673fc048341ef2472be3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$globals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function__3_get_current_context(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function__3_get_current_context,
        mod_consts.const_str_plain_get_current_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_55c4617c662abd5ae06db4f935d17ea6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$globals,
        mod_consts.const_str_digest_47b71d7913161140a21c76b334dcfce5,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function__4_push_context(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function__4_push_context,
        mod_consts.const_str_plain_push_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d6d074a5047fbae59213a34b8efe8006,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$globals,
        mod_consts.const_str_digest_964bcb3232b34ef92e469c8bc45b4a6b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function__5_pop_context(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function__5_pop_context,
        mod_consts.const_str_plain_pop_context,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6597b0296a8303009219cb3a0e3e049c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$globals,
        mod_consts.const_str_digest_98b06f2af894fbaecb13744dbc48683d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_click$globals$$$function__6_resolve_color_default(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_click$globals$$$function__6_resolve_color_default,
        mod_consts.const_str_plain_resolve_color_default,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8fa1f0ee9b8612d4344fa5ae400edeb1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_click$globals,
        mod_consts.const_str_digest_a8b948f4c82e14e481471144f037b915,
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

static function_impl_code const function_table_click$globals[] = {
impl_click$globals$$$function__3_get_current_context,
impl_click$globals$$$function__4_push_context,
impl_click$globals$$$function__5_pop_context,
impl_click$globals$$$function__6_resolve_color_default,
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

    return Nuitka_Function_GetFunctionState(function, function_table_click$globals);
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
        module_click$globals,
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
        function_table_click$globals,
        sizeof(function_table_click$globals) / sizeof(function_impl_code)
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
static char const *module_full_name = "click.globals";
#endif

// Internal entry point for module code.
PyObject *module_code_click$globals(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("click$globals");

    // Store the module for future use.
    module_click$globals = module;

    moduledict_click$globals = MODULE_DICT(module_click$globals);

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
        PRINT_STRING("click$globals: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("click$globals: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("click$globals: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "click.globals" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initclick$globals\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_click$globals,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_click$globals,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_click$globals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_click$globals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_click$globals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_click$globals);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_click$globals);
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

        UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_click$globals;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_click$globals = MAKE_MODULE_FRAME(code_objects_367143d7b79fb97893b65c87e9aed3b1, module_click$globals);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_click$globals);
assert(Py_REFCNT(frame_frame_click$globals) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_click$globals$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_click$globals$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_t, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_threading;
tmp_globals_arg_value_1 = (PyObject *)moduledict_click$globals;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_local_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_click$globals->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_click$globals,
        mod_consts.const_str_plain_local,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_local);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_local, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_click$globals$local(tstate);
assert(!(tmp_called_value_1 == NULL));
frame_frame_click$globals->m_frame.f_lineno = 9;
tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain__local, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_89ae6d95bb79ad2eef4388e607bbffe7);
Py_INCREF(tmp_defaults_1);

tmp_args_element_value_1 = MAKE_FUNCTION_click$globals$$$function__1_get_current_context(tstate, tmp_defaults_1, tmp_annotations_1);

frame_frame_click$globals->m_frame.f_lineno = 12;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_overload, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_called_instance_2 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_2 == NULL));
tmp_defaults_2 = mod_consts.const_tuple_ellipsis_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0f149cdf73626b6d4642cc0b38db9198);
Py_INCREF(tmp_defaults_2);

tmp_args_element_value_2 = MAKE_FUNCTION_click$globals$$$function__2_get_current_context(tstate, tmp_defaults_2, tmp_annotations_2);

frame_frame_click$globals->m_frame.f_lineno = 16;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_overload, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context, tmp_assign_source_9);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_click$globals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_click$globals->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_click$globals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_click$globals);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_3;
tmp_defaults_3 = mod_consts.const_tuple_false_tuple;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_0f149cdf73626b6d4642cc0b38db9198);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_10 = MAKE_FUNCTION_click$globals$$$function__3_get_current_context(tstate, tmp_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_get_current_context, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_ff3b7b336c93bd47cd79657ac09a52dd);

tmp_assign_source_11 = MAKE_FUNCTION_click$globals$$$function__4_push_context(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_push_context, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_12 = MAKE_FUNCTION_click$globals$$$function__5_pop_context(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_pop_context, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_6;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_dce4e63795aec86590c30bd600c14b5a);
Py_INCREF(tmp_defaults_4);

tmp_assign_source_13 = MAKE_FUNCTION_click$globals$$$function__6_resolve_color_default(tstate, tmp_defaults_4, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_click$globals, (Nuitka_StringObject *)mod_consts.const_str_plain_resolve_color_default, tmp_assign_source_13);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("click$globals", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "click.globals" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_click$globals);
    return module_click$globals;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_click$globals, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("click$globals", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

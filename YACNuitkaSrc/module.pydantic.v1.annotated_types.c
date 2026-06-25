/* Generated code for Python module 'pydantic$v1$annotated_types'
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



/* The "module_pydantic$v1$annotated_types" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$v1$annotated_types;
PyDictObject *moduledict_pydantic$v1$annotated_types;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain___required_keys__;
PyObject *const_str_digest_858863a39ed3c770d2c3e90099fc6889;
PyObject *const_str_plain_is_legacy_typeddict;
PyObject *const_str_plain_values;
PyObject *const_str_digest_ce82f2b37144cea72e5e293e12080360;
PyObject *const_str_plain_items;
PyObject *const_str_plain_Required;
PyObject *const_str_plain_create_model;
PyObject *const_str_digest_f5b89b1fd674a225c9d490f5b873dc72;
PyObject *const_str_plain_is_typeddict_special;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_281011d00bfbf6d5c96480027ff73e9a;
PyObject *const_str_plain__fields;
PyObject *const_str_plain_Any;
PyObject *const_str_digest_6a18d3e7596196ad4dfd4d70c82ebd1b;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Dict;
PyObject *const_str_plain_FrozenSet;
PyObject *const_str_plain_NamedTuple;
PyObject *const_str_plain_Type;
PyObject *const_str_digest_9cffe454a97af811292f85406e2c37ba;
PyObject *const_tuple_str_plain_Required_tuple;
PyObject *const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a;
PyObject *const_tuple_str_plain_BaseModel_str_plain_create_model_tuple;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_digest_f9861b1e4514d5e04250a8e007e7186b;
PyObject *const_tuple_str_plain_is_typeddict_str_plain_is_typeddict_special_tuple;
PyObject *const_str_plain_is_typeddict;
PyObject *const_str_plain_return;
PyObject *const_str_plain_typeddict_cls;
PyObject *const_str_plain_TypedDict;
PyObject *const_str_plain_kwargs;
PyObject *const_str_plain_create_model_from_typeddict;
PyObject *const_str_plain_namedtuple_cls;
PyObject *const_str_plain_create_model_from_namedtuple;
PyObject *const_str_digest_6098d356ed3a43f3437565141756fe4c;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_t_tuple;
PyObject *const_str_digest_b1e0625b7310e15a96601bac70a20f5d;
PyObject *const_tuple_7dab62b4d11487a5203bf3dea1b3ff7c_tuple;
PyObject *const_tuple_6b97d50bb218783768864025f5ae265e_tuple;
PyObject *const_tuple_str_underscore_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[44];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic.v1.annotated_types"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___required_keys__);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_858863a39ed3c770d2c3e90099fc6889);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_legacy_typeddict);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_ce82f2b37144cea72e5e293e12080360);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_Required);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_model);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_f5b89b1fd674a225c9d490f5b873dc72);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict_special);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_281011d00bfbf6d5c96480027ff73e9a);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_6a18d3e7596196ad4dfd4d70c82ebd1b);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_Dict);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_FrozenSet);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Required_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_str_plain_create_model_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_typeddict_str_plain_is_typeddict_special_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_typeddict_cls);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_model_from_typeddict);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_namedtuple_cls);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_model_from_namedtuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_6098d356ed3a43f3437565141756fe4c);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_t_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1e0625b7310e15a96601bac70a20f5d);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_7dab62b4d11487a5203bf3dea1b3ff7c_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_6b97d50bb218783768864025f5ae265e_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple);
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
void checkModuleConstants_pydantic$v1$annotated_types(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___required_keys__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___required_keys__);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_858863a39ed3c770d2c3e90099fc6889));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_858863a39ed3c770d2c3e90099fc6889);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_legacy_typeddict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_legacy_typeddict);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_ce82f2b37144cea72e5e293e12080360));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ce82f2b37144cea72e5e293e12080360);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_Required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Required);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_model);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_f5b89b1fd674a225c9d490f5b873dc72));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f5b89b1fd674a225c9d490f5b873dc72);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict_special));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_typeddict_special);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_281011d00bfbf6d5c96480027ff73e9a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_281011d00bfbf6d5c96480027ff73e9a);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fields);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_6a18d3e7596196ad4dfd4d70c82ebd1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6a18d3e7596196ad4dfd4d70c82ebd1b);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_Dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Dict);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_FrozenSet));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FrozenSet);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamedTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamedTuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Required_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Required_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_str_plain_create_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseModel_str_plain_create_model_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_typeddict_str_plain_is_typeddict_special_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_typeddict_str_plain_is_typeddict_special_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_typeddict);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_typeddict_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typeddict_cls);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedDict);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kwargs);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_model_from_typeddict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_model_from_typeddict);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_namedtuple_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_namedtuple_cls);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_model_from_namedtuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_model_from_namedtuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_6098d356ed3a43f3437565141756fe4c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6098d356ed3a43f3437565141756fe4c);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_t_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_t_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1e0625b7310e15a96601bac70a20f5d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1e0625b7310e15a96601bac70a20f5d);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_7dab62b4d11487a5203bf3dea1b3ff7c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7dab62b4d11487a5203bf3dea1b3ff7c_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_6b97d50bb218783768864025f5ae265e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6b97d50bb218783768864025f5ae265e_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_underscore_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_underscore_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 7
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
static PyObject *module_var_accessor_pydantic$v1$annotated_types$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$annotated_types$Required(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Required);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Required, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Required);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Required, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Required);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$annotated_types$Type(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Type);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$annotated_types$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$annotated_types->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$annotated_types$create_model(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_model);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_model, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_model);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_model, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$annotated_types$is_legacy_typeddict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_legacy_typeddict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_legacy_typeddict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_legacy_typeddict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_legacy_typeddict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_legacy_typeddict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_legacy_typeddict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_legacy_typeddict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_legacy_typeddict);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$v1$annotated_types$is_typeddict_special(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$v1$annotated_types->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$v1$annotated_types->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict_special);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$v1$annotated_types->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_typeddict_special);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_typeddict_special, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_typeddict_special);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_typeddict_special, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict_special);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict_special);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict_special);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_fd6757aa4853ae87bef6ed614a83cb5d;
static PyCodeObject *code_objects_e6377f08413f2d779c97dfc516628aae;
static PyCodeObject *code_objects_4b2bea2332eb88e284756b83c0536eb2;
static PyCodeObject *code_objects_e045d74e6fa7a6bc707d80056394e98a;
static PyCodeObject *code_objects_9fb9d375536106aa3a41128b0e882c04;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6098d356ed3a43f3437565141756fe4c); CHECK_OBJECT(module_filename_obj);
code_objects_fd6757aa4853ae87bef6ed614a83cb5d = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_281011d00bfbf6d5c96480027ff73e9a, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_t_tuple, NULL, 1, 0, 0);
code_objects_e6377f08413f2d779c97dfc516628aae = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_b1e0625b7310e15a96601bac70a20f5d, mod_consts.const_str_digest_b1e0625b7310e15a96601bac70a20f5d, NULL, NULL, 0, 0, 0);
code_objects_4b2bea2332eb88e284756b83c0536eb2 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_create_model_from_namedtuple, mod_consts.const_str_plain_create_model_from_namedtuple, mod_consts.const_tuple_7dab62b4d11487a5203bf3dea1b3ff7c_tuple, NULL, 1, 0, 0);
code_objects_e045d74e6fa7a6bc707d80056394e98a = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts.const_str_plain_create_model_from_typeddict, mod_consts.const_str_plain_create_model_from_typeddict, mod_consts.const_tuple_6b97d50bb218783768864025f5ae265e_tuple, NULL, 1, 0, 0);
code_objects_9fb9d375536106aa3a41128b0e882c04 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_is_legacy_typeddict, mod_consts.const_str_plain_is_legacy_typeddict, mod_consts.const_tuple_str_underscore_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__2_is_legacy_typeddict(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_typeddict_cls = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_field_definitions = NULL;
PyObject *var_required_keys = NULL;
PyObject *outline_0_var_field_name = NULL;
PyObject *outline_0_var_field_type = NULL;
PyObject *tmp_dict_unpacking_call_1__called = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict = MAKE_FUNCTION_FRAME(tstate, code_objects_e045d74e6fa7a6bc707d80056394e98a, module_pydantic$v1$annotated_types, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict->m_type_description == NULL);
frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict = cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict);
assert(Py_REFCNT(frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_typeddict_cls);
tmp_expression_value_1 = par_typeddict_cls;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain___required_keys__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_858863a39ed3c770d2c3e90099fc6889;
frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict->m_frame.f_lineno = 36;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 36;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_any_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_2;
tmp_called_value_1 = module_var_accessor_pydantic$v1$annotated_types$is_legacy_typeddict(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_legacy_typeddict);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_typeddict_cls);
tmp_args_element_value_1 = par_typeddict_cls;
frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict->m_frame.f_lineno = 41;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_typeddict_cls);
tmp_expression_value_3 = par_typeddict_cls;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain___annotations__);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_values);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict->m_frame.f_lineno = 42;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_1;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
assert(!(tmp_truth_name_2 == -1));
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_ce82f2b37144cea72e5e293e12080360;
frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict->m_frame.f_lineno = 44;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 44;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_typeddict_cls);
tmp_expression_value_4 = par_typeddict_cls;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___required_keys__);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_required_keys == NULL);
var_required_keys = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_typeddict_cls);
tmp_expression_value_6 = par_typeddict_cls;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___annotations__);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict->m_frame.f_lineno = 52;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 50;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_3 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_5;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_field_name;
    outline_0_var_field_name = tmp_assign_source_10;
    Py_INCREF(outline_0_var_field_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_field_type;
    outline_0_var_field_type = tmp_assign_source_11;
    Py_INCREF(outline_0_var_field_type);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_field_name);
tmp_dictset38_key_1 = outline_0_var_field_name;
CHECK_OBJECT(outline_0_var_field_type);
tmp_tuple_element_1 = outline_0_var_field_type;
tmp_dictset38_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyTuple_SET_ITEM0(tmp_dictset38_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(outline_0_var_field_name);
tmp_cmp_expr_left_1 = outline_0_var_field_name;
CHECK_OBJECT(var_required_keys);
tmp_cmp_expr_right_1 = var_required_keys;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_tuple_element_1 = module_var_accessor_pydantic$v1$annotated_types$Required(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Required);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_tuple_element_1 = Py_None;
condexpr_end_1:;
PyTuple_SET_ITEM0(tmp_dictset38_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_dictset38_value_1);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_assign_source_3 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_assign_source_3);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
Py_XDECREF(outline_0_var_field_name);
outline_0_var_field_name = NULL;
Py_XDECREF(outline_0_var_field_type);
outline_0_var_field_type = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_field_name);
outline_0_var_field_name = NULL;
Py_XDECREF(outline_0_var_field_type);
outline_0_var_field_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 50;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_field_definitions == NULL);
var_field_definitions = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = module_var_accessor_pydantic$v1$annotated_types$create_model(tstate);
if (unlikely(tmp_assign_source_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_model);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_dict_unpacking_call_1__called == NULL);
Py_INCREF(tmp_assign_source_12);
tmp_dict_unpacking_call_1__called = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_1 = tmp_dict_unpacking_call_1__called;
CHECK_OBJECT(par_typeddict_cls);
tmp_expression_value_7 = par_typeddict_cls;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_2 = tmp_dict_unpacking_call_1__called;
CHECK_OBJECT(par_kwargs);
tmp_tuple_element_3 = par_kwargs;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_field_definitions);
tmp_tuple_element_3 = var_field_definitions;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 1, tmp_tuple_element_3);
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_direct_call_arg3_1 = impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(tstate, dir_call_args);
}
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 55;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
goto try_return_handler_7;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict,
    type_description_1,
    par_typeddict_cls,
    par_kwargs,
    var_field_definitions,
    var_required_keys
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict == cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict);
    cache_frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_field_definitions);
CHECK_OBJECT(var_field_definitions);
Py_DECREF(var_field_definitions);
var_field_definitions = NULL;
CHECK_OBJECT(var_required_keys);
CHECK_OBJECT(var_required_keys);
Py_DECREF(var_required_keys);
var_required_keys = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_field_definitions);
var_field_definitions = NULL;
Py_XDECREF(var_required_keys);
var_required_keys = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_typeddict_cls);
Py_DECREF(par_typeddict_cls);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_typeddict_cls);
Py_DECREF(par_typeddict_cls);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr_locals {
PyObject *var_t;
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

static PyObject *pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr_locals *generator_heap = (struct pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_t = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_fd6757aa4853ae87bef6ed614a83cb5d, module_pydantic$v1$annotated_types, sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "No";
generator_heap->exception_lineno = 41;
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
    PyObject *old = generator_heap->var_t;
    generator_heap->var_t = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_t);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_pydantic$v1$annotated_types$is_typeddict_special(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_is_typeddict_special);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_t);
tmp_args_element_value_1 = generator_heap->var_t;
generator->m_frame->m_frame.f_lineno = 42;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 41;
generator_heap->type_description_1 = "No";
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
    generator_heap->var_t
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

Py_XDECREF(generator_heap->var_t);
generator_heap->var_t = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_t);
generator_heap->var_t = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr_context,
        module_pydantic$v1$annotated_types,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_281011d00bfbf6d5c96480027ff73e9a,
#endif
        code_objects_fd6757aa4853ae87bef6ed614a83cb5d,
        closure,
        1,
#if 1
        sizeof(struct pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_namedtuple_cls = python_pars[0];
PyObject *par_kwargs = python_pars[1];
PyObject *var_namedtuple_annotations = NULL;
PyObject *var_field_definitions = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_1_var_field_name = NULL;
PyObject *outline_1_var_field_type = NULL;
PyObject *tmp_dict_unpacking_call_1__called = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_dictcontraction_2__$0 = NULL;
PyObject *tmp_dictcontraction_2__contraction = NULL;
PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple)) {
    Py_XDECREF(cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple = MAKE_FUNCTION_FRAME(tstate, code_objects_4b2bea2332eb88e284756b83c0536eb2, module_pydantic$v1$annotated_types, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple->m_type_description == NULL);
frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple = cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple);
assert(Py_REFCNT(frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_namedtuple_cls);
tmp_expression_value_1 = par_namedtuple_cls;
tmp_name_value_1 = const_str_plain___annotations__;
tmp_default_value_1 = Py_None;
tmp_or_left_value_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 66;
type_description_1 = "oooo";
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
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_namedtuple_cls);
tmp_expression_value_2 = par_namedtuple_cls;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__fields);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_1 = tmp_dictcontraction_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 66;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_assign_source_5 = tmp_dictcontraction_1__iter_value_0;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_5;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k);
tmp_dictset38_key_1 = outline_0_var_k;
tmp_dictset38_value_1 = module_var_accessor_pydantic$v1$annotated_types$Any(tstate);
if (unlikely(tmp_dictset38_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_or_right_value_1 = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_or_right_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_1__$0);
CHECK_OBJECT(tmp_dictcontraction_1__$0);
Py_DECREF(tmp_dictcontraction_1__$0);
tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
Py_DECREF(tmp_dictcontraction_1__contraction);
tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 66;
goto frame_exception_exit_1;
outline_result_1:;
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_namedtuple_annotations == NULL);
var_namedtuple_annotations = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_6;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_namedtuple_annotations);
tmp_expression_value_3 = var_namedtuple_annotations;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple->m_frame.f_lineno = 70;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_dictcontraction_2__$0 == NULL);
tmp_dictcontraction_2__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_2__contraction == NULL);
tmp_dictcontraction_2__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
tmp_next_source_2 = tmp_dictcontraction_2__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 69;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_dictcontraction_2__iter_value_0;
    tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
tmp_iter_arg_3 = tmp_dictcontraction_2__iter_value_0;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_1 = "oooo";
    goto try_except_handler_7;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_13 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_1_var_field_name;
    outline_1_var_field_name = tmp_assign_source_13;
    Py_INCREF(outline_1_var_field_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_14 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_1_var_field_type;
    outline_1_var_field_type = tmp_assign_source_14;
    Py_INCREF(outline_1_var_field_type);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_2;
PyObject *tmp_dictset38_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_dictset38_dict_2;
CHECK_OBJECT(outline_1_var_field_name);
tmp_dictset38_key_2 = outline_1_var_field_name;
CHECK_OBJECT(outline_1_var_field_type);
tmp_tuple_element_1 = outline_1_var_field_type;
tmp_dictset38_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_dictset38_value_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$v1$annotated_types$Required(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Required);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_dictset38_value_2, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_dictset38_value_2);
goto try_except_handler_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_2));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

CHECK_OBJECT(tmp_dictset38_value_2);
Py_DECREF(tmp_dictset38_value_2);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
tmp_assign_source_6 = tmp_dictcontraction_2__contraction;
Py_INCREF(tmp_assign_source_6);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction_2__$0);
CHECK_OBJECT(tmp_dictcontraction_2__$0);
Py_DECREF(tmp_dictcontraction_2__$0);
tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
CHECK_OBJECT(tmp_dictcontraction_2__contraction);
Py_DECREF(tmp_dictcontraction_2__contraction);
tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
tmp_dictcontraction_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_field_name);
outline_1_var_field_name = NULL;
Py_XDECREF(outline_1_var_field_type);
outline_1_var_field_type = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_field_name);
outline_1_var_field_name = NULL;
Py_XDECREF(outline_1_var_field_type);
outline_1_var_field_type = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 69;
goto frame_exception_exit_1;
outline_result_2:;
assert(var_field_definitions == NULL);
var_field_definitions = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = module_var_accessor_pydantic$v1$annotated_types$create_model(tstate);
if (unlikely(tmp_assign_source_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_model);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(tmp_dict_unpacking_call_1__called == NULL);
Py_INCREF(tmp_assign_source_15);
tmp_dict_unpacking_call_1__called = tmp_assign_source_15;
}
// Tried code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg3_1;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_direct_call_arg2_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_1 = tmp_dict_unpacking_call_1__called;
CHECK_OBJECT(par_namedtuple_cls);
tmp_expression_value_4 = par_namedtuple_cls;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain___name__);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooo";
    goto try_except_handler_8;
}
tmp_direct_call_arg2_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg2_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
tmp_direct_call_arg1_2 = tmp_dict_unpacking_call_1__called;
CHECK_OBJECT(par_kwargs);
tmp_tuple_element_3 = par_kwargs;
tmp_direct_call_arg2_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(var_field_definitions);
tmp_tuple_element_3 = var_field_definitions;
PyTuple_SET_ITEM0(tmp_direct_call_arg2_2, 1, tmp_tuple_element_3);
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2, tmp_direct_call_arg2_2};
    tmp_direct_call_arg3_1 = impl___main__$$$helper_function_complex_call_helper_dict_unpacking_checks(tstate, dir_call_args);
}
if (tmp_direct_call_arg3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg2_1);

exception_lineno = 72;
type_description_1 = "oooo";
    goto try_except_handler_8;
}
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_pos_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "oooo";
    goto try_except_handler_8;
}
goto try_return_handler_8;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
CHECK_OBJECT(tmp_dict_unpacking_call_1__called);
Py_DECREF(tmp_dict_unpacking_call_1__called);
tmp_dict_unpacking_call_1__called = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple,
    type_description_1,
    par_namedtuple_cls,
    par_kwargs,
    var_namedtuple_annotations,
    var_field_definitions
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple == cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple);
    cache_frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple = NULL;
}

assertFrameObject(frame_frame_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_namedtuple_annotations);
CHECK_OBJECT(var_namedtuple_annotations);
Py_DECREF(var_namedtuple_annotations);
var_namedtuple_annotations = NULL;
CHECK_OBJECT(var_field_definitions);
CHECK_OBJECT(var_field_definitions);
Py_DECREF(var_field_definitions);
var_field_definitions = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_namedtuple_annotations);
var_namedtuple_annotations = NULL;
Py_XDECREF(var_field_definitions);
var_field_definitions = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_namedtuple_cls);
Py_DECREF(par_namedtuple_cls);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_namedtuple_cls);
Py_DECREF(par_namedtuple_cls);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__2_is_legacy_typeddict(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts.const_str_plain_is_legacy_typeddict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9fb9d375536106aa3a41128b0e882c04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$annotated_types,
        NULL,
        NULL,
        0
    );
Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict,
        mod_consts.const_str_plain_create_model_from_typeddict,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e045d74e6fa7a6bc707d80056394e98a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$annotated_types,
        mod_consts.const_str_digest_f5b89b1fd674a225c9d490f5b873dc72,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple,
        mod_consts.const_str_plain_create_model_from_namedtuple,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4b2bea2332eb88e284756b83c0536eb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$v1$annotated_types,
        mod_consts.const_str_digest_6a18d3e7596196ad4dfd4d70c82ebd1b,
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

static function_impl_code const function_table_pydantic$v1$annotated_types[] = {
impl_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict,
impl_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$v1$annotated_types);
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
        module_pydantic$v1$annotated_types,
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
        function_table_pydantic$v1$annotated_types,
        sizeof(function_table_pydantic$v1$annotated_types) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic.v1.annotated_types";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$v1$annotated_types(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$v1$annotated_types");

    // Store the module for future use.
    module_pydantic$v1$annotated_types = module;

    moduledict_pydantic$v1$annotated_types = MODULE_DICT(module_pydantic$v1$annotated_types);

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
        PRINT_STRING("pydantic$v1$annotated_types: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$v1$annotated_types: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$v1$annotated_types: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.v1.annotated_types" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$v1$annotated_types\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$v1$annotated_types,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$v1$annotated_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$v1$annotated_types,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$v1$annotated_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$v1$annotated_types,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$v1$annotated_types);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$v1$annotated_types);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$v1$annotated_types;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$v1$annotated_types = MAKE_MODULE_FRAME(code_objects_e6377f08413f2d779c97dfc516628aae, module_pydantic$v1$annotated_types);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$v1$annotated_types);
assert(Py_REFCNT(frame_frame_pydantic$v1$annotated_types) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$v1$annotated_types$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$v1$annotated_types$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_4);
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
UPDATE_STRING_DICT0(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
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
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_Dict,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Dict);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Dict, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_FrozenSet,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_FrozenSet);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_FrozenSet, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_NamedTuple,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_NamedTuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_NamedTuple, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_Type,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Type);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 2;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Type, tmp_assign_source_11);
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
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_9cffe454a97af811292f85406e2c37ba;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$v1$annotated_types;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Required_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$v1$annotated_types->m_frame.f_lineno = 4;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_Required,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Required);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_Required, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_89e6398e41cddc4e38dd68cd9e9b179a;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$v1$annotated_types;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_BaseModel_str_plain_create_model_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$v1$annotated_types->m_frame.f_lineno = 5;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_13;
}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_BaseModel);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_create_model,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_create_model);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$v1$annotated_types;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_is_typeddict_str_plain_is_typeddict_special_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$v1$annotated_types->m_frame.f_lineno = 6;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_is_typeddict,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_is_typeddict);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$v1$annotated_types,
        mod_consts.const_str_plain_is_typeddict_special,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_is_typeddict_special);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict_special, tmp_assign_source_18);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_import_from_3__module);
CHECK_OBJECT(tmp_import_from_3__module);
Py_DECREF(tmp_import_from_3__module);
tmp_import_from_3__module = NULL;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = const_str_underscore;
tmp_dict_value_1 = module_var_accessor_pydantic$v1$annotated_types$Any(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_dict_value_1 = module_var_accessor_pydantic$v1$annotated_types$Any(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 18;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_assign_source_19 = MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__2_is_legacy_typeddict(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_is_legacy_typeddict, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_dict_key_2 = mod_consts.const_str_plain_typeddict_cls;
tmp_expression_value_1 = module_var_accessor_pydantic$v1$annotated_types$Type(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_str_plain_TypedDict;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_kwargs;
tmp_dict_value_2 = module_var_accessor_pydantic$v1$annotated_types$Any(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 25;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_2 = module_var_accessor_pydantic$v1$annotated_types$Type(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto dict_build_exception_2;
}
tmp_subscript_value_2 = mod_consts.const_str_plain_BaseModel;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

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

tmp_assign_source_20 = MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__3_create_model_from_typeddict(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model_from_typeddict, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
tmp_dict_key_3 = mod_consts.const_str_plain_namedtuple_cls;
tmp_expression_value_3 = module_var_accessor_pydantic$v1$annotated_types$Type(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = mod_consts.const_str_plain_NamedTuple;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_kwargs;
tmp_dict_value_3 = module_var_accessor_pydantic$v1$annotated_types$Any(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_4 = module_var_accessor_pydantic$v1$annotated_types$Type(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Type);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 58;

    goto dict_build_exception_3;
}
tmp_subscript_value_4 = mod_consts.const_str_plain_BaseModel;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_assign_source_21 = MAKE_FUNCTION_pydantic$v1$annotated_types$$$function__4_create_model_from_namedtuple(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)mod_consts.const_str_plain_create_model_from_namedtuple, tmp_assign_source_21);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$v1$annotated_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$v1$annotated_types->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$v1$annotated_types, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$v1$annotated_types);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$v1$annotated_types", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.v1.annotated_types" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$v1$annotated_types);
    return module_pydantic$v1$annotated_types;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$v1$annotated_types, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$v1$annotated_types", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

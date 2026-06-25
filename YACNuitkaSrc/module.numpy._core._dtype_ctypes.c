/* Generated code for Python module 'numpy$_core$_dtype_ctypes'
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



/* The "module_numpy$_core$_dtype_ctypes" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_core$_dtype_ctypes;
PyDictObject *moduledict_numpy$_core$_dtype_ctypes;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_np;
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_dtype_from_ctypes_type;
PyObject *const_str_plain__type_;
PyObject *const_str_plain__length_;
PyObject *const_str_plain__fields_;
PyObject *const_str_digest_2565610edbf0b92e14567ea3a96d61f3;
PyObject *const_str_plain__pack_;
PyObject *const_str_plain_names;
PyObject *const_str_plain_formats;
PyObject *const_str_plain_min;
PyObject *const_str_plain_t;
PyObject *const_str_plain_alignment;
PyObject *const_str_plain_current_offset;
PyObject *const_str_plain_offsets;
PyObject *const_str_plain_sizeof;
PyObject *const_str_plain_itemsize;
PyObject *const_str_plain_fields;
PyObject *const_dict_223450cdd74e015a15ceca018a912048;
PyObject *const_str_plain___ctype_be__;
PyObject *const_str_chr_62;
PyObject *const_str_plain___ctype_le__;
PyObject *const_str_chr_60;
PyObject *const_str_digest_44d7e14e2169ff4d3fc329b602595ffd;
PyObject *const_str_plain__ctypes;
PyObject *const_str_plain_Array;
PyObject *const_str_plain__from_ctypes_array;
PyObject *const_str_plain__Pointer;
PyObject *const_str_digest_24930239432157d13755a01118ec2c22;
PyObject *const_str_plain_Structure;
PyObject *const_str_plain__from_ctypes_structure;
PyObject *const_str_plain_Union;
PyObject *const_str_plain__from_ctypes_union;
PyObject *const_str_plain__from_ctypes_scalar;
PyObject *const_str_digest_c7047b019bca498665cb9369ab68afc1;
PyObject *const_str_digest_eeee367c5a6bd72ad279c101dc893102;
PyObject *const_str_digest_467da5a204bcf8b0c103cbe318db17fc;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_numpy;
PyObject *const_str_digest_582bf5cc44cefc60d44ee6621c40a380;
PyObject *const_str_digest_6244b6fca041f33ef55f1d9facb28840;
PyObject *const_tuple_str_plain_t_tuple;
PyObject *const_tuple_cda2ddb71a933038bb38d8bc5d08707f_tuple;
PyObject *const_tuple_5ee59c7a8b4c9499210e6e7a75f060b2_tuple;
PyObject *const_tuple_str_plain_t_str_plain__ctypes_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[46];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._core._dtype_ctypes"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_np);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype_from_ctypes_type);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__type_);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain__length_);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields_);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_2565610edbf0b92e14567ea3a96d61f3);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__pack_);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_names);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_formats);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_min);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_alignment);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_current_offset);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_offsets);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_fields);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_dict_223450cdd74e015a15ceca018a912048);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain___ctype_be__);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain___ctype_le__);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_chr_60);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_44d7e14e2169ff4d3fc329b602595ffd);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__ctypes);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_Array);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_array);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__Pointer);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_24930239432157d13755a01118ec2c22);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Structure);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_structure);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_union);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_scalar);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7047b019bca498665cb9369ab68afc1);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_digest_eeee367c5a6bd72ad279c101dc893102);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_467da5a204bcf8b0c103cbe318db17fc);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_numpy);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_582bf5cc44cefc60d44ee6621c40a380);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_6244b6fca041f33ef55f1d9facb28840);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_cda2ddb71a933038bb38d8bc5d08707f_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_5ee59c7a8b4c9499210e6e7a75f060b2_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_str_plain__ctypes_tuple);
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
void checkModuleConstants_numpy$_core$_dtype_ctypes(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_np));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_np);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype_from_ctypes_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype_from_ctypes_type);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__type_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__type_);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain__length_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__length_);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fields_);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_2565610edbf0b92e14567ea3a96d61f3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2565610edbf0b92e14567ea3a96d61f3);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__pack_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__pack_);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_names);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_formats));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_formats);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_min));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_min);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_alignment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_alignment);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_current_offset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_current_offset);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_offsets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_offsets);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_sizeof));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sizeof);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itemsize);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fields);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_dict_223450cdd74e015a15ceca018a912048));
CHECK_OBJECT_DEEP(mod_consts.const_dict_223450cdd74e015a15ceca018a912048);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain___ctype_be__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ctype_be__);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain___ctype_le__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___ctype_le__);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_chr_60));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_60);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_44d7e14e2169ff4d3fc329b602595ffd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_44d7e14e2169ff4d3fc329b602595ffd);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__ctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ctypes);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_Array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Array);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_ctypes_array);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__Pointer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Pointer);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_24930239432157d13755a01118ec2c22));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24930239432157d13755a01118ec2c22);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Structure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Structure);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_structure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_ctypes_structure);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_ctypes_union);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_ctypes_scalar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_ctypes_scalar);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7047b019bca498665cb9369ab68afc1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7047b019bca498665cb9369ab68afc1);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_digest_eeee367c5a6bd72ad279c101dc893102));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eeee367c5a6bd72ad279c101dc893102);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_467da5a204bcf8b0c103cbe318db17fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_467da5a204bcf8b0c103cbe318db17fc);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_numpy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_numpy);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_582bf5cc44cefc60d44ee6621c40a380));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_582bf5cc44cefc60d44ee6621c40a380);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_6244b6fca041f33ef55f1d9facb28840));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6244b6fca041f33ef55f1d9facb28840);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_t_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_cda2ddb71a933038bb38d8bc5d08707f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_cda2ddb71a933038bb38d8bc5d08707f_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_5ee59c7a8b4c9499210e6e7a75f060b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5ee59c7a8b4c9499210e6e7a75f060b2_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_t_str_plain__ctypes_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_t_str_plain__ctypes_tuple);
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
static PyObject *module_var_accessor_numpy$_core$_dtype_ctypes$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_dtype_ctypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_dtype_ctypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_dtype_ctypes->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_array(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_dtype_ctypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_dtype_ctypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_array);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_dtype_ctypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_array);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_array, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_array);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_array, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_array);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_array);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_array);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_scalar(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_dtype_ctypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_dtype_ctypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_scalar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_dtype_ctypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_scalar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_scalar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_scalar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_scalar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_scalar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_scalar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_scalar);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_structure(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_dtype_ctypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_dtype_ctypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_structure);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_dtype_ctypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_structure);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_structure, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_structure);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_structure, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_structure);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_structure);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_structure);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_dtype_ctypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_dtype_ctypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_dtype_ctypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__from_ctypes_union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__from_ctypes_union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_union);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_dtype_ctypes$dtype_from_ctypes_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_dtype_ctypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_dtype_ctypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype_from_ctypes_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_dtype_ctypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dtype_from_ctypes_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dtype_from_ctypes_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dtype_from_ctypes_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dtype_from_ctypes_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype_from_ctypes_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype_from_ctypes_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype_from_ctypes_type);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_dtype_ctypes$np(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_dtype_ctypes->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_dtype_ctypes->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_dtype_ctypes->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_np);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_np, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_np);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_np, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_np);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_747f52c24df7e091a8f01303f3c8383d;
static PyCodeObject *code_objects_3d308d70aac5fc73caefa41261914d0c;
static PyCodeObject *code_objects_7358b92ec0af9a200b91b978de667e07;
static PyCodeObject *code_objects_cb551e9c61cd835d537f18179e526f7a;
static PyCodeObject *code_objects_c440b8c5fb5c24da217b1a462e25b2c6;
static PyCodeObject *code_objects_86cf0c8c1b3c61c02b70b263186dbecf;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_582bf5cc44cefc60d44ee6621c40a380); CHECK_OBJECT(module_filename_obj);
code_objects_747f52c24df7e091a8f01303f3c8383d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_6244b6fca041f33ef55f1d9facb28840, mod_consts.const_str_digest_6244b6fca041f33ef55f1d9facb28840, NULL, NULL, 0, 0, 0);
code_objects_3d308d70aac5fc73caefa41261914d0c = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__from_ctypes_array, mod_consts.const_str_plain__from_ctypes_array, mod_consts.const_tuple_str_plain_t_tuple, NULL, 1, 0, 0);
code_objects_7358b92ec0af9a200b91b978de667e07 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__from_ctypes_scalar, mod_consts.const_str_plain__from_ctypes_scalar, mod_consts.const_tuple_str_plain_t_tuple, NULL, 1, 0, 0);
code_objects_cb551e9c61cd835d537f18179e526f7a = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__from_ctypes_structure, mod_consts.const_str_plain__from_ctypes_structure, mod_consts.const_tuple_cda2ddb71a933038bb38d8bc5d08707f_tuple, NULL, 1, 0, 0);
code_objects_c440b8c5fb5c24da217b1a462e25b2c6 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__from_ctypes_union, mod_consts.const_str_plain__from_ctypes_union, mod_consts.const_tuple_5ee59c7a8b4c9499210e6e7a75f060b2_tuple, NULL, 1, 0, 0);
code_objects_86cf0c8c1b3c61c02b70b263186dbecf = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_dtype_from_ctypes_type, mod_consts.const_str_plain_dtype_from_ctypes_type, mod_consts.const_tuple_str_plain_t_str_plain__ctypes_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union(PyThreadState *tstate);


static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_t = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array = MAKE_FUNCTION_FRAME(tstate, code_objects_3d308d70aac5fc73caefa41261914d0c, module_numpy$_core$_dtype_ctypes, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array->m_type_description == NULL);
frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array = cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array);
assert(Py_REFCNT(frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_numpy$_core$_dtype_ctypes$np(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_dtype);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_numpy$_core$_dtype_ctypes$dtype_from_ctypes_type(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype_from_ctypes_type);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_expression_value_2 = par_t;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__type_);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array->m_frame.f_lineno = 33;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 33;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_3;
PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_t);
tmp_expression_value_3 = par_t;
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__length_);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array->m_frame.f_lineno = 33;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array,
    type_description_1,
    par_t
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array == cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array);
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_t);
Py_DECREF(par_t);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_t);
Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_t = python_pars[0];
PyObject *var_item = NULL;
PyObject *var_ctypes = NULL;
PyObject *var_formats = NULL;
PyObject *var_offsets = NULL;
PyObject *var_names = NULL;
PyObject *var_current_offset = NULL;
PyObject *var_fname = NULL;
PyObject *var_ftyp = NULL;
PyObject *var_effective_pack = NULL;
PyObject *var_fields = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure = MAKE_FUNCTION_FRAME(tstate, code_objects_cb551e9c61cd835d537f18179e526f7a, module_numpy$_core$_dtype_ctypes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_type_description == NULL);
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure = cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure);
assert(Py_REFCNT(frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_t);
tmp_expression_value_1 = par_t;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fields_);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_1;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_2;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_2 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 37;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_3 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_item;
    var_item = tmp_assign_source_3;
    Py_INCREF(var_item);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
nuitka_digit tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
CHECK_OBJECT(var_item);
tmp_len_arg_1 = var_item;
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = 2;
tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_2565610edbf0b92e14567ea3a96d61f3;
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 39;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 39;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
goto try_except_handler_2;
}
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
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
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_t);
tmp_expression_value_2 = par_t;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain__pack_);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_4 == NULL));
assert(var_ctypes == NULL);
Py_INCREF(tmp_assign_source_4);
var_ctypes = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_formats == NULL);
var_formats = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_offsets == NULL);
var_offsets = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_names == NULL);
var_names = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = const_int_0;
assert(var_current_offset == NULL);
Py_INCREF(tmp_assign_source_8);
var_current_offset = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_t);
tmp_expression_value_3 = par_t;
tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__fields_);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_9;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_10 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 48;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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



exception_lineno = 48;
type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
}
}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_fname;
    var_fname = tmp_assign_source_14;
    Py_INCREF(var_fname);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_ftyp;
    var_ftyp = tmp_assign_source_15;
    Py_INCREF(var_ftyp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 49;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_list_arg_value_1 = var_names;
CHECK_OBJECT(var_fname);
tmp_item_value_1 = var_fname;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (var_formats == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_formats);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 50;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_list_arg_value_2 = var_formats;
tmp_called_value_1 = module_var_accessor_numpy$_core$_dtype_ctypes$dtype_from_ctypes_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype_from_ctypes_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_ftyp);
tmp_args_element_value_1 = var_ftyp;
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 50;
tmp_item_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts.const_str_plain_min);
assert(tmp_called_value_2 != NULL);
if (par_t == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 53;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_4 = par_t;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__pack_);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(var_ftyp);
tmp_args_element_value_4 = var_ftyp;
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 53;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_alignment, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 53;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 53;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_effective_pack;
    var_effective_pack = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_floordiv_expr_left_1;
PyObject *tmp_floordiv_expr_right_1;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
if (var_current_offset == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_current_offset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_add_expr_left_1 = var_current_offset;
CHECK_OBJECT(var_effective_pack);
tmp_add_expr_right_1 = var_effective_pack;
tmp_sub_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
if (tmp_sub_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_floordiv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
CHECK_OBJECT(tmp_sub_expr_left_1);
Py_DECREF(tmp_sub_expr_left_1);
if (tmp_floordiv_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_effective_pack);
tmp_floordiv_expr_right_1 = var_effective_pack;
tmp_mult_expr_left_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
CHECK_OBJECT(tmp_floordiv_expr_left_1);
Py_DECREF(tmp_floordiv_expr_left_1);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_effective_pack);
tmp_mult_expr_right_1 = var_effective_pack;
tmp_assign_source_17 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_current_offset;
    var_current_offset = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
if (var_offsets == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 57;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}

tmp_list_arg_value_3 = var_offsets;
CHECK_OBJECT(var_current_offset);
tmp_item_value_3 = var_current_offset;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iadd_expr_left_1;
PyObject *tmp_iadd_expr_right_1;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
CHECK_OBJECT(var_current_offset);
tmp_iadd_expr_left_1 = var_current_offset;
tmp_called_instance_2 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_2 == NULL));
CHECK_OBJECT(var_ftyp);
tmp_args_element_value_5 = var_ftyp;
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 58;
tmp_iadd_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_sizeof, tmp_args_element_value_5);
if (tmp_iadd_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
CHECK_OBJECT(tmp_iadd_expr_right_1);
Py_DECREF(tmp_iadd_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_18 = tmp_iadd_expr_left_1;
var_current_offset = tmp_assign_source_18;

}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_5 = module_var_accessor_numpy$_core$_dtype_ctypes$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_formats;
if (var_formats == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_formats);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 61;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = var_formats;
tmp_args_element_value_6 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_7;
tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_offsets;
if (var_offsets == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 62;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_offsets;
tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_names;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 63;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_names;
tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_itemsize;
tmp_expression_value_6 = IMPORT_HARD_CTYPES();
assert(!(tmp_expression_value_6 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_sizeof);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}
if (par_t == NULL) {
Py_DECREF(tmp_called_value_4);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}

tmp_args_element_value_7 = par_t;
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 64;
tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_6, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_element_value_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 60;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_fields == NULL);
var_fields = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_t);
tmp_expression_value_7 = par_t;
tmp_iter_arg_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__fields_);
if (tmp_iter_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_20;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 67;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_5 = tmp_for_loop_3__iter_value;
tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_6;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_25 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_fname;
    var_fname = tmp_assign_source_25;
    Py_INCREF(var_fname);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_26 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_ftyp;
    var_ftyp = tmp_assign_source_26;
    Py_INCREF(var_ftyp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_list_arg_value_4;
PyObject *tmp_item_value_4;
PyObject *tmp_tuple_element_1;
if (var_fields == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 68;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}

tmp_list_arg_value_4 = var_fields;
CHECK_OBJECT(var_fname);
tmp_tuple_element_1 = var_fname;
tmp_item_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_8;
PyTuple_SET_ITEM0(tmp_item_value_4, 0, tmp_tuple_element_1);
tmp_called_value_5 = module_var_accessor_numpy$_core$_dtype_ctypes$dtype_from_ctypes_type(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype_from_ctypes_type);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(var_ftyp);
tmp_args_element_value_8 = var_ftyp;
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 68;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_4, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_4);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_4, tmp_item_value_4);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;
type_description_1 = "ooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_7;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_8 = module_var_accessor_numpy$_core$_dtype_ctypes$np(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_dtype);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (var_fields == NULL) {
Py_DECREF(tmp_called_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_fields);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_2 = var_fields;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_223450cdd74e015a15ceca018a912048);
frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame.f_lineno = 71;
tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure,
    type_description_1,
    par_t,
    var_item,
    var_ctypes,
    var_formats,
    var_offsets,
    var_names,
    var_current_offset,
    var_fname,
    var_ftyp,
    var_effective_pack,
    var_fields
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure == cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure);
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_item);
var_item = NULL;
Py_XDECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_formats);
var_formats = NULL;
Py_XDECREF(var_offsets);
var_offsets = NULL;
Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_current_offset);
var_current_offset = NULL;
Py_XDECREF(var_fname);
var_fname = NULL;
Py_XDECREF(var_ftyp);
var_ftyp = NULL;
Py_XDECREF(var_effective_pack);
var_effective_pack = NULL;
Py_XDECREF(var_fields);
var_fields = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_item);
var_item = NULL;
Py_XDECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_formats);
var_formats = NULL;
Py_XDECREF(var_offsets);
var_offsets = NULL;
Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_current_offset);
var_current_offset = NULL;
Py_XDECREF(var_fname);
var_fname = NULL;
Py_XDECREF(var_ftyp);
var_ftyp = NULL;
Py_XDECREF(var_effective_pack);
var_effective_pack = NULL;
Py_XDECREF(var_fields);
var_fields = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_t);
Py_DECREF(par_t);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_t);
Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_t = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar = MAKE_FUNCTION_FRAME(tstate, code_objects_7358b92ec0af9a200b91b978de667e07, module_numpy$_core$_dtype_ctypes, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar->m_type_description == NULL);
frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar = cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar);
assert(Py_REFCNT(frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_t);
tmp_expression_value_1 = par_t;
tmp_name_value_1 = mod_consts.const_str_plain___ctype_be__;
tmp_default_value_1 = Py_None;
tmp_cmp_expr_left_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_cmp_expr_right_1 = par_t;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_expression_value_3;
tmp_expression_value_2 = module_var_accessor_numpy$_core$_dtype_ctypes$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = mod_consts.const_str_chr_62;
CHECK_OBJECT(par_t);
tmp_expression_value_3 = par_t;
tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__type_);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 79;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 79;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar->m_frame.f_lineno = 79;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
CHECK_OBJECT(par_t);
tmp_expression_value_4 = par_t;
tmp_name_value_2 = mod_consts.const_str_plain___ctype_le__;
tmp_default_value_2 = Py_None;
tmp_cmp_expr_left_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_2, tmp_default_value_2);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_cmp_expr_right_2 = par_t;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_2;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_expression_value_6;
tmp_expression_value_5 = module_var_accessor_numpy$_core$_dtype_ctypes$np(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_dtype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_2 = mod_consts.const_str_chr_60;
CHECK_OBJECT(par_t);
tmp_expression_value_6 = par_t;
tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__type_);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar->m_frame.f_lineno = 81;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
tmp_expression_value_7 = module_var_accessor_numpy$_core$_dtype_ctypes$np(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_dtype);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_expression_value_8 = par_t;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__type_);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 83;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar->m_frame.f_lineno = 83;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar,
    type_description_1,
    par_t
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar == cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar);
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_t);
Py_DECREF(par_t);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_t);
Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_t = python_pars[0];
PyObject *var_ctypes = NULL;
PyObject *var_formats = NULL;
PyObject *var_offsets = NULL;
PyObject *var_names = NULL;
PyObject *var_fname = NULL;
PyObject *var_ftyp = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_assign_source_1 == NULL));
assert(var_ctypes == NULL);
Py_INCREF(tmp_assign_source_1);
var_ctypes = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_formats == NULL);
var_formats = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_offsets == NULL);
var_offsets = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_names == NULL);
var_names = tmp_assign_source_4;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union = MAKE_FUNCTION_FRAME(tstate, code_objects_c440b8c5fb5c24da217b1a462e25b2c6, module_numpy$_core$_dtype_ctypes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union->m_type_description == NULL);
frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union = cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union);
assert(Py_REFCNT(frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union) == 2);

// Framed code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_t);
tmp_expression_value_1 = par_t;
tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__fields_);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_5;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_6 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooo";
exception_lineno = 91;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_9 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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



exception_lineno = 91;
type_description_1 = "ooooooo";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_fname;
    var_fname = tmp_assign_source_10;
    Py_INCREF(var_fname);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_ftyp;
    var_ftyp = tmp_assign_source_11;
    Py_INCREF(var_ftyp);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 92;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_names;
CHECK_OBJECT(var_fname);
tmp_item_value_1 = var_fname;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_2;
PyObject *tmp_item_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
if (var_formats == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_formats);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_2 = var_formats;
tmp_called_value_1 = module_var_accessor_numpy$_core$_dtype_ctypes$dtype_from_ctypes_type(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype_from_ctypes_type);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_ftyp);
tmp_args_element_value_1 = var_ftyp;
frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union->m_frame.f_lineno = 93;
tmp_item_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_item_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
assert(!(tmp_result == false));
}
{
PyObject *tmp_list_arg_value_3;
PyObject *tmp_item_value_3;
if (var_offsets == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_3 = var_offsets;
tmp_item_value_3 = const_int_0;
tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_1 = "ooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_expression_value_2 = module_var_accessor_numpy$_core$_dtype_ctypes$np(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_np);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_dtype);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_formats;
if (var_formats == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_formats);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 97;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}

tmp_dict_value_1 = var_formats;
tmp_args_element_value_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_3;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_offsets;
if (var_offsets == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_offsets);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 98;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_offsets;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_names;
if (var_names == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_names);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}

tmp_dict_value_1 = var_names;
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_itemsize;
tmp_called_instance_1 = IMPORT_HARD_CTYPES();
assert(!(tmp_called_instance_1 == NULL));
CHECK_OBJECT(par_t);
tmp_args_element_value_3 = par_t;
frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union->m_frame.f_lineno = 100;
tmp_dict_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_sizeof, tmp_args_element_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union->m_frame.f_lineno = 96;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union,
    type_description_1,
    par_t,
    var_ctypes,
    var_formats,
    var_offsets,
    var_names,
    var_fname,
    var_ftyp
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union == cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union);
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_ctypes);
CHECK_OBJECT(var_ctypes);
Py_DECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_formats);
var_formats = NULL;
Py_XDECREF(var_offsets);
var_offsets = NULL;
Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_fname);
var_fname = NULL;
Py_XDECREF(var_ftyp);
var_ftyp = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_ctypes);
CHECK_OBJECT(var_ctypes);
Py_DECREF(var_ctypes);
var_ctypes = NULL;
Py_XDECREF(var_formats);
var_formats = NULL;
Py_XDECREF(var_offsets);
var_offsets = NULL;
Py_XDECREF(var_names);
var_names = NULL;
Py_XDECREF(var_fname);
var_fname = NULL;
Py_XDECREF(var_ftyp);
var_ftyp = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_t);
Py_DECREF(par_t);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_t);
Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_t = python_pars[0];
PyObject *var__ctypes = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type = MAKE_FUNCTION_FRAME(tstate, code_objects_86cf0c8c1b3c61c02b70b263186dbecf, module_numpy$_core$_dtype_ctypes, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_type_description == NULL);
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type = cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type);
assert(Py_REFCNT(frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain__ctypes;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$_dtype_ctypes;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame.f_lineno = 107;
tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var__ctypes == NULL);
var__ctypes = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_t);
tmp_issubclass_cls_1 = par_t;
CHECK_OBJECT(var__ctypes);
tmp_expression_value_1 = var__ctypes;
tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_Array);
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
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
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_array(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__from_ctypes_array);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_args_element_value_1 = par_t;
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame.f_lineno = 109;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_issubclass_cls_2;
PyObject *tmp_issubclass_classes_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_t);
tmp_issubclass_cls_2 = par_t;
CHECK_OBJECT(var__ctypes);
tmp_expression_value_2 = var__ctypes;
tmp_issubclass_classes_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__Pointer);
if (tmp_issubclass_classes_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_2, tmp_issubclass_classes_2);
CHECK_OBJECT(tmp_issubclass_classes_2);
Py_DECREF(tmp_issubclass_classes_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_24930239432157d13755a01118ec2c22;
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame.f_lineno = 111;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 111;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_issubclass_cls_3;
PyObject *tmp_issubclass_classes_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_t);
tmp_issubclass_cls_3 = par_t;
CHECK_OBJECT(var__ctypes);
tmp_expression_value_3 = var__ctypes;
tmp_issubclass_classes_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Structure);
if (tmp_issubclass_classes_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_3, tmp_issubclass_classes_3);
CHECK_OBJECT(tmp_issubclass_classes_3);
Py_DECREF(tmp_issubclass_classes_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_structure(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__from_ctypes_structure);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_args_element_value_2 = par_t;
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame.f_lineno = 113;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_issubclass_cls_4;
PyObject *tmp_issubclass_classes_4;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_t);
tmp_issubclass_cls_4 = par_t;
CHECK_OBJECT(var__ctypes);
tmp_expression_value_4 = var__ctypes;
tmp_issubclass_classes_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Union);
if (tmp_issubclass_classes_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_4, tmp_issubclass_classes_4);
CHECK_OBJECT(tmp_issubclass_classes_4);
Py_DECREF(tmp_issubclass_classes_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_union(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__from_ctypes_union);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_args_element_value_3 = par_t;
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame.f_lineno = 115;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_t);
tmp_expression_value_5 = par_t;
tmp_name_value_2 = mod_consts.const_str_plain__type_;
tmp_default_value_1 = Py_None;
tmp_isinstance_inst_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_numpy$_core$_dtype_ctypes$_from_ctypes_scalar(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__from_ctypes_scalar);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_t);
tmp_args_element_value_4 = par_t;
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame.f_lineno = 117;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_c7047b019bca498665cb9369ab68afc1;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_t);
tmp_expression_value_6 = par_t;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oo";
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
tmp_make_exception_arg_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_2 == NULL));
frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame.f_lineno = 119;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 119;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oo";
goto frame_exception_exit_1;
}
branch_end_5:;
branch_end_4:;
branch_end_3:;
branch_end_2:;
branch_end_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type,
    type_description_1,
    par_t,
    var__ctypes
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type == cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type);
    cache_frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var__ctypes);
CHECK_OBJECT(var__ctypes);
Py_DECREF(var__ctypes);
var__ctypes = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var__ctypes);
var__ctypes = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_t);
Py_DECREF(par_t);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_t);
Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array,
        mod_consts.const_str_plain__from_ctypes_array,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_3d308d70aac5fc73caefa41261914d0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_dtype_ctypes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure,
        mod_consts.const_str_plain__from_ctypes_structure,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cb551e9c61cd835d537f18179e526f7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_dtype_ctypes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar,
        mod_consts.const_str_plain__from_ctypes_scalar,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7358b92ec0af9a200b91b978de667e07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_dtype_ctypes,
        mod_consts.const_str_digest_44d7e14e2169ff4d3fc329b602595ffd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union,
        mod_consts.const_str_plain__from_ctypes_union,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c440b8c5fb5c24da217b1a462e25b2c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_dtype_ctypes,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type,
        mod_consts.const_str_plain_dtype_from_ctypes_type,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_86cf0c8c1b3c61c02b70b263186dbecf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_dtype_ctypes,
        mod_consts.const_str_digest_eeee367c5a6bd72ad279c101dc893102,
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

static function_impl_code const function_table_numpy$_core$_dtype_ctypes[] = {
impl_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array,
impl_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure,
impl_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar,
impl_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union,
impl_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_core$_dtype_ctypes);
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
        module_numpy$_core$_dtype_ctypes,
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
        function_table_numpy$_core$_dtype_ctypes,
        sizeof(function_table_numpy$_core$_dtype_ctypes) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._core._dtype_ctypes";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_core$_dtype_ctypes(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_core$_dtype_ctypes");

    // Store the module for future use.
    module_numpy$_core$_dtype_ctypes = module;

    moduledict_numpy$_core$_dtype_ctypes = MODULE_DICT(module_numpy$_core$_dtype_ctypes);

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
        PRINT_STRING("numpy$_core$_dtype_ctypes: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core$_dtype_ctypes: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_core$_dtype_ctypes: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._dtype_ctypes" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_core$_dtype_ctypes\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_core$_dtype_ctypes,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_dtype_ctypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_dtype_ctypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_dtype_ctypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_dtype_ctypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_core$_dtype_ctypes);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_core$_dtype_ctypes);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_numpy$_core$_dtype_ctypes;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_467da5a204bcf8b0c103cbe318db17fc;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_core$_dtype_ctypes = MAKE_MODULE_FRAME(code_objects_747f52c24df7e091a8f01303f3c8383d, module_numpy$_core$_dtype_ctypes);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_dtype_ctypes);
assert(Py_REFCNT(frame_frame_numpy$_core$_dtype_ctypes) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_core$_dtype_ctypes$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_core$_dtype_ctypes$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_numpy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$_dtype_ctypes;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core$_dtype_ctypes->m_frame.f_lineno = 29;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_np, tmp_assign_source_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_dtype_ctypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_dtype_ctypes->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_dtype_ctypes, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_core$_dtype_ctypes);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_5;

tmp_assign_source_5 = MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__1__from_ctypes_array(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_array, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;

tmp_assign_source_6 = MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__2__from_ctypes_structure(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_structure, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;

tmp_assign_source_7 = MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__3__from_ctypes_scalar(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_scalar, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;

tmp_assign_source_8 = MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__4__from_ctypes_union(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain__from_ctypes_union, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;

tmp_assign_source_9 = MAKE_FUNCTION_numpy$_core$_dtype_ctypes$$$function__5_dtype_from_ctypes_type(tstate);

UPDATE_STRING_DICT1(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype_from_ctypes_type, tmp_assign_source_9);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_core$_dtype_ctypes", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._dtype_ctypes" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_core$_dtype_ctypes);
    return module_numpy$_core$_dtype_ctypes;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_dtype_ctypes, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_core$_dtype_ctypes", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

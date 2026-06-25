/* Generated code for Python module 'numpy$_core$_type_aliases'
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



/* The "module_numpy$_core$_type_aliases" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$_core$_type_aliases;
PyDictObject *moduledict_numpy$_core$_type_aliases;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_dtype;
PyObject *const_str_plain_itemsize;
PyObject *const_str_digest_e686ff1c1a36af905dd6e66b02cf4795;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_digest_0d07450478bddf097fde7f172c696a5c;
PyObject *const_str_plain__core;
PyObject *const_str_plain_multiarray;
PyObject *const_str_plain_ma;
PyObject *const_tuple_str_plain_dtype_str_plain_typeinfo_tuple;
PyObject *const_str_plain_typeinfo;
PyObject *const_str_plain_sctypeDict;
PyObject *const_str_plain_allTypes;
PyObject *const_str_plain_c_names_dict;
PyObject *const_set_b28797952e8e0e9c514e98d3ff66f00e;
PyObject *const_str_plain__abstract_type_names;
PyObject *const_str_plain__abstract_type_name;
PyObject *const_str_plain_items;
PyObject *const_str_plain_k;
PyObject *const_str_plain_v;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_plain_NPY__tuple;
PyObject *const_slice_int_pos_4_none_none;
PyObject *const_str_plain_concrete_type;
PyObject *const_dict_6d4326383eb50438d82ac061312ff50a;
PyObject *const_str_plain__aliases;
PyObject *const_dict_486e06a177d6129d19f355c46499eb70;
PyObject *const_str_plain__extra_aliases;
PyObject *const_tuple_e28245ef412bf171438523449592a24d_tuple;
PyObject *const_str_plain_is_complex;
PyObject *const_str_plain_full_name;
PyObject *const_str_plain_longdouble_type;
PyObject *const_int_pos_8;
PyObject *const_str_plain_bits;
PyObject *const_str_plain_complex;
PyObject *const_str_plain_float;
PyObject *const_str_plain_base_name;
PyObject *const_str_plain_extended_prec_name;
PyObject *const_dict_9f439f3f3aa8901c7f8c4a683424e8ef;
PyObject *const_str_plain_sctypes;
PyObject *const_str_plain_values;
PyObject *const_str_plain_type_info;
PyObject *const_str_plain_kind;
PyObject *const_tuple_str_plain_M_str_plain_m_tuple;
PyObject *const_str_plain_signedinteger;
PyObject *const_str_plain_uint;
PyObject *const_str_plain_unsignedinteger;
PyObject *const_str_plain_floating;
PyObject *const_str_plain_complexfloating;
PyObject *const_str_plain_others;
PyObject *const_str_plain_generic;
PyObject *const_str_plain_type_group;
PyObject *const_str_plain_abstract_type;
PyObject *const_str_plain_add;
PyObject *const_str_plain_sctype_key;
PyObject *const_str_plain_sctype_list;
PyObject *const_str_plain_sort;
PyObject *const_str_angle_lambda;
PyObject *const_tuple_str_plain_key_tuple;
PyObject *const_str_digest_2f598c09f94f2967f67f427b77f9740b;
PyObject *const_tuple_str_plain_x_tuple;
PyObject *const_str_digest_9c98a8cf81da52d1b0f094ea3884eee8;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[62];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("numpy._core._type_aliases"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_dtype);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_e686ff1c1a36af905dd6e66b02cf4795);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__core);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_multiarray);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_ma);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_typeinfo_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_typeinfo);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_sctypeDict);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_allTypes);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_c_names_dict);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_set_b28797952e8e0e9c514e98d3ff66f00e);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__abstract_type_names);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__abstract_type_name);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_k);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_v);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NPY__tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_slice_int_pos_4_none_none);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_concrete_type);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_dict_6d4326383eb50438d82ac061312ff50a);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__aliases);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_dict_486e06a177d6129d19f355c46499eb70);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__extra_aliases);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_e28245ef412bf171438523449592a24d_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_complex);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_full_name);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_longdouble_type);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_int_pos_8);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_bits);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_complex);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_float);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_name);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_extended_prec_name);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_dict_9f439f3f3aa8901c7f8c4a683424e8ef);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_sctypes);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_values);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_info);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_kind);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_M_str_plain_m_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_signedinteger);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_uint);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_unsignedinteger);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_floating);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_others);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_generic);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_type_group);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_abstract_type);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_sctype_key);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_sctype_list);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_sort);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_angle_lambda);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f598c09f94f2967f67f427b77f9740b);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c98a8cf81da52d1b0f094ea3884eee8);
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
void checkModuleConstants_numpy$_core$_type_aliases(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_dtype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dtype);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_itemsize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_itemsize);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_e686ff1c1a36af905dd6e66b02cf4795));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e686ff1c1a36af905dd6e66b02cf4795);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__core);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_multiarray));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_multiarray);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_ma));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ma);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_dtype_str_plain_typeinfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_dtype_str_plain_typeinfo_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_typeinfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typeinfo);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_sctypeDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sctypeDict);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_allTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allTypes);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_c_names_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_c_names_dict);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_set_b28797952e8e0e9c514e98d3ff66f00e));
CHECK_OBJECT_DEEP(mod_consts.const_set_b28797952e8e0e9c514e98d3ff66f00e);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__abstract_type_names));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__abstract_type_names);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__abstract_type_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__abstract_type_name);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_k));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_k);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_v));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NPY__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NPY__tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_slice_int_pos_4_none_none));
CHECK_OBJECT_DEEP(mod_consts.const_slice_int_pos_4_none_none);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_concrete_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_concrete_type);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_dict_6d4326383eb50438d82ac061312ff50a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6d4326383eb50438d82ac061312ff50a);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__aliases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__aliases);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_dict_486e06a177d6129d19f355c46499eb70));
CHECK_OBJECT_DEEP(mod_consts.const_dict_486e06a177d6129d19f355c46499eb70);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__extra_aliases));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extra_aliases);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_e28245ef412bf171438523449592a24d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e28245ef412bf171438523449592a24d_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_complex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_complex);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_full_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_full_name);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_longdouble_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_longdouble_type);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_int_pos_8));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_8);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_bits));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bits);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_complex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complex);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_float));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_float);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_name);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_extended_prec_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extended_prec_name);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_dict_9f439f3f3aa8901c7f8c4a683424e8ef));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9f439f3f3aa8901c7f8c4a683424e8ef);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_sctypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sctypes);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_values);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_info);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_kind));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_kind);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_M_str_plain_m_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_M_str_plain_m_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_signedinteger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_signedinteger);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_uint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uint);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_unsignedinteger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unsignedinteger);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_floating));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_floating);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_complexfloating));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complexfloating);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_others));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_others);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generic);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_type_group));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_type_group);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_abstract_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_abstract_type);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_sctype_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sctype_key);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_sctype_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sctype_list);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_sort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sort);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_angle_lambda));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_lambda);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_key_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f598c09f94f2967f67f427b77f9740b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f598c09f94f2967f67f427b77f9740b);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_x_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_x_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c98a8cf81da52d1b0f094ea3884eee8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c98a8cf81da52d1b0f094ea3884eee8);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 26
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
static PyObject *module_var_accessor_numpy$_core$_type_aliases$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$_abstract_type_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__abstract_type_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__abstract_type_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__abstract_type_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__abstract_type_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_name);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$_abstract_type_names(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_names);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__abstract_type_names);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__abstract_type_names, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__abstract_type_names);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__abstract_type_names, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_names);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_names);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_names);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$_aliases(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__aliases);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__aliases);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__aliases, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__aliases);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__aliases, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__aliases);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__aliases);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__aliases);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$_extra_aliases(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_aliases);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extra_aliases);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extra_aliases, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extra_aliases);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extra_aliases, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_aliases);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_aliases);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_aliases);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$abstract_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_abstract_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstract_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstract_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_abstract_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_abstract_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_abstract_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_abstract_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_abstract_type);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$allTypes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_allTypes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_allTypes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_allTypes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_allTypes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_allTypes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_allTypes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_allTypes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_allTypes);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$base_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_base_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_base_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_base_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base_name);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$bits(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_bits);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bits);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bits, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_bits);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_bits, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_bits);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_bits);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_bits);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$c_names_dict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_c_names_dict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_names_dict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_names_dict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_c_names_dict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_c_names_dict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_c_names_dict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_c_names_dict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_c_names_dict);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$concrete_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_concrete_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_concrete_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_concrete_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_concrete_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_concrete_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_concrete_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_concrete_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_concrete_type);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$dtype(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dtype);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dtype, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dtype);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dtype, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$extended_prec_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_extended_prec_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extended_prec_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extended_prec_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_extended_prec_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_extended_prec_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_extended_prec_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_extended_prec_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_extended_prec_name);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$full_name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_full_name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_full_name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_full_name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_full_name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_full_name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_full_name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_full_name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_full_name);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$is_complex(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_is_complex);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_complex);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_complex, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_complex);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_complex, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_is_complex);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_is_complex);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_complex);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$k(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_k);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_k, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_k);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_k, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_k);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$longdouble_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_longdouble_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_longdouble_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_longdouble_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_longdouble_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_longdouble_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_longdouble_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_longdouble_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_longdouble_type);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$ma(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ma);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ma, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ma);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ma, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ma);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$sctypeDict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypeDict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctypeDict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctypeDict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctypeDict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctypeDict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypeDict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypeDict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypeDict);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$sctype_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctype_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctype_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctype_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctype_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_key);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$sctype_list(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_list);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctype_list);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctype_list, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctype_list);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctype_list, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_list);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_list);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_list);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$sctypes(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypes);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctypes);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctypes, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_sctypes);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_sctypes, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypes);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypes);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypes);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$type_group(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_group);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_type_group);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_type_group, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_type_group);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_type_group, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_group);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_group);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_type_group);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$type_info(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_info);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_type_info);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_type_info, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_type_info);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_type_info, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_info);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_info);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_type_info);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$typeinfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_typeinfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typeinfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typeinfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typeinfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typeinfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_typeinfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_typeinfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_typeinfo);
    }

    return result;
}

static PyObject *module_var_accessor_numpy$_core$_type_aliases$v(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_numpy$_core$_type_aliases->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_numpy$_core$_type_aliases->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_v);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_numpy$_core$_type_aliases->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_v);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_v, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_v);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_v, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_v);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_v);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_v);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5929bfc3438a5b20f0722c5d58a5dbf0;
static PyCodeObject *code_objects_52b8e7c1567beb4d69e3290de66be5a9;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2f598c09f94f2967f67f427b77f9740b); CHECK_OBJECT(module_filename_obj);
code_objects_5929bfc3438a5b20f0722c5d58a5dbf0 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_lambda, mod_consts.const_str_angle_lambda, mod_consts.const_tuple_str_plain_x_tuple, NULL, 1, 0, 0);
code_objects_52b8e7c1567beb4d69e3290de66be5a9 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_9c98a8cf81da52d1b0f094ea3884eee8, mod_consts.const_str_digest_9c98a8cf81da52d1b0f094ea3884eee8, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$_core$_type_aliases$$$function__1_lambda(PyThreadState *tstate);


// The module function definitions.
static PyObject *impl_numpy$_core$_type_aliases$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_x = python_pars[0];
struct Nuitka_FrameObject *frame_frame_numpy$_core$_type_aliases$$$function__1_lambda;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda)) {
    Py_XDECREF(cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda = MAKE_FUNCTION_FRAME(tstate, code_objects_5929bfc3438a5b20f0722c5d58a5dbf0, module_numpy$_core$_type_aliases, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda->m_type_description == NULL);
frame_frame_numpy$_core$_type_aliases$$$function__1_lambda = cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_type_aliases$$$function__1_lambda);
assert(Py_REFCNT(frame_frame_numpy$_core$_type_aliases$$$function__1_lambda) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_numpy$_core$_type_aliases$dtype(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_x);
tmp_args_element_value_1 = par_x;
frame_frame_numpy$_core$_type_aliases$$$function__1_lambda->m_frame.f_lineno = 128;
tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_itemsize);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_type_aliases$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_type_aliases$$$function__1_lambda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_type_aliases$$$function__1_lambda, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_numpy$_core$_type_aliases$$$function__1_lambda,
    type_description_1,
    par_x
);


// Release cached frame if used for exception.
if (frame_frame_numpy$_core$_type_aliases$$$function__1_lambda == cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda);
    cache_frame_frame_numpy$_core$_type_aliases$$$function__1_lambda = NULL;
}

assertFrameObject(frame_frame_numpy$_core$_type_aliases$$$function__1_lambda);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_x);
Py_DECREF(par_x);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_x);
Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_numpy$_core$_type_aliases$$$function__1_lambda(PyThreadState *tstate) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_numpy$_core$_type_aliases$$$function__1_lambda,
        mod_consts.const_str_angle_lambda,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5929bfc3438a5b20f0722c5d58a5dbf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_numpy$_core$_type_aliases,
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

static function_impl_code const function_table_numpy$_core$_type_aliases[] = {
impl_numpy$_core$_type_aliases$$$function__1_lambda,
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

    return Nuitka_Function_GetFunctionState(function, function_table_numpy$_core$_type_aliases);
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
        module_numpy$_core$_type_aliases,
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
        function_table_numpy$_core$_type_aliases,
        sizeof(function_table_numpy$_core$_type_aliases) / sizeof(function_impl_code)
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
static char const *module_full_name = "numpy._core._type_aliases";
#endif

// Internal entry point for module code.
PyObject *module_code_numpy$_core$_type_aliases(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("numpy$_core$_type_aliases");

    // Store the module for future use.
    module_numpy$_core$_type_aliases = module;

    moduledict_numpy$_core$_type_aliases = MODULE_DICT(module_numpy$_core$_type_aliases);

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
        PRINT_STRING("numpy$_core$_type_aliases: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("numpy$_core$_type_aliases: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("numpy$_core$_type_aliases: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._type_aliases" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initnumpy$_core$_type_aliases\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_numpy$_core$_type_aliases,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_type_aliases,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_numpy$_core$_type_aliases,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_type_aliases,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_numpy$_core$_type_aliases,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_numpy$_core$_type_aliases);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_numpy$_core$_type_aliases);
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

        UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_for_loop_5__for_iterator = NULL;
PyObject *tmp_for_loop_5__iter_value = NULL;
PyObject *tmp_for_loop_6__for_iterator = NULL;
PyObject *tmp_for_loop_6__iter_value = NULL;
PyObject *tmp_for_loop_7__for_iterator = NULL;
PyObject *tmp_for_loop_7__iter_value = NULL;
PyObject *tmp_for_loop_8__for_iterator = NULL;
PyObject *tmp_for_loop_8__iter_value = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
PyObject *tmp_tuple_unpack_4__element_1 = NULL;
PyObject *tmp_tuple_unpack_4__element_2 = NULL;
PyObject *tmp_tuple_unpack_4__source_iter = NULL;
PyObject *tmp_tuple_unpack_5__element_1 = NULL;
PyObject *tmp_tuple_unpack_5__element_2 = NULL;
PyObject *tmp_tuple_unpack_5__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_numpy$_core$_type_aliases;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_e686ff1c1a36af905dd6e66b02cf4795;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_numpy$_core$_type_aliases = MAKE_MODULE_FRAME(code_objects_52b8e7c1567beb4d69e3290de66be5a9, module_numpy$_core$_type_aliases);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_numpy$_core$_type_aliases);
assert(Py_REFCNT(frame_frame_numpy$_core$_type_aliases) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_numpy$_core$_type_aliases$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_numpy$_core$_type_aliases$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_import_name_from_1;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c;
tmp_globals_arg_value_1 = (PyObject *)moduledict_numpy$_core$_type_aliases;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 20;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_import_name_from_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_numpy$_core$_type_aliases,
        mod_consts.const_str_plain__core,
        const_int_0
    );
} else {
    tmp_import_name_from_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__core);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_numpy$_core$_type_aliases,
        mod_consts.const_str_plain_multiarray,
        const_int_0
    );
} else {
    tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_multiarray);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_ma, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_0d07450478bddf097fde7f172c696a5c;
tmp_globals_arg_value_2 = (PyObject *)moduledict_numpy$_core$_type_aliases;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_dtype_str_plain_typeinfo_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 21;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_5;
}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_numpy$_core$_type_aliases,
        mod_consts.const_str_plain_dtype,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_dtype);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_dtype, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_numpy$_core$_type_aliases,
        mod_consts.const_str_plain_typeinfo,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_typeinfo);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_typeinfo, tmp_assign_source_7);
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
tmp_assign_source_8 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypeDict, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_allTypes, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_c_names_dict, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = PySet_New(mod_consts.const_set_b28797952e8e0e9c514e98d3ff66f00e);
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_names, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_numpy$_core$_type_aliases$_abstract_type_names(tstate);
assert(!(tmp_iter_arg_1 == NULL));
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_12;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_13 = ITERATOR_NEXT_ITERATOR(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 37;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_14 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__abstract_type_name, tmp_assign_source_14);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_3;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_expression_value_1 = module_var_accessor_numpy$_core$_type_aliases$ma(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_name_value_3 = module_var_accessor_numpy$_core$_type_aliases$_abstract_type_name(tstate);
assert(!(tmp_name_value_3 == NULL));
tmp_ass_subvalue_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_3, NULL);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_ass_subscribed_1 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 38;

    goto try_except_handler_2;
}
tmp_ass_subscript_1 = module_var_accessor_numpy$_core$_type_aliases$_abstract_type_name(tstate);
assert(!(tmp_ass_subscript_1 == NULL));
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto try_except_handler_2;
}
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain__abstract_type_name);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__abstract_type_name);

exception_lineno = 39;

    goto try_except_handler_2;
}

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_numpy$_core$_type_aliases$typeinfo(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typeinfo);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 41;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_15;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_16 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 41;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;
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



exception_lineno = 41;

    goto try_except_handler_5;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_3;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_1__element_1;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_k, tmp_assign_source_20);
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_1__element_2;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_v, tmp_assign_source_21);
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_expression_value_3 = module_var_accessor_numpy$_core$_type_aliases$k(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 42;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_NPY__tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_1 = module_var_accessor_numpy$_core$_type_aliases$v(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_cmp_expr_right_1 = module_var_accessor_numpy$_core$_type_aliases$c_names_dict(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_names_dict);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_3;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
tmp_ass_subvalue_2 = module_var_accessor_numpy$_core$_type_aliases$v(tstate);
if (unlikely(tmp_ass_subvalue_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
}

if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto try_except_handler_3;
}
tmp_ass_subscribed_2 = module_var_accessor_numpy$_core$_type_aliases$c_names_dict(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_c_names_dict);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto try_except_handler_3;
}
tmp_expression_value_4 = module_var_accessor_numpy$_core$_type_aliases$k(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto try_except_handler_3;
}
tmp_subscript_value_1 = mod_consts.const_slice_int_pos_4_none_none;
tmp_ass_subscript_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_ass_subscript_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscript_2);
Py_DECREF(tmp_ass_subscript_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto try_except_handler_3;
}
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_expression_value_5;
tmp_expression_value_5 = module_var_accessor_numpy$_core$_type_aliases$v(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_3;
}
tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_type);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_concrete_type, tmp_assign_source_22);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = module_var_accessor_numpy$_core$_type_aliases$concrete_type(tstate);
assert(!(tmp_ass_subvalue_3 == NULL));
tmp_ass_subscribed_3 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto try_except_handler_3;
}
tmp_ass_subscript_3 = module_var_accessor_numpy$_core$_type_aliases$k(tstate);
if (unlikely(tmp_ass_subscript_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_ass_subscript_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;

    goto try_except_handler_3;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto try_except_handler_3;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = module_var_accessor_numpy$_core$_type_aliases$concrete_type(tstate);
if (unlikely(tmp_ass_subvalue_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concrete_type);
}

if (tmp_ass_subvalue_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_ass_subscribed_4 = module_var_accessor_numpy$_core$_type_aliases$sctypeDict(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypeDict);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_ass_subscript_4 = module_var_accessor_numpy$_core$_type_aliases$k(tstate);
if (unlikely(tmp_ass_subscript_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_ass_subscript_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto try_except_handler_3;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto try_except_handler_3;
}
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_concrete_type);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concrete_type);

exception_lineno = 48;

    goto try_except_handler_3;
}

branch_end_1:;
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_k);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);

exception_lineno = 49;

    goto try_except_handler_3;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_v);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);

exception_lineno = 49;

    goto try_except_handler_3;
}

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto try_except_handler_3;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = DICT_COPY(tstate, mod_consts.const_dict_6d4326383eb50438d82ac061312ff50a);
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__aliases, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_iter_arg_4;
PyObject *tmp_dict_arg_1;
tmp_dict_arg_1 = module_var_accessor_numpy$_core$_type_aliases$_aliases(tstate);
assert(!(tmp_dict_arg_1 == NULL));
tmp_iter_arg_4 = DICT_ITERITEMS(tstate, tmp_dict_arg_1);
assert(!(tmp_iter_arg_4 == NULL));
tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
CHECK_OBJECT(tmp_iter_arg_4);
Py_DECREF(tmp_iter_arg_4);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_3__for_iterator == NULL);
tmp_for_loop_3__for_iterator = tmp_assign_source_24;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_25 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 63;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_25;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_iter_arg_5 = tmp_for_loop_3__iter_value;
tmp_assign_source_26 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_26;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_27 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_27;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_28 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_28;
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



exception_lineno = 63;

    goto try_except_handler_8;
}
}
goto try_end_6;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
try_end_6:;
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_6;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_29 = tmp_tuple_unpack_2__element_1;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_k, tmp_assign_source_29);
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_30;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_30 = tmp_tuple_unpack_2__element_2;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_v, tmp_assign_source_30);
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_expression_value_6 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto try_except_handler_6;
}
tmp_subscript_value_2 = module_var_accessor_numpy$_core$_type_aliases$v(tstate);
if (unlikely(tmp_subscript_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
}

if (tmp_subscript_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto try_except_handler_6;
}
tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
if (tmp_ass_subvalue_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_6;
}
tmp_ass_subscribed_5 = module_var_accessor_numpy$_core$_type_aliases$sctypeDict(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypeDict);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 64;

    goto try_except_handler_6;
}
tmp_ass_subscript_5 = module_var_accessor_numpy$_core$_type_aliases$k(tstate);
if (unlikely(tmp_ass_subscript_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_ass_subscript_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_5);

exception_lineno = 64;

    goto try_except_handler_6;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subvalue_5);
Py_DECREF(tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_6;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_3;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_expression_value_7 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_subscript_value_3 = module_var_accessor_numpy$_core$_type_aliases$v(tstate);
if (unlikely(tmp_subscript_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
}

if (tmp_subscript_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_3);
if (tmp_ass_subvalue_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_ass_subscribed_6 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_ass_subscribed_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_ass_subscript_6 = module_var_accessor_numpy$_core$_type_aliases$k(tstate);
if (unlikely(tmp_ass_subscript_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_ass_subscript_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_6);

exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subvalue_6);
Py_DECREF(tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_k);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);

exception_lineno = 66;

    goto try_except_handler_6;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_v);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);

exception_lineno = 66;

    goto try_except_handler_6;
}

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_8;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = DICT_COPY(tstate, mod_consts.const_dict_486e06a177d6129d19f355c46499eb70);
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_aliases, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_iter_arg_6;
PyObject *tmp_dict_arg_2;
tmp_dict_arg_2 = module_var_accessor_numpy$_core$_type_aliases$_extra_aliases(tstate);
assert(!(tmp_dict_arg_2 == NULL));
tmp_iter_arg_6 = DICT_ITERITEMS(tstate, tmp_dict_arg_2);
assert(!(tmp_iter_arg_6 == NULL));
tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_4__for_iterator == NULL);
tmp_for_loop_4__for_iterator = tmp_assign_source_32;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_33;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_33 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 81;
        goto try_except_handler_9;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_33;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_iter_arg_7 = tmp_for_loop_4__iter_value;
tmp_assign_source_34 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_10;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_34;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_35 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_36 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto try_except_handler_11;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_3;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_3, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto try_except_handler_11;
}
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
try_end_9:;
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_9;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_37;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_37 = tmp_tuple_unpack_3__element_1;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_k, tmp_assign_source_37);
}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_38;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_38 = tmp_tuple_unpack_3__element_2;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_v, tmp_assign_source_38);
}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_4;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_expression_value_8 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto try_except_handler_9;
}
tmp_subscript_value_4 = module_var_accessor_numpy$_core$_type_aliases$v(tstate);
if (unlikely(tmp_subscript_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);
}

if (tmp_subscript_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto try_except_handler_9;
}
tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_4);
if (tmp_ass_subvalue_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_9;
}
tmp_ass_subscribed_7 = module_var_accessor_numpy$_core$_type_aliases$sctypeDict(tstate);
if (unlikely(tmp_ass_subscribed_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypeDict);
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 82;

    goto try_except_handler_9;
}
tmp_ass_subscript_7 = module_var_accessor_numpy$_core$_type_aliases$k(tstate);
if (unlikely(tmp_ass_subscript_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);
}

if (tmp_ass_subscript_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_ass_subvalue_7);

exception_lineno = 82;

    goto try_except_handler_9;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
CHECK_OBJECT(tmp_ass_subvalue_7);
Py_DECREF(tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto try_except_handler_9;
}
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_k);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_k);

exception_lineno = 83;

    goto try_except_handler_9;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_v);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_v);

exception_lineno = 83;

    goto try_except_handler_9;
}

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;

    goto try_except_handler_9;
}
goto loop_start_4;
loop_end_4:;
goto try_end_11;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
{
PyObject *tmp_assign_source_39;
PyObject *tmp_iter_arg_8;
tmp_iter_arg_8 = mod_consts.const_tuple_e28245ef412bf171438523449592a24d_tuple;
tmp_assign_source_39 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_8);
assert(!(tmp_assign_source_39 == NULL));
assert(tmp_for_loop_5__for_iterator == NULL);
tmp_for_loop_5__for_iterator = tmp_assign_source_39;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
tmp_next_source_5 = tmp_for_loop_5__for_iterator;
tmp_assign_source_40 = ITERATOR_NEXT_ITERATOR(tmp_next_source_5);
if (tmp_assign_source_40 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 86;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_for_loop_5__iter_value;
    tmp_for_loop_5__iter_value = tmp_assign_source_40;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_iter_arg_9;
CHECK_OBJECT(tmp_for_loop_5__iter_value);
tmp_iter_arg_9 = tmp_for_loop_5__iter_value;
tmp_assign_source_41 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_13;
}
{
    PyObject *old = tmp_tuple_unpack_4__source_iter;
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_41;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_unpack_7;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_42 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_7, 0, 2);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_1;
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_42;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_unpack_8;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
tmp_assign_source_43 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_8, 1, 2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto try_except_handler_14;
}
{
    PyObject *old = tmp_tuple_unpack_4__element_2;
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_43;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_4;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_4, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto try_except_handler_14;
}
}
goto try_end_12;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
try_end_12:;
goto try_end_13;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_12;
// End of try:
try_end_13:;
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
Py_DECREF(tmp_tuple_unpack_4__source_iter);
tmp_tuple_unpack_4__source_iter = NULL;
{
PyObject *tmp_assign_source_44;
CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
tmp_assign_source_44 = tmp_tuple_unpack_4__element_1;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_is_complex, tmp_assign_source_44);
}
Py_XDECREF(tmp_tuple_unpack_4__element_1);
tmp_tuple_unpack_4__element_1 = NULL;

{
PyObject *tmp_assign_source_45;
CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
tmp_assign_source_45 = tmp_tuple_unpack_4__element_2;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_full_name, tmp_assign_source_45);
}
Py_XDECREF(tmp_tuple_unpack_4__element_2);
tmp_tuple_unpack_4__element_2 = NULL;

{
PyObject *tmp_assign_source_46;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_5;
tmp_expression_value_9 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto try_except_handler_12;
}
tmp_subscript_value_5 = module_var_accessor_numpy$_core$_type_aliases$full_name(tstate);
if (unlikely(tmp_subscript_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_name);
}

if (tmp_subscript_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto try_except_handler_12;
}
tmp_assign_source_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_5);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_longdouble_type, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_mult_expr_left_1;
PyObject *tmp_mult_expr_right_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_1;
tmp_called_value_3 = module_var_accessor_numpy$_core$_type_aliases$dtype(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dtype);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto try_except_handler_12;
}
tmp_args_element_value_1 = module_var_accessor_numpy$_core$_type_aliases$longdouble_type(tstate);
assert(!(tmp_args_element_value_1 == NULL));
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 89;
tmp_expression_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_12;
}
tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_itemsize);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_mult_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_12;
}
tmp_mult_expr_right_1 = mod_consts.const_int_pos_8;
tmp_assign_source_47 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
CHECK_OBJECT(tmp_mult_expr_left_1);
Py_DECREF(tmp_mult_expr_left_1);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_12;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_bits, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_2;
tmp_mvar_value_1 = module_var_accessor_numpy$_core$_type_aliases$is_complex(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_complex);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto try_except_handler_12;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_12;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_assign_source_48 = mod_consts.const_str_plain_complex;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_48 = mod_consts.const_str_plain_float;
condexpr_end_1:;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_base_name, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_numpy$_core$_type_aliases$base_name(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_format_value_1 = module_var_accessor_numpy$_core$_type_aliases$bits(tstate);
assert(!(tmp_format_value_1 == NULL));
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_49 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_49 == NULL));
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_extended_prec_name, tmp_assign_source_49);
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = module_var_accessor_numpy$_core$_type_aliases$extended_prec_name(tstate);
assert(!(tmp_cmp_expr_left_2 == NULL));
tmp_cmp_expr_right_2 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto try_except_handler_12;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_12;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = module_var_accessor_numpy$_core$_type_aliases$longdouble_type(tstate);
if (unlikely(tmp_ass_subvalue_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_longdouble_type);
}

if (tmp_ass_subvalue_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto try_except_handler_12;
}
tmp_ass_subscribed_8 = module_var_accessor_numpy$_core$_type_aliases$sctypeDict(tstate);
if (unlikely(tmp_ass_subscribed_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypeDict);
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto try_except_handler_12;
}
tmp_ass_subscript_8 = module_var_accessor_numpy$_core$_type_aliases$extended_prec_name(tstate);
if (unlikely(tmp_ass_subscript_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extended_prec_name);
}

if (tmp_ass_subscript_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto try_except_handler_12;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;

    goto try_except_handler_12;
}
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = module_var_accessor_numpy$_core$_type_aliases$longdouble_type(tstate);
if (unlikely(tmp_ass_subvalue_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_longdouble_type);
}

if (tmp_ass_subvalue_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto try_except_handler_12;
}
tmp_ass_subscribed_9 = module_var_accessor_numpy$_core$_type_aliases$allTypes(tstate);
if (unlikely(tmp_ass_subscribed_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_allTypes);
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto try_except_handler_12;
}
tmp_ass_subscript_9 = module_var_accessor_numpy$_core$_type_aliases$extended_prec_name(tstate);
if (unlikely(tmp_ass_subscript_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extended_prec_name);
}

if (tmp_ass_subscript_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto try_except_handler_12;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto try_except_handler_12;
}
}
branch_no_2:;
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_is_complex);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_complex);

exception_lineno = 96;

    goto try_except_handler_12;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_full_name);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_full_name);

exception_lineno = 96;

    goto try_except_handler_12;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_longdouble_type);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_longdouble_type);

exception_lineno = 96;

    goto try_except_handler_12;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_bits);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_bits);

exception_lineno = 96;

    goto try_except_handler_12;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_base_name);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_name);

exception_lineno = 96;

    goto try_except_handler_12;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_extended_prec_name);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_extended_prec_name);

exception_lineno = 96;

    goto try_except_handler_12;
}

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto try_except_handler_12;
}
goto loop_start_5;
loop_end_5:;
goto try_end_14;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
Py_XDECREF(tmp_for_loop_5__iter_value);
tmp_for_loop_5__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
CHECK_OBJECT(tmp_for_loop_5__for_iterator);
Py_DECREF(tmp_for_loop_5__for_iterator);
tmp_for_loop_5__for_iterator = NULL;
{
PyObject *tmp_assign_source_50;
tmp_assign_source_50 = DEEP_COPY_DICT(tstate, mod_consts.const_dict_9f439f3f3aa8901c7f8c4a683424e8ef);
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctypes, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_iter_arg_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = module_var_accessor_numpy$_core$_type_aliases$typeinfo(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typeinfo);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;

    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_values);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 106;
tmp_iter_arg_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_iter_arg_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto frame_exception_exit_1;
}
tmp_assign_source_51 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
CHECK_OBJECT(tmp_iter_arg_10);
Py_DECREF(tmp_iter_arg_10);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_6__for_iterator == NULL);
tmp_for_loop_6__for_iterator = tmp_assign_source_51;
}
// Tried code:
loop_start_6:;
{
PyObject *tmp_next_source_6;
PyObject *tmp_assign_source_52;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
tmp_next_source_6 = tmp_for_loop_6__for_iterator;
tmp_assign_source_52 = ITERATOR_NEXT(tmp_next_source_6);
if (tmp_assign_source_52 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_6;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 106;
        goto try_except_handler_15;
    }
}

{
    PyObject *old = tmp_for_loop_6__iter_value;
    tmp_for_loop_6__iter_value = tmp_assign_source_52;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_53;
CHECK_OBJECT(tmp_for_loop_6__iter_value);
tmp_assign_source_53 = tmp_for_loop_6__iter_value;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_info, tmp_assign_source_53);
}
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_12;
tmp_expression_value_12 = module_var_accessor_numpy$_core$_type_aliases$type_info(tstate);
assert(!(tmp_expression_value_12 == NULL));
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_kind);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_15;
}
tmp_cmp_expr_right_3 = mod_consts.const_tuple_str_plain_M_str_plain_m_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_15;
}
tmp_condition_result_4 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
goto loop_start_6;
branch_no_3:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = module_var_accessor_numpy$_core$_type_aliases$type_info(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_type_info);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto try_except_handler_15;
}
tmp_assign_source_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_type);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto try_except_handler_15;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_concrete_type, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_iter_arg_11;
PyObject *tmp_tuple_element_2;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = const_str_plain_int;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_3);
tmp_expression_value_14 = module_var_accessor_numpy$_core$_type_aliases$ma(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto tuple_build_exception_2;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_signedinteger);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_tuple_element_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_tuple_element_2);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_iter_arg_11 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_tuple_element_4;
PyObject *tmp_tuple_element_5;
PyObject *tmp_tuple_element_6;
PyObject *tmp_tuple_element_7;
PyTuple_SET_ITEM(tmp_iter_arg_11, 0, tmp_tuple_element_2);
tmp_tuple_element_4 = mod_consts.const_str_plain_uint;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_4);
tmp_expression_value_15 = module_var_accessor_numpy$_core$_type_aliases$ma(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto tuple_build_exception_4;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_unsignedinteger);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_tuple_element_2, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_tuple_element_2);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
PyTuple_SET_ITEM(tmp_iter_arg_11, 1, tmp_tuple_element_2);
tmp_tuple_element_5 = mod_consts.const_str_plain_float;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_16;
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_5);
tmp_expression_value_16 = module_var_accessor_numpy$_core$_type_aliases$ma(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;

    goto tuple_build_exception_5;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_floating);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_tuple_element_2, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_tuple_element_2);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
PyTuple_SET_ITEM(tmp_iter_arg_11, 2, tmp_tuple_element_2);
tmp_tuple_element_6 = mod_consts.const_str_plain_complex;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_17;
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_6);
tmp_expression_value_17 = module_var_accessor_numpy$_core$_type_aliases$ma(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;

    goto tuple_build_exception_6;
}
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_complexfloating);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_tuple_element_2, 1, tmp_tuple_element_6);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_tuple_element_2);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
PyTuple_SET_ITEM(tmp_iter_arg_11, 3, tmp_tuple_element_2);
tmp_tuple_element_7 = mod_consts.const_str_plain_others;
tmp_tuple_element_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_18;
PyTuple_SET_ITEM0(tmp_tuple_element_2, 0, tmp_tuple_element_7);
tmp_expression_value_18 = module_var_accessor_numpy$_core$_type_aliases$ma(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ma);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto tuple_build_exception_7;
}
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_generic);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM(tmp_tuple_element_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_tuple_element_2);
goto tuple_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
PyTuple_SET_ITEM(tmp_iter_arg_11, 4, tmp_tuple_element_2);
}
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_iter_arg_11);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_assign_source_55 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_11);
CHECK_OBJECT(tmp_iter_arg_11);
Py_DECREF(tmp_iter_arg_11);
assert(!(tmp_assign_source_55 == NULL));
{
    PyObject *old = tmp_for_loop_7__for_iterator;
    tmp_for_loop_7__for_iterator = tmp_assign_source_55;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_7:;
{
PyObject *tmp_next_source_7;
PyObject *tmp_assign_source_56;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
tmp_next_source_7 = tmp_for_loop_7__for_iterator;
tmp_assign_source_56 = ITERATOR_NEXT_ITERATOR(tmp_next_source_7);
if (tmp_assign_source_56 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_7;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 113;
        goto try_except_handler_16;
    }
}

{
    PyObject *old = tmp_for_loop_7__iter_value;
    tmp_for_loop_7__iter_value = tmp_assign_source_56;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_57;
PyObject *tmp_iter_arg_12;
CHECK_OBJECT(tmp_for_loop_7__iter_value);
tmp_iter_arg_12 = tmp_for_loop_7__iter_value;
tmp_assign_source_57 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_17;
}
{
    PyObject *old = tmp_tuple_unpack_5__source_iter;
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_57;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_58;
PyObject *tmp_unpack_9;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_58 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_9, 0, 2);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto try_except_handler_18;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_1;
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_58;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_unpack_10;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
tmp_assign_source_59 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_10, 1, 2);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto try_except_handler_18;
}
{
    PyObject *old = tmp_tuple_unpack_5__element_2;
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_59;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_5;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_5, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto try_except_handler_18;
}
}
goto try_end_15;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_17;
// End of try:
try_end_15:;
goto try_end_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_16;
// End of try:
try_end_16:;
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
Py_DECREF(tmp_tuple_unpack_5__source_iter);
tmp_tuple_unpack_5__source_iter = NULL;
{
PyObject *tmp_assign_source_60;
CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
tmp_assign_source_60 = tmp_tuple_unpack_5__element_1;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_type_group, tmp_assign_source_60);
}
Py_XDECREF(tmp_tuple_unpack_5__element_1);
tmp_tuple_unpack_5__element_1 = NULL;

{
PyObject *tmp_assign_source_61;
CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
tmp_assign_source_61 = tmp_tuple_unpack_5__element_2;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_abstract_type, tmp_assign_source_61);
}
Py_XDECREF(tmp_tuple_unpack_5__element_2);
tmp_tuple_unpack_5__element_2 = NULL;

{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
tmp_issubclass_cls_1 = module_var_accessor_numpy$_core$_type_aliases$concrete_type(tstate);
if (unlikely(tmp_issubclass_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concrete_type);
}

if (tmp_issubclass_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto try_except_handler_16;
}
tmp_issubclass_classes_1 = module_var_accessor_numpy$_core$_type_aliases$abstract_type(tstate);
if (unlikely(tmp_issubclass_classes_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstract_type);
}

if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;

    goto try_except_handler_16;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_16;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_19;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
tmp_expression_value_20 = module_var_accessor_numpy$_core$_type_aliases$sctypes(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypes);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto try_except_handler_16;
}
tmp_subscript_value_6 = module_var_accessor_numpy$_core$_type_aliases$type_group(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_type_group);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto try_except_handler_16;
}
tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_6);
if (tmp_expression_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_16;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_add);
CHECK_OBJECT(tmp_expression_value_19);
Py_DECREF(tmp_expression_value_19);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_16;
}
tmp_args_element_value_2 = module_var_accessor_numpy$_core$_type_aliases$concrete_type(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concrete_type);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 119;

    goto try_except_handler_16;
}
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 119;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto try_except_handler_16;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_type_group);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_type_group);

exception_lineno = 120;

    goto try_except_handler_16;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_abstract_type);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_abstract_type);

exception_lineno = 120;

    goto try_except_handler_16;
}

goto loop_end_7;
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;

    goto try_except_handler_16;
}
goto loop_start_7;
loop_end_7:;
goto try_end_17;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_15;
// End of try:
try_end_17:;
Py_XDECREF(tmp_for_loop_7__iter_value);
tmp_for_loop_7__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
CHECK_OBJECT(tmp_for_loop_7__for_iterator);
Py_DECREF(tmp_for_loop_7__for_iterator);
tmp_for_loop_7__for_iterator = NULL;
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_type_info);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_type_info);

exception_lineno = 123;

    goto try_except_handler_15;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_concrete_type);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_concrete_type);

exception_lineno = 123;

    goto try_except_handler_15;
}

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;

    goto try_except_handler_15;
}
goto loop_start_6;
loop_end_6:;
goto try_end_18;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_18:;
Py_XDECREF(tmp_for_loop_6__iter_value);
tmp_for_loop_6__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
CHECK_OBJECT(tmp_for_loop_6__for_iterator);
Py_DECREF(tmp_for_loop_6__for_iterator);
tmp_for_loop_6__for_iterator = NULL;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_iter_arg_13;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_21;
tmp_expression_value_21 = module_var_accessor_numpy$_core$_type_aliases$sctypes(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypes);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_keys);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto frame_exception_exit_1;
}
frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 126;
tmp_iter_arg_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_iter_arg_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto frame_exception_exit_1;
}
tmp_assign_source_62 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
CHECK_OBJECT(tmp_iter_arg_13);
Py_DECREF(tmp_iter_arg_13);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_8__for_iterator == NULL);
tmp_for_loop_8__for_iterator = tmp_assign_source_62;
}
// Tried code:
loop_start_8:;
{
PyObject *tmp_next_source_8;
PyObject *tmp_assign_source_63;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
tmp_next_source_8 = tmp_for_loop_8__for_iterator;
tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_8);
if (tmp_assign_source_63 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_8;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 126;
        goto try_except_handler_19;
    }
}

{
    PyObject *old = tmp_for_loop_8__iter_value;
    tmp_for_loop_8__iter_value = tmp_assign_source_63;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_64;
CHECK_OBJECT(tmp_for_loop_8__iter_value);
tmp_assign_source_64 = tmp_for_loop_8__iter_value;
UPDATE_STRING_DICT0(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_key, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_list_arg_1;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_7;
tmp_expression_value_22 = module_var_accessor_numpy$_core$_type_aliases$sctypes(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypes);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;

    goto try_except_handler_19;
}
tmp_subscript_value_7 = module_var_accessor_numpy$_core$_type_aliases$sctype_key(tstate);
assert(!(tmp_subscript_value_7 == NULL));
tmp_list_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_7);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_19;
}
tmp_assign_source_65 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;

    goto try_except_handler_19;
}
UPDATE_STRING_DICT1(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)mod_consts.const_str_plain_sctype_list, tmp_assign_source_65);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_3;
PyObject *tmp_kw_call_value_0_1;
tmp_expression_value_23 = module_var_accessor_numpy$_core$_type_aliases$sctype_list(tstate);
assert(!(tmp_expression_value_23 == NULL));
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_sort);
assert(!(tmp_called_value_7 == NULL));

tmp_kw_call_value_0_1 = MAKE_FUNCTION_numpy$_core$_type_aliases$$$function__1_lambda(tstate);

frame_frame_numpy$_core$_type_aliases->m_frame.f_lineno = 128;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_str_plain_key_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto try_except_handler_19;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = module_var_accessor_numpy$_core$_type_aliases$sctype_list(tstate);
if (unlikely(tmp_ass_subvalue_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctype_list);
}

if (tmp_ass_subvalue_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto try_except_handler_19;
}
tmp_ass_subscribed_10 = module_var_accessor_numpy$_core$_type_aliases$sctypes(tstate);
if (unlikely(tmp_ass_subscribed_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctypes);
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto try_except_handler_19;
}
tmp_ass_subscript_10 = module_var_accessor_numpy$_core$_type_aliases$sctype_key(tstate);
if (unlikely(tmp_ass_subscript_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctype_key);
}

if (tmp_ass_subscript_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto try_except_handler_19;
}
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;

    goto try_except_handler_19;
}
}
tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_sctype_key);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctype_key);

exception_lineno = 131;

    goto try_except_handler_19;
}

tmp_result = DICT_REMOVE_ITEM((PyObject *)moduledict_numpy$_core$_type_aliases, mod_consts.const_str_plain_sctype_list);
if (tmp_result == false) CLEAR_ERROR_OCCURRED(tstate);

if (unlikely(tmp_result == false)) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_sctype_list);

exception_lineno = 131;

    goto try_except_handler_19;
}

if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto try_except_handler_19;
}
goto loop_start_8;
loop_end_8:;
goto try_end_19;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_19:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_numpy$_core$_type_aliases, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_numpy$_core$_type_aliases->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_numpy$_core$_type_aliases, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_numpy$_core$_type_aliases);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
Py_XDECREF(tmp_for_loop_8__iter_value);
tmp_for_loop_8__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
CHECK_OBJECT(tmp_for_loop_8__for_iterator);
Py_DECREF(tmp_for_loop_8__for_iterator);
tmp_for_loop_8__for_iterator = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("numpy$_core$_type_aliases", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "numpy._core._type_aliases" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_numpy$_core$_type_aliases);
    return module_numpy$_core$_type_aliases;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_numpy$_core$_type_aliases, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("numpy$_core$_type_aliases", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'pydantic$deprecated$copy_internals'
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



/* The "module_pydantic$deprecated$copy_internals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$deprecated$copy_internals;
PyDictObject *moduledict_pydantic$deprecated$copy_internals;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_exclude;
PyObject *const_str_plain__utils;
PyObject *const_str_plain_ValueItems;
PyObject *const_str_plain_merge;
PyObject *const_str_plain_self;
PyObject *const_str_plain___pydantic_fields__;
PyObject *const_str_plain_items;
PyObject *const_str_plain_include;
PyObject *const_dict_02466534824875aca697413bb6b49c1a;
PyObject *const_str_plain__calculate_keys;
PyObject *const_str_plain_exclude_unset;
PyObject *const_tuple_str_plain_include_str_plain_exclude_str_plain_exclude_unset_tuple;
PyObject *const_str_plain_to_dict;
PyObject *const_str_plain_by_alias;
PyObject *const_str_plain_exclude_defaults;
PyObject *const_str_plain_exclude_none;
PyObject *const_str_plain___pydantic_extra__;
PyObject *const_str_plain_field;
PyObject *const_str_plain_is_required;
PyObject *const_str_plain_default;
PyObject *const_str_plain_alias;
PyObject *const_str_plain_value_include;
PyObject *const_str_plain_value_exclude;
PyObject *const_str_plain__get_value;
PyObject *const_str_plain_for_element;
PyObject *const_tuple_b254ea12a7341db3eda45f5a13a53ae1_tuple;
PyObject *const_str_plain__iter;
PyObject *const_str_plain_deepcopy;
PyObject *const_str_plain___new__;
PyObject *const_str_plain__object_setattr;
PyObject *const_str_plain___pydantic_fields_set__;
PyObject *const_str_plain___pydantic_private__;
PyObject *const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_plain_model_dump;
PyObject *const_tuple_53bc7ffa61a167ec49e1377c4925a027_tuple;
PyObject *const_str_plain_copy;
PyObject *const_tuple_str_plain_include_str_plain_exclude_tuple;
PyObject *const_str_plain_is_excluded;
PyObject *const_str_plain_is_included;
PyObject *const_str_plain_cls;
PyObject *const_tuple_c23655565a26d2a28ac44f8049c06d59_tuple;
PyObject *const_str_plain_sequence_like;
PyObject *const_str_plain__typing_extra;
PyObject *const_str_plain_is_namedtuple;
PyObject *const_str_plain_Enum;
PyObject *const_str_plain_model_config;
PyObject *const_str_plain_use_enum_values;
PyObject *const_str_plain_value;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_28d916a0d89179f109a3dfc37178bc8b;
PyObject *const_str_plain_is_true;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain__annotations;
PyObject *const_str_plain_typing;
PyObject *const_tuple_str_plain_deepcopy_tuple;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_Enum_tuple;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_typing_extensions;
PyObject *const_str_plain__internal;
PyObject *const_tuple_f21a3ae42bba7b9e47d0c2b555425af0_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain__model_construction;
PyObject *const_str_plain_object_setattr;
PyObject *const_tuple_false_false_none_none_false_false_false_tuple;
PyObject *const_dict_6a0b92602f3e1c0e141932fe154d7a61;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_a0fbd43841514a6d48384776cdc6ca34;
PyObject *const_str_plain__copy_and_set_values;
PyObject *const_str_plain_no_type_check;
PyObject *const_dict_bc4ff50d41ce0e1e33cfd4f54dce28e9;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_4c2365f5a7224ed7ed752e84bb0fec28;
PyObject *const_str_digest_d12ae35cfc955b3b5b698a31a45f3274;
PyObject *const_tuple_a582c4283168b29bda6ee5946917a6f9_tuple;
PyObject *const_str_digest_ebef0571b79afeb9cfa86258bda78956;
PyObject *const_tuple_6c752d7cf70fe4e483af2f99cf7f9b8d_tuple;
PyObject *const_tuple_7e5424bee08fca684506316cbafac770_tuple;
PyObject *const_tuple_dd5928b3e3839042792d751c4d9c10fd_tuple;
PyObject *const_tuple_44583d58dadba410afa2e88334435614_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[83];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic.deprecated.copy_internals"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_exclude);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValueItems);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_merge);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_fields__);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_include);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_dict_02466534824875aca697413bb6b49c1a);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__calculate_keys);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_unset);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_str_plain_exclude_str_plain_exclude_unset_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_dict);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_by_alias);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_defaults);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_none);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_extra__);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_field);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_required);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_alias);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_value_include);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_value_exclude);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_value);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_for_element);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_b254ea12a7341db3eda45f5a13a53ae1_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__iter);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain___new__);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__object_setattr);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_fields_set__);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_private__);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_53bc7ffa61a167ec49e1377c4925a027_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_str_plain_exclude_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_excluded);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_included);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_cls);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_c23655565a26d2a28ac44f8049c06d59_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_like);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__typing_extra);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_namedtuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_Enum);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_config);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_use_enum_values);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_28d916a0d89179f109a3dfc37178bc8b);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_true);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain__annotations);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deepcopy_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__internal);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_f21a3ae42bba7b9e47d0c2b555425af0_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain__model_construction);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_object_setattr);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_none_false_false_false_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_dict_6a0b92602f3e1c0e141932fe154d7a61);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_dict_a0fbd43841514a6d48384776cdc6ca34);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain__copy_and_set_values);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_no_type_check);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_bc4ff50d41ce0e1e33cfd4f54dce28e9);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_4c2365f5a7224ed7ed752e84bb0fec28);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_d12ae35cfc955b3b5b698a31a45f3274);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_a582c4283168b29bda6ee5946917a6f9_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebef0571b79afeb9cfa86258bda78956);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_6c752d7cf70fe4e483af2f99cf7f9b8d_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_7e5424bee08fca684506316cbafac770_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_dd5928b3e3839042792d751c4d9c10fd_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_44583d58dadba410afa2e88334435614_tuple);
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
void checkModuleConstants_pydantic$deprecated$copy_internals(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_exclude));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exclude);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValueItems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValueItems);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_merge));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_merge);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_fields__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_fields__);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_include));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_include);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_dict_02466534824875aca697413bb6b49c1a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_02466534824875aca697413bb6b49c1a);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__calculate_keys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__calculate_keys);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_unset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exclude_unset);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_str_plain_exclude_str_plain_exclude_unset_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_include_str_plain_exclude_str_plain_exclude_unset_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_dict);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_by_alias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_by_alias);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_defaults));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exclude_defaults);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_none));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exclude_none);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_extra__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_extra__);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_required);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_alias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_alias);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_value_include));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value_include);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_value_exclude));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value_exclude);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_value);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_for_element));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_for_element);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_b254ea12a7341db3eda45f5a13a53ae1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b254ea12a7341db3eda45f5a13a53ae1_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__iter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__iter);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_deepcopy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deepcopy);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain___new__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___new__);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__object_setattr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__object_setattr);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_fields_set__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_fields_set__);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_private__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_private__);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_dump);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_53bc7ffa61a167ec49e1377c4925a027_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_53bc7ffa61a167ec49e1377c4925a027_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_include_str_plain_exclude_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_include_str_plain_exclude_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_excluded));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_excluded);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_included));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_included);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cls);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_c23655565a26d2a28ac44f8049c06d59_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c23655565a26d2a28ac44f8049c06d59_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_sequence_like));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sequence_like);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__typing_extra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__typing_extra);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_namedtuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_namedtuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_Enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Enum);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_config);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_use_enum_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_use_enum_values);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_28d916a0d89179f109a3dfc37178bc8b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28d916a0d89179f109a3dfc37178bc8b);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_true));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_true);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain__annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__annotations);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deepcopy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deepcopy_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Enum_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Enum_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__internal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__internal);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_f21a3ae42bba7b9e47d0c2b555425af0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f21a3ae42bba7b9e47d0c2b555425af0_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain__model_construction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__model_construction);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_object_setattr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object_setattr);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_false_false_none_none_false_false_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_false_none_none_false_false_false_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_dict_6a0b92602f3e1c0e141932fe154d7a61));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6a0b92602f3e1c0e141932fe154d7a61);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_dict_a0fbd43841514a6d48384776cdc6ca34));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a0fbd43841514a6d48384776cdc6ca34);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain__copy_and_set_values));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__copy_and_set_values);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_no_type_check));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_no_type_check);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_bc4ff50d41ce0e1e33cfd4f54dce28e9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bc4ff50d41ce0e1e33cfd4f54dce28e9);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_4c2365f5a7224ed7ed752e84bb0fec28));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4c2365f5a7224ed7ed752e84bb0fec28);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_d12ae35cfc955b3b5b698a31a45f3274));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d12ae35cfc955b3b5b698a31a45f3274);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_a582c4283168b29bda6ee5946917a6f9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a582c4283168b29bda6ee5946917a6f9_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebef0571b79afeb9cfa86258bda78956));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ebef0571b79afeb9cfa86258bda78956);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_6c752d7cf70fe4e483af2f99cf7f9b8d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c752d7cf70fe4e483af2f99cf7f9b8d_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_7e5424bee08fca684506316cbafac770_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_7e5424bee08fca684506316cbafac770_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_dd5928b3e3839042792d751c4d9c10fd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_dd5928b3e3839042792d751c4d9c10fd_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_44583d58dadba410afa2e88334435614_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_44583d58dadba410afa2e88334435614_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 9
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
static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$Enum(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Enum);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Enum, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$_calculate_keys(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__calculate_keys);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__calculate_keys);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__calculate_keys, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__calculate_keys);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__calculate_keys, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__calculate_keys);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__calculate_keys);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__calculate_keys);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$_get_value(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__get_value);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_value);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_value, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_value);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_value, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__get_value);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__get_value);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_value);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$_model_construction(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__model_construction);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__model_construction);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__model_construction, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__model_construction);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__model_construction, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__model_construction);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__model_construction);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__model_construction);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$_object_setattr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__object_setattr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__object_setattr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__object_setattr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__object_setattr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__object_setattr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__object_setattr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__object_setattr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__object_setattr);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$_typing_extra(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__typing_extra);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__typing_extra, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__typing_extra);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__typing_extra, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$deprecated$copy_internals$deepcopy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$deprecated$copy_internals->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$deprecated$copy_internals->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$deprecated$copy_internals->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deepcopy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deepcopy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_deepcopy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_deepcopy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_a82f50791957dd15299d13c3c1f137f2;
static PyCodeObject *code_objects_b7622b4877cffca8f4e29235a2f8f754;
static PyCodeObject *code_objects_f9e0971acddc8368ad6459ebcb3f6b0e;
static PyCodeObject *code_objects_90e8161b705c273e109383a98269069b;
static PyCodeObject *code_objects_922cb2445176113da2ed7d84eef98c21;
static PyCodeObject *code_objects_203f1e79fd8101c53f9c5f23cc540332;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_d12ae35cfc955b3b5b698a31a45f3274); CHECK_OBJECT(module_filename_obj);
code_objects_a82f50791957dd15299d13c3c1f137f2 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_28d916a0d89179f109a3dfc37178bc8b, mod_consts.const_tuple_a582c4283168b29bda6ee5946917a6f9_tuple, NULL, 1, 0, 0);
code_objects_b7622b4877cffca8f4e29235a2f8f754 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_ebef0571b79afeb9cfa86258bda78956, mod_consts.const_str_digest_ebef0571b79afeb9cfa86258bda78956, NULL, NULL, 0, 0, 0);
code_objects_f9e0971acddc8368ad6459ebcb3f6b0e = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__calculate_keys, mod_consts.const_str_plain__calculate_keys, mod_consts.const_tuple_6c752d7cf70fe4e483af2f99cf7f9b8d_tuple, NULL, 5, 0, 0);
code_objects_90e8161b705c273e109383a98269069b = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__copy_and_set_values, mod_consts.const_str_plain__copy_and_set_values, mod_consts.const_tuple_7e5424bee08fca684506316cbafac770_tuple, NULL, 5, 1, 0);
code_objects_922cb2445176113da2ed7d84eef98c21 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_value, mod_consts.const_str_plain__get_value, mod_consts.const_tuple_dd5928b3e3839042792d751c4d9c10fd_tuple, NULL, 9, 0, 0);
code_objects_203f1e79fd8101c53f9c5f23cc540332 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__iter, mod_consts.const_str_plain__iter, mod_consts.const_tuple_44583d58dadba410afa2e88334435614_tuple, NULL, 8, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__1__iter(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__3__get_value(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__4__calculate_keys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$deprecated$copy_internals$$$function__1__iter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_to_dict = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_by_alias = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_include = Nuitka_Cell_New1(python_pars[3]);
struct Nuitka_CellObject *par_exclude = Nuitka_Cell_New1(python_pars[4]);
struct Nuitka_CellObject *par_exclude_unset = Nuitka_Cell_New1(python_pars[5]);
struct Nuitka_CellObject *par_exclude_defaults = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_exclude_none = Nuitka_Cell_New1(python_pars[7]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[8];
tmp_closure_1[0] = par_by_alias;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_exclude;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_exclude_defaults;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_exclude_none;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_exclude_unset;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = par_include;
Py_INCREF(tmp_closure_1[5]);
tmp_closure_1[6] = par_self;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = par_to_dict;
Py_INCREF(tmp_closure_1[7]);
tmp_return_value = MAKE_GENERATOR_pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter(tstate, tmp_closure_1);

goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_self);
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
par_self = NULL;
CHECK_OBJECT(par_to_dict);
CHECK_OBJECT(par_to_dict);
Py_DECREF(par_to_dict);
par_to_dict = NULL;
CHECK_OBJECT(par_by_alias);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
par_by_alias = NULL;
CHECK_OBJECT(par_include);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
par_include = NULL;
CHECK_OBJECT(par_exclude);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
par_exclude = NULL;
CHECK_OBJECT(par_exclude_unset);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
par_exclude_unset = NULL;
CHECK_OBJECT(par_exclude_defaults);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
par_exclude_defaults = NULL;
CHECK_OBJECT(par_exclude_none);
CHECK_OBJECT(par_exclude_none);
Py_DECREF(par_exclude_none);
par_exclude_none = NULL;
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
struct pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter_locals {
PyObject *var_allowed_keys;
PyObject *var_value_exclude;
PyObject *var_value_include;
PyObject *var_items;
PyObject *var_field_key;
PyObject *var_v;
PyObject *var_field;
PyObject *var_dict_key;
PyObject *outline_0_var_k;
PyObject *outline_0_var_v;
PyObject *outline_1_var_k;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter;
PyObject *tmp_dictcontraction_1__$0;
PyObject *tmp_dictcontraction_1__contraction;
PyObject *tmp_dictcontraction_1__iter_value_0;
PyObject *tmp_dictcontraction_2__$0;
PyObject *tmp_dictcontraction_2__contraction;
PyObject *tmp_dictcontraction_2__iter_value_0;
PyObject *tmp_for_loop_1__for_iterator;
PyObject *tmp_for_loop_1__iter_value;
nuitka_bool tmp_try_except_1__unhandled_indicator;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
int exception_keeper_lineno_12;
};
#endif

static PyObject *pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter_locals *generator_heap = (struct pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_allowed_keys = NULL;
generator_heap->var_value_exclude = NULL;
generator_heap->var_value_include = NULL;
generator_heap->var_items = NULL;
generator_heap->var_field_key = NULL;
generator_heap->var_v = NULL;
generator_heap->var_field = NULL;
generator_heap->var_dict_key = NULL;
generator_heap->outline_0_var_k = NULL;
generator_heap->outline_0_var_v = NULL;
generator_heap->outline_1_var_k = NULL;
generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
generator_heap->tmp_dictcontraction_1__$0 = NULL;
generator_heap->tmp_dictcontraction_1__contraction = NULL;
generator_heap->tmp_dictcontraction_1__iter_value_0 = NULL;
generator_heap->tmp_dictcontraction_2__$0 = NULL;
generator_heap->tmp_dictcontraction_2__contraction = NULL;
generator_heap->tmp_dictcontraction_2__iter_value_0 = NULL;
generator_heap->tmp_for_loop_1__for_iterator = NULL;
generator_heap->tmp_for_loop_1__iter_value = NULL;
generator_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
generator_heap->type_description_1 = NULL;
generator_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
generator_heap->exception_lineno = 0;
generator_heap->tmp_return_value = NULL;

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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_203f1e79fd8101c53f9c5f23cc540332, module_pydantic$deprecated$copy_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 41;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_2 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_ValueItems);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_merge);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___pydantic_fields__);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_2;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_2;
}
generator->m_frame->m_frame.f_lineno = 43;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_2;
}
assert(generator_heap->tmp_dictcontraction_1__$0 == NULL);
generator_heap->tmp_dictcontraction_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(generator_heap->tmp_dictcontraction_1__contraction == NULL);
generator_heap->tmp_dictcontraction_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
tmp_next_source_1 = generator_heap->tmp_dictcontraction_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccccoooooooo";
generator_heap->exception_lineno = 43;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = generator_heap->tmp_dictcontraction_1__iter_value_0;
    generator_heap->tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = generator_heap->tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
    generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1;
    generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2;
    generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1);
generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2);
generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_8 = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->outline_0_var_k;
    generator_heap->outline_0_var_k = tmp_assign_source_8;
    Py_INCREF(generator_heap->outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1);
generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_9 = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->outline_0_var_v;
    generator_heap->outline_0_var_v = tmp_assign_source_9;
    Py_INCREF(generator_heap->outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2);
generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(generator_heap->outline_0_var_v);
tmp_expression_value_5 = generator_heap->outline_0_var_v;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_exclude);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(generator_heap->outline_0_var_k);
tmp_dictset38_key_1 = generator_heap->outline_0_var_k;
CHECK_OBJECT(generator_heap->outline_0_var_v);
tmp_expression_value_6 = generator_heap->outline_0_var_v;
tmp_dictset38_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_exclude);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = generator_heap->tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (generator_heap->tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_3;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
tmp_args_element_value_1 = generator_heap->tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
Py_DECREF(generator_heap->tmp_dictcontraction_1__$0);
generator_heap->tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
Py_DECREF(generator_heap->tmp_dictcontraction_1__contraction);
generator_heap->tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(generator_heap->tmp_dictcontraction_1__iter_value_0);
generator_heap->tmp_dictcontraction_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
Py_DECREF(generator_heap->tmp_dictcontraction_1__$0);
generator_heap->tmp_dictcontraction_1__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
Py_DECREF(generator_heap->tmp_dictcontraction_1__contraction);
generator_heap->tmp_dictcontraction_1__contraction = NULL;
Py_XDECREF(generator_heap->tmp_dictcontraction_1__iter_value_0);
generator_heap->tmp_dictcontraction_1__iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(generator_heap->outline_0_var_k);
generator_heap->outline_0_var_k = NULL;
Py_XDECREF(generator_heap->outline_0_var_v);
generator_heap->outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->outline_0_var_k);
generator_heap->outline_0_var_k = NULL;
Py_XDECREF(generator_heap->outline_0_var_v);
generator_heap->outline_0_var_v = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
generator_heap->exception_lineno = 43;
goto frame_exception_exit_1;
outline_result_1:;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 43;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 42;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 42;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[1]);
    Nuitka_Cell_SET(generator->m_closure[1], tmp_assign_source_1);
    Py_XDECREF(old);
}

}
branch_no_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 46;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_3 = Nuitka_Cell_GET(generator->m_closure[5]);
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_8 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_ValueItems);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_merge);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
PyObject *tmp_expression_value_9;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___pydantic_fields__);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_6;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_6;
}
assert(generator_heap->tmp_dictcontraction_2__$0 == NULL);
generator_heap->tmp_dictcontraction_2__$0 = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
assert(generator_heap->tmp_dictcontraction_2__contraction == NULL);
generator_heap->tmp_dictcontraction_2__contraction = tmp_assign_source_12;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_13;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
tmp_next_source_2 = generator_heap->tmp_dictcontraction_2__$0;
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccccoooooooo";
generator_heap->exception_lineno = 47;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = generator_heap->tmp_dictcontraction_2__iter_value_0;
    generator_heap->tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__iter_value_0);
tmp_assign_source_14 = generator_heap->tmp_dictcontraction_2__iter_value_0;
{
    PyObject *old = generator_heap->outline_1_var_k;
    generator_heap->outline_1_var_k = tmp_assign_source_14;
    Py_INCREF(generator_heap->outline_1_var_k);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_dictset38_key_2;
PyObject *tmp_dictset38_value_2;
PyObject *tmp_dictset38_dict_2;
CHECK_OBJECT(generator_heap->outline_1_var_k);
tmp_dictset38_key_2 = generator_heap->outline_1_var_k;
tmp_dictset38_value_2 = Py_True;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
tmp_dictset38_dict_2 = generator_heap->tmp_dictcontraction_2__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_2));
generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

if (generator_heap->tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_7;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
tmp_tuple_element_1 = generator_heap->tmp_dictcontraction_2__contraction;
Py_INCREF(tmp_tuple_element_1);
goto try_return_handler_7;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
Py_DECREF(generator_heap->tmp_dictcontraction_2__$0);
generator_heap->tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
Py_DECREF(generator_heap->tmp_dictcontraction_2__contraction);
generator_heap->tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(generator_heap->tmp_dictcontraction_2__iter_value_0);
generator_heap->tmp_dictcontraction_2__iter_value_0 = NULL;
goto try_return_handler_6;
// Exception handler code:
try_except_handler_7:;
generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_5 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
Py_DECREF(generator_heap->tmp_dictcontraction_2__$0);
generator_heap->tmp_dictcontraction_2__$0 = NULL;
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
Py_DECREF(generator_heap->tmp_dictcontraction_2__contraction);
generator_heap->tmp_dictcontraction_2__contraction = NULL;
Py_XDECREF(generator_heap->tmp_dictcontraction_2__iter_value_0);
generator_heap->tmp_dictcontraction_2__iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_5;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

goto try_except_handler_6;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
Py_XDECREF(generator_heap->outline_1_var_k);
generator_heap->outline_1_var_k = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_6:;
generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_6 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->outline_1_var_k);
generator_heap->outline_1_var_k = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_6;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
generator_heap->exception_lineno = 47;
goto frame_exception_exit_1;
outline_result_2:;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto tuple_build_exception_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(generator->m_closure[5]);
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_02466534824875aca697413bb6b49c1a);
generator->m_frame->m_frame.f_lineno = 47;
tmp_assign_source_10 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 47;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(generator->m_closure[5]);
    Nuitka_Cell_SET(generator->m_closure[5], tmp_assign_source_10);
    Py_XDECREF(old);
}

}
branch_no_3:;
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_4 = module_var_accessor_pydantic$deprecated$copy_internals$_calculate_keys(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__calculate_keys);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[6]);
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[5]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_unset);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(generator->m_closure[4]);
generator->m_frame->m_frame.f_lineno = 49;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_include_str_plain_exclude_str_plain_exclude_unset_tuple);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 49;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_allowed_keys == NULL);
generator_heap->var_allowed_keys = tmp_assign_source_15;
}
{
bool tmp_condition_result_4;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
CHECK_OBJECT(generator_heap->var_allowed_keys);
tmp_cmp_expr_left_4 = generator_heap->var_allowed_keys;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_to_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_1 = Nuitka_Cell_GET(generator->m_closure[7]);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_by_alias);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_unset);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_3 = Nuitka_Cell_GET(generator->m_closure[4]);
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_defaults);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_or_left_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_none);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_or_right_value_4 = Nuitka_Cell_GET(generator->m_closure[3]);
tmp_or_right_value_3 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_or_right_value_3 = tmp_or_left_value_4;
or_end_4:;
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_operand_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_operand_value_1 = tmp_or_left_value_1;
or_end_1:;
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 50;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (generator_heap->tmp_res == 0) ? true : false;
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_expression_value_10;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_yieldfrom_result_1;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_11 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_12);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 52;
tmp_expression_value_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
generator->m_yield_from = tmp_expression_value_10;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_5, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 52;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_1);
Py_DECREF(tmp_yieldfrom_result_1);
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_13 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain___pydantic_extra__);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

generator_heap->exception_lineno = 53;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_14;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_15;
PyObject *tmp_expression_value_16;
PyObject *tmp_yieldfrom_result_2;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_16 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain___pydantic_extra__);
if (tmp_expression_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 54;
tmp_expression_value_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 2;
generator->m_yield_from = tmp_expression_value_14;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_6, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 54;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_yieldfrom_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yieldfrom_result_2);
Py_DECREF(tmp_yieldfrom_result_2);
}
branch_no_5:;
generator_heap->tmp_return_value = Py_None;
Py_INCREF(generator_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
PyObject *tmp_assign_source_16;
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_5 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_6 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_expression_value_17 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_ValueItems);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[6]);
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_7);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[1]);
generator->m_frame->m_frame.f_lineno = 57;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 57;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_16 = Py_None;
Py_INCREF(tmp_assign_source_16);
condexpr_end_1:;
assert(generator_heap->var_value_exclude == NULL);
generator_heap->var_value_exclude = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_cmp_expr_left_6 = Nuitka_Cell_GET(generator->m_closure[5]);
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_7 != false) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_expression_value_18 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_ValueItems);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_5 = Nuitka_Cell_GET(generator->m_closure[6]);
if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {
Py_DECREF(tmp_called_value_8);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_6 = Nuitka_Cell_GET(generator->m_closure[5]);
generator->m_frame->m_frame.f_lineno = 58;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 58;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_17 = Py_None;
Py_INCREF(tmp_assign_source_17);
condexpr_end_2:;
assert(generator_heap->var_value_include == NULL);
generator_heap->var_value_include = tmp_assign_source_17;
}
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_19;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_19 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain___pydantic_extra__);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 60;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_20 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_21);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 61;
tmp_assign_source_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 61;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->var_items == NULL);
generator_heap->var_items = tmp_assign_source_18;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_list_arg_1;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_list_arg_2;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_24;
PyObject *tmp_expression_value_25;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_23 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_22 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_23);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 63;
tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_list_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {
Py_DECREF(tmp_add_expr_left_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain___pydantic_extra__);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
generator->m_frame->m_frame.f_lineno = 63;
tmp_list_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_11);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_list_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = MAKE_LIST(tstate, tmp_list_arg_2);
CHECK_OBJECT(tmp_list_arg_2);
Py_DECREF(tmp_list_arg_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_add_expr_left_1);

generator_heap->exception_lineno = 63;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_LIST_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
assert(!(tmp_assign_source_19 == NULL));
assert(generator_heap->var_items == NULL);
generator_heap->var_items = tmp_assign_source_19;
}
branch_end_6:;
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(generator_heap->var_items);
tmp_iter_arg_4 = generator_heap->var_items;
tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto frame_exception_exit_1;
}
assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_20;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
tmp_next_source_3 = generator_heap->tmp_for_loop_1__for_iterator;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "ccccccccoooooooo";
generator_heap->exception_lineno = 65;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
    generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
tmp_iter_arg_5 = generator_heap->tmp_for_loop_1__iter_value;
tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_3;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_4;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_4 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_10;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_2, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_10;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_10:;
generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_7 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_7;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_8 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_8;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_4:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_25 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_field_key;
    generator_heap->var_field_key = tmp_assign_source_25;
    Py_INCREF(generator_heap->var_field_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_26 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_v;
    generator_heap->var_v = tmp_assign_source_26;
    Py_INCREF(generator_heap->var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_9;
int tmp_or_left_truth_5;
nuitka_bool tmp_or_left_value_5;
nuitka_bool tmp_or_right_value_5;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(generator_heap->var_allowed_keys);
tmp_cmp_expr_left_8 = generator_heap->var_allowed_keys;
tmp_cmp_expr_right_8 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(generator_heap->var_field_key);
tmp_cmp_expr_left_9 = generator_heap->var_field_key;
CHECK_OBJECT(generator_heap->var_allowed_keys);
tmp_cmp_expr_right_9 = generator_heap->var_allowed_keys;
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_value_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_or_left_value_5 = tmp_and_left_value_2;
and_end_2:;
tmp_or_left_truth_5 = tmp_or_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_none);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[3]));
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 66;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(generator_heap->var_v);
tmp_cmp_expr_left_10 = generator_heap->var_v;
tmp_cmp_expr_right_10 = Py_None;
tmp_and_right_value_3 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_5 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_or_right_value_5 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_9 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_condition_result_9 = tmp_or_left_value_5;
or_end_5:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
goto loop_start_3;
branch_no_7:;
{
nuitka_bool tmp_condition_result_10;
int tmp_truth_name_3;
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_defaults);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[2]));
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 69;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_27;
tmp_assign_source_27 = NUITKA_BOOL_TRUE;
generator_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_27;
}
// Tried code:
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_1;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_11;
}

tmp_expression_value_27 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___pydantic_fields__);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_11;
}
CHECK_OBJECT(generator_heap->var_field_key);
tmp_subscript_value_1 = generator_heap->var_field_key;
tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 71;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_11;
}
{
    PyObject *old = generator_heap->var_field;
    generator_heap->var_field = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
goto try_end_5;
// Exception handler code:
try_except_handler_11:;
generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_9 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

{
nuitka_bool tmp_assign_source_29;
tmp_assign_source_29 = NUITKA_BOOL_FALSE;
generator_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_29;
}
// Preserve existing published exception id 1.
generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_9);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_9, exception_tb);
    } else if (generator_heap->exception_keeper_lineno_9 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, generator->m_frame, generator_heap->exception_keeper_lineno_9);
        SET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_keeper_name_9, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_name_9);
// Tried code:
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
tmp_cmp_expr_left_11 = EXC_TYPE(tstate);
tmp_cmp_expr_right_11 = PyExc_KeyError;
generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
assert(!(generator_heap->tmp_res == -1));
tmp_condition_result_11 = (generator_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
generator_heap->tmp_result = RERAISE_EXCEPTION(tstate, &generator_heap->exception_state);
if (unlikely(generator_heap->tmp_result == false)) {
    generator_heap->exception_lineno = 70;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&generator_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &generator->m_frame->m_frame)) {
        generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
generator_heap->type_description_1 = "ccccccccoooooooo";
goto try_except_handler_12;
branch_no_9:;
goto try_end_6;
// Exception handler code:
try_except_handler_12:;
generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_10 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_10;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

goto try_except_handler_8;
// End of try:
try_end_6:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;
{
bool tmp_condition_result_12;
nuitka_bool tmp_cmp_expr_left_12;
nuitka_bool tmp_cmp_expr_right_12;
assert(generator_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_12 = generator_heap->tmp_try_except_1__unhandled_indicator;
tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
tmp_condition_result_12 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
nuitka_bool tmp_condition_result_13;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_expression_value_28;
if (generator_heap->var_field == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_field);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_1 = generator_heap->var_field;
generator->m_frame->m_frame.f_lineno = 75;
tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_required);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_4 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
if (generator_heap->var_field == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_field);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_28 = generator_heap->var_field;
tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(generator_heap->var_v);
tmp_cmp_expr_right_13 = generator_heap->var_v;
tmp_and_right_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 75;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_condition_result_13 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_13 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
goto loop_start_3;
branch_no_11:;
branch_no_10:;
branch_no_8:;
{
nuitka_bool tmp_condition_result_14;
int tmp_and_left_truth_5;
nuitka_bool tmp_and_left_value_5;
nuitka_bool tmp_and_right_value_5;
int tmp_truth_name_4;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_expression_value_29;
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_by_alias);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_4 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[0]));
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_and_left_value_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(generator_heap->var_field_key);
tmp_cmp_expr_left_14 = generator_heap->var_field_key;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_29 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_cmp_expr_right_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain___pydantic_fields__);
if (tmp_cmp_expr_right_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_14, tmp_cmp_expr_left_14);
CHECK_OBJECT(tmp_cmp_expr_right_14);
Py_DECREF(tmp_cmp_expr_right_14);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 78;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_and_right_value_5 = (generator_heap->tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_14 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_14 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_30;
int tmp_or_left_truth_6;
PyObject *tmp_or_left_value_6;
PyObject *tmp_or_right_value_6;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_2;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_expression_value_32 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain___pydantic_fields__);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(generator_heap->var_field_key);
tmp_subscript_value_2 = generator_heap->var_field_key;
tmp_expression_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_31);
Py_DECREF(tmp_expression_value_31);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_alias);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_or_left_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
if (tmp_or_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_or_left_value_6);

generator_heap->exception_lineno = 79;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (tmp_or_left_truth_6 == 1) {
    goto or_left_6;
} else {
    goto or_right_6;
}
or_right_6:;
CHECK_OBJECT(tmp_or_left_value_6);
Py_DECREF(tmp_or_left_value_6);
CHECK_OBJECT(generator_heap->var_field_key);
tmp_or_right_value_6 = generator_heap->var_field_key;
Py_INCREF(tmp_or_right_value_6);
tmp_assign_source_30 = tmp_or_right_value_6;
goto or_end_6;
or_left_6:;
tmp_assign_source_30 = tmp_or_left_value_6;
or_end_6:;
{
    PyObject *old = generator_heap->var_dict_key;
    generator_heap->var_dict_key = tmp_assign_source_30;
    Py_XDECREF(old);
}

}
goto branch_end_12;
branch_no_12:;
{
PyObject *tmp_assign_source_31;
CHECK_OBJECT(generator_heap->var_field_key);
tmp_assign_source_31 = generator_heap->var_field_key;
{
    PyObject *old = generator_heap->var_dict_key;
    generator_heap->var_dict_key = tmp_assign_source_31;
    Py_INCREF(generator_heap->var_dict_key);
    Py_XDECREF(old);
}

}
branch_end_12:;
{
nuitka_bool tmp_condition_result_15;
int tmp_or_left_truth_7;
nuitka_bool tmp_or_left_value_7;
nuitka_bool tmp_or_right_value_7;
int tmp_truth_name_5;
int tmp_or_left_truth_8;
nuitka_bool tmp_or_left_value_8;
nuitka_bool tmp_or_right_value_8;
int tmp_truth_name_6;
int tmp_truth_name_7;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_to_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_5 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[7]));
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_7 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_7 = tmp_or_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (tmp_or_left_truth_7 == 1) {
    goto or_left_7;
} else {
    goto or_right_7;
}
or_right_7:;
if (generator_heap->var_value_include == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_6 = CHECK_IF_TRUE(generator_heap->var_value_include);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_or_left_value_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_8 = tmp_or_left_value_8 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (tmp_or_left_truth_8 == 1) {
    goto or_left_8;
} else {
    goto or_right_8;
}
or_right_8:;
if (generator_heap->var_value_exclude == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_truth_name_7 = CHECK_IF_TRUE(generator_heap->var_value_exclude);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 83;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_or_right_value_8 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_right_value_7 = tmp_or_right_value_8;
goto or_end_8;
or_left_8:;
tmp_or_right_value_7 = tmp_or_left_value_8;
or_end_8:;
tmp_condition_result_15 = tmp_or_right_value_7;
goto or_end_7;
or_left_7:;
tmp_condition_result_15 = tmp_or_left_value_7;
or_end_7:;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_12;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_type_arg_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_kw_call_dict_value_2_2;
int tmp_and_left_truth_6;
PyObject *tmp_and_left_value_6;
PyObject *tmp_and_right_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kw_call_dict_value_3_1;
int tmp_and_left_truth_7;
PyObject *tmp_and_left_value_7;
PyObject *tmp_and_right_value_7;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
tmp_called_value_12 = module_var_accessor_pydantic$deprecated$copy_internals$_get_value(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__get_value);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 85;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_type_arg_1 = Nuitka_Cell_GET(generator->m_closure[6]);
tmp_kw_call_arg_value_0_2 = BUILTIN_TYPE1(tmp_type_arg_1);
if (tmp_kw_call_arg_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 85;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(generator_heap->var_v);
tmp_kw_call_arg_value_1_1 = generator_heap->var_v;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_to_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 87;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_0_2 = Nuitka_Cell_GET(generator->m_closure[7]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_by_alias);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 88;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_1_2 = Nuitka_Cell_GET(generator->m_closure[0]);
if (generator_heap->var_value_include == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 89;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_and_left_value_6 = generator_heap->var_value_include;
tmp_and_left_truth_6 = CHECK_IF_TRUE(tmp_and_left_value_6);
if (tmp_and_left_truth_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);

generator_heap->exception_lineno = 89;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
if (generator_heap->var_value_include == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 89;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_2 = generator_heap->var_value_include;
CHECK_OBJECT(generator_heap->var_field_key);
tmp_args_element_value_7 = generator_heap->var_field_key;
generator->m_frame->m_frame.f_lineno = 89;
tmp_and_right_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_for_element, tmp_args_element_value_7);
if (tmp_and_right_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);

generator_heap->exception_lineno = 89;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_kw_call_dict_value_2_2 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
Py_INCREF(tmp_and_left_value_6);
tmp_kw_call_dict_value_2_2 = tmp_and_left_value_6;
and_end_6:;
if (generator_heap->var_value_exclude == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_and_left_value_7 = generator_heap->var_value_exclude;
tmp_and_left_truth_7 = CHECK_IF_TRUE(tmp_and_left_value_7);
if (tmp_and_left_truth_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
if (generator_heap->var_value_exclude == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_called_instance_3 = generator_heap->var_value_exclude;
CHECK_OBJECT(generator_heap->var_field_key);
tmp_args_element_value_8 = generator_heap->var_field_key;
generator->m_frame->m_frame.f_lineno = 90;
tmp_and_right_value_7 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_for_element, tmp_args_element_value_8);
if (tmp_and_right_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);

generator_heap->exception_lineno = 90;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_kw_call_dict_value_3_1 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
Py_INCREF(tmp_and_left_value_7);
tmp_kw_call_dict_value_3_1 = tmp_and_left_value_7;
and_end_7:;
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
Py_DECREF(tmp_kw_call_dict_value_3_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_unset);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 91;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_4_1 = Nuitka_Cell_GET(generator->m_closure[4]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
Py_DECREF(tmp_kw_call_dict_value_3_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_defaults);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 92;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_5_1 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
Py_DECREF(tmp_kw_call_dict_value_3_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_none);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 93;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}

tmp_kw_call_dict_value_6_1 = Nuitka_Cell_GET(generator->m_closure[3]);
generator->m_frame->m_frame.f_lineno = 84;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_12, args, kw_values, mod_consts.const_tuple_b254ea12a7341db3eda45f5a13a53ae1_tuple);
}

CHECK_OBJECT(tmp_kw_call_arg_value_0_2);
Py_DECREF(tmp_kw_call_arg_value_0_2);
CHECK_OBJECT(tmp_kw_call_dict_value_2_2);
Py_DECREF(tmp_kw_call_dict_value_2_2);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 84;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = generator_heap->var_v;
    assert(old != NULL);
    generator_heap->var_v = tmp_assign_source_32;
    Py_DECREF(old);
}

}
branch_no_13:;
{
PyObject *tmp_expression_value_33;
PyObject *tmp_tuple_element_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_dict_key);
tmp_tuple_element_2 = generator_heap->var_dict_key;
tmp_expression_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_expression_value_33, 0, tmp_tuple_element_2);
CHECK_OBJECT(generator_heap->var_v);
tmp_tuple_element_2 = generator_heap->var_v;
PyTuple_SET_ITEM0(tmp_expression_value_33, 1, tmp_tuple_element_2);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 3;
return tmp_expression_value_33;
yield_return_3:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 95;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 65;
generator_heap->type_description_1 = "ccccccccoooooooo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
goto try_end_7;
// Exception handler code:
try_except_handler_8:;
generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_11 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_11;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_7:;

// Release exception attached to the frame
DROP_GENERATOR_EXCEPTION(generator);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(generator));
#endif
Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

goto try_return_handler_1;

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
    generator->m_closure[6],
    generator->m_closure[7],
    generator->m_closure[0],
    generator->m_closure[5],
    generator->m_closure[1],
    generator->m_closure[4],
    generator->m_closure[2],
    generator->m_closure[3],
    generator_heap->var_allowed_keys,
    generator_heap->var_value_exclude,
    generator_heap->var_value_include,
    generator_heap->var_items,
    generator_heap->var_field_key,
    generator_heap->var_v,
    generator_heap->var_field,
    generator_heap->var_dict_key
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
goto try_end_8;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(generator_heap->var_allowed_keys);
CHECK_OBJECT(generator_heap->var_allowed_keys);
Py_DECREF(generator_heap->var_allowed_keys);
generator_heap->var_allowed_keys = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_12 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_allowed_keys);
generator_heap->var_allowed_keys = NULL;
Py_XDECREF(generator_heap->var_value_exclude);
generator_heap->var_value_exclude = NULL;
Py_XDECREF(generator_heap->var_value_include);
generator_heap->var_value_include = NULL;
Py_XDECREF(generator_heap->var_items);
generator_heap->var_items = NULL;
Py_XDECREF(generator_heap->var_field_key);
generator_heap->var_field_key = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
Py_XDECREF(generator_heap->var_field);
generator_heap->var_field = NULL;
Py_XDECREF(generator_heap->var_dict_key);
generator_heap->var_dict_key = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_12;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

goto function_exception_exit;
// End of try:
try_end_8:;
Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
generator_heap->tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
generator_heap->tmp_for_loop_1__for_iterator = NULL;
CHECK_OBJECT(generator_heap->var_allowed_keys);
CHECK_OBJECT(generator_heap->var_allowed_keys);
Py_DECREF(generator_heap->var_allowed_keys);
generator_heap->var_allowed_keys = NULL;
Py_XDECREF(generator_heap->var_value_exclude);
generator_heap->var_value_exclude = NULL;
Py_XDECREF(generator_heap->var_value_include);
generator_heap->var_value_include = NULL;
CHECK_OBJECT(generator_heap->var_items);
CHECK_OBJECT(generator_heap->var_items);
Py_DECREF(generator_heap->var_items);
generator_heap->var_items = NULL;
Py_XDECREF(generator_heap->var_field_key);
generator_heap->var_field_key = NULL;
Py_XDECREF(generator_heap->var_v);
generator_heap->var_v = NULL;
Py_XDECREF(generator_heap->var_field);
generator_heap->var_field = NULL;
Py_XDECREF(generator_heap->var_dict_key);
generator_heap->var_dict_key = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif


    return NULL;

}

static PyObject *MAKE_GENERATOR_pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter_context,
        module_pydantic$deprecated$copy_internals,
        mod_consts.const_str_plain__iter,
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        code_objects_203f1e79fd8101c53f9c5f23cc540332,
        closure,
        8,
#if 1
        sizeof(struct pydantic$deprecated$copy_internals$$$function__1__iter$$$genobj__1__iter_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_values = python_pars[1];
PyObject *par_fields_set = python_pars[2];
PyObject *par_extra = python_pars[3];
PyObject *par_private = python_pars[4];
PyObject *par_deep = python_pars[5];
PyObject *var_cls = NULL;
PyObject *var_m = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values = MAKE_FUNCTION_FRAME(tstate, code_objects_90e8161b705c273e109383a98269069b, module_pydantic$deprecated$copy_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_type_description == NULL);
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values = cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_deep);
tmp_truth_name_1 = CHECK_IF_TRUE(par_deep);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "oooooooo";
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
tmp_called_value_1 = module_var_accessor_pydantic$deprecated$copy_internals$deepcopy(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deepcopy);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_values);
tmp_args_element_value_1 = par_values;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 109;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_values;
    assert(old != NULL);
    par_values = tmp_assign_source_1;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$deprecated$copy_internals$deepcopy(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deepcopy);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_extra);
tmp_args_element_value_2 = par_extra;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 110;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_extra;
    assert(old != NULL);
    par_extra = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$deprecated$copy_internals$deepcopy(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_deepcopy);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_private);
tmp_args_element_value_3 = par_private;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 111;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_private;
    assert(old != NULL);
    par_private = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_cls == NULL);
var_cls = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(var_cls);
tmp_called_instance_1 = var_cls;
CHECK_OBJECT(var_cls);
tmp_args_element_value_4 = var_cls;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 114;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain___new__, tmp_args_element_value_4);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_m == NULL);
var_m = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_4 = module_var_accessor_pydantic$deprecated$copy_internals$_object_setattr(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__object_setattr);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_5 = var_m;
tmp_args_element_value_6 = const_str_plain___dict__;
CHECK_OBJECT(par_values);
tmp_args_element_value_7 = par_values;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 115;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_5 = module_var_accessor_pydantic$deprecated$copy_internals$_object_setattr(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__object_setattr);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_8 = var_m;
tmp_args_element_value_9 = mod_consts.const_str_plain___pydantic_extra__;
CHECK_OBJECT(par_extra);
tmp_args_element_value_10 = par_extra;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 116;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_value_6 = module_var_accessor_pydantic$deprecated$copy_internals$_object_setattr(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__object_setattr);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_11 = var_m;
tmp_args_element_value_12 = mod_consts.const_str_plain___pydantic_fields_set__;
CHECK_OBJECT(par_fields_set);
tmp_args_element_value_13 = par_fields_set;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_7 = module_var_accessor_pydantic$deprecated$copy_internals$_object_setattr(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__object_setattr);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_m);
tmp_args_element_value_14 = var_m;
tmp_args_element_value_15 = mod_consts.const_str_plain___pydantic_private__;
CHECK_OBJECT(par_private);
tmp_args_element_value_16 = par_private;
frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values,
    type_description_1,
    par_self,
    par_values,
    par_fields_set,
    par_extra,
    par_private,
    par_deep,
    var_cls,
    var_m
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values == cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values);
    cache_frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_m);
tmp_return_value = var_m;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_values);
CHECK_OBJECT(par_values);
Py_DECREF(par_values);
par_values = NULL;
CHECK_OBJECT(par_extra);
CHECK_OBJECT(par_extra);
Py_DECREF(par_extra);
par_extra = NULL;
CHECK_OBJECT(par_private);
CHECK_OBJECT(par_private);
Py_DECREF(par_private);
par_private = NULL;
CHECK_OBJECT(var_cls);
CHECK_OBJECT(var_cls);
Py_DECREF(var_cls);
var_cls = NULL;
CHECK_OBJECT(var_m);
CHECK_OBJECT(var_m);
Py_DECREF(var_m);
var_m = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_values);
par_values = NULL;
Py_XDECREF(par_extra);
par_extra = NULL;
Py_XDECREF(par_private);
par_private = NULL;
Py_XDECREF(var_cls);
var_cls = NULL;
Py_XDECREF(var_m);
var_m = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fields_set);
Py_DECREF(par_fields_set);
CHECK_OBJECT(par_deep);
Py_DECREF(par_deep);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_fields_set);
Py_DECREF(par_fields_set);
CHECK_OBJECT(par_deep);
Py_DECREF(par_deep);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$deprecated$copy_internals$$$function__3__get_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
PyObject *par_v = python_pars[1];
struct Nuitka_CellObject *par_to_dict = Nuitka_Cell_New1(python_pars[2]);
struct Nuitka_CellObject *par_by_alias = Nuitka_Cell_New1(python_pars[3]);
PyObject *par_include = python_pars[4];
PyObject *par_exclude = python_pars[5];
struct Nuitka_CellObject *par_exclude_unset = Nuitka_Cell_New1(python_pars[6]);
struct Nuitka_CellObject *par_exclude_defaults = Nuitka_Cell_New1(python_pars[7]);
struct Nuitka_CellObject *par_exclude_none = Nuitka_Cell_New1(python_pars[8]);
PyObject *var_BaseModel = NULL;
struct Nuitka_CellObject *var_value_exclude = Nuitka_Cell_NewEmpty();
struct Nuitka_CellObject *var_value_include = Nuitka_Cell_NewEmpty();
PyObject *var_seq_args = NULL;
PyObject *outline_0_var_k_ = NULL;
PyObject *outline_0_var_v_ = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value = MAKE_FUNCTION_FRAME(tstate, code_objects_922cb2445176113da2ed7d84eef98c21, module_pydantic$deprecated$copy_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_type_description == NULL);
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value = cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 135;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
    if (likely(hard_module != NULL)) {
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BaseModel);

        Py_DECREF(hard_module);

    } else {
        tmp_assign_source_1 = NULL;
    }
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
assert(var_BaseModel == NULL);
var_BaseModel = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_v);
tmp_isinstance_inst_1 = par_v;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 135;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
    if (likely(hard_module != NULL)) {
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BaseModel);

        Py_DECREF(hard_module);

    } else {
        tmp_isinstance_cls_1 = NULL;
    }
}
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "coccoocccocco";
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
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_to_dict));
tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(par_to_dict));
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
CHECK_OBJECT(par_v);
tmp_expression_value_1 = par_v;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model_dump);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_by_alias));
tmp_kw_call_value_0_1 = Nuitka_Cell_GET(par_by_alias);
CHECK_OBJECT(Nuitka_Cell_GET(par_exclude_unset));
tmp_kw_call_value_1_1 = Nuitka_Cell_GET(par_exclude_unset);
CHECK_OBJECT(Nuitka_Cell_GET(par_exclude_defaults));
tmp_kw_call_value_2_1 = Nuitka_Cell_GET(par_exclude_defaults);
CHECK_OBJECT(par_include);
tmp_kw_call_value_3_1 = par_include;
CHECK_OBJECT(par_exclude);
tmp_kw_call_value_4_1 = par_exclude;
CHECK_OBJECT(Nuitka_Cell_GET(par_exclude_none));
tmp_kw_call_value_5_1 = Nuitka_Cell_GET(par_exclude_none);
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 139;
{
    PyObject *kw_values[6] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_53bc7ffa61a167ec49e1377c4925a027_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
CHECK_OBJECT(par_v);
tmp_expression_value_2 = par_v;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_include);
tmp_kw_call_value_0_2 = par_include;
CHECK_OBJECT(par_exclude);
tmp_kw_call_value_1_2 = par_exclude;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 148;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_include_str_plain_exclude_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_end_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_2;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_exclude);
tmp_truth_name_2 = CHECK_IF_TRUE(par_exclude);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_instance_1 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_v);
tmp_args_element_value_1 = par_v;
CHECK_OBJECT(par_exclude);
tmp_args_element_value_2 = par_exclude;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_ValueItems,
        call_args
    );
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_2 = Py_None;
Py_INCREF(tmp_assign_source_2);
condexpr_end_1:;
assert(Nuitka_Cell_GET(var_value_exclude) == NULL);
Nuitka_Cell_SET(var_value_exclude, tmp_assign_source_2);

}
{
PyObject *tmp_assign_source_3;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(par_include);
tmp_truth_name_3 = CHECK_IF_TRUE(par_include);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_called_instance_2 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_v);
tmp_args_element_value_3 = par_v;
CHECK_OBJECT(par_include);
tmp_args_element_value_4 = par_include;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 151;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_2,
        mod_consts.const_str_plain_ValueItems,
        call_args
    );
}

if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assign_source_3 = Py_None;
Py_INCREF(tmp_assign_source_3);
condexpr_end_2:;
assert(Nuitka_Cell_GET(var_value_include) == NULL);
Nuitka_Cell_SET(var_value_include, tmp_assign_source_3);

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
CHECK_OBJECT(par_v);
tmp_isinstance_inst_2 = par_v;
tmp_isinstance_cls_2 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_v);
tmp_expression_value_3 = par_v;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "coccoocccocco";
    goto try_except_handler_2;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 166;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "coccoocccocco";
    goto try_except_handler_2;
}
tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "coccoocccocco";
    goto try_except_handler_2;
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
type_description_1 = "coccoocccocco";
exception_lineno = 154;
        goto try_except_handler_3;
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
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "coccoocccocco";
    goto try_except_handler_4;
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



exception_lineno = 166;
type_description_1 = "coccoocccocco";
    goto try_except_handler_5;
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



exception_lineno = 166;
type_description_1 = "coccoocccocco";
    goto try_except_handler_5;
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



exception_lineno = 166;
type_description_1 = "coccoocccocco";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
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

goto try_except_handler_3;
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
    PyObject *old = outline_0_var_k_;
    outline_0_var_k_ = tmp_assign_source_10;
    Py_INCREF(outline_0_var_k_);
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
    PyObject *old = outline_0_var_v_;
    outline_0_var_v_ = tmp_assign_source_11;
    Py_INCREF(outline_0_var_v_);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_5;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_6;
int tmp_truth_name_4;
if (Nuitka_Cell_GET(var_value_exclude) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_operand_value_1 = Nuitka_Cell_GET(var_value_exclude);
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(var_value_exclude) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 167;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_called_instance_3 = Nuitka_Cell_GET(var_value_exclude);
CHECK_OBJECT(outline_0_var_k_);
tmp_args_element_value_5 = outline_0_var_k_;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 167;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_is_excluded, tmp_args_element_value_5);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_or_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_left_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(var_value_include) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_operand_value_3 = Nuitka_Cell_GET(var_value_include);
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_or_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (Nuitka_Cell_GET(var_value_include) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 168;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_called_instance_4 = Nuitka_Cell_GET(var_value_include);
CHECK_OBJECT(outline_0_var_k_);
tmp_args_element_value_6 = outline_0_var_k_;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 168;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_is_included, tmp_args_element_value_6);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 168;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_or_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_7;
PyObject *tmp_kw_call_dict_value_5_1;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_8;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_0_var_k_);
tmp_dictset38_key_1 = outline_0_var_k_;
tmp_called_value_4 = module_var_accessor_pydantic$deprecated$copy_internals$_get_value(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_value);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
if (Nuitka_Cell_GET(par_cls) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 156;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(par_cls);
CHECK_OBJECT(outline_0_var_v_);
tmp_kw_call_arg_value_1_1 = outline_0_var_v_;
if (Nuitka_Cell_GET(par_to_dict) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_dict);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 158;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(par_to_dict);
if (Nuitka_Cell_GET(par_by_alias) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_by_alias);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 159;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(par_by_alias);
if (Nuitka_Cell_GET(par_exclude_unset) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exclude_unset);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 160;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(par_exclude_unset);
if (Nuitka_Cell_GET(par_exclude_defaults) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exclude_defaults);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 161;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(par_exclude_defaults);
if (Nuitka_Cell_GET(var_value_include) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 162;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_and_left_value_2 = Nuitka_Cell_GET(var_value_include);
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(var_value_include) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 162;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_called_instance_5 = Nuitka_Cell_GET(var_value_include);
CHECK_OBJECT(outline_0_var_k_);
tmp_args_element_value_7 = outline_0_var_k_;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 162;
tmp_and_right_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_for_element, tmp_args_element_value_7);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_kw_call_dict_value_4_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
Py_INCREF(tmp_and_left_value_2);
tmp_kw_call_dict_value_4_1 = tmp_and_left_value_2;
and_end_2:;
if (Nuitka_Cell_GET(var_value_exclude) == NULL) {
Py_DECREF(tmp_kw_call_dict_value_4_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_and_left_value_3 = Nuitka_Cell_GET(var_value_exclude);
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_dict_value_4_1);

exception_lineno = 163;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
if (Nuitka_Cell_GET(var_value_exclude) == NULL) {
Py_DECREF(tmp_kw_call_dict_value_4_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 163;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_called_instance_6 = Nuitka_Cell_GET(var_value_exclude);
CHECK_OBJECT(outline_0_var_k_);
tmp_args_element_value_8 = outline_0_var_k_;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 163;
tmp_and_right_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_for_element, tmp_args_element_value_8);
if (tmp_and_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_dict_value_4_1);

exception_lineno = 163;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
tmp_kw_call_dict_value_5_1 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
Py_INCREF(tmp_and_left_value_3);
tmp_kw_call_dict_value_5_1 = tmp_and_left_value_3;
and_end_3:;
if (Nuitka_Cell_GET(par_exclude_none) == NULL) {
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_exclude_none);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 164;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}

tmp_kw_call_dict_value_6_1 = Nuitka_Cell_GET(par_exclude_none);
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 155;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_dictset38_value_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_c23655565a26d2a28ac44f8049c06d59_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
CHECK_OBJECT(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
assert(PyDict_CheckExact(tmp_dictset38_dict_1));
tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

CHECK_OBJECT(tmp_dictset38_value_1);
Py_DECREF(tmp_dictset38_value_1);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_1 = "coccoocccocco";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_return_value = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_return_value);
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

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_k_);
outline_0_var_k_ = NULL;
Py_XDECREF(outline_0_var_v_);
outline_0_var_v_ = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k_);
outline_0_var_k_ = NULL;
Py_XDECREF(outline_0_var_v_);
outline_0_var_v_ = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 154;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_called_instance_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_9;
int tmp_truth_name_5;
tmp_called_instance_7 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_called_instance_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_v);
tmp_args_element_value_9 = par_v;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 171;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_sequence_like, tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 171;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_12;
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
tmp_called_value_5 = (PyObject *)&PyEnum_Type;
CHECK_OBJECT(par_v);
tmp_args_element_value_10 = par_v;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 184;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_10);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_13;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[9];
tmp_closure_1[0] = par_by_alias;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_cls;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_exclude_defaults;
Py_INCREF(tmp_closure_1[2]);
tmp_closure_1[3] = par_exclude_none;
Py_INCREF(tmp_closure_1[3]);
tmp_closure_1[4] = par_exclude_unset;
Py_INCREF(tmp_closure_1[4]);
tmp_closure_1[5] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_closure_1[6] = par_to_dict;
Py_INCREF(tmp_closure_1[6]);
tmp_closure_1[7] = var_value_exclude;
Py_INCREF(tmp_closure_1[7]);
tmp_closure_1[8] = var_value_include;
Py_INCREF(tmp_closure_1[8]);
tmp_assign_source_12 = MAKE_GENERATOR_pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
assert(var_seq_args == NULL);
var_seq_args = tmp_assign_source_12;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_5;
int tmp_truth_name_6;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_12;
tmp_expression_value_4 = module_var_accessor_pydantic$deprecated$copy_internals$_typing_extra(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__typing_extra);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_is_namedtuple);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_v);
tmp_expression_value_5 = par_v;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_5);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 189;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(par_v);
tmp_expression_value_6 = par_v;
tmp_direct_call_arg1_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_6);
if (tmp_direct_call_arg1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_seq_args);
tmp_direct_call_arg2_1 = var_seq_args;
Py_INCREF(tmp_direct_call_arg2_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1, tmp_direct_call_arg2_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
goto condexpr_end_3;
condexpr_false_3:;
CHECK_OBJECT(par_v);
tmp_expression_value_7 = par_v;
tmp_called_value_7 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_7);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_seq_args);
tmp_args_element_value_12 = var_seq_args;
frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame.f_lineno = 189;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
condexpr_end_3:;
goto frame_return_exit_1;
}
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_9;
int tmp_and_left_truth_4;
nuitka_bool tmp_and_left_value_4;
nuitka_bool tmp_and_right_value_4;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_7;
CHECK_OBJECT(par_v);
tmp_isinstance_inst_3 = par_v;
tmp_isinstance_cls_3 = module_var_accessor_pydantic$deprecated$copy_internals$Enum(tstate);
if (unlikely(tmp_isinstance_cls_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Enum);
}

if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 191;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_and_left_value_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
tmp_expression_value_9 = Nuitka_Cell_GET(par_cls);
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_model_config);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_name_value_1 = mod_consts.const_str_plain_use_enum_values;
tmp_default_value_1 = Py_False;
tmp_capi_result_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_truth_name_7 = CHECK_IF_TRUE(tmp_capi_result_1);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_capi_result_1);

exception_lineno = 191;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
tmp_and_right_value_4 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
tmp_condition_result_9 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_9 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_v);
tmp_expression_value_10 = par_v;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_value);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "coccoocccocco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_6;
branch_no_6:;
CHECK_OBJECT(par_v);
tmp_return_value = par_v;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_6:;
branch_end_5:;
branch_end_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value,
    type_description_1,
    par_cls,
    par_v,
    par_to_dict,
    par_by_alias,
    par_include,
    par_exclude,
    par_exclude_unset,
    par_exclude_defaults,
    par_exclude_none,
    var_BaseModel,
    var_value_exclude,
    var_value_include,
    var_seq_args
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value == cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value);
    cache_frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$copy_internals$$$function__3__get_value);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_to_dict);
CHECK_OBJECT(par_to_dict);
Py_DECREF(par_to_dict);
par_to_dict = NULL;
CHECK_OBJECT(par_by_alias);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
par_by_alias = NULL;
CHECK_OBJECT(par_exclude_unset);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
par_exclude_unset = NULL;
CHECK_OBJECT(par_exclude_defaults);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
par_exclude_defaults = NULL;
CHECK_OBJECT(par_exclude_none);
CHECK_OBJECT(par_exclude_none);
Py_DECREF(par_exclude_none);
par_exclude_none = NULL;
CHECK_OBJECT(var_BaseModel);
CHECK_OBJECT(var_BaseModel);
Py_DECREF(var_BaseModel);
var_BaseModel = NULL;
CHECK_OBJECT(var_value_exclude);
CHECK_OBJECT(var_value_exclude);
Py_DECREF(var_value_exclude);
var_value_exclude = NULL;
CHECK_OBJECT(var_value_include);
CHECK_OBJECT(var_value_include);
Py_DECREF(var_value_include);
var_value_include = NULL;
Py_XDECREF(var_seq_args);
var_seq_args = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_cls);
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(par_to_dict);
CHECK_OBJECT(par_to_dict);
Py_DECREF(par_to_dict);
par_to_dict = NULL;
CHECK_OBJECT(par_by_alias);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
par_by_alias = NULL;
CHECK_OBJECT(par_exclude_unset);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
par_exclude_unset = NULL;
CHECK_OBJECT(par_exclude_defaults);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
par_exclude_defaults = NULL;
CHECK_OBJECT(par_exclude_none);
CHECK_OBJECT(par_exclude_none);
Py_DECREF(par_exclude_none);
par_exclude_none = NULL;
Py_XDECREF(var_BaseModel);
var_BaseModel = NULL;
CHECK_OBJECT(var_value_exclude);
CHECK_OBJECT(var_value_exclude);
Py_DECREF(var_value_exclude);
var_value_exclude = NULL;
CHECK_OBJECT(var_value_include);
CHECK_OBJECT(var_value_include);
Py_DECREF(var_value_include);
var_value_include = NULL;
Py_XDECREF(var_seq_args);
var_seq_args = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_v);
Py_DECREF(par_v);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_v);
Py_DECREF(par_v);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr_locals {
PyObject *var_i;
PyObject *var_v_;
PyObject *tmp_iter_value_0;
PyObject *tmp_tuple_unpack_1__element_1;
PyObject *tmp_tuple_unpack_1__element_2;
PyObject *tmp_tuple_unpack_1__source_iter;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr_locals *generator_heap = (struct pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_i = NULL;
generator_heap->var_v_ = NULL;
generator_heap->tmp_iter_value_0 = NULL;
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a82f50791957dd15299d13c3c1f137f2, module_pydantic$deprecated$copy_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[5]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[5]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noocccccccc";
generator_heap->exception_lineno = 172;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = generator_heap->tmp_iter_value_0;
    generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(generator_heap->tmp_iter_value_0);
tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_3;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
    generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
    generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &generator_heap->exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_4;
}
{
    PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
    generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
generator_heap->tmp_result = UNPACK_ITERATOR_CHECK(tstate, &generator_heap->exception_state, tmp_iterator_name_1, 2);
if (generator_heap->tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 184;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_4;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_4:;
generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_1 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_1;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

goto try_except_handler_3;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_2 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
{
    PyObject *old = generator_heap->var_i;
    generator_heap->var_i = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_i);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
{
    PyObject *old = generator_heap->var_v_;
    generator_heap->var_v_ = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_v_);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_operand_value_1 = Nuitka_Cell_GET(generator->m_closure[7]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[7]);
CHECK_OBJECT(generator_heap->var_i);
tmp_args_element_value_1 = generator_heap->var_i;
generator->m_frame->m_frame.f_lineno = 185;
tmp_operand_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_excluded, tmp_args_element_value_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 185;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
tmp_or_right_value_1 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_left_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_operand_value_3 = Nuitka_Cell_GET(generator->m_closure[8]);
generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
tmp_or_left_value_2 = (generator_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[8]);
CHECK_OBJECT(generator_heap->var_i);
tmp_args_element_value_2 = generator_heap->var_i;
generator->m_frame->m_frame.f_lineno = 186;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_is_included, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_call_result_1);

generator_heap->exception_lineno = 186;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
tmp_or_right_value_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_right_value_1 = tmp_or_left_value_2;
or_end_2:;
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
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_call_dict_value_5_1;
int tmp_and_left_truth_3;
PyObject *tmp_and_left_value_3;
PyObject *tmp_and_right_value_3;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_call_dict_value_6_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_pydantic$deprecated$copy_internals$_get_value(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__get_value);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_cls);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 174;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_v_);
tmp_kw_call_arg_value_1_1 = generator_heap->var_v_;
if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_to_dict);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 176;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[6]);
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_by_alias);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 177;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[0]);
if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_unset);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 178;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_2_1 = Nuitka_Cell_GET(generator->m_closure[4]);
if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_defaults);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 179;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(generator->m_closure[2]);
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 180;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_and_left_value_2 = Nuitka_Cell_GET(generator->m_closure[8]);
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 180;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_include);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 180;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_called_instance_3 = Nuitka_Cell_GET(generator->m_closure[8]);
CHECK_OBJECT(generator_heap->var_i);
tmp_args_element_value_3 = generator_heap->var_i;
generator->m_frame->m_frame.f_lineno = 180;
tmp_and_right_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_for_element, tmp_args_element_value_3);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 180;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_4_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
Py_INCREF(tmp_and_left_value_2);
tmp_kw_call_dict_value_4_1 = tmp_and_left_value_2;
and_end_2:;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {
Py_DECREF(tmp_kw_call_dict_value_4_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 181;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_and_left_value_3 = Nuitka_Cell_GET(generator->m_closure[7]);
tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_dict_value_4_1);

generator_heap->exception_lineno = 181;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {
Py_DECREF(tmp_kw_call_dict_value_4_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_value_exclude);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 181;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_called_instance_4 = Nuitka_Cell_GET(generator->m_closure[7]);
CHECK_OBJECT(generator_heap->var_i);
tmp_args_element_value_4 = generator_heap->var_i;
generator->m_frame->m_frame.f_lineno = 181;
tmp_and_right_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_for_element, tmp_args_element_value_4);
if (tmp_and_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_kw_call_dict_value_4_1);

generator_heap->exception_lineno = 181;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
tmp_kw_call_dict_value_5_1 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
Py_INCREF(tmp_and_left_value_3);
tmp_kw_call_dict_value_5_1 = tmp_and_left_value_3;
and_end_3:;
if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {
Py_DECREF(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_exclude_none);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 182;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_6_1 = Nuitka_Cell_GET(generator->m_closure[3]);
generator->m_frame->m_frame.f_lineno = 173;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_c23655565a26d2a28ac44f8049c06d59_tuple);
}

CHECK_OBJECT(tmp_kw_call_dict_value_4_1);
Py_DECREF(tmp_kw_call_dict_value_4_1);
CHECK_OBJECT(tmp_kw_call_dict_value_5_1);
Py_DECREF(tmp_kw_call_dict_value_5_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), &tmp_and_left_truth_2, sizeof(int), &tmp_and_left_value_2, sizeof(PyObject *), &tmp_and_right_value_2, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_kw_call_dict_value_5_1, sizeof(PyObject *), &tmp_and_left_truth_3, sizeof(int), &tmp_and_left_value_3, sizeof(PyObject *), &tmp_and_right_value_3, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_kw_call_dict_value_6_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_arg_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_kw_call_dict_value_2_1, sizeof(PyObject *), &tmp_kw_call_dict_value_3_1, sizeof(PyObject *), &tmp_kw_call_dict_value_4_1, sizeof(PyObject *), &tmp_and_left_truth_2, sizeof(int), &tmp_and_left_value_2, sizeof(PyObject *), &tmp_and_right_value_2, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_kw_call_dict_value_5_1, sizeof(PyObject *), &tmp_and_left_truth_3, sizeof(int), &tmp_and_left_value_3, sizeof(PyObject *), &tmp_and_right_value_3, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_kw_call_dict_value_6_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 173;
generator_heap->type_description_1 = "Noocccccccc";
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


generator_heap->exception_lineno = 172;
generator_heap->type_description_1 = "Noocccccccc";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_2:;
generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_3 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_3;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;

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
    generator_heap->var_i,
    generator_heap->var_v_,
    generator->m_closure[7],
    generator->m_closure[8],
    generator->m_closure[1],
    generator->m_closure[6],
    generator->m_closure[0],
    generator->m_closure[4],
    generator->m_closure[2],
    generator->m_closure[3]
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
goto try_end_4;
// Exception handler code:
try_except_handler_1:;
generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
generator_heap->exception_lineno = 0;
generator_heap->exception_keeper_name_4 = generator_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&generator_heap->exception_state);

Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
Py_XDECREF(generator_heap->var_v_);
generator_heap->var_v_ = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_i);
generator_heap->var_i = NULL;
Py_XDECREF(generator_heap->var_v_);
generator_heap->var_v_ = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr_context,
        module_pydantic$deprecated$copy_internals,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_28d916a0d89179f109a3dfc37178bc8b,
#endif
        code_objects_a82f50791957dd15299d13c3c1f137f2,
        closure,
        9,
#if 1
        sizeof(struct pydantic$deprecated$copy_internals$$$function__3__get_value$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pydantic$deprecated$copy_internals$$$function__4__calculate_keys(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_include = python_pars[1];
PyObject *par_exclude = python_pars[2];
PyObject *par_exclude_unset = python_pars[3];
PyObject *par_update = python_pars[4];
PyObject *var_keys = NULL;
PyObject *outline_0_var_k = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *tmp_setcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_setcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_setcontraction_1__$0 = NULL;
PyObject *tmp_setcontraction_1__contraction = NULL;
PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
// Tried code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_include);
tmp_cmp_expr_left_1 = par_include;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_exclude);
tmp_cmp_expr_left_2 = par_exclude;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_exclude_unset);
tmp_cmp_expr_left_3 = par_exclude_unset;
tmp_cmp_expr_right_3 = Py_False;
tmp_and_right_value_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_condition_result_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_1 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
branch_no_1:;
if (isFrameUnusable(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys)) {
    Py_XDECREF(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys = MAKE_FUNCTION_FRAME(tstate, code_objects_f9e0971acddc8368ad6459ebcb3f6b0e, module_pydantic$deprecated$copy_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_type_description == NULL);
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys = cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_exclude_unset);
tmp_truth_name_1 = CHECK_IF_TRUE(par_exclude_unset);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___pydantic_fields_set__);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame.f_lineno = 210;
tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_keys == NULL);
var_keys = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_set_arg_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame.f_lineno = 212;
tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_keys == NULL);
var_keys = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_bitor_expr_left_1;
PyObject *tmp_bitor_expr_right_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_keys);
tmp_bitor_expr_left_1 = var_keys;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain___pydantic_extra__);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 213;
type_description_1 = "oooooo";
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
tmp_or_right_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_expression_value_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_expression_value_5 = tmp_or_left_value_1;
or_end_1:;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_keys);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame.f_lineno = 213;
tmp_bitor_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_bitor_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
CHECK_OBJECT(tmp_bitor_expr_right_1);
Py_DECREF(tmp_bitor_expr_right_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_keys;
    assert(old != NULL);
    var_keys = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_end_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_include);
tmp_cmp_expr_left_4 = par_include;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_ibitand_expr_left_1;
PyObject *tmp_ibitand_expr_right_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(var_keys);
tmp_ibitand_expr_left_1 = var_keys;
CHECK_OBJECT(par_include);
tmp_expression_value_7 = par_include;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_keys);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame.f_lineno = 216;
tmp_ibitand_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_ibitand_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_BITAND_OBJECT_OBJECT(&tmp_ibitand_expr_left_1, tmp_ibitand_expr_right_1);
CHECK_OBJECT(tmp_ibitand_expr_right_1);
Py_DECREF(tmp_ibitand_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = tmp_ibitand_expr_left_1;
var_keys = tmp_assign_source_4;

}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_update);
tmp_truth_name_2 = CHECK_IF_TRUE(par_update);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_isub_expr_left_1;
PyObject *tmp_isub_expr_right_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(var_keys);
tmp_isub_expr_left_1 = var_keys;
CHECK_OBJECT(par_update);
tmp_expression_value_8 = par_update;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_keys);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame.f_lineno = 219;
tmp_isub_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_isub_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
CHECK_OBJECT(tmp_isub_expr_right_1);
Py_DECREF(tmp_isub_expr_right_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = tmp_isub_expr_left_1;
var_keys = tmp_assign_source_5;

}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(par_exclude);
tmp_truth_name_3 = CHECK_IF_TRUE(par_exclude);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_isub_expr_left_2;
PyObject *tmp_isub_expr_right_2;
CHECK_OBJECT(var_keys);
tmp_isub_expr_left_2 = var_keys;
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_exclude);
tmp_expression_value_9 = par_exclude;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_items);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame.f_lineno = 222;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_2;
}
assert(tmp_setcontraction_1__$0 == NULL);
tmp_setcontraction_1__$0 = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = PySet_New(NULL);
assert(tmp_setcontraction_1__contraction == NULL);
tmp_setcontraction_1__contraction = tmp_assign_source_8;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_setcontraction_1__$0);
tmp_next_source_1 = tmp_setcontraction_1__$0;
tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_9 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooo";
exception_lineno = 222;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_setcontraction_1__iter_value_0;
    tmp_setcontraction_1__iter_value_0 = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_setcontraction_1__iter_value_0);
tmp_iter_arg_2 = tmp_setcontraction_1__iter_value_0;
tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_setcontraction$tuple_unpack_1__source_iter;
    tmp_setcontraction$tuple_unpack_1__source_iter = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_setcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_11 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_setcontraction$tuple_unpack_1__element_1;
    tmp_setcontraction$tuple_unpack_1__element_1 = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_setcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_12 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_setcontraction$tuple_unpack_1__element_2;
    tmp_setcontraction$tuple_unpack_1__element_2 = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_setcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_5;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_setcontraction$tuple_unpack_1__source_iter);
tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_4;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_1);
tmp_setcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_2);
tmp_setcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_setcontraction$tuple_unpack_1__source_iter);
tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_13;
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__element_1);
tmp_assign_source_13 = tmp_setcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_k;
    outline_0_var_k = tmp_assign_source_13;
    Py_INCREF(outline_0_var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_1);
tmp_setcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__element_2);
tmp_assign_source_14 = tmp_setcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_14;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_2);
tmp_setcontraction$tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_4;
tmp_expression_value_10 = module_var_accessor_pydantic$deprecated$copy_internals$_utils(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ValueItems);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_v);
tmp_args_element_value_1 = outline_0_var_v;
frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame.f_lineno = 222;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_true, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_add_set_1;
PyObject *tmp_add_value_1;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
tmp_add_set_1 = tmp_setcontraction_1__contraction;
CHECK_OBJECT(outline_0_var_k);
tmp_add_value_1 = outline_0_var_k;
assert(PySet_Check(tmp_add_set_1));
tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_setcontraction_1__contraction);
tmp_isub_expr_right_2 = tmp_setcontraction_1__contraction;
Py_INCREF(tmp_isub_expr_right_2);
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
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_k);
outline_0_var_k = NULL;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 222;
goto frame_exception_exit_1;
outline_result_1:;
tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
CHECK_OBJECT(tmp_isub_expr_right_2);
Py_DECREF(tmp_isub_expr_right_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_6 = tmp_isub_expr_left_2;
var_keys = tmp_assign_source_6;

}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys,
    type_description_1,
    par_self,
    par_include,
    par_exclude,
    par_exclude_unset,
    par_update,
    var_keys
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys == cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys);
    cache_frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys = NULL;
}

assertFrameObject(frame_frame_pydantic$deprecated$copy_internals$$$function__4__calculate_keys);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_keys);
tmp_return_value = var_keys;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_keys);
var_keys = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_keys);
var_keys = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_update);
Py_DECREF(par_update);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_update);
Py_DECREF(par_update);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__1__iter(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$copy_internals$$$function__1__iter,
        mod_consts.const_str_plain__iter,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_203f1e79fd8101c53f9c5f23cc540332,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$copy_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values,
        mod_consts.const_str_plain__copy_and_set_values,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_90e8161b705c273e109383a98269069b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$copy_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__3__get_value(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$copy_internals$$$function__3__get_value,
        mod_consts.const_str_plain__get_value,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_922cb2445176113da2ed7d84eef98c21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$copy_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__4__calculate_keys(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$deprecated$copy_internals$$$function__4__calculate_keys,
        mod_consts.const_str_plain__calculate_keys,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f9e0971acddc8368ad6459ebcb3f6b0e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$deprecated$copy_internals,
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

static function_impl_code const function_table_pydantic$deprecated$copy_internals[] = {
impl_pydantic$deprecated$copy_internals$$$function__1__iter,
impl_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values,
impl_pydantic$deprecated$copy_internals$$$function__3__get_value,
impl_pydantic$deprecated$copy_internals$$$function__4__calculate_keys,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$deprecated$copy_internals);
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
        module_pydantic$deprecated$copy_internals,
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
        function_table_pydantic$deprecated$copy_internals,
        sizeof(function_table_pydantic$deprecated$copy_internals) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic.deprecated.copy_internals";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$deprecated$copy_internals(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$deprecated$copy_internals");

    // Store the module for future use.
    module_pydantic$deprecated$copy_internals = module;

    moduledict_pydantic$deprecated$copy_internals = MODULE_DICT(module_pydantic$deprecated$copy_internals);

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
        PRINT_STRING("pydantic$deprecated$copy_internals: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$deprecated$copy_internals: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$deprecated$copy_internals: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.deprecated.copy_internals" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$deprecated$copy_internals\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$deprecated$copy_internals,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$deprecated$copy_internals,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$deprecated$copy_internals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$deprecated$copy_internals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$deprecated$copy_internals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$deprecated$copy_internals);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$deprecated$copy_internals);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$deprecated$copy_internals;
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
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$deprecated$copy_internals = MAKE_MODULE_FRAME(code_objects_b7622b4877cffca8f4e29235a2f8f754, module_pydantic$deprecated$copy_internals);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$deprecated$copy_internals);
assert(Py_REFCNT(frame_frame_pydantic$deprecated$copy_internals) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$deprecated$copy_internals$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$deprecated$copy_internals$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_copy;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$deprecated$copy_internals;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_deepcopy_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$deprecated$copy_internals->m_frame.f_lineno = 4;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$deprecated$copy_internals,
        mod_consts.const_str_plain_deepcopy,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_deepcopy);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_deepcopy, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_enum;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$deprecated$copy_internals;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Enum_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$deprecated$copy_internals->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$deprecated$copy_internals,
        mod_consts.const_str_plain_Enum,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Enum);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_Enum, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
tmp_import_name_from_3 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_3 == NULL));
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$deprecated$copy_internals,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$deprecated$copy_internals;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$deprecated$copy_internals->m_frame.f_lineno = 8;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_extensions, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__internal;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$deprecated$copy_internals;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_f21a3ae42bba7b9e47d0c2b555425af0_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_pydantic$deprecated$copy_internals->m_frame.f_lineno = 10;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$deprecated$copy_internals,
        mod_consts.const_str_plain__model_construction,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__model_construction);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__model_construction, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$deprecated$copy_internals,
        mod_consts.const_str_plain__typing_extra,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__typing_extra);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$deprecated$copy_internals,
        mod_consts.const_str_plain__utils,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain__utils);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__utils, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_pydantic$deprecated$copy_internals$_model_construction(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__model_construction);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 26;

    goto frame_exception_exit_1;
}
tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_object_setattr);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__object_setattr, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_false_false_none_none_false_false_false_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_6a0b92602f3e1c0e141932fe154d7a61);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_16 = MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__1__iter(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__iter, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
tmp_defaults_2 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a0fbd43841514a6d48384776cdc6ca34);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_17 = MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__2__copy_and_set_values(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__copy_and_set_values, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_3;
tmp_called_instance_1 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_1 == NULL));
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_bc4ff50d41ce0e1e33cfd4f54dce28e9);

tmp_args_element_value_1 = MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__3__get_value(tstate, tmp_annotations_3);

frame_frame_pydantic$deprecated$copy_internals->m_frame.f_lineno = 123;
tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_no_type_check, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__get_value, tmp_assign_source_18);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$deprecated$copy_internals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$deprecated$copy_internals->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$deprecated$copy_internals, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$deprecated$copy_internals);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_4;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_4c2365f5a7224ed7ed752e84bb0fec28);
Py_INCREF(tmp_defaults_3);

tmp_assign_source_19 = MAKE_FUNCTION_pydantic$deprecated$copy_internals$$$function__4__calculate_keys(tstate, tmp_defaults_3, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)mod_consts.const_str_plain__calculate_keys, tmp_assign_source_19);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$deprecated$copy_internals", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.deprecated.copy_internals" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$deprecated$copy_internals);
    return module_pydantic$deprecated$copy_internals;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$deprecated$copy_internals, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$deprecated$copy_internals", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

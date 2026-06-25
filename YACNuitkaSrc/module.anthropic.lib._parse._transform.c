/* Generated code for Python module 'anthropic$lib$_parse$_transform'
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



/* The "module_anthropic$lib$_parse$_transform" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anthropic$lib$_parse$_transform;
PyDictObject *moduledict_anthropic$lib$_parse$_transform;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_str_plain_string;
PyObject *const_str_plain_text;
PyObject *const_str_digest_cbebdd508e6bdc7c35d5a5885373b438;
PyObject *const_str_plain_isclass;
PyObject *const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_plain_model_json_schema;
PyObject *const_str_plain_json_schema;
PyObject *const_str_plain_pop;
PyObject *const_tuple_str_digest_99b2b9518bc27b61b80729fcb0aefd4f_none_tuple;
PyObject *const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f;
PyObject *const_tuple_str_digest_59c05edaddbb3847eda2f4057a659d50_none_tuple;
PyObject *const_str_digest_59c05edaddbb3847eda2f4057a659d50;
PyObject *const_str_plain_items;
PyObject *const_str_plain_transform_schema;
PyObject *const_str_plain_strict_defs;
PyObject *const_tuple_str_plain_type_none_tuple;
PyObject *const_tuple_str_plain_anyOf_none_tuple;
PyObject *const_tuple_str_plain_oneOf_none_tuple;
PyObject *const_tuple_str_plain_allOf_none_tuple;
PyObject *const_str_plain_is_list;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_bb369f95d9725c681f56f5ecd53d874b;
PyObject *const_str_plain_anyOf;
PyObject *const_str_plain_allOf;
PyObject *const_str_digest_38385cac0f9d21a03c0f64b61e7ed310;
PyObject *const_tuple_str_plain_enum_none_tuple;
PyObject *const_str_plain_enum;
PyObject *const_tuple_str_plain_description_none_tuple;
PyObject *const_str_plain_description;
PyObject *const_tuple_str_plain_title_none_tuple;
PyObject *const_str_plain_title;
PyObject *const_str_plain_object;
PyObject *const_str_plain_properties;
PyObject *const_tuple_str_plain_additionalProperties_none_tuple;
PyObject *const_str_plain_additionalProperties;
PyObject *const_tuple_str_plain_required_none_tuple;
PyObject *const_str_plain_required;
PyObject *const_tuple_str_plain_format_none_tuple;
PyObject *const_str_plain_SupportedStringFormats;
PyObject *const_str_plain_array;
PyObject *const_tuple_str_plain_items_none_tuple;
PyObject *const_tuple_str_plain_minItems_none_tuple;
PyObject *const_str_plain_minItems;
PyObject *const_str_plain_boolean;
PyObject *const_str_plain_integer;
PyObject *const_str_plain_number;
PyObject *const_str_plain_null;
PyObject *const_str_plain_assert_never;
PyObject *const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
PyObject *const_str_chr_123;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_chr_125;
PyObject *const_str_digest_4af4baf3d1fd734eb7deb40e570d0af8;
PyObject *const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_7b3caaef0d3b9952406d5d7a5072929d;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_assert_never_tuple;
PyObject *const_str_plain_pydantic;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_is_list_tuple;
PyObject *const_int_pos_3;
PyObject *const_tuple_6c1750407f3be7e900a59136a93599a0_tuple;
PyObject *const_str_plain_SupportedTypes;
PyObject *const_set_84c4bd0f15af153fbc4c7395975023dc;
PyObject *const_dict_22bdd82d1787c301c9ea0a2c8b061daf;
PyObject *const_str_plain_get_transformed_string;
PyObject *const_dict_72353eab251d4c4e74be0888f5cc3c28;
PyObject *const_str_digest_50c8805fb9e41c54185b874d894afd7c;
PyObject *const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple;
PyObject *const_str_digest_57f199daf84959936350dbb49f925403;
PyObject *const_tuple_str_plain_schema_tuple;
PyObject *const_tuple_a3b876217e8df792bbbe135b1f03a51c_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[81];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("anthropic.lib._parse._transform"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_string);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_cbebdd508e6bdc7c35d5a5885373b438);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_isclass);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_json_schema);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_pop);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_99b2b9518bc27b61b80729fcb0aefd4f_none_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_59c05edaddbb3847eda2f4057a659d50_none_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_transform_schema);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_strict_defs);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_none_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_anyOf_none_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_oneOf_none_tuple);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_allOf_none_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_list);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_anyOf);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_allOf);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_38385cac0f9d21a03c0f64b61e7ed310);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_enum_none_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_none_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_none_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_properties);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_additionalProperties_none_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_additionalProperties);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_required_none_tuple);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_required);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_format_none_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportedStringFormats);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_items_none_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minItems_none_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_minItems);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_boolean);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_integer);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_number);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_null);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_chr_123);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_chr_125);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_4af4baf3d1fd734eb7deb40e570d0af8);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_7b3caaef0d3b9952406d5d7a5072929d);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_assert_never_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_list_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_6c1750407f3be7e900a59136a93599a0_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_SupportedTypes);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_set_84c4bd0f15af153fbc4c7395975023dc);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_dict_22bdd82d1787c301c9ea0a2c8b061daf);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_transformed_string);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_72353eab251d4c4e74be0888f5cc3c28);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_50c8805fb9e41c54185b874d894afd7c);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_57f199daf84959936350dbb49f925403);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_schema_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_a3b876217e8df792bbbe135b1f03a51c_tuple);
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
void checkModuleConstants_anthropic$lib$_parse$_transform(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_string);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_cbebdd508e6bdc7c35d5a5885373b438));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cbebdd508e6bdc7c35d5a5885373b438);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_isclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isclass);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_json_schema);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_schema);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_pop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pop);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_99b2b9518bc27b61b80729fcb0aefd4f_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_99b2b9518bc27b61b80729fcb0aefd4f_none_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_59c05edaddbb3847eda2f4057a659d50_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_59c05edaddbb3847eda2f4057a659d50_none_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_transform_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transform_schema);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_strict_defs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strict_defs);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_none_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_anyOf_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_anyOf_none_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_oneOf_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_oneOf_none_tuple);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_allOf_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_allOf_none_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_list);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_anyOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_anyOf);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_allOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_allOf);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_38385cac0f9d21a03c0f64b61e7ed310));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_38385cac0f9d21a03c0f64b61e7ed310);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_enum_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_enum_none_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_description_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_description_none_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_title_none_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_title);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_properties));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_properties);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_additionalProperties_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_additionalProperties_none_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_additionalProperties));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_additionalProperties);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_required_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_required_none_tuple);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_required);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_format_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_format_none_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportedStringFormats));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportedStringFormats);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_items_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_items_none_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_minItems_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_minItems_none_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_minItems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_minItems);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_boolean));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_boolean);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_integer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_integer);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_number));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_number);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_null));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_null);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_assert_never));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_assert_never);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_chr_123));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_123);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_chr_125));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_125);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_4af4baf3d1fd734eb7deb40e570d0af8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4af4baf3d1fd734eb7deb40e570d0af8);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_7b3caaef0d3b9952406d5d7a5072929d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7b3caaef0d3b9952406d5d7a5072929d);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_assert_never_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_assert_never_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_list_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_list_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_6c1750407f3be7e900a59136a93599a0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6c1750407f3be7e900a59136a93599a0_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_SupportedTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SupportedTypes);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_set_84c4bd0f15af153fbc4c7395975023dc));
CHECK_OBJECT_DEEP(mod_consts.const_set_84c4bd0f15af153fbc4c7395975023dc);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_dict_22bdd82d1787c301c9ea0a2c8b061daf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_22bdd82d1787c301c9ea0a2c8b061daf);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_transformed_string));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_transformed_string);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_72353eab251d4c4e74be0888f5cc3c28));
CHECK_OBJECT_DEEP(mod_consts.const_dict_72353eab251d4c4e74be0888f5cc3c28);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_50c8805fb9e41c54185b874d894afd7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50c8805fb9e41c54185b874d894afd7c);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_57f199daf84959936350dbb49f925403));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_57f199daf84959936350dbb49f925403);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_schema_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_schema_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_a3b876217e8df792bbbe135b1f03a51c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a3b876217e8df792bbbe135b1f03a51c_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 8
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
static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$Literal(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Literal);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Literal, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$SupportedStringFormats(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportedStringFormats);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportedStringFormats);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportedStringFormats, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SupportedStringFormats);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SupportedStringFormats, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportedStringFormats);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportedStringFormats);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportedStringFormats);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$assert_never(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_assert_never);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_assert_never, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_assert_never);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_assert_never, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cast);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cast, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_inspect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_inspect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$is_list(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_list);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_list, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_list);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_list, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list);
    }

    return result;
}

static PyObject *module_var_accessor_anthropic$lib$_parse$_transform$transform_schema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_anthropic$lib$_parse$_transform->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_anthropic$lib$_parse$_transform->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_transform_schema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_anthropic$lib$_parse$_transform->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transform_schema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transform_schema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_transform_schema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_transform_schema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_transform_schema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_transform_schema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_transform_schema);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_574a8fd81ad8cee2876585503b7a334d;
static PyCodeObject *code_objects_01b20c5767fa4a2b20754ec96c021fb7;
static PyCodeObject *code_objects_34a76b2bc8be48bb81743e09500ed08c;
static PyCodeObject *code_objects_64ace6976b49db237e5f7291319fd437;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_50c8805fb9e41c54185b874d894afd7c); CHECK_OBJECT(module_filename_obj);
code_objects_574a8fd81ad8cee2876585503b7a334d = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_7b3caaef0d3b9952406d5d7a5072929d, mod_consts.const_tuple_238aacbbee4fec8ca2895e8c7cdd6402_tuple, NULL, 1, 0, 0);
code_objects_01b20c5767fa4a2b20754ec96c021fb7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_57f199daf84959936350dbb49f925403, mod_consts.const_str_digest_57f199daf84959936350dbb49f925403, NULL, NULL, 0, 0, 0);
code_objects_34a76b2bc8be48bb81743e09500ed08c = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_transformed_string, mod_consts.const_str_plain_get_transformed_string, mod_consts.const_tuple_str_plain_schema_tuple, NULL, 1, 0, 0);
code_objects_64ace6976b49db237e5f7291319fd437 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_transform_schema, mod_consts.const_str_plain_transform_schema, mod_consts.const_tuple_a3b876217e8df792bbbe135b1f03a51c_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_transform$$$function__2_transform_schema(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string = MAKE_FUNCTION_FRAME(tstate, code_objects_34a76b2bc8be48bb81743e09500ed08c, module_anthropic$lib$_parse$_transform, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string->m_type_description == NULL);
frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string = cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string);
assert(Py_REFCNT(frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_schema);
tmp_expression_value_1 = par_schema;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string->m_frame.f_lineno = 49;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_type_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_string;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_cmp_expr_left_2 = const_str_plain_format;
CHECK_OBJECT(par_schema);
tmp_cmp_expr_right_2 = par_schema;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "o";
    goto frame_exception_exit_1;
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
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_text;
CHECK_OBJECT(par_schema);
tmp_ass_subscribed_1 = par_schema;
tmp_ass_subscript_1 = const_str_plain_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string,
    type_description_1,
    par_schema
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string == cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string);
    cache_frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_schema);
tmp_return_value = par_schema;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_schema);
Py_DECREF(par_schema);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_schema);
Py_DECREF(par_schema);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_anthropic$lib$_parse$_transform$$$function__2_transform_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_json_schema = python_pars[0];
PyObject *var_strict_schema = NULL;
PyObject *var_strict_defs = NULL;
PyObject *var_type_ = NULL;
PyObject *var_ref = NULL;
PyObject *var_defs = NULL;
PyObject *var_name = NULL;
PyObject *var_schema = NULL;
PyObject *var_any_of = NULL;
PyObject *var_one_of = NULL;
PyObject *var_all_of = NULL;
PyObject *var_enum = NULL;
PyObject *var_description = NULL;
PyObject *var_title = NULL;
PyObject *var_required = NULL;
PyObject *var_format = NULL;
PyObject *var_items = NULL;
PyObject *var_min_items = NULL;
PyObject *outline_0_var_variant = NULL;
PyObject *outline_1_var_variant = NULL;
PyObject *outline_2_var_variant = NULL;
PyObject *outline_3_var_key = NULL;
PyObject *outline_3_var_prop_schema = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_dictcontraction_1__$0 = NULL;
PyObject *tmp_dictcontraction_1__contraction = NULL;
PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
PyObject *tmp_listcomp_3__$0 = NULL;
PyObject *tmp_listcomp_3__contraction = NULL;
PyObject *tmp_listcomp_3__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema)) {
    Py_XDECREF(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_64ace6976b49db237e5f7291319fd437, module_anthropic$lib$_parse$_transform, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_type_description == NULL);
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema = cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema);
assert(Py_REFCNT(frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
tmp_called_instance_1 = module_var_accessor_anthropic$lib$_parse$_transform$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_json_schema);
tmp_args_element_value_1 = par_json_schema;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 77;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isclass, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 77;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_json_schema);
tmp_issubclass_cls_1 = par_json_schema;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 77;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
    if (likely(hard_module != NULL)) {
        tmp_issubclass_classes_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BaseModel);

        Py_DECREF(hard_module);

    } else {
        tmp_issubclass_classes_1 = NULL;
    }
}
if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_json_schema);
tmp_called_instance_2 = par_json_schema;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 78;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_model_json_schema);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_json_schema;
    assert(old != NULL);
    par_json_schema = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_DICT_EMPTY(tstate);
assert(var_strict_schema == NULL);
var_strict_schema = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
if (par_json_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_json_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 81;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = par_json_schema;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_3 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_json_schema;
    par_json_schema = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_1 = par_json_schema;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pop);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 83;
tmp_assign_source_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_99b2b9518bc27b61b80729fcb0aefd4f_none_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_ref == NULL);
var_ref = tmp_assign_source_4;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_ref);
tmp_cmp_expr_left_1 = var_ref;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
CHECK_OBJECT(var_ref);
tmp_dictset_value = var_ref;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
CHECK_OBJECT(var_strict_schema);
tmp_return_value = var_strict_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_2 = par_json_schema;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_pop);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 88;
tmp_assign_source_5 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_59c05edaddbb3847eda2f4057a659d50_none_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_defs == NULL);
var_defs = tmp_assign_source_5;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_defs);
tmp_cmp_expr_left_2 = var_defs;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
assert(var_strict_defs == NULL);
var_strict_defs = tmp_assign_source_6;
}
CHECK_OBJECT(var_strict_defs);
tmp_dictset_value = var_strict_defs;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_7;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_defs);
tmp_expression_value_3 = var_defs;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_items);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 93;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_7;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 93;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_3;
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



exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_4;
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



exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_4;
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



exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
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
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_name;
    var_name = tmp_assign_source_12;
    Py_INCREF(var_name);
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
    PyObject *old = var_schema;
    var_schema = tmp_assign_source_13;
    Py_INCREF(var_schema);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_2;
tmp_called_value_4 = module_var_accessor_anthropic$lib$_parse$_transform$transform_schema(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform_schema);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_schema);
tmp_args_element_value_2 = var_schema;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 94;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
if (var_strict_defs == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strict_defs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 94;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_strict_defs;
CHECK_OBJECT(var_name);
tmp_dictset_key = var_name;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_2;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "oooooooooooooooooo";
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
branch_no_3:;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_4 = par_json_schema;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_pop);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 96;
tmp_assign_source_14 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_type_none_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_type_ == NULL);
var_type_ = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_5 = par_json_schema;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_pop);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 97;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_anyOf_none_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_any_of == NULL);
var_any_of = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_6 = par_json_schema;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_pop);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 98;
tmp_assign_source_16 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_oneOf_none_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_one_of == NULL);
var_one_of = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_7 = par_json_schema;
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_pop);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 99;
tmp_assign_source_17 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_allOf_none_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_all_of == NULL);
var_all_of = tmp_assign_source_17;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_2;
tmp_called_value_9 = module_var_accessor_anthropic$lib$_parse$_transform$is_list(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_list);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_any_of);
tmp_args_element_value_3 = var_any_of;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 101;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_3);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 101;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_any_of);
tmp_iter_arg_3 = var_any_of;
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_19;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_2 = tmp_listcomp_1__$0;
tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_20 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 102;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_20;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_21 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_variant;
    outline_0_var_variant = tmp_assign_source_21;
    Py_INCREF(outline_0_var_variant);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_10 = module_var_accessor_anthropic$lib$_parse$_transform$transform_schema(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform_schema);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_called_value_11 = module_var_accessor_anthropic$lib$_parse$_transform$cast(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_args_element_value_5 = mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b;
CHECK_OBJECT(outline_0_var_variant);
tmp_args_element_value_6 = outline_0_var_variant;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 102;
tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_dictset_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_6;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_5;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_1__$0);
CHECK_OBJECT(tmp_listcomp_1__$0);
Py_DECREF(tmp_listcomp_1__$0);
tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_1__contraction);
CHECK_OBJECT(tmp_listcomp_1__contraction);
Py_DECREF(tmp_listcomp_1__contraction);
tmp_listcomp_1__contraction = NULL;
Py_XDECREF(tmp_listcomp_1__iter_value_0);
tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_XDECREF(outline_0_var_variant);
outline_0_var_variant = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_variant);
outline_0_var_variant = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 102;
goto frame_exception_exit_1;
outline_result_1:;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_anyOf;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
goto branch_end_4;
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_called_value_12;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_7;
int tmp_truth_name_3;
tmp_called_value_12 = module_var_accessor_anthropic$lib$_parse$_transform$is_list(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_list);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_one_of);
tmp_args_element_value_7 = var_one_of;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 103;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_7);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 103;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_one_of);
tmp_iter_arg_4 = var_one_of;
tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_7;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_23;
}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_24;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_3 = tmp_listcomp_2__$0;
tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_24 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 104;
        goto try_except_handler_8;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_24;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_25 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_variant;
    outline_1_var_variant = tmp_assign_source_25;
    Py_INCREF(outline_1_var_variant);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_called_value_13 = module_var_accessor_anthropic$lib$_parse$_transform$transform_schema(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform_schema);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_called_value_14 = module_var_accessor_anthropic$lib$_parse$_transform$cast(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_args_element_value_9 = mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b;
CHECK_OBJECT(outline_1_var_variant);
tmp_args_element_value_10 = outline_1_var_variant;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 104;
{
    PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
    tmp_args_element_value_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 104;
tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_8);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_8;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_dictset_value = tmp_listcomp_2__contraction;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
Py_XDECREF(outline_1_var_variant);
outline_1_var_variant = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_variant);
outline_1_var_variant = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 104;
goto frame_exception_exit_1;
outline_result_2:;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_anyOf;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
goto branch_end_5;
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_11;
int tmp_truth_name_4;
tmp_called_value_15 = module_var_accessor_anthropic$lib$_parse$_transform$is_list(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_list);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_all_of);
tmp_args_element_value_11 = var_all_of;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 105;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_11);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 105;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(var_all_of);
tmp_iter_arg_5 = var_all_of;
tmp_assign_source_26 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_9;
}
assert(tmp_listcomp_3__$0 == NULL);
tmp_listcomp_3__$0 = tmp_assign_source_26;
}
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_3__contraction == NULL);
tmp_listcomp_3__contraction = tmp_assign_source_27;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_28;
CHECK_OBJECT(tmp_listcomp_3__$0);
tmp_next_source_4 = tmp_listcomp_3__$0;
tmp_assign_source_28 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_28 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 106;
        goto try_except_handler_10;
    }
}

{
    PyObject *old = tmp_listcomp_3__iter_value_0;
    tmp_listcomp_3__iter_value_0 = tmp_assign_source_28;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_29;
CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
tmp_assign_source_29 = tmp_listcomp_3__iter_value_0;
{
    PyObject *old = outline_2_var_variant;
    outline_2_var_variant = tmp_assign_source_29;
    Py_INCREF(outline_2_var_variant);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_3;
PyObject *tmp_append_value_3;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_append_list_3 = tmp_listcomp_3__contraction;
tmp_called_value_16 = module_var_accessor_anthropic$lib$_parse$_transform$transform_schema(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform_schema);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_17 = module_var_accessor_anthropic$lib$_parse$_transform$cast(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_args_element_value_13 = mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b;
CHECK_OBJECT(outline_2_var_variant);
tmp_args_element_value_14 = outline_2_var_variant;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 106;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 106;
tmp_append_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_12);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_append_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_10;
}
goto loop_start_4;
loop_end_4:;
CHECK_OBJECT(tmp_listcomp_3__contraction);
tmp_dictset_value = tmp_listcomp_3__contraction;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_3__$0);
CHECK_OBJECT(tmp_listcomp_3__$0);
Py_DECREF(tmp_listcomp_3__$0);
tmp_listcomp_3__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_3__contraction);
CHECK_OBJECT(tmp_listcomp_3__contraction);
Py_DECREF(tmp_listcomp_3__contraction);
tmp_listcomp_3__contraction = NULL;
Py_XDECREF(tmp_listcomp_3__iter_value_0);
tmp_listcomp_3__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_XDECREF(outline_2_var_variant);
outline_2_var_variant = NULL;
goto outline_result_3;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_2_var_variant);
outline_2_var_variant = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 106;
goto frame_exception_exit_1;
outline_result_3:;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_allOf;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
goto branch_end_6;
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_3 = var_type_;
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_38385cac0f9d21a03c0f64b61e7ed310;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 109;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 109;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_7:;
CHECK_OBJECT(var_type_);
tmp_dictset_value = var_type_;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = const_str_plain_type;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_end_6:;
branch_end_5:;
branch_end_4:;
{
PyObject *tmp_assign_source_30;
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_8 = par_json_schema;
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_pop);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 113;
tmp_assign_source_30 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_18, mod_consts.const_tuple_str_plain_enum_none_tuple);

CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_enum == NULL);
var_enum = tmp_assign_source_30;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_19;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_15;
int tmp_truth_name_5;
tmp_called_value_19 = module_var_accessor_anthropic$lib$_parse$_transform$is_list(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_list);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_enum);
tmp_args_element_value_15 = var_enum;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 114;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_15);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_5);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_5);

exception_lineno = 114;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(var_enum);
tmp_dictset_value = var_enum;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_enum;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_8:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_9 = par_json_schema;
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_pop);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 117;
tmp_assign_source_31 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_20, mod_consts.const_tuple_str_plain_description_none_tuple);

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_description == NULL);
var_description = tmp_assign_source_31;
}
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_description);
tmp_cmp_expr_left_4 = var_description;
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(var_description);
tmp_dictset_value = var_description;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_description;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_9:;
{
PyObject *tmp_assign_source_32;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_10 = par_json_schema;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_pop);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 121;
tmp_assign_source_32 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_21, mod_consts.const_tuple_str_plain_title_none_tuple);

CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 121;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_title == NULL);
var_title = tmp_assign_source_32;
}
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_title);
tmp_cmp_expr_left_5 = var_title;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
CHECK_OBJECT(var_title);
tmp_dictset_value = var_title;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_title;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_10:;
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_6 = var_type_;
tmp_cmp_expr_right_6 = mod_consts.const_str_plain_object;
tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
// Tried code:
{
PyObject *tmp_assign_source_33;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_11;
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_12;
PyObject *tmp_call_arg_element_1;
PyObject *tmp_call_arg_element_2;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_12 = par_json_schema;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_pop);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_call_arg_element_1 = mod_consts.const_str_plain_properties;
tmp_call_arg_element_2 = MAKE_DICT_EMPTY(tstate);
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
    tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_call_arg_element_2);
Py_DECREF(tmp_call_arg_element_2);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 127;
tmp_iter_arg_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_22);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
tmp_assign_source_33 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_11;
}
assert(tmp_dictcontraction_1__$0 == NULL);
tmp_dictcontraction_1__$0 = tmp_assign_source_33;
}
{
PyObject *tmp_assign_source_34;
tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
assert(tmp_dictcontraction_1__contraction == NULL);
tmp_dictcontraction_1__contraction = tmp_assign_source_34;
}
// Tried code:
loop_start_5:;
{
PyObject *tmp_next_source_5;
PyObject *tmp_assign_source_35;
CHECK_OBJECT(tmp_dictcontraction_1__$0);
tmp_next_source_5 = tmp_dictcontraction_1__$0;
tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_5);
if (tmp_assign_source_35 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_5;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooooooo";
exception_lineno = 126;
        goto try_except_handler_12;
    }
}

{
    PyObject *old = tmp_dictcontraction_1__iter_value_0;
    tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_35;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_36;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
tmp_iter_arg_7 = tmp_dictcontraction_1__iter_value_0;
tmp_assign_source_36 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_13;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
    tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_36;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_37 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
    tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_37;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_unpack_4 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_assign_source_38 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_14;
}
{
    PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
    tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_38;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_iterator_name_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_14;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_13;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_39;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_assign_source_39 = tmp_dictcontraction$tuple_unpack_1__element_1;
{
    PyObject *old = outline_3_var_key;
    outline_3_var_key = tmp_assign_source_39;
    Py_INCREF(outline_3_var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_40;
CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_assign_source_40 = tmp_dictcontraction$tuple_unpack_1__element_2;
{
    PyObject *old = outline_3_var_prop_schema;
    outline_3_var_prop_schema = tmp_assign_source_40;
    Py_INCREF(outline_3_var_prop_schema);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_dictset38_key_1;
PyObject *tmp_dictset38_value_1;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_16;
PyObject *tmp_dictset38_dict_1;
CHECK_OBJECT(outline_3_var_key);
tmp_dictset38_key_1 = outline_3_var_key;
tmp_called_value_24 = module_var_accessor_anthropic$lib$_parse$_transform$transform_schema(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform_schema);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_12;
}
CHECK_OBJECT(outline_3_var_prop_schema);
tmp_args_element_value_16 = outline_3_var_prop_schema;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 127;
tmp_dictset38_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_16);
if (tmp_dictset38_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_12;
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


exception_lineno = 126;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_12;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_12;
}
goto loop_start_5;
loop_end_5:;
CHECK_OBJECT(tmp_dictcontraction_1__contraction);
tmp_dictset_value = tmp_dictcontraction_1__contraction;
Py_INCREF(tmp_dictset_value);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
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
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_XDECREF(outline_3_var_key);
outline_3_var_key = NULL;
Py_XDECREF(outline_3_var_prop_schema);
outline_3_var_prop_schema = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_3_var_key);
outline_3_var_key = NULL;
Py_XDECREF(outline_3_var_prop_schema);
outline_3_var_prop_schema = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 126;
goto frame_exception_exit_1;
outline_result_4:;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_properties;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
{
PyObject *tmp_called_value_25;
PyObject *tmp_expression_value_13;
PyObject *tmp_call_result_6;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_13 = par_json_schema;
tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_pop);
if (tmp_called_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 129;
tmp_call_result_6 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_25, mod_consts.const_tuple_str_plain_additionalProperties_none_tuple);

CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
tmp_dictset_value = Py_False;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_additionalProperties;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
{
PyObject *tmp_assign_source_41;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_14;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_14 = par_json_schema;
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_pop);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 132;
tmp_assign_source_41 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_26, mod_consts.const_tuple_str_plain_required_none_tuple);

CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_required == NULL);
var_required = tmp_assign_source_41;
}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_required);
tmp_cmp_expr_left_7 = var_required;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(var_required);
tmp_dictset_value = var_required;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_required;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_12:;
goto branch_end_11;
branch_no_11:;
{
nuitka_bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_8 = var_type_;
tmp_cmp_expr_right_8 = mod_consts.const_str_plain_string;
tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_assign_source_42;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_15 = par_json_schema;
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_pop);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 137;
tmp_assign_source_42 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_27, mod_consts.const_tuple_str_plain_format_none_tuple);

CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_format == NULL);
var_format = tmp_assign_source_42;
}
{
nuitka_bool tmp_condition_result_14;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_truth_name_6;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_format);
tmp_truth_name_6 = CHECK_IF_TRUE(var_format);
if (tmp_truth_name_6 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_format);
tmp_cmp_expr_left_9 = var_format;
tmp_cmp_expr_right_9 = module_var_accessor_anthropic$lib$_parse$_transform$SupportedStringFormats(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SupportedStringFormats);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_14 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_14 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
CHECK_OBJECT(var_format);
tmp_dictset_value = var_format;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = const_str_plain_format;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_14;
branch_no_14:;
{
nuitka_bool tmp_condition_result_15;
int tmp_truth_name_7;
CHECK_OBJECT(var_format);
tmp_truth_name_7 = CHECK_IF_TRUE(var_format);
if (tmp_truth_name_7 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_15 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_format);
tmp_ass_subvalue_1 = var_format;
CHECK_OBJECT(par_json_schema);
tmp_ass_subscribed_1 = par_json_schema;
tmp_ass_subscript_1 = const_str_plain_format;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_15:;
branch_end_14:;
goto branch_end_13;
branch_no_13:;
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_10 = var_type_;
tmp_cmp_expr_right_10 = mod_consts.const_str_plain_array;
tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_called_value_28;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_16 = par_json_schema;
tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_pop);
if (tmp_called_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 144;
tmp_assign_source_43 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_28, mod_consts.const_tuple_str_plain_items_none_tuple);

CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_items == NULL);
var_items = tmp_assign_source_43;
}
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_items);
tmp_cmp_expr_left_11 = var_items;
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_17 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_17;
tmp_called_value_29 = module_var_accessor_anthropic$lib$_parse$_transform$transform_schema(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_transform_schema);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_items);
tmp_args_element_value_17 = var_items;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 146;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_items;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_17:;
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_30;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_17 = par_json_schema;
tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_pop);
if (tmp_called_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 148;
tmp_assign_source_44 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_30, mod_consts.const_tuple_str_plain_minItems_none_tuple);

CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_min_items == NULL);
var_min_items = tmp_assign_source_44;
}
{
nuitka_bool tmp_condition_result_18;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(var_min_items);
tmp_cmp_expr_left_12 = var_min_items;
tmp_cmp_expr_right_12 = Py_None;
tmp_and_left_value_3 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_min_items);
tmp_cmp_expr_left_13 = var_min_items;
tmp_cmp_expr_right_13 = const_int_0;
tmp_and_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_or_left_value_1 = tmp_and_left_value_3;
and_end_3:;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_min_items);
tmp_cmp_expr_left_14 = var_min_items;
tmp_cmp_expr_right_14 = const_int_pos_1;
tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_18 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_18 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
CHECK_OBJECT(var_min_items);
tmp_dictset_value = var_min_items;
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_minItems;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_18;
branch_no_18:;
{
bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
CHECK_OBJECT(var_min_items);
tmp_cmp_expr_left_15 = var_min_items;
tmp_cmp_expr_right_15 = Py_None;
tmp_condition_result_19 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? true : false;
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(var_min_items);
tmp_ass_subvalue_2 = var_min_items;
CHECK_OBJECT(par_json_schema);
tmp_ass_subscribed_2 = par_json_schema;
tmp_ass_subscript_2 = mod_consts.const_str_plain_minItems;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_19:;
branch_end_18:;
goto branch_end_16;
branch_no_16:;
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_16 = var_type_;
tmp_cmp_expr_right_16 = mod_consts.const_str_plain_boolean;
tmp_or_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
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
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_17 = var_type_;
tmp_cmp_expr_right_17 = mod_consts.const_str_plain_integer;
tmp_or_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
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
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_18 = var_type_;
tmp_cmp_expr_right_18 = mod_consts.const_str_plain_number;
tmp_or_left_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
if (tmp_or_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_4);

exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
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
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_19 = var_type_;
tmp_cmp_expr_right_19 = mod_consts.const_str_plain_null;
tmp_or_left_value_5 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
if (tmp_or_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_5);

exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
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
CHECK_OBJECT(var_type_);
tmp_cmp_expr_left_20 = var_type_;
tmp_cmp_expr_right_20 = Py_None;
tmp_or_right_value_5 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? Py_True : Py_False;
Py_INCREF(tmp_or_right_value_5);
tmp_or_right_value_4 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_or_right_value_4 = tmp_or_left_value_5;
or_end_5:;
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
tmp_operand_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_operand_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_20 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_called_value_31;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_18;
tmp_called_value_31 = module_var_accessor_anthropic$lib$_parse$_transform$assert_never(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_assert_never);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 158;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_type_);
tmp_args_element_value_18 = var_type_;
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 158;
tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_18);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_20:;
branch_end_16:;
branch_end_13:;
branch_end_11:;
{
nuitka_bool tmp_condition_result_21;
int tmp_truth_name_8;
CHECK_OBJECT(par_json_schema);
tmp_truth_name_8 = CHECK_IF_TRUE(par_json_schema);
if (tmp_truth_name_8 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assign_source_45;
PyObject *tmp_dict_arg_value_1;
PyObject *tmp_key_value_1;
CHECK_OBJECT(var_strict_schema);
tmp_dict_arg_value_1 = var_strict_schema;
tmp_key_value_1 = mod_consts.const_str_plain_description;
tmp_assign_source_45 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
if (tmp_assign_source_45 == NULL) {
    tmp_assign_source_45 = Py_None;
    Py_INCREF_IMMORTAL(tmp_assign_source_45);
}
assert(!(tmp_assign_source_45 == NULL));
{
    PyObject *old = var_description;
    assert(old != NULL);
    var_description = tmp_assign_source_45;
    Py_DECREF(old);
}

}
{
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_add_expr_left_3;
PyObject *tmp_add_expr_right_3;
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
PyObject *tmp_add_expr_left_4;
PyObject *tmp_add_expr_right_4;
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
CHECK_OBJECT(var_description);
tmp_cmp_expr_left_21 = var_description;
tmp_cmp_expr_right_21 = Py_None;
tmp_condition_result_22 = (tmp_cmp_expr_left_21 != tmp_cmp_expr_right_21) ? true : false;
if (tmp_condition_result_22 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_description);
tmp_add_expr_left_4 = var_description;
tmp_add_expr_right_4 = mod_consts.const_str_digest_09bc009ffd858aaf58df7e98266d9b89;
tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
if (tmp_add_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_add_expr_left_3 = const_str_empty;
Py_INCREF(tmp_add_expr_left_3);
condexpr_end_1:;
tmp_add_expr_right_3 = mod_consts.const_str_chr_123;
tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
CHECK_OBJECT(tmp_add_expr_left_3);
Py_DECREF(tmp_add_expr_left_3);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_str_arg_value_1 = mod_consts.const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
{
PyObject *tmp_assign_source_46;
PyObject *tmp_iter_arg_8;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_18;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_18 = par_json_schema;
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_items);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame.f_lineno = 167;
tmp_iter_arg_8 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_32);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
if (tmp_iter_arg_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_46 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
CHECK_OBJECT(tmp_iter_arg_8);
Py_DECREF(tmp_iter_arg_8);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_46;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_iterable_value_1 = MAKE_GENERATOR_anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_15;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(tmp_genexpr_1__$0);
CHECK_OBJECT(tmp_genexpr_1__$0);
Py_DECREF(tmp_genexpr_1__$0);
tmp_genexpr_1__$0 = NULL;
goto outline_result_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
tmp_add_expr_right_2 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
CHECK_OBJECT(tmp_iterable_value_1);
Py_DECREF(tmp_iterable_value_1);
if (tmp_add_expr_right_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_2);

exception_lineno = 167;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
CHECK_OBJECT(tmp_add_expr_right_2);
Py_DECREF(tmp_add_expr_right_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_str_chr_125;
tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oooooooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_strict_schema);
tmp_dictset_dict = var_strict_schema;
tmp_dictset_key = mod_consts.const_str_plain_description;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_res != 0));
}
branch_no_21:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema,
    type_description_1,
    par_json_schema,
    var_strict_schema,
    var_strict_defs,
    var_type_,
    var_ref,
    var_defs,
    var_name,
    var_schema,
    var_any_of,
    var_one_of,
    var_all_of,
    var_enum,
    var_description,
    var_title,
    var_required,
    var_format,
    var_items,
    var_min_items
);


// Release cached frame if used for exception.
if (frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema == cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema);
    cache_frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema = NULL;
}

assertFrameObject(frame_frame_anthropic$lib$_parse$_transform$$$function__2_transform_schema);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_strict_schema);
tmp_return_value = var_strict_schema;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_json_schema);
CHECK_OBJECT(par_json_schema);
Py_DECREF(par_json_schema);
par_json_schema = NULL;
CHECK_OBJECT(var_strict_schema);
CHECK_OBJECT(var_strict_schema);
Py_DECREF(var_strict_schema);
var_strict_schema = NULL;
Py_XDECREF(var_strict_defs);
var_strict_defs = NULL;
Py_XDECREF(var_type_);
var_type_ = NULL;
CHECK_OBJECT(var_ref);
CHECK_OBJECT(var_ref);
Py_DECREF(var_ref);
var_ref = NULL;
Py_XDECREF(var_defs);
var_defs = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_schema);
var_schema = NULL;
Py_XDECREF(var_any_of);
var_any_of = NULL;
Py_XDECREF(var_one_of);
var_one_of = NULL;
Py_XDECREF(var_all_of);
var_all_of = NULL;
Py_XDECREF(var_enum);
var_enum = NULL;
Py_XDECREF(var_description);
var_description = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var_required);
var_required = NULL;
Py_XDECREF(var_format);
var_format = NULL;
Py_XDECREF(var_items);
var_items = NULL;
Py_XDECREF(var_min_items);
var_min_items = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_json_schema);
par_json_schema = NULL;
Py_XDECREF(var_strict_schema);
var_strict_schema = NULL;
Py_XDECREF(var_strict_defs);
var_strict_defs = NULL;
Py_XDECREF(var_type_);
var_type_ = NULL;
Py_XDECREF(var_ref);
var_ref = NULL;
Py_XDECREF(var_defs);
var_defs = NULL;
Py_XDECREF(var_name);
var_name = NULL;
Py_XDECREF(var_schema);
var_schema = NULL;
Py_XDECREF(var_any_of);
var_any_of = NULL;
Py_XDECREF(var_one_of);
var_one_of = NULL;
Py_XDECREF(var_all_of);
var_all_of = NULL;
Py_XDECREF(var_enum);
var_enum = NULL;
Py_XDECREF(var_description);
var_description = NULL;
Py_XDECREF(var_title);
var_title = NULL;
Py_XDECREF(var_required);
var_required = NULL;
Py_XDECREF(var_format);
var_format = NULL;
Py_XDECREF(var_items);
var_items = NULL;
Py_XDECREF(var_min_items);
var_min_items = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto function_exception_exit;
// End of try:

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



#if 1
struct anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr_locals {
PyObject *var_key;
PyObject *var_value;
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
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
};
#endif

static PyObject *anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr_locals *generator_heap = (struct anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_key = NULL;
generator_heap->var_value = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_574a8fd81ad8cee2876585503b7a334d, module_anthropic$lib$_parse$_transform, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noo";
generator_heap->exception_lineno = 167;
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


generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
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



generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
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



generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
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



generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
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
    PyObject *old = generator_heap->var_key;
    generator_heap->var_key = tmp_assign_source_5;
    Py_INCREF(generator_heap->var_key);
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
    PyObject *old = generator_heap->var_value;
    generator_heap->var_value = tmp_assign_source_6;
    Py_INCREF(generator_heap->var_value);
    Py_XDECREF(old);
}

}
Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_expression_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_key);
tmp_format_value_1 = generator_heap->var_key;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_439d1398e2f3d2739cafa9b75372a63f;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(generator_heap->var_value);
tmp_format_value_2 = generator_heap->var_value;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_expression_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_expression_value_1 == NULL));
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_string_concat_values_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_format_value_1, sizeof(PyObject *), &tmp_format_spec_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_string_concat_values_1, sizeof(PyObject *), &tmp_tuple_element_1, sizeof(PyObject *), &tmp_format_value_1, sizeof(PyObject *), &tmp_format_spec_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "Noo";
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
    generator_heap->var_key,
    generator_heap->var_value
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

Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
Py_XDECREF(generator_heap->var_value);
generator_heap->var_value = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_4;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:
try_end_4:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_key);
generator_heap->var_key = NULL;
Py_XDECREF(generator_heap->var_value);
generator_heap->var_value = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr_context,
        module_anthropic$lib$_parse$_transform,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_7b3caaef0d3b9952406d5d7a5072929d,
#endif
        code_objects_574a8fd81ad8cee2876585503b7a334d,
        closure,
        1,
#if 1
        sizeof(struct anthropic$lib$_parse$_transform$$$function__2_transform_schema$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string,
        mod_consts.const_str_plain_get_transformed_string,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_34a76b2bc8be48bb81743e09500ed08c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$_parse$_transform,
        mod_consts.const_str_digest_cbebdd508e6bdc7c35d5a5885373b438,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anthropic$lib$_parse$_transform$$$function__2_transform_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anthropic$lib$_parse$_transform$$$function__2_transform_schema,
        mod_consts.const_str_plain_transform_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_64ace6976b49db237e5f7291319fd437,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anthropic$lib$_parse$_transform,
        mod_consts.const_str_digest_4af4baf3d1fd734eb7deb40e570d0af8,
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

static function_impl_code const function_table_anthropic$lib$_parse$_transform[] = {
impl_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string,
impl_anthropic$lib$_parse$_transform$$$function__2_transform_schema,
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

    return Nuitka_Function_GetFunctionState(function, function_table_anthropic$lib$_parse$_transform);
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
        module_anthropic$lib$_parse$_transform,
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
        function_table_anthropic$lib$_parse$_transform,
        sizeof(function_table_anthropic$lib$_parse$_transform) / sizeof(function_impl_code)
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
static char const *module_full_name = "anthropic.lib._parse._transform";
#endif

// Internal entry point for module code.
PyObject *module_code_anthropic$lib$_parse$_transform(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anthropic$lib$_parse$_transform");

    // Store the module for future use.
    module_anthropic$lib$_parse$_transform = module;

    moduledict_anthropic$lib$_parse$_transform = MODULE_DICT(module_anthropic$lib$_parse$_transform);

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
        PRINT_STRING("anthropic$lib$_parse$_transform: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("anthropic$lib$_parse$_transform: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("anthropic$lib$_parse$_transform: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib._parse._transform" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initanthropic$lib$_parse$_transform\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anthropic$lib$_parse$_transform,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$_parse$_transform,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anthropic$lib$_parse$_transform,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$_parse$_transform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anthropic$lib$_parse$_transform,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anthropic$lib$_parse$_transform);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_anthropic$lib$_parse$_transform);
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

        UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_anthropic$lib$_parse$_transform;
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_anthropic$lib$_parse$_transform = MAKE_MODULE_FRAME(code_objects_01b20c5767fa4a2b20754ec96c021fb7, module_anthropic$lib$_parse$_transform);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_anthropic$lib$_parse$_transform);
assert(Py_REFCNT(frame_frame_anthropic$lib$_parse$_transform) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_anthropic$lib$_parse$_transform$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_anthropic$lib$_parse$_transform$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_anthropic$lib$_parse$_transform;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_anthropic$lib$_parse$_transform->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
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
        (PyObject *)moduledict_anthropic$lib$_parse$_transform,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_7);
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
        (PyObject *)moduledict_anthropic$lib$_parse$_transform,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_8);
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
        (PyObject *)moduledict_anthropic$lib$_parse$_transform,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_9);
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
        (PyObject *)moduledict_anthropic$lib$_parse$_transform,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_10);
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
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_anthropic$lib$_parse$_transform;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_assert_never_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_anthropic$lib$_parse$_transform->m_frame.f_lineno = 5;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_anthropic$lib$_parse$_transform,
        mod_consts.const_str_plain_assert_never,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_assert_never);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_assert_never, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
frame_frame_anthropic$lib$_parse$_transform->m_frame.f_lineno = 7;
tmp_assign_source_12 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic, mod_consts.const_str_plain_pydantic);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_3 = (PyObject *)moduledict_anthropic$lib$_parse$_transform;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_is_list_tuple;
tmp_level_value_3 = mod_consts.const_int_pos_3;
frame_frame_anthropic$lib$_parse$_transform->m_frame.f_lineno = 9;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_anthropic$lib$_parse$_transform,
        mod_consts.const_str_plain_is_list,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_is_list);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_anthropic$lib$_parse$_transform$Literal(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 11;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = mod_consts.const_tuple_6c1750407f3be7e900a59136a93599a0_tuple;
tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportedTypes, tmp_assign_source_14);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_anthropic$lib$_parse$_transform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_anthropic$lib$_parse$_transform->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_anthropic$lib$_parse$_transform, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_anthropic$lib$_parse$_transform);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_15;
tmp_assign_source_15 = PySet_New(mod_consts.const_set_84c4bd0f15af153fbc4c7395975023dc);
UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_SupportedStringFormats, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_22bdd82d1787c301c9ea0a2c8b061daf);

tmp_assign_source_16 = MAKE_FUNCTION_anthropic$lib$_parse$_transform$$$function__1_get_transformed_string(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_get_transformed_string, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_72353eab251d4c4e74be0888f5cc3c28);

tmp_assign_source_17 = MAKE_FUNCTION_anthropic$lib$_parse$_transform$$$function__2_transform_schema(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)mod_consts.const_str_plain_transform_schema, tmp_assign_source_17);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anthropic$lib$_parse$_transform", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "anthropic.lib._parse._transform" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_anthropic$lib$_parse$_transform);
    return module_anthropic$lib$_parse$_transform;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anthropic$lib$_parse$_transform, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("anthropic$lib$_parse$_transform", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

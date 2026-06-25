/* Generated code for Python module 'google$genai$_automatic_function_calling_util'
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



/* The "module_google$genai$_automatic_function_calling_util" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$_automatic_function_calling_util;
PyDictObject *moduledict_google$genai$_automatic_function_calling_util;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_digest_5813fd33e36dc60385fa314d77c1f1e0;
PyObject *const_str_digest_2f4e281df515d168a643c6264363daf6;
PyObject *const_str_digest_088d4b156e0fa0448cc6fd6e7fff6d15;
PyObject *const_str_plain_annotation;
PyObject *const_str_plain_replace;
PyObject *const_tuple_str_plain_annotation_tuple;
PyObject *const_str_plain_param;
PyObject *const_str_digest_acf88684c592cc4f81fab28cfa7483d4;
PyObject *const_tuple_str_plain_maxItems_tuple;
PyObject *const_tuple_str_plain_prefixItems_tuple;
PyObject *const_str_plain_prefixItems;
PyObject *const_str_plain_maxItems;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_str_plain_array;
PyObject *const_str_plain_unevaluatedItems;
PyObject *const_str_plain__py_builtin_type_to_schema_type;
PyObject *const_str_plain__is_builtin_primitive_or_compound;
PyObject *const_str_plain__GenericAlias;
PyObject *const_str_plain_GenericAlias;
PyObject *const_str_plain_VersionedUnionType;
PyObject *const_str_plain_get_origin;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_get_args;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain__is_default_value_compatible;
PyObject *const_str_plain_default_value;
PyObject *const_str_angle_genexpr;
PyObject *const_str_digest_8c484555b75945c183cc09d75e4f3b99;
PyObject *const_str_plain_item;
PyObject *const_str_digest_8da16a3da347106109e022cb265e00f7;
PyObject *const_str_plain_Schema;
PyObject *const_str_digest_58e76402a4797081ef7732e6c1efbcf6;
PyObject *const_str_plain_default;
PyObject *const_str_digest_eb572adc118e676d6a6dd749f12e931a;
PyObject *const_str_digest_a9d8cd18c6e47840d824aaf82ae37d67;
PyObject *const_str_plain_Parameter;
PyObject *const_str_plain_empty;
PyObject *const_str_plain_any_of;
PyObject *const_str_plain_NoneType;
PyObject *const_str_plain_schema;
PyObject *const_str_plain_nullable;
PyObject *const_str_plain__parse_schema_from_parameter;
PyObject *const_str_plain_api_option;
PyObject *const_str_plain_POSITIONAL_OR_KEYWORD;
PyObject *const_str_plain_func_name;
PyObject *const_str_plain_model_dump_json;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_exclude_none_tuple;
PyObject *const_str_plain_unique_types;
PyObject *const_str_plain_append;
PyObject *const_str_plain_add;
PyObject *const_str_digest_b8bbbcf77b9e74eec7fe1baea5a156f9;
PyObject *const_str_digest_747f0e67928d03ba42d3f7fc02334579;
PyObject *const_str_plain_enum;
PyObject *const_str_plain_items;
PyObject *const_str_plain___args__;
PyObject *const_str_plain___origin__;
PyObject *const_str_plain_schema_in_any_of;
PyObject *const_str_plain__extra_utils;
PyObject *const_str_plain_is_annotation_pydantic_model;
PyObject *const_str_plain_properties;
PyObject *const_str_plain_model_fields;
PyObject *const_str_plain__get_required_fields;
PyObject *const_str_plain_required;
PyObject *const_str_plain__raise_for_unsupported_param;
PyObject *const_str_digest_41d105639954658ba99a142f414c66c0;
PyObject *const_str_digest_83a31b4df03917000e8e8317822ea192;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_builtin_types;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_pydantic;
PyObject *const_tuple_str_plain__extra_utils_tuple;
PyObject *const_tuple_str_plain_types_tuple;
PyObject *const_str_plain_UnionType;
PyObject *const_list_edfb39ceb497f95a14ba8171a706d449_list;
PyObject *const_str_plain_Type;
PyObject *const_str_plain_STRING;
PyObject *const_str_plain_INTEGER;
PyObject *const_str_plain_NUMBER;
PyObject *const_str_plain_BOOLEAN;
PyObject *const_str_plain_ARRAY;
PyObject *const_str_plain_OBJECT;
PyObject *const_str_plain_NULL;
PyObject *const_str_plain_exception;
PyObject *const_tuple_type_Exception_genalias_type_type_tuple_type_Exception_tuple_tuple;
PyObject *const_str_plain_return;
PyObject *const_str_plain_annotation_under_future;
PyObject *const_str_plain__handle_params_as_deferred_annotations;
PyObject *const_str_plain_json_schema;
PyObject *const_str_digest_f3e61d9a975f8b793cd42853d4119489;
PyObject *const_tuple_str_plain_VERTEX_AI_str_plain_GEMINI_API_tuple;
PyObject *const_tuple_type_str_tuple;
PyObject *const_str_digest_f40b3c804730b7c8f0452698e0c23f7c;
PyObject *const_tuple_c762976831d8ede21cd9a82af3fa6edd_tuple;
PyObject *const_tuple_b1a2e8afcf7c4f04efd80909de5c4006_tuple;
PyObject *const_tuple_1cd45957bb61d3757c3f327d652ac425_tuple;
PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple;
PyObject *const_str_digest_e6efb7b538a555a5dbe09b3ac027034b;
PyObject *const_tuple_str_plain_json_schema_tuple;
PyObject *const_tuple_str_plain_schema_tuple;
PyObject *const_tuple_d4f449a8e4bb0dfa79c4ecaed0463961_tuple;
PyObject *const_tuple_1fdfb189b70d6b79293f4fda770ed54e_tuple;
PyObject *const_tuple_41a11dfe2729152bd93d812ffcf1963c_tuple;
PyObject *const_tuple_str_plain_param_str_plain_func_name_str_plain_exception_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[109];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai._automatic_function_calling_util"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_digest_5813fd33e36dc60385fa314d77c1f1e0);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f4e281df515d168a643c6264363daf6);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_088d4b156e0fa0448cc6fd6e7fff6d15);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotation);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_replace);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_annotation_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_param);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_acf88684c592cc4f81fab28cfa7483d4);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxItems_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefixItems_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_prefixItems);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxItems);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_array);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_unevaluatedItems);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_builtin_primitive_or_compound);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__GenericAlias);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenericAlias);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_VersionedUnionType);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_args);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__is_default_value_compatible);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_value);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_8c484555b75945c183cc09d75e4f3b99);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_item);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_8da16a3da347106109e022cb265e00f7);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_Schema);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_58e76402a4797081ef7732e6c1efbcf6);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_default);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_eb572adc118e676d6a6dd749f12e931a);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_a9d8cd18c6e47840d824aaf82ae37d67);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Parameter);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_empty);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_any_of);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoneType);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_nullable);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__parse_schema_from_parameter);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_option);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_POSITIONAL_OR_KEYWORD);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_func_name);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump_json);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exclude_none_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_unique_types);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_append);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_add);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8bbbcf77b9e74eec7fe1baea5a156f9);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_747f0e67928d03ba42d3f7fc02334579);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_enum);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___args__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain___origin__);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_in_any_of);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain__extra_utils);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotation_pydantic_model);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_properties);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_fields);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_required_fields);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_required);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain__raise_for_unsupported_param);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_41d105639954658ba99a142f414c66c0);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_83a31b4df03917000e8e8317822ea192);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_builtin_types);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__extra_utils_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnionType);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_list_edfb39ceb497f95a14ba8171a706d449_list);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_Type);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_STRING);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_INTEGER);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_NUMBER);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_BOOLEAN);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_ARRAY);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_OBJECT);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_NULL);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_exception);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_genalias_type_type_tuple_type_Exception_tuple_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotation_under_future);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain__handle_params_as_deferred_annotations);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3e61d9a975f8b793cd42853d4119489);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERTEX_AI_str_plain_GEMINI_API_tuple);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_type_str_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_digest_f40b3c804730b7c8f0452698e0c23f7c);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_c762976831d8ede21cd9a82af3fa6edd_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_b1a2e8afcf7c4f04efd80909de5c4006_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_1cd45957bb61d3757c3f327d652ac425_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6efb7b538a555a5dbe09b3ac027034b);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_json_schema_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_schema_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_d4f449a8e4bb0dfa79c4ecaed0463961_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_1fdfb189b70d6b79293f4fda770ed54e_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_41a11dfe2729152bd93d812ffcf1963c_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_str_plain_func_name_str_plain_exception_tuple);
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
void checkModuleConstants_google$genai$_automatic_function_calling_util(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_digest_5813fd33e36dc60385fa314d77c1f1e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5813fd33e36dc60385fa314d77c1f1e0);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f4e281df515d168a643c6264363daf6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f4e281df515d168a643c6264363daf6);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_088d4b156e0fa0448cc6fd6e7fff6d15));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_088d4b156e0fa0448cc6fd6e7fff6d15);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotation);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_replace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_replace);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_annotation_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_annotation_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_param);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_acf88684c592cc4f81fab28cfa7483d4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_acf88684c592cc4f81fab28cfa7483d4);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_maxItems_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_maxItems_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_prefixItems_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_prefixItems_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_prefixItems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prefixItems);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxItems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxItems);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_array));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_array);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_unevaluatedItems));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unevaluatedItems);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain__py_builtin_type_to_schema_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__py_builtin_type_to_schema_type);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_builtin_primitive_or_compound));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_builtin_primitive_or_compound);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__GenericAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GenericAlias);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenericAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenericAlias);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_VersionedUnionType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VersionedUnionType);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_origin);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_args);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__is_default_value_compatible));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__is_default_value_compatible);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_value);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_angle_genexpr));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_genexpr);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_8c484555b75945c183cc09d75e4f3b99));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8c484555b75945c183cc09d75e4f3b99);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_item));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_item);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_8da16a3da347106109e022cb265e00f7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8da16a3da347106109e022cb265e00f7);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_Schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Schema);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_58e76402a4797081ef7732e6c1efbcf6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_58e76402a4797081ef7732e6c1efbcf6);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_eb572adc118e676d6a6dd749f12e931a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_eb572adc118e676d6a6dd749f12e931a);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_a9d8cd18c6e47840d824aaf82ae37d67));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a9d8cd18c6e47840d824aaf82ae37d67);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Parameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Parameter);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_empty));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_empty);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_any_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_any_of);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoneType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoneType);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_nullable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_nullable);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__parse_schema_from_parameter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parse_schema_from_parameter);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_option));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_option);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_POSITIONAL_OR_KEYWORD));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_POSITIONAL_OR_KEYWORD);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_func_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_func_name);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_dump_json);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exclude_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exclude_none_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_unique_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_unique_types);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_append));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_append);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_add));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_add);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8bbbcf77b9e74eec7fe1baea5a156f9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8bbbcf77b9e74eec7fe1baea5a156f9);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_747f0e67928d03ba42d3f7fc02334579));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_747f0e67928d03ba42d3f7fc02334579);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_enum));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enum);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___args__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___args__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain___origin__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___origin__);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_in_any_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_in_any_of);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain__extra_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extra_utils);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_annotation_pydantic_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_annotation_pydantic_model);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_properties));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_properties);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_fields);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_required_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_required_fields);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_required);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain__raise_for_unsupported_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__raise_for_unsupported_param);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_41d105639954658ba99a142f414c66c0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_41d105639954658ba99a142f414c66c0);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_83a31b4df03917000e8e8317822ea192));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_83a31b4df03917000e8e8317822ea192);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_builtin_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_builtin_types);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__extra_utils_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__extra_utils_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_types_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnionType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnionType);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_list_edfb39ceb497f95a14ba8171a706d449_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_edfb39ceb497f95a14ba8171a706d449_list);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_Type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Type);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_STRING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STRING);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_INTEGER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_INTEGER);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_NUMBER));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NUMBER);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_BOOLEAN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BOOLEAN);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_ARRAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ARRAY);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_OBJECT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OBJECT);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_NULL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NULL);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_exception));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exception);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_type_Exception_genalias_type_type_tuple_type_Exception_tuple_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_Exception_genalias_type_type_tuple_type_Exception_tuple_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotation_under_future));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotation_under_future);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain__handle_params_as_deferred_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handle_params_as_deferred_annotations);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_schema);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3e61d9a975f8b793cd42853d4119489));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3e61d9a975f8b793cd42853d4119489);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERTEX_AI_str_plain_GEMINI_API_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VERTEX_AI_str_plain_GEMINI_API_tuple);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_type_str_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_digest_f40b3c804730b7c8f0452698e0c23f7c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f40b3c804730b7c8f0452698e0c23f7c);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_c762976831d8ede21cd9a82af3fa6edd_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c762976831d8ede21cd9a82af3fa6edd_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_b1a2e8afcf7c4f04efd80909de5c4006_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b1a2e8afcf7c4f04efd80909de5c4006_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_1cd45957bb61d3757c3f327d652ac425_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1cd45957bb61d3757c3f327d652ac425_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6efb7b538a555a5dbe09b3ac027034b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6efb7b538a555a5dbe09b3ac027034b);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_json_schema_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_json_schema_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_schema_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_schema_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_d4f449a8e4bb0dfa79c4ecaed0463961_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d4f449a8e4bb0dfa79c4ecaed0463961_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_1fdfb189b70d6b79293f4fda770ed54e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_1fdfb189b70d6b79293f4fda770ed54e_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_41a11dfe2729152bd93d812ffcf1963c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_41a11dfe2729152bd93d812ffcf1963c_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_param_str_plain_func_name_str_plain_exception_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_param_str_plain_func_name_str_plain_exception_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 18
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
static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$Literal(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$Union(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Union);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Union, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$VersionedUnionType(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_VersionedUnionType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VersionedUnionType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VersionedUnionType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VersionedUnionType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VersionedUnionType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_VersionedUnionType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_VersionedUnionType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VersionedUnionType);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_GenericAlias(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenericAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenericAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GenericAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GenericAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_extra_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extra_utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extra_utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__extra_utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__extra_utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_utils);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_get_required_fields(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__get_required_fields);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_required_fields);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_required_fields, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__get_required_fields);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__get_required_fields, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__get_required_fields);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__get_required_fields);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__get_required_fields);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_is_builtin_primitive_or_compound(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_builtin_primitive_or_compound);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_builtin_primitive_or_compound);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_builtin_primitive_or_compound, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_builtin_primitive_or_compound);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_builtin_primitive_or_compound, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_builtin_primitive_or_compound);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_builtin_primitive_or_compound);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_builtin_primitive_or_compound);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_default_value_compatible);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_default_value_compatible);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_default_value_compatible, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__is_default_value_compatible);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__is_default_value_compatible, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_default_value_compatible);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_default_value_compatible);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__is_default_value_compatible);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_parse_schema_from_parameter(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_schema_from_parameter);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_schema_from_parameter);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_schema_from_parameter, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__parse_schema_from_parameter);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__parse_schema_from_parameter, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_schema_from_parameter);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_schema_from_parameter);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_schema_from_parameter);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__py_builtin_type_to_schema_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__py_builtin_type_to_schema_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__py_builtin_type_to_schema_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__py_builtin_type_to_schema_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__py_builtin_type_to_schema_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__py_builtin_type_to_schema_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__py_builtin_type_to_schema_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__py_builtin_type_to_schema_type);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$_raise_for_unsupported_param(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__raise_for_unsupported_param);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raise_for_unsupported_param);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raise_for_unsupported_param, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__raise_for_unsupported_param);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__raise_for_unsupported_param, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__raise_for_unsupported_param);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__raise_for_unsupported_param);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__raise_for_unsupported_param);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$get_args(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_args);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_args, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_args);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_args, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$get_origin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_origin);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_origin, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_origin);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_origin, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_automatic_function_calling_util$types(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_automatic_function_calling_util->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_automatic_function_calling_util->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_types);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_automatic_function_calling_util->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_types);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_types, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_types);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_types, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_types);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_types);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_types);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_af31f667cc0c7ddcd80062a7b2ff61f7;
static PyCodeObject *code_objects_cadf07a279d56ed8a603616a2da63bac;
static PyCodeObject *code_objects_a94ae5fb584d6d93fa49e7cbdf4c9e52;
static PyCodeObject *code_objects_edc7a4a929f58181652c7edaab9095da;
static PyCodeObject *code_objects_4cb89e199b37e2b2d28911165316eb72;
static PyCodeObject *code_objects_28781e1c9f95f65a990d23a3aee6c771;
static PyCodeObject *code_objects_04134a971ff0b8afe4f313f5b8889efd;
static PyCodeObject *code_objects_9e411924ca3bae60234dce97bc9932f0;
static PyCodeObject *code_objects_4b85f53fac79ba102b9ff88bb8e4a62c;
static PyCodeObject *code_objects_dd5c23cdebcfc48750ee627fd5d3ae40;
static PyCodeObject *code_objects_2968565803d4e4ad1771f2c5a84fd387;
static PyCodeObject *code_objects_7cefed60a4d528511921a434a1c6d202;
static PyCodeObject *code_objects_81d24d300f83e38cc3bb527bd5a0c3c8;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_f40b3c804730b7c8f0452698e0c23f7c); CHECK_OBJECT(module_filename_obj);
code_objects_af31f667cc0c7ddcd80062a7b2ff61f7 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_8c484555b75945c183cc09d75e4f3b99, mod_consts.const_tuple_c762976831d8ede21cd9a82af3fa6edd_tuple, NULL, 1, 0, 0);
code_objects_cadf07a279d56ed8a603616a2da63bac = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_8c484555b75945c183cc09d75e4f3b99, mod_consts.const_tuple_b1a2e8afcf7c4f04efd80909de5c4006_tuple, NULL, 1, 0, 0);
code_objects_a94ae5fb584d6d93fa49e7cbdf4c9e52 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_8da16a3da347106109e022cb265e00f7, mod_consts.const_tuple_1cd45957bb61d3757c3f327d652ac425_tuple, NULL, 1, 0, 0);
code_objects_edc7a4a929f58181652c7edaab9095da = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_83a31b4df03917000e8e8317822ea192, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple, NULL, 1, 0, 0);
code_objects_4cb89e199b37e2b2d28911165316eb72 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_angle_genexpr, mod_consts.const_str_digest_83a31b4df03917000e8e8317822ea192, mod_consts.const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_arg_tuple, NULL, 1, 0, 0);
code_objects_28781e1c9f95f65a990d23a3aee6c771 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_e6efb7b538a555a5dbe09b3ac027034b, mod_consts.const_str_digest_e6efb7b538a555a5dbe09b3ac027034b, NULL, NULL, 0, 0, 0);
code_objects_04134a971ff0b8afe4f313f5b8889efd = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_digest_f3e61d9a975f8b793cd42853d4119489, mod_consts.const_str_digest_f3e61d9a975f8b793cd42853d4119489, mod_consts.const_tuple_str_plain_json_schema_tuple, NULL, 1, 0, 0);
code_objects_9e411924ca3bae60234dce97bc9932f0 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__get_required_fields, mod_consts.const_str_plain__get_required_fields, mod_consts.const_tuple_str_plain_schema_tuple, NULL, 1, 0, 0);
code_objects_4b85f53fac79ba102b9ff88bb8e4a62c = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__handle_params_as_deferred_annotations, mod_consts.const_str_plain__handle_params_as_deferred_annotations, mod_consts.const_tuple_d4f449a8e4bb0dfa79c4ecaed0463961_tuple, NULL, 3, 0, 0);
code_objects_dd5c23cdebcfc48750ee627fd5d3ae40 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__is_builtin_primitive_or_compound, mod_consts.const_str_plain__is_builtin_primitive_or_compound, mod_consts.const_tuple_str_plain_annotation_tuple, NULL, 1, 0, 0);
code_objects_2968565803d4e4ad1771f2c5a84fd387 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__is_default_value_compatible, mod_consts.const_str_plain__is_default_value_compatible, mod_consts.const_tuple_1fdfb189b70d6b79293f4fda770ed54e_tuple, NULL, 2, 0, 0);
code_objects_7cefed60a4d528511921a434a1c6d202 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__parse_schema_from_parameter, mod_consts.const_str_plain__parse_schema_from_parameter, mod_consts.const_tuple_41a11dfe2729152bd93d812ffcf1963c_tuple, NULL, 3, 0, 0);
code_objects_81d24d300f83e38cc3bb527bd5a0c3c8 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__raise_for_unsupported_param, mod_consts.const_str_plain__raise_for_unsupported_param, mod_consts.const_tuple_str_plain_param_str_plain_func_name_str_plain_exception_tuple, NULL, 3, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_param = python_pars[0];
PyObject *par_func_name = python_pars[1];
PyObject *par_exception = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param)) {
    Py_XDECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param = MAKE_FUNCTION_FRAME(tstate, code_objects_81d24d300f83e38cc3bb527bd5a0c3c8, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param->m_type_description == NULL);
frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param = cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param) == 2);

// Framed code:
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_raise_cause_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_5813fd33e36dc60385fa314d77c1f1e0;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 7);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_param);
tmp_format_value_1 = par_param;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_2f4e281df515d168a643c6264363daf6;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_func_name);
tmp_format_value_2 = par_func_name;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_088d4b156e0fa0448cc6fd6e7fff6d15;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_func_name);
tmp_format_value_3 = par_func_name;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param->m_frame.f_lineno = 59;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
CHECK_OBJECT(par_exception);
tmp_raise_cause_1 = par_exception;
exception_state.exception_value = tmp_raise_type_1;
Py_INCREF(tmp_raise_cause_1);
exception_lineno = 64;
RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_state, tmp_raise_cause_1);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param,
    type_description_1,
    par_param,
    par_func_name,
    par_exception
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param == cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param);
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param = NULL;
}

assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_param);
Py_DECREF(par_param);
CHECK_OBJECT(par_func_name);
Py_DECREF(par_func_name);
CHECK_OBJECT(par_exception);
Py_DECREF(par_exception);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

}


static PyObject *impl_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_param = python_pars[0];
PyObject *par_annotation_under_future = python_pars[1];
PyObject *par_name = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations)) {
    Py_XDECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations = MAKE_FUNCTION_FRAME(tstate, code_objects_4b85f53fac79ba102b9ff88bb8e4a62c, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations->m_type_description == NULL);
frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations = cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_param);
tmp_expression_value_1 = par_param;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_annotation);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_param);
tmp_expression_value_2 = par_param;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_replace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_annotation_under_future);
tmp_expression_value_3 = par_annotation_under_future;
CHECK_OBJECT(par_name);
tmp_subscript_value_1 = par_name;
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations->m_frame.f_lineno = 70;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_annotation_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_param;
    assert(old != NULL);
    par_param = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 71;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = par_param;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations,
    type_description_1,
    par_param,
    par_annotation_under_future,
    par_name
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations == cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations);
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations = NULL;
}

assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(par_param);
par_param = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_param);
par_param = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_annotation_under_future);
Py_DECREF(par_annotation_under_future);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_annotation_under_future);
Py_DECREF(par_annotation_under_future);
CHECK_OBJECT(par_name);
Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_json_schema = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema)) {
    Py_XDECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_04134a971ff0b8afe4f313f5b8889efd, module_google$genai$_automatic_function_calling_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema->m_type_description == NULL);
frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema = cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_1 = par_json_schema;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema->m_frame.f_lineno = 78;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_maxItems_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_2 = par_json_schema;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema->m_frame.f_lineno = 80;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_prefixItems_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_3 = par_json_schema;
tmp_subscript_value_1 = mod_consts.const_str_plain_prefixItems;
tmp_len_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_json_schema);
tmp_expression_value_4 = par_json_schema;
tmp_subscript_value_2 = mod_consts.const_str_plain_maxItems;
tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = RICH_COMPARE_EQ_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_and_left_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_json_schema);
tmp_expression_value_5 = par_json_schema;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema->m_frame.f_lineno = 83;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_type_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_array;
tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
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
tmp_ass_subvalue_1 = Py_False;
CHECK_OBJECT(par_json_schema);
tmp_ass_subscribed_1 = par_json_schema;
tmp_ass_subscript_1 = mod_consts.const_str_plain_unevaluatedItems;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema,
    type_description_1,
    par_json_schema
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema == cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema);
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema = NULL;
}

assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;
CHECK_OBJECT(par_json_schema);
tmp_return_value = par_json_schema;
Py_INCREF(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_json_schema);
Py_DECREF(par_json_schema);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_json_schema);
Py_DECREF(par_json_schema);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_annotation = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound)) {
    Py_XDECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound = MAKE_FUNCTION_FRAME(tstate, code_objects_dd5c23cdebcfc48750ee627fd5d3ae40, module_google$genai$_automatic_function_calling_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound->m_type_description == NULL);
frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound = cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_annotation);
tmp_cmp_expr_left_1 = par_annotation;
tmp_expression_value_1 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_keys);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound->m_frame.f_lineno = 92;
tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound,
    type_description_1,
    par_annotation
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound == cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound);
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound = NULL;
}

assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_annotation);
Py_DECREF(par_annotation);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_annotation);
Py_DECREF(par_annotation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_default_value = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_annotation = Nuitka_Cell_New1(python_pars[1]);
PyObject *var_origin = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible)) {
    Py_XDECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible = MAKE_FUNCTION_FRAME(tstate, code_objects_2968565803d4e4ad1771f2c5a84fd387, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible->m_type_description == NULL);
frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible = cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_builtin_primitive_or_compound(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_builtin_primitive_or_compound);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_args_element_value_1 = Nuitka_Cell_GET(par_annotation);
frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible->m_frame.f_lineno = 99;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 99;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(Nuitka_Cell_GET(par_default_value));
tmp_isinstance_inst_1 = Nuitka_Cell_GET(par_default_value);
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_isinstance_cls_1 = Nuitka_Cell_GET(par_annotation);
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_isinstance_inst_4;
PyObject *tmp_isinstance_cls_4;
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_isinstance_inst_2 = Nuitka_Cell_GET(par_annotation);
tmp_isinstance_cls_2 = module_var_accessor_google$genai$_automatic_function_calling_util$_GenericAlias(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GenericAlias);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 103;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_isinstance_inst_3 = Nuitka_Cell_GET(par_annotation);
tmp_expression_value_1 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_GenericAlias);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_isinstance_inst_4 = Nuitka_Cell_GET(par_annotation);
tmp_isinstance_cls_4 = module_var_accessor_google$genai$_automatic_function_calling_util$VersionedUnionType(tstate);
if (unlikely(tmp_isinstance_cls_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VersionedUnionType);
}

if (tmp_isinstance_cls_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_condition_result_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_2 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_google$genai$_automatic_function_calling_util$get_origin(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_origin);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_args_element_value_2 = Nuitka_Cell_GET(par_annotation);
frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible->m_frame.f_lineno = 107;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(var_origin == NULL);
var_origin = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_1 = var_origin;
tmp_tuple_element_1 = module_var_accessor_google$genai$_automatic_function_calling_util$Union(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_google$genai$_automatic_function_calling_util$VersionedUnionType(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VersionedUnionType);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;
type_description_1 = "cco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_any_arg_1;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
tmp_called_value_3 = module_var_accessor_google$genai$_automatic_function_calling_util$get_args(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_args);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_args_element_value_3 = Nuitka_Cell_GET(par_annotation);
frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible->m_frame.f_lineno = 111;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_2;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_default_value;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_any_arg_1 = MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_return_value = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_2 = var_origin;
tmp_cmp_expr_right_2 = (PyObject *)&PyDict_Type;
tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_isinstance_inst_5;
PyObject *tmp_isinstance_cls_5;
CHECK_OBJECT(Nuitka_Cell_GET(par_default_value));
tmp_isinstance_inst_5 = Nuitka_Cell_GET(par_default_value);
tmp_isinstance_cls_5 = (PyObject *)&PyDict_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_3 = var_origin;
tmp_cmp_expr_right_3 = (PyObject *)&PyList_Type;
tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_isinstance_inst_6;
PyObject *tmp_isinstance_cls_6;
CHECK_OBJECT(Nuitka_Cell_GET(par_default_value));
tmp_isinstance_inst_6 = Nuitka_Cell_GET(par_default_value);
tmp_isinstance_cls_6 = (PyObject *)&PyList_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_6:;
{
PyObject *tmp_all_arg_1;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(Nuitka_Cell_GET(par_default_value));
tmp_iter_arg_2 = Nuitka_Cell_GET(par_default_value);
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_2__$0 == NULL);
tmp_genexpr_2__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[2];
tmp_closure_2[0] = par_annotation;
Py_INCREF(tmp_closure_2[0]);
tmp_closure_2[1] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_all_arg_1 = MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_return_value = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_4 = var_origin;
tmp_cmp_expr_right_4 = module_var_accessor_google$genai$_automatic_function_calling_util$Literal(tstate);
if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_cmp_expr_right_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
CHECK_OBJECT(Nuitka_Cell_GET(par_default_value));
tmp_cmp_expr_left_5 = Nuitka_Cell_GET(par_default_value);
tmp_called_value_4 = module_var_accessor_google$genai$_automatic_function_calling_util$get_args(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_args);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(Nuitka_Cell_GET(par_annotation));
tmp_args_element_value_4 = Nuitka_Cell_GET(par_annotation);
frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible->m_frame.f_lineno = 134;
tmp_cmp_expr_right_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
branch_no_7:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible,
    type_description_1,
    par_default_value,
    par_annotation,
    var_origin
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible == cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible);
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible = NULL;
}

assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_default_value);
CHECK_OBJECT(par_default_value);
Py_DECREF(par_default_value);
par_default_value = NULL;
CHECK_OBJECT(par_annotation);
CHECK_OBJECT(par_annotation);
Py_DECREF(par_annotation);
par_annotation = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(par_default_value);
CHECK_OBJECT(par_default_value);
Py_DECREF(par_default_value);
par_default_value = NULL;
CHECK_OBJECT(par_annotation);
CHECK_OBJECT(par_annotation);
Py_DECREF(par_annotation);
par_annotation = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

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
struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr_locals {
PyObject *var_arg;
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

static PyObject *google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr_locals *generator_heap = (struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_arg = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_af31f667cc0c7ddcd80062a7b2ff61f7, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 109;
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
    PyObject *old = generator_heap->var_arg;
    generator_heap->var_arg = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_arg);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_default_value);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
CHECK_OBJECT(generator_heap->var_arg);
tmp_args_element_value_2 = generator_heap->var_arg;
generator->m_frame->m_frame.f_lineno = 110;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 110;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 109;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_arg,
    generator->m_closure[0]
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

Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr_context,
        module_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_8c484555b75945c183cc09d75e4f3b99,
#endif
        code_objects_af31f667cc0c7ddcd80062a7b2ff61f7,
        closure,
        2,
#if 1
        sizeof(struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr_locals {
struct Nuitka_CellObject *var_item;
PyObject *tmp_genexpr_1__$0;
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

static PyObject *google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr_locals *generator_heap = (struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_item = Nuitka_Cell_NewEmpty();
generator_heap->tmp_genexpr_1__$0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_cadf07a279d56ed8a603616a2da63bac, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_1 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
generator_heap->type_description_1 = "Ncc";
generator_heap->exception_lineno = 125;
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
    PyObject *old = Nuitka_Cell_GET(generator_heap->var_item);
    Nuitka_Cell_SET(generator_heap->var_item, tmp_assign_source_2);
    Py_INCREF(tmp_assign_source_2);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_any_arg_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$genai$_automatic_function_calling_util$get_args(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_get_args);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "Ncc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_annotation);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "Ncc";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
generator->m_frame->m_frame.f_lineno = 128;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "Ncc";
    goto try_except_handler_2;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 128;
generator_heap->type_description_1 = "Ncc";
    goto try_except_handler_2;
}
{
    PyObject *old = generator_heap->tmp_genexpr_1__$0;
    generator_heap->tmp_genexpr_1__$0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = Nuitka_Cell_New0(generator_heap->tmp_genexpr_1__$0);
tmp_closure_1[1] = generator_heap->var_item;
Py_INCREF(tmp_closure_1[1]);
tmp_any_arg_1 = MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr(tstate, tmp_closure_1);

goto try_return_handler_3;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
Py_DECREF(generator_heap->tmp_genexpr_1__$0);
generator_heap->tmp_genexpr_1__$0 = NULL;
goto outline_result_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
tmp_expression_value_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
CHECK_OBJECT(tmp_any_arg_1);
Py_DECREF(tmp_any_arg_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "Ncc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_any_arg_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_any_arg_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "Ncc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 125;
generator_heap->type_description_1 = "Ncc";
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
    generator_heap->var_item,
    generator->m_closure[0]
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

CHECK_OBJECT(generator_heap->var_item);
CHECK_OBJECT(generator_heap->var_item);
Py_DECREF(generator_heap->var_item);
generator_heap->var_item = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
CHECK_OBJECT(generator_heap->var_item);
CHECK_OBJECT(generator_heap->var_item);
Py_DECREF(generator_heap->var_item);
generator_heap->var_item = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr_context,
        module_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_8c484555b75945c183cc09d75e4f3b99,
#endif
        code_objects_cadf07a279d56ed8a603616a2da63bac,
        closure,
        2,
#if 1
        sizeof(struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr_locals {
PyObject *var_arg;
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

static PyObject *google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr_locals *generator_heap = (struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_arg = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_a94ae5fb584d6d93fa49e7cbdf4c9e52, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
generator_heap->type_description_1 = "Noc";
generator_heap->exception_lineno = 126;
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
    PyObject *old = generator_heap->var_arg;
    generator_heap->var_arg = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_arg);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain_item);
CHAIN_EXCEPTION(tstate, generator_heap->exception_state.exception_value);

generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}

tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
CHECK_OBJECT(generator_heap->var_arg);
tmp_args_element_value_2 = generator_heap->var_arg;
generator->m_frame->m_frame.f_lineno = 127;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 127;
generator_heap->type_description_1 = "Noc";
    goto try_except_handler_2;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 126;
generator_heap->type_description_1 = "Noc";
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
    generator_heap->var_arg,
    generator->m_closure[1]
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

Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr_context,
        module_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_8da16a3da347106109e022cb265e00f7,
#endif
        code_objects_a94ae5fb584d6d93fa49e7cbdf4c9e52,
        closure,
        2,
#if 1
        sizeof(struct google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible$$$genexpr__2_genexpr$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_option = python_pars[0];
PyObject *par_param = python_pars[1];
PyObject *par_func_name = python_pars[2];
PyObject *var_schema = NULL;
PyObject *var_default_value_error_msg = NULL;
PyObject *var_unique_types = NULL;
PyObject *var_arg = NULL;
PyObject *var_schema_in_any_of = NULL;
PyObject *var_origin = NULL;
PyObject *var_args = NULL;
PyObject *var_optional_arg = NULL;
PyObject *var_field_name = NULL;
PyObject *var_field_info = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_for_loop_3__for_iterator = NULL;
PyObject *tmp_for_loop_3__iter_value = NULL;
PyObject *tmp_for_loop_4__for_iterator = NULL;
PyObject *tmp_for_loop_4__iter_value = NULL;
PyObject *tmp_genexpr_1__$0 = NULL;
PyObject *tmp_genexpr_2__$0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter)) {
    Py_XDECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter = MAKE_FUNCTION_FRAME(tstate, code_objects_7cefed60a4d528511921a434a1c6d202, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_type_description == NULL);
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter = cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 149;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_Schema);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_schema == NULL);
var_schema = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_58e76402a4797081ef7732e6c1efbcf6;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 9);
{
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyObject *tmp_format_value_4;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_param);
tmp_expression_value_1 = par_param;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_default);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_eb572adc118e676d6a6dd749f12e931a;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par_param);
tmp_format_value_2 = par_param;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_2f4e281df515d168a643c6264363daf6;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
CHECK_OBJECT(par_func_name);
tmp_format_value_3 = par_func_name;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_a9d8cd18c6e47840d824aaf82ae37d67;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
CHECK_OBJECT(par_param);
tmp_expression_value_2 = par_param;
tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_annotation);
if (tmp_format_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
CHECK_OBJECT(tmp_format_value_4);
Py_DECREF(tmp_format_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_2 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_2 == NULL));
assert(var_default_value_error_msg == NULL);
var_default_value_error_msg = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_3;
int tmp_truth_name_1;
tmp_called_value_1 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_builtin_primitive_or_compound(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_builtin_primitive_or_compound);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 155;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_3 = par_param;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 155;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 155;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_param);
tmp_expression_value_4 = par_param;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 156;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_3;
PyObject *tmp_expression_value_8;
tmp_called_value_2 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_7 = par_param;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_default);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_8 = par_param;
tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_2);

exception_lineno = 157;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 157;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(var_default_value_error_msg);
tmp_make_exception_arg_1 = var_default_value_error_msg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 158;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 158;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_param);
tmp_expression_value_9 = par_param;
tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_default);
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_1 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_default, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_11;
PyObject *tmp_assattr_target_2;
tmp_expression_value_10 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_11 = par_param;
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_annotation);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_2 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain_type, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var_schema);
tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_12;
PyObject *tmp_all_arg_1;
PyObject *tmp_capi_result_1;
int tmp_truth_name_2;
CHECK_OBJECT(par_param);
tmp_expression_value_12 = par_param;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_annotation);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_google$genai$_automatic_function_calling_util$VersionedUnionType(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_VersionedUnionType);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 163;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_13;
tmp_called_value_3 = module_var_accessor_google$genai$_automatic_function_calling_util$get_args(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_args);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_13 = par_param;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 168;
tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_1__$0 == NULL);
tmp_genexpr_1__$0 = tmp_assign_source_3;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
tmp_all_arg_1 = MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr(tstate, tmp_closure_1);

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
tmp_capi_result_1 = BUILTIN_ALL(tstate, tmp_all_arg_1);
CHECK_OBJECT(tmp_all_arg_1);
Py_DECREF(tmp_all_arg_1);
if (tmp_capi_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
assert(!(tmp_truth_name_2 == -1));
tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_capi_result_1);
Py_DECREF(tmp_capi_result_1);
tmp_condition_result_4 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_4 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_2;
PyObject *tmp_assattr_target_3;
tmp_expression_value_14 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = (PyObject *)&PyDict_Type;
tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_2);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_3 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, const_str_plain_type, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(var_schema);
tmp_assattr_target_4 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_any_of, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = PySet_New(NULL);
assert(var_unique_types == NULL);
var_unique_types = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_expression_value_15;
tmp_called_value_4 = module_var_accessor_google$genai$_automatic_function_calling_util$get_args(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_args);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_15 = par_param;
tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 174;
tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooo";
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
type_description_1 = "ooooooooooooo";
exception_lineno = 174;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_7 = tmp_for_loop_1__iter_value;
{
    PyObject *old = var_arg;
    var_arg = tmp_assign_source_7;
    Py_INCREF(var_arg);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_16;
CHECK_OBJECT(var_arg);
tmp_expression_value_16 = var_arg;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain___name__);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_cmp_expr_right_2 = mod_consts.const_str_plain_NoneType;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
tmp_assattr_value_5 = Py_True;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 176;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_assattr_target_5 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_nullable, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
}
goto loop_start_1;
branch_no_5:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_args_element_value_8;
tmp_called_value_5 = module_var_accessor_google$genai$_automatic_function_calling_util$_parse_schema_from_parameter(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_schema_from_parameter);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
if (par_api_option == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_option);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 179;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_6 = par_api_option;
tmp_expression_value_17 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_Parameter);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_arg_value_0_1 = mod_consts.const_str_plain_item;
tmp_expression_value_19 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_6);

exception_lineno = 181;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 181;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_POSITIONAL_OR_KEYWORD);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_kw_call_arg_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 181;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_arg);
tmp_kw_call_dict_value_0_1 = var_arg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 180;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_annotation_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_arg_value_1_1);
Py_DECREF(tmp_kw_call_arg_value_1_1);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
if (par_func_name == NULL) {
Py_DECREF(tmp_args_element_value_7);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 183;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_args_element_value_8 = par_func_name;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 178;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = var_schema_in_any_of;
    var_schema_in_any_of = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(var_schema_in_any_of);
tmp_expression_value_20 = var_schema_in_any_of;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_model_dump_json);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 186;
tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_exclude_none_tuple);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
if (var_unique_types == NULL) {
Py_DECREF(tmp_cmp_expr_left_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 187;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_cmp_expr_right_3 = var_unique_types;
tmp_res = PySet_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_9;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 189;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_22 = var_schema;
tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_any_of);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_schema_in_any_of);
tmp_args_element_value_9 = var_schema_in_any_of;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 189;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_24;
if (var_unique_types == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 190;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_23 = var_unique_types;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_add);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_schema_in_any_of);
tmp_expression_value_24 = var_schema_in_any_of;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_model_dump_json);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 190;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 190;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_exclude_none_tuple);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 190;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 190;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_6:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
nuitka_digit tmp_cmp_expr_right_4;
PyObject *tmp_len_arg_1;
PyObject *tmp_expression_value_25;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 191;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_25 = var_schema;
tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_any_of);
if (tmp_len_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
CHECK_OBJECT(tmp_len_arg_1);
Py_DECREF(tmp_len_arg_1);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 191;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = 1;
tmp_condition_result_7 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_3;
PyObject *tmp_assattr_target_6;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_28 = var_schema;
tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_any_of);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = const_int_0;
tmp_expression_value_26 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_27, tmp_subscript_value_3, 0);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_26);
Py_DECREF(tmp_expression_value_26);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_schema == NULL) {
Py_DECREF(tmp_assattr_value_6);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 192;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_6 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, const_str_plain_type, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_assattr_target_7;
tmp_assattr_value_7 = Py_None;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 193;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_7 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_any_of, tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_7:;
{
bool tmp_condition_result_8;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_29;
PyObject *tmp_expression_value_30;
PyObject *tmp_expression_value_31;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_32;
CHECK_OBJECT(par_param);
tmp_expression_value_29 = par_param;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_31 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 195;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 195;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_5);

exception_lineno = 195;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
CHECK_OBJECT(tmp_cmp_expr_right_5);
Py_DECREF(tmp_cmp_expr_right_5);
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_param);
tmp_expression_value_32 = par_param;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
tmp_condition_result_8 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_8 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_11;
PyObject *tmp_expression_value_33;
PyObject *tmp_args_element_value_12;
PyObject *tmp_expression_value_34;
tmp_called_value_11 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 198;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_33 = par_param;
tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts.const_str_plain_default);
if (tmp_args_element_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_34 = par_param;
tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 198;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 198;
{
    PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
CHECK_OBJECT(var_default_value_error_msg);
tmp_make_exception_arg_2 = var_default_value_error_msg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 199;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 199;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_9:;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_expression_value_35;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(par_param);
tmp_expression_value_35 = par_param;
tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts.const_str_plain_default);
if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_schema == NULL) {
Py_DECREF(tmp_assattr_value_8);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 200;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_8 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_default, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_8:;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 201;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_4:;
{
nuitka_bool tmp_condition_result_10;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_36;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_37;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(par_param);
tmp_expression_value_36 = par_param;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain_annotation);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = module_var_accessor_google$genai$_automatic_function_calling_util$_GenericAlias(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GenericAlias);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 202;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_param);
tmp_expression_value_37 = par_param;
tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts.const_str_plain_annotation);
if (tmp_isinstance_inst_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_38 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_38 == NULL));
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts.const_str_plain_GenericAlias);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_3);

exception_lineno = 203;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_inst_3);
Py_DECREF(tmp_isinstance_inst_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_10 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_10 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_39;
tmp_called_value_12 = module_var_accessor_google$genai$_automatic_function_calling_util$get_origin(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_origin);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_39 = par_param;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 205;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_origin == NULL);
var_origin = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_40;
tmp_called_value_13 = module_var_accessor_google$genai$_automatic_function_calling_util$get_args(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_args);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_40 = par_param;
tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 206;
tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_14);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_args == NULL);
var_args = tmp_assign_source_10;
}
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_7 = var_origin;
tmp_cmp_expr_right_7 = (PyObject *)&PyDict_Type;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_4;
PyObject *tmp_assattr_target_9;
tmp_expression_value_41 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 208;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = (PyObject *)&PyDict_Type;
tmp_assattr_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_4);
if (tmp_assattr_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_9 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, const_str_plain_type, tmp_assattr_value_9);
CHECK_OBJECT(tmp_assattr_value_9);
Py_DECREF(tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 208;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_42;
PyObject *tmp_expression_value_43;
PyObject *tmp_expression_value_44;
CHECK_OBJECT(par_param);
tmp_expression_value_42 = par_param;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_44 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 209;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 209;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_43);
Py_DECREF(tmp_expression_value_43);
if (tmp_cmp_expr_right_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_8);

exception_lineno = 209;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_12 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
CHECK_OBJECT(tmp_cmp_expr_right_8);
Py_DECREF(tmp_cmp_expr_right_8);
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_3;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_expression_value_45;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_46;
tmp_called_value_14 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 210;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_45 = par_param;
tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts.const_str_plain_default);
if (tmp_args_element_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_46 = par_param;
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_15);

exception_lineno = 210;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 210;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_operand_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
CHECK_OBJECT(tmp_operand_value_3);
Py_DECREF(tmp_operand_value_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
CHECK_OBJECT(var_default_value_error_msg);
tmp_make_exception_arg_3 = var_default_value_error_msg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 211;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 211;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_13:;
{
PyObject *tmp_assattr_value_10;
PyObject *tmp_expression_value_47;
PyObject *tmp_assattr_target_10;
CHECK_OBJECT(par_param);
tmp_expression_value_47 = par_param;
tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain_default);
if (tmp_assattr_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_10 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts.const_str_plain_default, tmp_assattr_value_10);
CHECK_OBJECT(tmp_assattr_value_10);
Py_DECREF(tmp_assattr_value_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_12:;
CHECK_OBJECT(var_schema);
tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_11:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_9 = var_origin;
tmp_cmp_expr_right_9 = module_var_accessor_google$genai$_automatic_function_calling_util$Literal(tstate);
if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_cmp_expr_right_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 214;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_all_arg_2;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(var_args);
tmp_iter_arg_3 = var_args;
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_genexpr_2__$0 == NULL);
tmp_genexpr_2__$0 = tmp_assign_source_11;
}
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);
tmp_all_arg_2 = MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr(tstate, tmp_closure_2);

goto try_return_handler_4;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(tmp_genexpr_2__$0);
CHECK_OBJECT(tmp_genexpr_2__$0);
Py_DECREF(tmp_genexpr_2__$0);
tmp_genexpr_2__$0 = NULL;
goto outline_result_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_2:;
tmp_operand_value_4 = BUILTIN_ALL(tstate, tmp_all_arg_2);
CHECK_OBJECT(tmp_all_arg_2);
Py_DECREF(tmp_all_arg_2);
if (tmp_operand_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
CHECK_OBJECT(tmp_operand_value_4);
Py_DECREF(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = mod_consts.const_str_digest_b8bbbcf77b9e74eec7fe1baea5a156f9;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_5;
PyObject *tmp_expression_value_48;
PyObject *tmp_format_spec_5;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_param);
tmp_expression_value_48 = par_param;
tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts.const_str_plain_annotation);
if (tmp_format_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_2;
}
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
CHECK_OBJECT(tmp_format_value_5);
Py_DECREF(tmp_format_value_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "ooooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_747f0e67928d03ba42d3f7fc02334579;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_make_exception_arg_4 == NULL));
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 216;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 216;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_15:;
{
PyObject *tmp_assattr_value_11;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_5;
PyObject *tmp_assattr_target_11;
tmp_expression_value_49 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
tmp_assattr_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_5);
if (tmp_assattr_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_11 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, const_str_plain_type, tmp_assattr_value_11);
CHECK_OBJECT(tmp_assattr_value_11);
Py_DECREF(tmp_assattr_value_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_12;
PyObject *tmp_list_arg_1;
PyObject *tmp_assattr_target_12;
CHECK_OBJECT(var_args);
tmp_list_arg_1 = var_args;
tmp_assattr_value_12 = MAKE_LIST(tstate, tmp_list_arg_1);
if (tmp_assattr_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_12 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts.const_str_plain_enum, tmp_assattr_value_12);
CHECK_OBJECT(tmp_assattr_value_12);
Py_DECREF(tmp_assattr_value_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 220;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_expression_value_52;
CHECK_OBJECT(par_param);
tmp_expression_value_50 = par_param;
tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_52 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 221;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 221;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_cmp_expr_right_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_10);

exception_lineno = 221;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_16 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
CHECK_OBJECT(tmp_cmp_expr_right_10);
Py_DECREF(tmp_cmp_expr_right_10);
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
bool tmp_condition_result_17;
PyObject *tmp_operand_value_5;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_53;
PyObject *tmp_args_element_value_18;
PyObject *tmp_expression_value_54;
tmp_called_value_15 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_53 = par_param;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts.const_str_plain_default);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_54 = par_param;
tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_17);

exception_lineno = 222;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 222;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_operand_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
CHECK_OBJECT(tmp_operand_value_5);
Py_DECREF(tmp_operand_value_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_17 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
CHECK_OBJECT(var_default_value_error_msg);
tmp_make_exception_arg_5 = var_default_value_error_msg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 223;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 223;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_17:;
{
PyObject *tmp_assattr_value_13;
PyObject *tmp_expression_value_55;
PyObject *tmp_assattr_target_13;
CHECK_OBJECT(par_param);
tmp_expression_value_55 = par_param;
tmp_assattr_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts.const_str_plain_default);
if (tmp_assattr_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_13 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts.const_str_plain_default, tmp_assattr_value_13);
CHECK_OBJECT(tmp_assattr_value_13);
Py_DECREF(tmp_assattr_value_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_16:;
CHECK_OBJECT(var_schema);
tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_14:;
{
bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_11 = var_origin;
tmp_cmp_expr_right_11 = (PyObject *)&PyList_Type;
tmp_condition_result_18 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_assattr_value_14;
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_6;
PyObject *tmp_assattr_target_14;
tmp_expression_value_56 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = (PyObject *)&PyList_Type;
tmp_assattr_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_6);
if (tmp_assattr_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_14 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, const_str_plain_type, tmp_assattr_value_14);
CHECK_OBJECT(tmp_assattr_value_14);
Py_DECREF(tmp_assattr_value_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_15;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_57;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_arg_value_1_2;
PyObject *tmp_expression_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_7;
PyObject *tmp_args_element_value_21;
PyObject *tmp_assattr_target_15;
tmp_called_value_16 = module_var_accessor_google$genai$_automatic_function_calling_util$_parse_schema_from_parameter(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_schema_from_parameter);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 228;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_option);
tmp_args_element_value_19 = par_api_option;
tmp_expression_value_57 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts.const_str_plain_Parameter);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_0_2 = mod_consts.const_str_plain_item;
tmp_expression_value_59 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_17);

exception_lineno = 232;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 232;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts.const_str_plain_POSITIONAL_OR_KEYWORD);
CHECK_OBJECT(tmp_expression_value_58);
Py_DECREF(tmp_expression_value_58);
if (tmp_kw_call_arg_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 232;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_args);
tmp_expression_value_60 = var_args;
tmp_subscript_value_7 = const_int_0;
tmp_kw_call_dict_value_0_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_7, 0);
if (tmp_kw_call_dict_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_kw_call_arg_value_1_2);

exception_lineno = 233;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 230;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_args_element_value_20 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_17, args, kw_values, mod_consts.const_tuple_str_plain_annotation_tuple);
}

CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_kw_call_arg_value_1_2);
Py_DECREF(tmp_kw_call_arg_value_1_2);
CHECK_OBJECT(tmp_kw_call_dict_value_0_2);
Py_DECREF(tmp_kw_call_dict_value_0_2);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_func_name);
tmp_args_element_value_21 = par_func_name;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 228;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_assattr_value_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assattr_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_15 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts.const_str_plain_items, tmp_assattr_value_15);
CHECK_OBJECT(tmp_assattr_value_15);
Py_DECREF(tmp_assattr_value_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_expression_value_61;
PyObject *tmp_expression_value_62;
PyObject *tmp_expression_value_63;
CHECK_OBJECT(par_param);
tmp_expression_value_61 = par_param;
tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_63 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 237;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 237;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_62);
Py_DECREF(tmp_expression_value_62);
if (tmp_cmp_expr_right_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_12);

exception_lineno = 237;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_19 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
CHECK_OBJECT(tmp_cmp_expr_right_12);
Py_DECREF(tmp_cmp_expr_right_12);
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
bool tmp_condition_result_20;
PyObject *tmp_operand_value_6;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_22;
PyObject *tmp_expression_value_64;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_65;
tmp_called_value_18 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_64 = par_param;
tmp_args_element_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts.const_str_plain_default);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_65 = par_param;
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_22);

exception_lineno = 238;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 238;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_operand_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
CHECK_OBJECT(tmp_operand_value_6);
Py_DECREF(tmp_operand_value_6);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooo";
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
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
CHECK_OBJECT(var_default_value_error_msg);
tmp_make_exception_arg_6 = var_default_value_error_msg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 239;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 239;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_20:;
{
PyObject *tmp_assattr_value_16;
PyObject *tmp_expression_value_66;
PyObject *tmp_assattr_target_16;
CHECK_OBJECT(par_param);
tmp_expression_value_66 = par_param;
tmp_assattr_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts.const_str_plain_default);
if (tmp_assattr_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_16 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts.const_str_plain_default, tmp_assattr_value_16);
CHECK_OBJECT(tmp_assattr_value_16);
Py_DECREF(tmp_assattr_value_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_19:;
CHECK_OBJECT(var_schema);
tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_18:;
{
bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(var_origin);
tmp_cmp_expr_left_13 = var_origin;
tmp_cmp_expr_right_13 = module_var_accessor_google$genai$_automatic_function_calling_util$Union(tstate);
if (unlikely(tmp_cmp_expr_right_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_cmp_expr_right_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_21 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_assattr_value_17;
PyObject *tmp_assattr_target_17;
tmp_assattr_value_17 = MAKE_LIST_EMPTY(tstate, 0);
CHECK_OBJECT(var_schema);
tmp_assattr_target_17 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts.const_str_plain_any_of, tmp_assattr_value_17);
CHECK_OBJECT(tmp_assattr_value_17);
Py_DECREF(tmp_assattr_value_17);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_18;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_8;
PyObject *tmp_assattr_target_18;
tmp_expression_value_67 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 244;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_8 = (PyObject *)&PyDict_Type;
tmp_assattr_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_8);
if (tmp_assattr_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_18 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, const_str_plain_type, tmp_assattr_value_18);
CHECK_OBJECT(tmp_assattr_value_18);
Py_DECREF(tmp_assattr_value_18);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = PySet_New(NULL);
assert(var_unique_types == NULL);
var_unique_types = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(var_args);
tmp_iter_arg_4 = var_args;
tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_2__for_iterator == NULL);
tmp_for_loop_2__for_iterator = tmp_assign_source_13;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_14;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_14 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 246;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_assign_source_15 = tmp_for_loop_2__iter_value;
{
    PyObject *old = var_arg;
    var_arg = tmp_assign_source_15;
    Py_INCREF(var_arg);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_22;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_type_arg_1;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_expression_value_68;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_expression_value_69;
CHECK_OBJECT(var_arg);
tmp_type_arg_1 = var_arg;
tmp_cmp_expr_left_14 = BUILTIN_TYPE1(tmp_type_arg_1);
assert(!(tmp_cmp_expr_left_14 == NULL));
tmp_cmp_expr_right_14 = (PyObject *)Py_TYPE(Py_None);
tmp_or_left_value_2 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(var_arg);
tmp_expression_value_68 = var_arg;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_68, const_str_plain___name__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(var_arg);
tmp_expression_value_69 = var_arg;
tmp_cmp_expr_left_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, const_str_plain___name__);
if (tmp_cmp_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_15 = mod_consts.const_str_plain_NoneType;
tmp_and_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_or_right_value_2 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_or_right_value_2 = tmp_and_left_value_3;
and_end_3:;
tmp_condition_result_22 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_condition_result_22 = tmp_or_left_value_2;
or_end_2:;
if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_assattr_value_19;
PyObject *tmp_assattr_target_19;
tmp_assattr_value_19 = Py_True;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 252;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_assattr_target_19 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts.const_str_plain_nullable, tmp_assattr_value_19);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
}
goto loop_start_2;
branch_no_22:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_20;
PyObject *tmp_expression_value_70;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_arg_value_1_3;
PyObject *tmp_expression_value_71;
PyObject *tmp_expression_value_72;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_args_element_value_26;
tmp_called_value_19 = module_var_accessor_google$genai$_automatic_function_calling_util$_parse_schema_from_parameter(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_schema_from_parameter);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 254;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (par_api_option == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_option);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_24 = par_api_option;
tmp_expression_value_70 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts.const_str_plain_Parameter);
if (tmp_called_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_kw_call_arg_value_0_3 = mod_consts.const_str_plain_item;
tmp_expression_value_72 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_20);

exception_lineno = 258;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 258;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_kw_call_arg_value_1_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts.const_str_plain_POSITIONAL_OR_KEYWORD);
CHECK_OBJECT(tmp_expression_value_71);
Py_DECREF(tmp_expression_value_71);
if (tmp_kw_call_arg_value_1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_20);

exception_lineno = 258;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_arg);
tmp_kw_call_dict_value_0_3 = var_arg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 256;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3, tmp_kw_call_arg_value_1_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_args_element_value_25 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts.const_tuple_str_plain_annotation_tuple);
}

CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_kw_call_arg_value_1_3);
Py_DECREF(tmp_kw_call_arg_value_1_3);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (par_func_name == NULL) {
Py_DECREF(tmp_args_element_value_25);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 261;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_26 = par_func_name;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 254;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = var_schema_in_any_of;
    var_schema_in_any_of = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_23;
int tmp_and_left_truth_4;
bool tmp_and_left_value_4;
bool tmp_and_right_value_4;
PyObject *tmp_cmp_expr_left_16;
nuitka_digit tmp_cmp_expr_right_16;
PyObject *tmp_len_arg_2;
PyObject *tmp_expression_value_73;
PyObject *tmp_expression_value_74;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_expression_value_75;
PyObject *tmp_expression_value_76;
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 264;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_74 = par_param;
tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts.const_str_plain_annotation);
if (tmp_expression_value_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts.const_str_plain___args__);
CHECK_OBJECT(tmp_expression_value_73);
Py_DECREF(tmp_expression_value_73);
if (tmp_len_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_left_16 = BUILTIN_LEN(tstate, tmp_len_arg_2);
CHECK_OBJECT(tmp_len_arg_2);
Py_DECREF(tmp_len_arg_2);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_16 = 2;
tmp_and_left_value_4 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
tmp_and_left_truth_4 = tmp_and_left_value_4 != false ? 1 : 0;
if (tmp_and_left_truth_4 == 1) {
    goto and_right_4;
} else {
    goto and_left_4;
}
and_right_4:;
tmp_cmp_expr_left_17 = (PyObject *)Py_TYPE(Py_None);
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_76 = par_param;
tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts.const_str_plain_annotation);
if (tmp_expression_value_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_cmp_expr_right_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts.const_str_plain___args__);
CHECK_OBJECT(tmp_expression_value_75);
Py_DECREF(tmp_expression_value_75);
if (tmp_cmp_expr_right_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_17, tmp_cmp_expr_left_17);
CHECK_OBJECT(tmp_cmp_expr_right_17);
Py_DECREF(tmp_cmp_expr_right_17);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_and_right_value_4 = (tmp_res == 1) ? true : false;
tmp_condition_result_23 = tmp_and_right_value_4;
goto and_end_4;
and_left_4:;
tmp_condition_result_23 = tmp_and_left_value_4;
and_end_4:;
if (tmp_condition_result_23 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_5;
PyObject *tmp_expression_value_77;
PyObject *tmp_expression_value_78;
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 267;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_78 = par_param;
tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts.const_str_plain_annotation);
if (tmp_expression_value_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_iter_arg_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts.const_str_plain___args__);
CHECK_OBJECT(tmp_expression_value_77);
Py_DECREF(tmp_expression_value_77);
if (tmp_iter_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
CHECK_OBJECT(tmp_iter_arg_5);
Py_DECREF(tmp_iter_arg_5);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_for_loop_3__for_iterator;
    tmp_for_loop_3__for_iterator = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_18;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
tmp_next_source_3 = tmp_for_loop_3__for_iterator;
tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_18 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 267;
        goto try_except_handler_6;
    }
}

{
    PyObject *old = tmp_for_loop_3__iter_value;
    tmp_for_loop_3__iter_value = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
CHECK_OBJECT(tmp_for_loop_3__iter_value);
tmp_assign_source_19 = tmp_for_loop_3__iter_value;
{
    PyObject *old = var_optional_arg;
    var_optional_arg = tmp_assign_source_19;
    Py_INCREF(var_optional_arg);
    Py_XDECREF(old);
}

}
{
bool tmp_condition_result_24;
int tmp_and_left_truth_5;
bool tmp_and_left_value_5;
bool tmp_and_right_value_5;
PyObject *tmp_expression_value_79;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
PyObject *tmp_expression_value_80;
CHECK_OBJECT(var_optional_arg);
tmp_expression_value_79 = var_optional_arg;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_79, mod_consts.const_str_plain___origin__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_and_left_value_5 = (tmp_res != 0) ? true : false;
tmp_and_left_truth_5 = tmp_and_left_value_5 != false ? 1 : 0;
if (tmp_and_left_truth_5 == 1) {
    goto and_right_5;
} else {
    goto and_left_5;
}
and_right_5:;
CHECK_OBJECT(var_optional_arg);
tmp_expression_value_80 = var_optional_arg;
tmp_cmp_expr_left_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts.const_str_plain___origin__);
if (tmp_cmp_expr_left_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_18 = (PyObject *)&PyList_Type;
tmp_and_right_value_5 = (tmp_cmp_expr_left_18 == tmp_cmp_expr_right_18) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_18);
Py_DECREF(tmp_cmp_expr_left_18);
tmp_condition_result_24 = tmp_and_right_value_5;
goto and_end_5;
and_left_5:;
tmp_condition_result_24 = tmp_and_left_value_5;
and_end_5:;
if (tmp_condition_result_24 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_assattr_value_20;
PyObject *tmp_expression_value_81;
PyObject *tmp_assattr_target_20;
if (var_schema_in_any_of == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema_in_any_of);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}

tmp_expression_value_81 = var_schema_in_any_of;
tmp_assattr_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts.const_str_plain_items);
if (tmp_assattr_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
if (var_schema == NULL) {
Py_DECREF(tmp_assattr_value_20);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 273;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}

tmp_assattr_target_20 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts.const_str_plain_items, tmp_assattr_value_20);
CHECK_OBJECT(tmp_assattr_value_20);
Py_DECREF(tmp_assattr_value_20);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
}
branch_no_24:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_6;
}
goto loop_start_3;
loop_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_5;
// End of try:
try_end_2:;
Py_XDECREF(tmp_for_loop_3__iter_value);
tmp_for_loop_3__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
CHECK_OBJECT(tmp_for_loop_3__for_iterator);
Py_DECREF(tmp_for_loop_3__for_iterator);
tmp_for_loop_3__for_iterator = NULL;
branch_no_23:;
{
bool tmp_condition_result_25;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_called_value_21;
PyObject *tmp_expression_value_82;
if (var_schema_in_any_of == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema_in_any_of);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_82 = var_schema_in_any_of;
tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts.const_str_plain_model_dump_json);
if (tmp_called_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 275;
tmp_cmp_expr_left_19 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_exclude_none_tuple);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
if (tmp_cmp_expr_left_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (var_unique_types == NULL) {
Py_DECREF(tmp_cmp_expr_left_19);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 276;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_cmp_expr_right_19 = var_unique_types;
tmp_res = PySet_Contains(tmp_cmp_expr_right_19, tmp_cmp_expr_left_19);
CHECK_OBJECT(tmp_cmp_expr_left_19);
Py_DECREF(tmp_cmp_expr_left_19);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_25 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_25 != false) {
    goto branch_yes_25;
} else {
    goto branch_no_25;
}
}
branch_yes_25:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_expression_value_83;
PyObject *tmp_expression_value_84;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_27;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_84 = var_schema;
tmp_expression_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts.const_str_plain_any_of);
if (tmp_expression_value_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts.const_str_plain_append);
CHECK_OBJECT(tmp_expression_value_83);
Py_DECREF(tmp_expression_value_83);
if (tmp_called_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (var_schema_in_any_of == NULL) {
Py_DECREF(tmp_called_value_22);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema_in_any_of);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 278;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_27 = var_schema_in_any_of;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 278;
tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_expression_value_85;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_28;
PyObject *tmp_called_value_24;
PyObject *tmp_expression_value_86;
if (var_unique_types == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_unique_types);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_85 = var_unique_types;
tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts.const_str_plain_add);
if (tmp_called_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
if (var_schema_in_any_of == NULL) {
Py_DECREF(tmp_called_value_23);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema_in_any_of);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_86 = var_schema_in_any_of;
tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts.const_str_plain_model_dump_json);
if (tmp_called_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 279;
tmp_args_element_value_28 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_exclude_none_tuple);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 279;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_25:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_26;
PyObject *tmp_cmp_expr_left_20;
nuitka_digit tmp_cmp_expr_right_20;
PyObject *tmp_len_arg_3;
PyObject *tmp_expression_value_87;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 280;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_87 = var_schema;
tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts.const_str_plain_any_of);
if (tmp_len_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_left_20 = BUILTIN_LEN(tstate, tmp_len_arg_3);
CHECK_OBJECT(tmp_len_arg_3);
Py_DECREF(tmp_len_arg_3);
if (tmp_cmp_expr_left_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_20 = 1;
tmp_condition_result_26 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
CHECK_OBJECT(tmp_cmp_expr_left_20);
Py_DECREF(tmp_cmp_expr_left_20);
if (tmp_condition_result_26 != false) {
    goto branch_yes_26;
} else {
    goto branch_no_26;
}
}
branch_yes_26:;
{
PyObject *tmp_assattr_value_21;
PyObject *tmp_expression_value_88;
PyObject *tmp_expression_value_89;
PyObject *tmp_expression_value_90;
PyObject *tmp_subscript_value_9;
PyObject *tmp_assattr_target_21;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_90 = var_schema;
tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts.const_str_plain_any_of);
if (tmp_expression_value_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_9 = const_int_0;
tmp_expression_value_88 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_89, tmp_subscript_value_9, 0);
CHECK_OBJECT(tmp_expression_value_89);
Py_DECREF(tmp_expression_value_89);
if (tmp_expression_value_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, const_str_plain_type);
CHECK_OBJECT(tmp_expression_value_88);
Py_DECREF(tmp_expression_value_88);
if (tmp_assattr_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_schema == NULL) {
Py_DECREF(tmp_assattr_value_21);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 281;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_21 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, const_str_plain_type, tmp_assattr_value_21);
CHECK_OBJECT(tmp_assattr_value_21);
Py_DECREF(tmp_assattr_value_21);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_22;
PyObject *tmp_assattr_target_22;
tmp_assattr_value_22 = Py_None;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_22 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_22, mod_consts.const_str_plain_any_of, tmp_assattr_value_22);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_26:;
{
bool tmp_condition_result_27;
int tmp_and_left_truth_6;
bool tmp_and_left_value_6;
bool tmp_and_right_value_6;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
PyObject *tmp_expression_value_91;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
PyObject *tmp_expression_value_92;
PyObject *tmp_expression_value_93;
PyObject *tmp_expression_value_94;
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 284;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_91 = par_param;
tmp_cmp_expr_left_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_21 = Py_None;
tmp_and_left_value_6 = (tmp_cmp_expr_left_21 != tmp_cmp_expr_right_21) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_21);
Py_DECREF(tmp_cmp_expr_left_21);
tmp_and_left_truth_6 = tmp_and_left_value_6 != false ? 1 : 0;
if (tmp_and_left_truth_6 == 1) {
    goto and_right_6;
} else {
    goto and_left_6;
}
and_right_6:;
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_92 = par_param;
tmp_cmp_expr_left_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_94 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_94 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_94 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_22);

exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_22);

exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_93);
Py_DECREF(tmp_expression_value_93);
if (tmp_cmp_expr_right_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_22);

exception_lineno = 285;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_6 = (tmp_cmp_expr_left_22 != tmp_cmp_expr_right_22) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_22);
Py_DECREF(tmp_cmp_expr_left_22);
CHECK_OBJECT(tmp_cmp_expr_right_22);
Py_DECREF(tmp_cmp_expr_right_22);
tmp_condition_result_27 = tmp_and_right_value_6;
goto and_end_6;
and_left_6:;
tmp_condition_result_27 = tmp_and_left_value_6;
and_end_6:;
if (tmp_condition_result_27 != false) {
    goto branch_yes_27;
} else {
    goto branch_no_27;
}
}
branch_yes_27:;
{
bool tmp_condition_result_28;
PyObject *tmp_operand_value_7;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_29;
PyObject *tmp_expression_value_95;
PyObject *tmp_args_element_value_30;
PyObject *tmp_expression_value_96;
tmp_called_value_25 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_default_value_compatible(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__is_default_value_compatible);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_95 = par_param;
tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts.const_str_plain_default);
if (tmp_args_element_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (par_param == NULL) {
Py_DECREF(tmp_args_element_value_29);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 287;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_96 = par_param;
tmp_args_element_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_29);

exception_lineno = 287;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 287;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_operand_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
CHECK_OBJECT(tmp_operand_value_7);
Py_DECREF(tmp_operand_value_7);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_28 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_28 != false) {
    goto branch_yes_28;
} else {
    goto branch_no_28;
}
}
branch_yes_28:;
{
PyObject *tmp_raise_type_7;
PyObject *tmp_make_exception_arg_7;
CHECK_OBJECT(var_default_value_error_msg);
tmp_make_exception_arg_7 = var_default_value_error_msg;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 288;
tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_7);
assert(!(tmp_raise_type_7 == NULL));
exception_state.exception_value = tmp_raise_type_7;
exception_lineno = 288;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_28:;
{
PyObject *tmp_assattr_value_23;
PyObject *tmp_expression_value_97;
PyObject *tmp_assattr_target_23;
if (par_param == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_param);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 289;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_97 = par_param;
tmp_assattr_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts.const_str_plain_default);
if (tmp_assattr_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_schema == NULL) {
Py_DECREF(tmp_assattr_value_23);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 289;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_23 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_23, mod_consts.const_str_plain_default, tmp_assattr_value_23);
CHECK_OBJECT(tmp_assattr_value_23);
Py_DECREF(tmp_assattr_value_23);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_27:;
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 290;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_21:;
branch_no_10:;
{
nuitka_bool tmp_condition_result_29;
PyObject *tmp_called_value_26;
PyObject *tmp_expression_value_98;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_31;
PyObject *tmp_expression_value_99;
int tmp_truth_name_3;
tmp_expression_value_98 = module_var_accessor_google$genai$_automatic_function_calling_util$_extra_utils(tstate);
if (unlikely(tmp_expression_value_98 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__extra_utils);
}

if (tmp_expression_value_98 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts.const_str_plain_is_annotation_pydantic_model);
if (tmp_called_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_expression_value_99 = par_param;
tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts.const_str_plain_annotation);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_26);

exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 294;
tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_31);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_6);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_6);

exception_lineno = 294;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_29 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
    goto branch_yes_29;
} else {
    goto branch_no_29;
}
}
branch_yes_29:;
{
bool tmp_condition_result_30;
int tmp_and_left_truth_7;
bool tmp_and_left_value_7;
bool tmp_and_right_value_7;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
PyObject *tmp_expression_value_100;
PyObject *tmp_expression_value_101;
PyObject *tmp_expression_value_102;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
PyObject *tmp_expression_value_103;
CHECK_OBJECT(par_param);
tmp_expression_value_100 = par_param;
tmp_cmp_expr_left_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_102 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_102 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_102 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_23);

exception_lineno = 297;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_23);

exception_lineno = 297;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts.const_str_plain_empty);
CHECK_OBJECT(tmp_expression_value_101);
Py_DECREF(tmp_expression_value_101);
if (tmp_cmp_expr_right_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_cmp_expr_left_23);

exception_lineno = 297;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_7 = (tmp_cmp_expr_left_23 != tmp_cmp_expr_right_23) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_23);
Py_DECREF(tmp_cmp_expr_left_23);
CHECK_OBJECT(tmp_cmp_expr_right_23);
Py_DECREF(tmp_cmp_expr_right_23);
tmp_and_left_truth_7 = tmp_and_left_value_7 != false ? 1 : 0;
if (tmp_and_left_truth_7 == 1) {
    goto and_right_7;
} else {
    goto and_left_7;
}
and_right_7:;
CHECK_OBJECT(par_param);
tmp_expression_value_103 = par_param;
tmp_cmp_expr_left_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_24 = Py_None;
tmp_and_right_value_7 = (tmp_cmp_expr_left_24 != tmp_cmp_expr_right_24) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_24);
Py_DECREF(tmp_cmp_expr_left_24);
tmp_condition_result_30 = tmp_and_right_value_7;
goto and_end_7;
and_left_7:;
tmp_condition_result_30 = tmp_and_left_value_7;
and_end_7:;
if (tmp_condition_result_30 != false) {
    goto branch_yes_30;
} else {
    goto branch_no_30;
}
}
branch_yes_30:;
{
PyObject *tmp_assattr_value_24;
PyObject *tmp_expression_value_104;
PyObject *tmp_assattr_target_24;
CHECK_OBJECT(par_param);
tmp_expression_value_104 = par_param;
tmp_assattr_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts.const_str_plain_default);
if (tmp_assattr_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_24 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_24, mod_consts.const_str_plain_default, tmp_assattr_value_24);
CHECK_OBJECT(tmp_assattr_value_24);
Py_DECREF(tmp_assattr_value_24);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
branch_no_30:;
{
PyObject *tmp_assattr_value_25;
PyObject *tmp_expression_value_105;
PyObject *tmp_subscript_value_10;
PyObject *tmp_assattr_target_25;
tmp_expression_value_105 = module_var_accessor_google$genai$_automatic_function_calling_util$_py_builtin_type_to_schema_type(tstate);
if (unlikely(tmp_expression_value_105 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__py_builtin_type_to_schema_type);
}

if (tmp_expression_value_105 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 301;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_subscript_value_10 = (PyObject *)&PyDict_Type;
tmp_assattr_value_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_105, tmp_subscript_value_10);
if (tmp_assattr_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_assattr_target_25 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_25, const_str_plain_type, tmp_assattr_value_25);
CHECK_OBJECT(tmp_assattr_value_25);
Py_DECREF(tmp_assattr_value_25);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_26;
PyObject *tmp_assattr_target_26;
tmp_assattr_value_26 = MAKE_DICT_EMPTY(tstate);
CHECK_OBJECT(var_schema);
tmp_assattr_target_26 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_26, mod_consts.const_str_plain_properties, tmp_assattr_value_26);
CHECK_OBJECT(tmp_assattr_value_26);
Py_DECREF(tmp_assattr_value_26);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_iter_arg_6;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_106;
PyObject *tmp_expression_value_107;
PyObject *tmp_expression_value_108;
CHECK_OBJECT(par_param);
tmp_expression_value_108 = par_param;
tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts.const_str_plain_annotation);
if (tmp_expression_value_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts.const_str_plain_model_fields);
CHECK_OBJECT(tmp_expression_value_107);
Py_DECREF(tmp_expression_value_107);
if (tmp_expression_value_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_106);
Py_DECREF(tmp_expression_value_106);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 303;
tmp_iter_arg_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_27);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
if (tmp_iter_arg_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_20 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
CHECK_OBJECT(tmp_iter_arg_6);
Py_DECREF(tmp_iter_arg_6);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_4__for_iterator == NULL);
tmp_for_loop_4__for_iterator = tmp_assign_source_20;
}
// Tried code:
loop_start_4:;
{
PyObject *tmp_next_source_4;
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
tmp_next_source_4 = tmp_for_loop_4__for_iterator;
tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_4);
if (tmp_assign_source_21 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_4;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooooo";
exception_lineno = 303;
        goto try_except_handler_7;
    }
}

{
    PyObject *old = tmp_for_loop_4__iter_value;
    tmp_for_loop_4__iter_value = tmp_assign_source_21;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_iter_arg_7;
CHECK_OBJECT(tmp_for_loop_4__iter_value);
tmp_iter_arg_7 = tmp_for_loop_4__iter_value;
tmp_assign_source_22 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_22;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_23 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_23;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_24 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_24;
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



exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_9;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_8;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_7;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_25;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_25 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_field_name;
    var_field_name = tmp_assign_source_25;
    Py_INCREF(var_field_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_26;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_26 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_field_info;
    var_field_info = tmp_assign_source_26;
    Py_INCREF(var_field_info);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_called_value_29;
PyObject *tmp_expression_value_109;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_arg_value_1_4;
PyObject *tmp_expression_value_110;
PyObject *tmp_expression_value_111;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_expression_value_112;
PyObject *tmp_args_element_value_34;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_expression_value_113;
PyObject *tmp_ass_subscript_1;
tmp_called_value_28 = module_var_accessor_google$genai$_automatic_function_calling_util$_parse_schema_from_parameter(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__parse_schema_from_parameter);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
if (par_api_option == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_option);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 305;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_32 = par_api_option;
tmp_expression_value_109 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_109 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_109 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 306;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts.const_str_plain_Parameter);
if (tmp_called_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_field_name);
tmp_kw_call_arg_value_0_4 = var_field_name;
tmp_expression_value_111 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_111 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_111 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_29);

exception_lineno = 308;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
tmp_expression_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);

exception_lineno = 308;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
tmp_kw_call_arg_value_1_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts.const_str_plain_POSITIONAL_OR_KEYWORD);
CHECK_OBJECT(tmp_expression_value_110);
Py_DECREF(tmp_expression_value_110);
if (tmp_kw_call_arg_value_1_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);

exception_lineno = 308;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_field_info);
tmp_expression_value_112 = var_field_info;
tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts.const_str_plain_annotation);
if (tmp_kw_call_dict_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);
Py_DECREF(tmp_kw_call_arg_value_1_4);

exception_lineno = 309;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 306;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_4};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
    tmp_args_element_value_33 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_29, args, kw_values, mod_consts.const_tuple_str_plain_annotation_tuple);
}

CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_kw_call_arg_value_1_4);
Py_DECREF(tmp_kw_call_arg_value_1_4);
CHECK_OBJECT(tmp_kw_call_dict_value_0_4);
Py_DECREF(tmp_kw_call_dict_value_0_4);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
if (par_func_name == NULL) {
Py_DECREF(tmp_args_element_value_33);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_func_name);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 311;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}

tmp_args_element_value_34 = par_func_name;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 304;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
if (var_schema == NULL) {
Py_DECREF(tmp_ass_subvalue_1);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 304;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}

tmp_expression_value_113 = var_schema;
tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts.const_str_plain_properties);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_ass_subvalue_1);

exception_lineno = 304;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_field_name);
tmp_ass_subscript_1 = var_field_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "ooooooooooooo";
    goto try_except_handler_7;
}
goto loop_start_4;
loop_end_4:;
goto try_end_6;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_4__iter_value);
tmp_for_loop_4__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
CHECK_OBJECT(tmp_for_loop_4__for_iterator);
Py_DECREF(tmp_for_loop_4__for_iterator);
tmp_for_loop_4__for_iterator = NULL;
{
PyObject *tmp_assattr_value_27;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_35;
PyObject *tmp_assattr_target_27;
tmp_called_value_30 = module_var_accessor_google$genai$_automatic_function_calling_util$_get_required_fields(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__get_required_fields);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_35 = var_schema;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 313;
tmp_assattr_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_35);
if (tmp_assattr_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
if (var_schema == NULL) {
Py_DECREF(tmp_assattr_value_27);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 313;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_27 = var_schema;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_27, mod_consts.const_str_plain_required, tmp_assattr_value_27);
CHECK_OBJECT(tmp_assattr_value_27);
Py_DECREF(tmp_assattr_value_27);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
}
if (var_schema == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_schema);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 314;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_29:;
{
PyObject *tmp_called_value_31;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
tmp_called_value_31 = module_var_accessor_google$genai$_automatic_function_calling_util$_raise_for_unsupported_param(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__raise_for_unsupported_param);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_param);
tmp_args_element_value_36 = par_param;
CHECK_OBJECT(par_func_name);
tmp_args_element_value_37 = par_func_name;
tmp_args_element_value_38 = PyExc_ValueError;
frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame.f_lineno = 315;
{
    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_31, call_args);
}

if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter,
    type_description_1,
    par_api_option,
    par_param,
    par_func_name,
    var_schema,
    var_default_value_error_msg,
    var_unique_types,
    var_arg,
    var_schema_in_any_of,
    var_origin,
    var_args,
    var_optional_arg,
    var_field_name,
    var_field_info
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter == cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter);
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter = NULL;
}

assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter);

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
Py_XDECREF(var_schema);
var_schema = NULL;
CHECK_OBJECT(var_default_value_error_msg);
CHECK_OBJECT(var_default_value_error_msg);
Py_DECREF(var_default_value_error_msg);
var_default_value_error_msg = NULL;
Py_XDECREF(var_unique_types);
var_unique_types = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_schema_in_any_of);
var_schema_in_any_of = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_optional_arg);
var_optional_arg = NULL;
Py_XDECREF(var_field_name);
var_field_name = NULL;
Py_XDECREF(var_field_info);
var_field_info = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_schema);
var_schema = NULL;
Py_XDECREF(var_default_value_error_msg);
var_default_value_error_msg = NULL;
Py_XDECREF(var_unique_types);
var_unique_types = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_schema_in_any_of);
var_schema_in_any_of = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_optional_arg);
var_optional_arg = NULL;
Py_XDECREF(var_field_name);
var_field_name = NULL;
Py_XDECREF(var_field_info);
var_field_info = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_api_option);
Py_DECREF(par_api_option);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);
CHECK_OBJECT(par_func_name);
Py_DECREF(par_func_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_option);
Py_DECREF(par_api_option);
CHECK_OBJECT(par_param);
Py_DECREF(par_param);
CHECK_OBJECT(par_func_name);
Py_DECREF(par_func_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr_locals {
PyObject *var_arg;
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

static PyObject *google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr_locals *generator_heap = (struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_arg = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_edc7a4a929f58181652c7edaab9095da, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 166;
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
    PyObject *old = generator_heap->var_arg;
    generator_heap->var_arg = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_arg);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_1 = module_var_accessor_google$genai$_automatic_function_calling_util$_is_builtin_primitive_or_compound(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &generator_heap->exception_state, mod_consts.const_str_plain__is_builtin_primitive_or_compound);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&generator_heap->exception_state));



generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
CHECK_OBJECT(generator_heap->var_arg);
tmp_args_element_value_1 = generator_heap->var_arg;
generator->m_frame->m_frame.f_lineno = 167;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);
Py_DECREF(tmp_or_left_value_1);

generator_heap->exception_lineno = 167;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(generator_heap->var_arg);
tmp_cmp_expr_left_1 = generator_heap->var_arg;
tmp_cmp_expr_right_1 = (PyObject *)Py_TYPE(Py_None);
tmp_or_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
Py_INCREF(tmp_or_right_value_1);
tmp_expression_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_expression_value_1 = tmp_or_left_value_1;
or_end_1:;
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 167;
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


generator_heap->exception_lineno = 166;
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
    generator_heap->var_arg
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

Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr_context,
        module_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_83a31b4df03917000e8e8317822ea192,
#endif
        code_objects_edc7a4a929f58181652c7edaab9095da,
        closure,
        1,
#if 1
        sizeof(struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr_locals {
PyObject *var_arg;
PyObject *tmp_iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr_locals *generator_heap = (struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(generator->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
generator_heap->var_arg = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_4cb89e199b37e2b2d28911165316eb72, module_google$genai$_automatic_function_calling_util, sizeof(void *)+sizeof(void *));
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
generator_heap->exception_lineno = 215;
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
    PyObject *old = generator_heap->var_arg;
    generator_heap->var_arg = tmp_assign_source_2;
    Py_INCREF(generator_heap->var_arg);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_expression_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(generator_heap->var_arg);
tmp_isinstance_inst_1 = generator_heap->var_arg;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (generator_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 215;
generator_heap->type_description_1 = "No";
    goto try_except_handler_2;
}
tmp_expression_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
Py_INCREF(tmp_expression_value_1);
Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), NULL);
generator->m_yield_return_index = 1;
return tmp_expression_value_1;
yield_return_1:
Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);


generator_heap->exception_lineno = 215;
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


generator_heap->exception_lineno = 215;
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
    generator_heap->var_arg
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

Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;
// Re-raise.
generator_heap->exception_state = generator_heap->exception_keeper_name_2;
generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:
try_end_2:;
Py_XDECREF(generator_heap->tmp_iter_value_0);
generator_heap->tmp_iter_value_0 = NULL;
Py_XDECREF(generator_heap->var_arg);
generator_heap->var_arg = NULL;


    return NULL;

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&generator_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &generator_heap->exception_state);

    return NULL;

}

static PyObject *MAKE_GENERATOR_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr_context,
        module_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_angle_genexpr,
#if PYTHON_VERSION >= 0x350
        mod_consts.const_str_digest_83a31b4df03917000e8e8317822ea192,
#endif
        code_objects_4cb89e199b37e2b2d28911165316eb72,
        closure,
        1,
#if 1
        sizeof(struct google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
PyObject *outline_0_var_field_name = NULL;
PyObject *outline_0_var_field_schema = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields;
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
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields)) {
    Py_XDECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields = MAKE_FUNCTION_FRAME(tstate, code_objects_9e411924ca3bae60234dce97bc9932f0, module_google$genai$_automatic_function_calling_util, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields->m_type_description == NULL);
frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields = cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_schema);
tmp_expression_value_1 = par_schema;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_properties);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "o";
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
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_schema);
tmp_expression_value_3 = par_schema;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_properties);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_items);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "o";
    goto try_except_handler_1;
}
frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields->m_frame.f_lineno = 323;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "o";
    goto try_except_handler_1;
}
tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "o";
    goto try_except_handler_1;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "o";
exception_lineno = 321;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "o";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
    tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "o";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
    tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "o";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
    tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "o";
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

CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
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

Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_2;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
tmp_listcomp$tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_listcomp$tuple_unpack_1__element_1;
{
    PyObject *old = outline_0_var_field_name;
    outline_0_var_field_name = tmp_assign_source_7;
    Py_INCREF(outline_0_var_field_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
tmp_listcomp$tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_2;
{
    PyObject *old = outline_0_var_field_schema;
    outline_0_var_field_schema = tmp_assign_source_8;
    Py_INCREF(outline_0_var_field_schema);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
tmp_listcomp$tuple_unpack_1__element_2 = NULL;

{
bool tmp_condition_result_2;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(outline_0_var_field_schema);
tmp_expression_value_4 = outline_0_var_field_schema;
tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_nullable);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(outline_0_var_field_schema);
tmp_expression_value_5 = outline_0_var_field_schema;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_default);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_condition_result_2 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_2 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_field_name);
tmp_append_value_1 = outline_0_var_field_name;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "o";
    goto try_except_handler_2;
}
}
branch_no_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "o";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_return_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
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
goto try_return_handler_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
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
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_1;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(outline_0_var_field_name);
outline_0_var_field_name = NULL;
Py_XDECREF(outline_0_var_field_schema);
outline_0_var_field_schema = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_field_name);
outline_0_var_field_name = NULL;
Py_XDECREF(outline_0_var_field_schema);
outline_0_var_field_schema = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 321;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields,
    type_description_1,
    par_schema
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields == cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields);
    cache_frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields = NULL;
}

assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param,
        mod_consts.const_str_plain__raise_for_unsupported_param,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_81d24d300f83e38cc3bb527bd5a0c3c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_automatic_function_calling_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations,
        mod_consts.const_str_plain__handle_params_as_deferred_annotations,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4b85f53fac79ba102b9ff88bb8e4a62c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_digest_acf88684c592cc4f81fab28cfa7483d4,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema,
        mod_consts.const_str_digest_f3e61d9a975f8b793cd42853d4119489,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_04134a971ff0b8afe4f313f5b8889efd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_automatic_function_calling_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound,
        mod_consts.const_str_plain__is_builtin_primitive_or_compound,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_dd5c23cdebcfc48750ee627fd5d3ae40,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_automatic_function_calling_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible,
        mod_consts.const_str_plain__is_default_value_compatible,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_2968565803d4e4ad1771f2c5a84fd387,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_automatic_function_calling_util,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter,
        mod_consts.const_str_plain__parse_schema_from_parameter,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7cefed60a4d528511921a434a1c6d202,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_digest_41d105639954658ba99a142f414c66c0,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields,
        mod_consts.const_str_plain__get_required_fields,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9e411924ca3bae60234dce97bc9932f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_automatic_function_calling_util,
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

static function_impl_code const function_table_google$genai$_automatic_function_calling_util[] = {
impl_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param,
impl_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations,
impl_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema,
impl_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound,
impl_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible,
impl_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter,
impl_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$_automatic_function_calling_util);
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
        module_google$genai$_automatic_function_calling_util,
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
        function_table_google$genai$_automatic_function_calling_util,
        sizeof(function_table_google$genai$_automatic_function_calling_util) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai._automatic_function_calling_util";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$_automatic_function_calling_util(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$_automatic_function_calling_util");

    // Store the module for future use.
    module_google$genai$_automatic_function_calling_util = module;

    moduledict_google$genai$_automatic_function_calling_util = MODULE_DICT(module_google$genai$_automatic_function_calling_util);

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
        PRINT_STRING("google$genai$_automatic_function_calling_util: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$_automatic_function_calling_util: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$_automatic_function_calling_util: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._automatic_function_calling_util" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$_automatic_function_calling_util\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$_automatic_function_calling_util,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$_automatic_function_calling_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$_automatic_function_calling_util,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_automatic_function_calling_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_automatic_function_calling_util,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$_automatic_function_calling_util);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$_automatic_function_calling_util);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_automatic_function_calling_util;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$_automatic_function_calling_util = MAKE_MODULE_FRAME(code_objects_28781e1c9f95f65a990d23a3aee6c771, module_google$genai$_automatic_function_calling_util);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_automatic_function_calling_util);
assert(Py_REFCNT(frame_frame_google$genai$_automatic_function_calling_util) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$_automatic_function_calling_util$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$_automatic_function_calling_util$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_automatic_function_calling_util;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$genai$_automatic_function_calling_util->m_frame.f_lineno = 16;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPES();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_builtin_types, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain__GenericAlias,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain__GenericAlias);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__GenericAlias, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain_get_args,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_get_args);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args, tmp_assign_source_12);
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
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain_get_origin,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_get_origin);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin, tmp_assign_source_13);
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
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
frame_frame_google$genai$_automatic_function_calling_util->m_frame.f_lineno = 22;
tmp_assign_source_17 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic, mod_consts.const_str_plain_pydantic);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$genai$_automatic_function_calling_util;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain__extra_utils_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_google$genai$_automatic_function_calling_util->m_frame.f_lineno = 24;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        mod_consts.const_str_plain__extra_utils,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain__extra_utils);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__extra_utils, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$genai$_automatic_function_calling_util;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_types_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_google$genai$_automatic_function_calling_util->m_frame.f_lineno = 25;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_google$genai$_automatic_function_calling_util,
        const_str_plain_types,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, const_str_plain_types);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = IMPORT_HARD_TYPES();
assert(!(tmp_expression_value_1 == NULL));
tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_UnionType);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain_VersionedUnionType, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
tmp_assign_source_21 = MAKE_LIST8(tstate, mod_consts.const_list_edfb39ceb497f95a14ba8171a706d449_list);
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_dict_key_1 = (PyObject *)&PyUnicode_Type;
tmp_expression_value_3 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
assert(!(tmp_expression_value_3 == NULL));
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_Type);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_STRING);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
tmp_assign_source_22 = _PyDict_NewPresized( 7 );
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyLong_Type;
tmp_expression_value_5 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 47;

    goto dict_build_exception_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_Type);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_INTEGER);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyFloat_Type;
tmp_expression_value_7 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;

    goto dict_build_exception_1;
}
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_Type);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_NUMBER);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyBool_Type;
tmp_expression_value_9 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 49;

    goto dict_build_exception_1;
}
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_Type);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_BOOLEAN);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyList_Type;
tmp_expression_value_11 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 50;

    goto dict_build_exception_1;
}
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_Type);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ARRAY);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = (PyObject *)&PyDict_Type;
tmp_expression_value_13 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 51;

    goto dict_build_exception_1;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_Type);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_OBJECT);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = Py_None;
tmp_expression_value_15 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto dict_build_exception_1;
}
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_Type);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_NULL);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_assign_source_22, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_22);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__py_builtin_type_to_schema_type, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_16;
tmp_dict_key_2 = mod_consts.const_str_plain_param;
tmp_expression_value_16 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto frame_exception_exit_1;
}
tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_Parameter);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_1;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_func_name;
tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_exception;
tmp_expression_value_17 = module_var_accessor_google$genai$_automatic_function_calling_util$Union(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_subscript_value_1 = mod_consts.const_tuple_type_Exception_genalias_type_type_tuple_type_Exception_tuple_tuple;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_assign_source_23 = MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__1__raise_for_unsupported_param(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__raise_for_unsupported_param, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_18;
tmp_dict_key_3 = mod_consts.const_str_plain_param;
tmp_expression_value_18 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto frame_exception_exit_1;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_Parameter);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_20;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_annotation_under_future;
tmp_expression_value_19 = (PyObject *)&PyDict_Type;
tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_google$genai$_automatic_function_calling_util$Any(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_2);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = const_str_plain_name;
tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_20 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_Parameter);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;

tmp_assign_source_24 = MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__2__handle_params_as_deferred_annotations(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__handle_params_as_deferred_annotations, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_2;
tmp_dict_key_4 = mod_consts.const_str_plain_json_schema;
tmp_expression_value_21 = (PyObject *)&PyDict_Type;
tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_google$genai$_automatic_function_calling_util$Any(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_3;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_22 = (PyObject *)&PyDict_Type;
tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_google$genai$_automatic_function_calling_util$Any(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_4);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;

tmp_assign_source_25 = MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__3__add_unevaluated_items_to_fixed_len_tuple_schema(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_digest_f3e61d9a975f8b793cd42853d4119489, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
tmp_dict_key_5 = mod_consts.const_str_plain_annotation;
tmp_expression_value_24 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto frame_exception_exit_1;
}
tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto frame_exception_exit_1;
}
tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_annotation);
CHECK_OBJECT(tmp_expression_value_23);
Py_DECREF(tmp_expression_value_23);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_dict_value_5 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_assign_source_26 = MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__4__is_builtin_primitive_or_compound(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_builtin_primitive_or_compound, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_dict_key_6 = mod_consts.const_str_plain_default_value;
tmp_dict_value_6 = module_var_accessor_google$genai$_automatic_function_calling_util$Any(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_annotation;
tmp_expression_value_26 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto dict_build_exception_5;
}
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_Parameter);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto dict_build_exception_5;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_annotation);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_dict_value_6 = (PyObject *)&PyBool_Type;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_5);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;

tmp_assign_source_27 = MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__5__is_default_value_compatible(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__is_default_value_compatible, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_5;
tmp_dict_key_7 = mod_consts.const_str_plain_api_option;
tmp_expression_value_27 = module_var_accessor_google$genai$_automatic_function_calling_util$Literal(tstate);
if (unlikely(tmp_expression_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Literal);
}

if (tmp_expression_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;

    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = mod_consts.const_tuple_str_plain_VERTEX_AI_str_plain_GEMINI_API_tuple;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_5);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;

    goto frame_exception_exit_1;
}
tmp_annotations_6 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_28;
PyObject *tmp_expression_value_29;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_param;
tmp_expression_value_28 = module_var_accessor_google$genai$_automatic_function_calling_util$inspect(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto dict_build_exception_6;
}
tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_Parameter);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_func_name;
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_29 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;

    goto dict_build_exception_6;
}
tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts.const_str_plain_Schema);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;

tmp_assign_source_28 = MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__6__parse_schema_from_parameter(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__parse_schema_from_parameter, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_expression_value_30;
tmp_dict_key_8 = mod_consts.const_str_plain_schema;
tmp_expression_value_30 = module_var_accessor_google$genai$_automatic_function_calling_util$types(tstate);
if (unlikely(tmp_expression_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;

    goto frame_exception_exit_1;
}
tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain_Schema);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;

    goto frame_exception_exit_1;
}
tmp_annotations_7 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_6;
PyObject *tmp_generic_alias_origin_1;
PyObject *tmp_generic_alias_args_1;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_expression_value_31 = module_var_accessor_google$genai$_automatic_function_calling_util$Optional(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;

    goto dict_build_exception_7;
}
tmp_generic_alias_origin_1 = (PyObject *)&PyList_Type;
tmp_generic_alias_args_1 = mod_consts.const_tuple_type_str_tuple;
tmp_subscript_value_6 = Py_GenericAlias(tmp_generic_alias_origin_1, tmp_generic_alias_args_1);
assert(tmp_subscript_value_6 != NULL);
tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;

tmp_assign_source_29 = MAKE_FUNCTION_google$genai$_automatic_function_calling_util$$$function__7__get_required_fields(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)mod_consts.const_str_plain__get_required_fields, tmp_assign_source_29);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_automatic_function_calling_util, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_automatic_function_calling_util->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_automatic_function_calling_util, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$_automatic_function_calling_util);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$_automatic_function_calling_util", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._automatic_function_calling_util" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$_automatic_function_calling_util);
    return module_google$genai$_automatic_function_calling_util;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_automatic_function_calling_util, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$_automatic_function_calling_util", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

/* Generated code for Python module 'pydantic$_internal$_core_utils'
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



/* The "module_pydantic$_internal$_core_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$_internal$_core_utils;
PyDictObject *moduledict_pydantic$_internal$_core_utils;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__CORE_SCHEMA_FIELD_TYPES;
PyObject *const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES;
PyObject *const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES;
PyObject *const_str_plain_get_origin;
PyObject *const_str_plain_is_generic_alias;
PyObject *const_str_plain_get_args;
PyObject *const_str_plain___pydantic_generic_metadata__;
PyObject *const_str_plain_origin;
PyObject *const_str_digest_020de46e71cd607775f1e9ca985e649b;
PyObject *const_str_plain_typing_objects;
PyObject *const_str_plain_is_typealiastype;
PyObject *const_str_chr_58;
PyObject *const_str_plain___qualname__;
PyObject *const_str_digest_985010497f47af99673a9ad3d1c4a327;
PyObject *const_str_chr_62;
PyObject *const_str_digest_71effa25864b9530dfd67d749c00db9f;
PyObject *const_str_digest_ae700375b4075bab9b1e6692b636b743;
PyObject *const_str_plain__repr;
PyObject *const_str_plain_display_as_type;
PyObject *const_str_plain_arg_refs;
PyObject *const_str_chr_91;
PyObject *const_str_chr_44;
PyObject *const_str_chr_93;
PyObject *const_str_digest_89823c109e6d084a1104043947cf746b;
PyObject *const_tuple_str_plain_ref_none_tuple;
PyObject *const_str_digest_3552f6f1a69925aeffaa3bc736aaf1fc;
PyObject *const_str_plain_getenv;
PyObject *const_tuple_str_plain_PYDANTIC_VALIDATE_CORE_SCHEMAS_tuple;
PyObject *const_str_plain__validate_core_schema;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_items;
PyObject *const_str_plain_metadata;
PyObject *const_str_plain_strip_metadata;
PyObject *const_tuple_fc852fd4cbc84c353f2a113c8a12f4b2_tuple;
PyObject *const_str_angle_stripped;
PyObject *const_str_plain_new_metadata;
PyObject *const_str_plain_js_metadata;
PyObject *const_str_plain__clean_schema_for_pretty_print;
PyObject *const_tuple_str_plain_strip_metadata_tuple;
PyObject *const_set_674e46a8494be13260690283b7c5c774;
PyObject *const_str_plain_new_dct;
PyObject *const_tuple_str_plain_custom_init_str_plain_root_model_tuple;
PyObject *const_str_plain_Sequence;
PyObject *const_str_digest_61f2b7f7c752051e443fd4c70c96dd00;
PyObject *const_str_digest_bf70fdc3b80ce8a908d42a4625884f5e;
PyObject *const_tuple_str_plain_pprint_tuple;
PyObject *const_str_plain_pprint;
PyObject *const_str_plain_pydantic;
PyObject *const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_digest_a307387df849d578a05ee5d589f9d451;
PyObject *const_str_plain_TypeAdapter;
PyObject *const_str_digest_415c1e95d1c38c000ce51c6c75537600;
PyObject *const_str_plain_is_pydantic_dataclass;
PyObject *const_str_plain_isclass;
PyObject *const_str_plain___pydantic_core_schema__;
PyObject *const_str_plain_val;
PyObject *const_str_plain_core_schema;
PyObject *const_tuple_str_plain_console_str_plain_max_depth_tuple;
PyObject *const_str_digest_9d2ef96caacc0e612e688bb1efdf3429;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Mapping_str_plain_Sequence_tuple;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_pydantic_core;
PyObject *const_str_plain_CoreSchema;
PyObject *const_str_digest_3be1977a43d6fc92a01e1adc500d16b3;
PyObject *const_str_plain_validate_core_schema;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_TypeGuard_str_plain_get_args_str_plain_get_origin_tuple;
PyObject *const_str_plain_TypeGuard;
PyObject *const_str_plain_typing_inspection;
PyObject *const_tuple_str_plain_typing_objects_tuple;
PyObject *const_tuple_str_plain__repr_tuple;
PyObject *const_str_plain__typing_extra;
PyObject *const_tuple_str_plain_is_generic_alias_tuple;
PyObject *const_str_plain_AfterValidatorFunctionSchema;
PyObject *const_str_plain_BeforeValidatorFunctionSchema;
PyObject *const_str_plain_WrapValidatorFunctionSchema;
PyObject *const_str_plain_PlainValidatorFunctionSchema;
PyObject *const_str_plain_AnyFunctionSchema;
PyObject *const_str_plain_FunctionSchemaWithInnerSchema;
PyObject *const_str_plain_ModelField;
PyObject *const_str_plain_DataclassField;
PyObject *const_str_plain_TypedDictField;
PyObject *const_str_plain_ComputedField;
PyObject *const_str_plain_CoreSchemaField;
PyObject *const_str_plain_CoreSchemaOrField;
PyObject *const_set_0610f43972f0376764721eaf27d4835c;
PyObject *const_set_a506ef2b7f4e29a39d5e220629cd72f5;
PyObject *const_set_23b47a303afeac65d3281bf7e4f20a3a;
PyObject *const_dict_4849362a24fc28cf50217e8a7577f46c;
PyObject *const_str_plain_is_core_schema;
PyObject *const_dict_8670692f19b58d4f68cec32930b1026e;
PyObject *const_str_plain_is_core_schema_field;
PyObject *const_dict_b026700979b5eb0bf418b103eb148309;
PyObject *const_str_plain_is_function_with_inner_schema;
PyObject *const_dict_a91b1240c570a63b52cbc235aada696c;
PyObject *const_str_plain_is_list_like_schema_with_items_schema;
PyObject *const_tuple_none_tuple;
PyObject *const_dict_303ea0750b737bbcfe50935e0d706120;
PyObject *const_str_plain_get_type_ref;
PyObject *const_dict_ac64ce56b6e312ffb91d9dcb88be30b3;
PyObject *const_str_plain_get_ref;
PyObject *const_dict_347a6ef0693254a6afda41486adf0a57;
PyObject *const_tuple_true_tuple;
PyObject *const_dict_d6ddb111b08df62b8ae44ab4ec7f34d6;
PyObject *const_dict_adb69202aeb4579f9cb48be343ff1f37;
PyObject *const_dict_ac5b02818295f4809910bf8ec06ce0ea;
PyObject *const_str_plain_pretty_print_core_schema;
PyObject *const_str_plain_pps;
PyObject *const_str_digest_c75797e6d377d7d066a607362d67d625;
PyObject *const_str_digest_336b2d9294cc5e585aaacbf0df512209;
PyObject *const_tuple_9428627c330ca438f4f3148067901e93_tuple;
PyObject *const_tuple_str_plain_s_tuple;
PyObject *const_tuple_55c839d49e1d0351925d33abcf437a58_tuple;
PyObject *const_tuple_str_plain_schema_tuple;
PyObject *const_tuple_fd8234cd739dbec2b7f17d3dd0251bef_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[122];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic._internal._core_utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_generic_alias);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_args);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_generic_metadata__);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_020de46e71cd607775f1e9ca985e649b);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_objects);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_typealiastype);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_chr_58);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_985010497f47af99673a9ad3d1c4a327);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_chr_62);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_71effa25864b9530dfd67d749c00db9f);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae700375b4075bab9b1e6692b636b743);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__repr);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_display_as_type);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_arg_refs);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_chr_91);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_chr_44);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_chr_93);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_89823c109e6d084a1104043947cf746b);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ref_none_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_3552f6f1a69925aeffaa3bc736aaf1fc);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_getenv);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PYDANTIC_VALIDATE_CORE_SCHEMAS_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_core_schema);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_metadata);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_strip_metadata);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_fc852fd4cbc84c353f2a113c8a12f4b2_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_angle_stripped);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_metadata);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_js_metadata);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain__clean_schema_for_pretty_print);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strip_metadata_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_set_674e46a8494be13260690283b7c5c774);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_dct);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_custom_init_str_plain_root_model_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_61f2b7f7c752051e443fd4c70c96dd00);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf70fdc3b80ce8a908d42a4625884f5e);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pprint_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_pprint);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_415c1e95d1c38c000ce51c6c75537600);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_pydantic_dataclass);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_isclass);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_schema__);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_val);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_str_plain_max_depth_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d2ef96caacc0e612e688bb1efdf3429);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchema);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_core_schema);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeGuard_str_plain_get_args_str_plain_get_origin_tuple);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_inspection);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_typing_objects_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__repr_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain__typing_extra);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_generic_alias_tuple);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_AfterValidatorFunctionSchema);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_BeforeValidatorFunctionSchema);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_WrapValidatorFunctionSchema);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlainValidatorFunctionSchema);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyFunctionSchema);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionSchemaWithInnerSchema);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModelField);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassField);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDictField);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_ComputedField);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchemaField);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchemaOrField);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_set_0610f43972f0376764721eaf27d4835c);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_set_a506ef2b7f4e29a39d5e220629cd72f5);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_set_23b47a303afeac65d3281bf7e4f20a3a);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_4849362a24fc28cf50217e8a7577f46c);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_core_schema);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_dict_8670692f19b58d4f68cec32930b1026e);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_core_schema_field);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_dict_b026700979b5eb0bf418b103eb148309);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_function_with_inner_schema);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_dict_a91b1240c570a63b52cbc235aada696c);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_list_like_schema_with_items_schema);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_303ea0750b737bbcfe50935e0d706120);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_type_ref);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_dict_ac64ce56b6e312ffb91d9dcb88be30b3);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_ref);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_dict_347a6ef0693254a6afda41486adf0a57);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_dict_d6ddb111b08df62b8ae44ab4ec7f34d6);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_dict_adb69202aeb4579f9cb48be343ff1f37);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_dict_ac5b02818295f4809910bf8ec06ce0ea);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_pretty_print_core_schema);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_pps);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_digest_c75797e6d377d7d066a607362d67d625);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_336b2d9294cc5e585aaacbf0df512209);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_9428627c330ca438f4f3148067901e93_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_55c839d49e1d0351925d33abcf437a58_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_schema_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_fd8234cd739dbec2b7f17d3dd0251bef_tuple);
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
void checkModuleConstants_pydantic$_internal$_core_utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_origin);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_generic_alias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_generic_alias);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_args);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_generic_metadata__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_generic_metadata__);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_020de46e71cd607775f1e9ca985e649b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_020de46e71cd607775f1e9ca985e649b);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_objects));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_objects);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_typealiastype));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_typealiastype);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_chr_58));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_58);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_985010497f47af99673a9ad3d1c4a327));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_985010497f47af99673a9ad3d1c4a327);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_chr_62));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_62);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_71effa25864b9530dfd67d749c00db9f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_71effa25864b9530dfd67d749c00db9f);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae700375b4075bab9b1e6692b636b743));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae700375b4075bab9b1e6692b636b743);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__repr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__repr);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_display_as_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_display_as_type);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_arg_refs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_arg_refs);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_chr_91));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_91);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_chr_44));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_44);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_chr_93));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_93);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_89823c109e6d084a1104043947cf746b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_89823c109e6d084a1104043947cf746b);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ref_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ref_none_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_3552f6f1a69925aeffaa3bc736aaf1fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3552f6f1a69925aeffaa3bc736aaf1fc);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_getenv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getenv);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PYDANTIC_VALIDATE_CORE_SCHEMAS_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PYDANTIC_VALIDATE_CORE_SCHEMAS_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_core_schema);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_metadata);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_strip_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_strip_metadata);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_fc852fd4cbc84c353f2a113c8a12f4b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fc852fd4cbc84c353f2a113c8a12f4b2_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_angle_stripped));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_stripped);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_metadata);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_js_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_js_metadata);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain__clean_schema_for_pretty_print));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__clean_schema_for_pretty_print);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strip_metadata_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_strip_metadata_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_set_674e46a8494be13260690283b7c5c774));
CHECK_OBJECT_DEEP(mod_consts.const_set_674e46a8494be13260690283b7c5c774);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_dct));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_dct);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_custom_init_str_plain_root_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_custom_init_str_plain_root_model_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_Sequence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Sequence);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_61f2b7f7c752051e443fd4c70c96dd00));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_61f2b7f7c752051e443fd4c70c96dd00);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf70fdc3b80ce8a908d42a4625884f5e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf70fdc3b80ce8a908d42a4625884f5e);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pprint_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pprint_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_pprint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pprint);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAdapter);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_415c1e95d1c38c000ce51c6c75537600));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_415c1e95d1c38c000ce51c6c75537600);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_pydantic_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_pydantic_dataclass);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_isclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isclass);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_schema__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_core_schema__);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_val));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_val);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core_schema);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_console_str_plain_max_depth_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_console_str_plain_max_depth_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d2ef96caacc0e612e688bb1efdf3429));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d2ef96caacc0e612e688bb1efdf3429);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_core);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CoreSchema);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_core_schema);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeGuard_str_plain_get_args_str_plain_get_origin_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeGuard_str_plain_get_args_str_plain_get_origin_tuple);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeGuard);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_inspection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_inspection);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_typing_objects_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_typing_objects_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__repr_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__repr_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain__typing_extra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__typing_extra);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_generic_alias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_generic_alias_tuple);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_AfterValidatorFunctionSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AfterValidatorFunctionSchema);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_BeforeValidatorFunctionSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BeforeValidatorFunctionSchema);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_WrapValidatorFunctionSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WrapValidatorFunctionSchema);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlainValidatorFunctionSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlainValidatorFunctionSchema);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyFunctionSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyFunctionSchema);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_FunctionSchemaWithInnerSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FunctionSchemaWithInnerSchema);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModelField));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModelField);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_DataclassField));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DataclassField);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypedDictField));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypedDictField);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_ComputedField));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ComputedField);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchemaField));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CoreSchemaField);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchemaOrField));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CoreSchemaOrField);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_set_0610f43972f0376764721eaf27d4835c));
CHECK_OBJECT_DEEP(mod_consts.const_set_0610f43972f0376764721eaf27d4835c);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_set_a506ef2b7f4e29a39d5e220629cd72f5));
CHECK_OBJECT_DEEP(mod_consts.const_set_a506ef2b7f4e29a39d5e220629cd72f5);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_set_23b47a303afeac65d3281bf7e4f20a3a));
CHECK_OBJECT_DEEP(mod_consts.const_set_23b47a303afeac65d3281bf7e4f20a3a);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_4849362a24fc28cf50217e8a7577f46c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4849362a24fc28cf50217e8a7577f46c);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_core_schema);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_dict_8670692f19b58d4f68cec32930b1026e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8670692f19b58d4f68cec32930b1026e);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_core_schema_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_core_schema_field);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_dict_b026700979b5eb0bf418b103eb148309));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b026700979b5eb0bf418b103eb148309);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_function_with_inner_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_function_with_inner_schema);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_dict_a91b1240c570a63b52cbc235aada696c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a91b1240c570a63b52cbc235aada696c);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_list_like_schema_with_items_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_list_like_schema_with_items_schema);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_303ea0750b737bbcfe50935e0d706120));
CHECK_OBJECT_DEEP(mod_consts.const_dict_303ea0750b737bbcfe50935e0d706120);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_type_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_type_ref);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_dict_ac64ce56b6e312ffb91d9dcb88be30b3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ac64ce56b6e312ffb91d9dcb88be30b3);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_ref);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_dict_347a6ef0693254a6afda41486adf0a57));
CHECK_OBJECT_DEEP(mod_consts.const_dict_347a6ef0693254a6afda41486adf0a57);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_dict_d6ddb111b08df62b8ae44ab4ec7f34d6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d6ddb111b08df62b8ae44ab4ec7f34d6);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_dict_adb69202aeb4579f9cb48be343ff1f37));
CHECK_OBJECT_DEEP(mod_consts.const_dict_adb69202aeb4579f9cb48be343ff1f37);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_dict_ac5b02818295f4809910bf8ec06ce0ea));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ac5b02818295f4809910bf8ec06ce0ea);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_pretty_print_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pretty_print_core_schema);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_pps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pps);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_digest_c75797e6d377d7d066a607362d67d625));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c75797e6d377d7d066a607362d67d625);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_336b2d9294cc5e585aaacbf0df512209));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_336b2d9294cc5e585aaacbf0df512209);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_9428627c330ca438f4f3148067901e93_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9428627c330ca438f4f3148067901e93_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_s_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_s_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_55c839d49e1d0351925d33abcf437a58_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_55c839d49e1d0351925d33abcf437a58_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_schema_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_schema_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_fd8234cd739dbec2b7f17d3dd0251bef_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fd8234cd739dbec2b7f17d3dd0251bef_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 17
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
static PyObject *module_var_accessor_pydantic$_internal$_core_utils$CoreSchemaField(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchemaField);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CoreSchemaField);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CoreSchemaField, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_CoreSchemaField);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_CoreSchemaField, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchemaField);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchemaField);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchemaField);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$Mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Mapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Mapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$Sequence(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Sequence);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Sequence, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$_CORE_SCHEMA_FIELD_TYPES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$_FUNCTION_WITH_INNER_SCHEMA_TYPES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$_LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$_clean_schema_for_pretty_print(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_schema_for_pretty_print);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__clean_schema_for_pretty_print);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__clean_schema_for_pretty_print, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__clean_schema_for_pretty_print);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__clean_schema_for_pretty_print, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_schema_for_pretty_print);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_schema_for_pretty_print);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_schema_for_pretty_print);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$_repr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__repr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__repr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__repr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__repr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$_validate_core_schema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_core_schema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_core_schema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_core_schema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__validate_core_schema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__validate_core_schema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_core_schema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_core_schema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_core_schema);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$get_args(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$get_origin(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$is_generic_alias(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_generic_alias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_generic_alias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_generic_alias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_generic_alias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_generic_alias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_generic_alias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_generic_alias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_generic_alias);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$pretty_print_core_schema(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_pretty_print_core_schema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pretty_print_core_schema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pretty_print_core_schema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pretty_print_core_schema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pretty_print_core_schema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_pretty_print_core_schema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_pretty_print_core_schema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pretty_print_core_schema);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_core_utils$typing_objects(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_core_utils->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_core_utils->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_core_utils->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_objects);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_objects, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_typing_objects);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_typing_objects, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_addb83b9c3979a31a62622bc8a9f24d9;
static PyCodeObject *code_objects_31324b805acf7e14515ba9dc0a69decd;
static PyCodeObject *code_objects_00b7565ba6373067dda7089a626e0dd2;
static PyCodeObject *code_objects_ad9102ca066f2c50eebb1ce4cbe3f63b;
static PyCodeObject *code_objects_a8f34c53ecffbefaebc872c7d17c5dfd;
static PyCodeObject *code_objects_8ec71dd40cc1125fb1b1f7210bcd8bf0;
static PyCodeObject *code_objects_d8cf8b07ed444c03c3eaaae1fc477e38;
static PyCodeObject *code_objects_de3ba25b9d766e72bd6ea16fa2c4ea51;
static PyCodeObject *code_objects_23f36bcde2b910f7edecc605ff4e35c4;
static PyCodeObject *code_objects_43b21c63e03a39a270cb3c93ec3d67e0;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c75797e6d377d7d066a607362d67d625); CHECK_OBJECT(module_filename_obj);
code_objects_addb83b9c3979a31a62622bc8a9f24d9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_336b2d9294cc5e585aaacbf0df512209, mod_consts.const_str_digest_336b2d9294cc5e585aaacbf0df512209, NULL, NULL, 0, 0, 0);
code_objects_31324b805acf7e14515ba9dc0a69decd = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__clean_schema_for_pretty_print, mod_consts.const_str_plain__clean_schema_for_pretty_print, mod_consts.const_tuple_9428627c330ca438f4f3148067901e93_tuple, NULL, 2, 0, 0);
code_objects_00b7565ba6373067dda7089a626e0dd2 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_ref, mod_consts.const_str_plain_get_ref, mod_consts.const_tuple_str_plain_s_tuple, NULL, 1, 0, 0);
code_objects_ad9102ca066f2c50eebb1ce4cbe3f63b = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_type_ref, mod_consts.const_str_plain_get_type_ref, mod_consts.const_tuple_55c839d49e1d0351925d33abcf437a58_tuple, NULL, 2, 0, 0);
code_objects_a8f34c53ecffbefaebc872c7d17c5dfd = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_core_schema, mod_consts.const_str_plain_is_core_schema, mod_consts.const_tuple_str_plain_schema_tuple, NULL, 1, 0, 0);
code_objects_8ec71dd40cc1125fb1b1f7210bcd8bf0 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_core_schema_field, mod_consts.const_str_plain_is_core_schema_field, mod_consts.const_tuple_str_plain_schema_tuple, NULL, 1, 0, 0);
code_objects_d8cf8b07ed444c03c3eaaae1fc477e38 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_function_with_inner_schema, mod_consts.const_str_plain_is_function_with_inner_schema, mod_consts.const_tuple_str_plain_schema_tuple, NULL, 1, 0, 0);
code_objects_de3ba25b9d766e72bd6ea16fa2c4ea51 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_list_like_schema_with_items_schema, mod_consts.const_str_plain_is_list_like_schema_with_items_schema, mod_consts.const_tuple_str_plain_schema_tuple, NULL, 1, 0, 0);
code_objects_23f36bcde2b910f7edecc605ff4e35c4 = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_pretty_print_core_schema, mod_consts.const_str_plain_pretty_print_core_schema, mod_consts.const_tuple_fd8234cd739dbec2b7f17d3dd0251bef_tuple, NULL, 1, 3, 0);
code_objects_43b21c63e03a39a270cb3c93ec3d67e0 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_core_schema, mod_consts.const_str_plain_validate_core_schema, mod_consts.const_tuple_str_plain_schema_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__1_is_core_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__5_get_type_ref(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__6_get_ref(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__7_validate_core_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$_internal$_core_utils$$$function__1_is_core_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_a8f34c53ecffbefaebc872c7d17c5dfd, module_pydantic$_internal$_core_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema = cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_schema);
tmp_expression_value_1 = par_schema;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_pydantic$_internal$_core_utils$_CORE_SCHEMA_FIELD_TYPES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema,
    type_description_1,
    par_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema == cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__1_is_core_schema);

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


static PyObject *impl_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field = MAKE_FUNCTION_FRAME(tstate, code_objects_8ec71dd40cc1125fb1b1f7210bcd8bf0, module_pydantic$_internal$_core_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field = cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_schema);
tmp_expression_value_1 = par_schema;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_pydantic$_internal$_core_utils$_CORE_SCHEMA_FIELD_TYPES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 52;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field,
    type_description_1,
    par_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field == cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field);

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


static PyObject *impl_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_d8cf8b07ed444c03c3eaaae1fc477e38, module_pydantic$_internal$_core_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema = cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_schema);
tmp_expression_value_1 = par_schema;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_pydantic$_internal$_core_utils$_FUNCTION_WITH_INNER_SCHEMA_TYPES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 58;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema,
    type_description_1,
    par_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema == cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema);

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


static PyObject *impl_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_de3ba25b9d766e72bd6ea16fa2c4ea51, module_pydantic$_internal$_core_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema = cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_schema);
tmp_expression_value_1 = par_schema;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_pydantic$_internal$_core_utils$_LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 64;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema,
    type_description_1,
    par_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema == cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema);

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


static PyObject *impl_pydantic$_internal$_core_utils$$$function__5_get_type_ref(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
PyObject *par_args_override = python_pars[1];
PyObject *var_arg_refs = NULL;
PyObject *var_origin = NULL;
PyObject *var_args = NULL;
PyObject *var_generic_metadata = NULL;
PyObject *var_module_name = NULL;
PyObject *var_type_ref = NULL;
PyObject *var_qualname = NULL;
PyObject *var_arg = NULL;
PyObject *var_arg_ref = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref = MAKE_FUNCTION_FRAME(tstate, code_objects_ad9102ca066f2c50eebb1ce4cbe3f63b, module_pydantic$_internal$_core_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref = cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_core_utils$get_origin(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_origin);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 73;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_1 = par_type_;
frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame.f_lineno = 73;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 73;
type_description_1 = "ooooooooooo";
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
CHECK_OBJECT(par_type_);
tmp_or_right_value_1 = par_type_;
Py_INCREF(tmp_or_right_value_1);
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_origin == NULL);
var_origin = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_3;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_core_utils$is_generic_alias(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_generic_alias);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_2 = par_type_;
frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame.f_lineno = 75;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 75;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_core_utils$get_args(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_args);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_3 = par_type_;
frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame.f_lineno = 75;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_args_override);
tmp_or_left_value_2 = par_args_override;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_or_right_value_2 = const_tuple_empty;
tmp_assign_source_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_2 = tmp_or_left_value_2;
or_end_2:;
Py_INCREF(tmp_assign_source_2);
condexpr_end_1:;
assert(var_args == NULL);
var_args = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_type_);
tmp_expression_value_1 = par_type_;
tmp_name_value_1 = mod_consts.const_str_plain___pydantic_generic_metadata__;
tmp_default_value_1 = Py_None;
tmp_assign_source_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_1, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_generic_metadata == NULL);
var_generic_metadata = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_2;
CHECK_OBJECT(var_generic_metadata);
tmp_truth_name_2 = CHECK_IF_TRUE(var_generic_metadata);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_4;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(var_generic_metadata);
tmp_expression_value_2 = var_generic_metadata;
tmp_subscript_value_1 = mod_consts.const_str_plain_origin;
tmp_or_left_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 78;
type_description_1 = "ooooooooooo";
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
CHECK_OBJECT(var_origin);
tmp_or_right_value_3 = var_origin;
Py_INCREF(tmp_or_right_value_3);
tmp_assign_source_4 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_assign_source_4 = tmp_or_left_value_3;
or_end_3:;
{
    PyObject *old = var_origin;
    assert(old != NULL);
    var_origin = tmp_assign_source_4;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(var_generic_metadata);
tmp_expression_value_3 = var_generic_metadata;
tmp_subscript_value_2 = const_str_plain_args;
tmp_or_left_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
if (tmp_or_left_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_4);

exception_lineno = 79;
type_description_1 = "ooooooooooo";
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
CHECK_OBJECT(var_args);
tmp_or_right_value_4 = var_args;
Py_INCREF(tmp_or_right_value_4);
tmp_assign_source_5 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
tmp_assign_source_5 = tmp_or_left_value_4;
or_end_4:;
{
    PyObject *old = var_args;
    assert(old != NULL);
    var_args = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
CHECK_OBJECT(var_origin);
tmp_expression_value_4 = var_origin;
tmp_name_value_2 = const_str_plain___module__;
tmp_default_value_2 = mod_consts.const_str_digest_020de46e71cd607775f1e9ca985e649b;
tmp_assign_source_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_2, tmp_default_value_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_module_name == NULL);
var_module_name = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_4;
int tmp_truth_name_3;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_core_utils$typing_objects(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_typing_objects);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_origin);
tmp_args_element_value_4 = var_origin;
frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame.f_lineno = 82;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_typealiastype, tmp_args_element_value_4);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 82;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(var_module_name);
tmp_format_value_1 = var_module_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_id_arg_1;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_origin);
tmp_expression_value_5 = var_origin;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___name__);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(var_origin);
tmp_id_arg_1 = var_origin;
tmp_format_value_3 = PyLong_FromVoidPtr(tmp_id_arg_1);
assert(!(tmp_format_value_3 == NULL));
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_7 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_7 == NULL));
assert(var_type_ref == NULL);
var_type_ref = tmp_assign_source_7;
}
goto branch_end_2;
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_3;
PyObject *tmp_default_value_3;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_origin);
tmp_expression_value_6 = var_origin;
tmp_name_value_3 = mod_consts.const_str_plain___qualname__;
tmp_tuple_element_2 = mod_consts.const_str_digest_985010497f47af99673a9ad3d1c4a327;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_4;
PyObject *tmp_format_spec_4;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_origin);
tmp_format_value_4 = var_origin;
tmp_format_spec_4 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_62;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_default_value_3 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_default_value_3 == NULL));
tmp_assign_source_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_3, tmp_default_value_3);
CHECK_OBJECT(tmp_default_value_3);
Py_DECREF(tmp_default_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooooooooo";
    goto try_except_handler_2;
}
assert(var_qualname == NULL);
var_qualname = tmp_assign_source_8;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_Exception;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_4;
PyObject *tmp_default_value_4;
CHECK_OBJECT(var_origin);
tmp_expression_value_7 = var_origin;
tmp_name_value_4 = mod_consts.const_str_plain___qualname__;
tmp_default_value_4 = mod_consts.const_str_digest_71effa25864b9530dfd67d749c00db9f;
tmp_assign_source_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_4, tmp_default_value_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
}
assert(var_qualname == NULL);
var_qualname = tmp_assign_source_9;
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 85;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame)) {
        frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooo";
goto try_except_handler_3;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto frame_exception_exit_1;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_string_concat_values_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_5;
PyObject *tmp_format_spec_5;
CHECK_OBJECT(var_module_name);
tmp_format_value_5 = var_module_name;
tmp_format_spec_5 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_6;
PyObject *tmp_format_spec_6;
PyObject *tmp_format_value_7;
PyObject *tmp_id_arg_2;
PyObject *tmp_format_spec_7;
PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = const_str_dot;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
CHECK_OBJECT(var_qualname);
tmp_format_value_6 = var_qualname;
tmp_format_spec_6 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
CHECK_OBJECT(var_origin);
tmp_id_arg_2 = var_origin;
tmp_format_value_7 = PyLong_FromVoidPtr(tmp_id_arg_2);
assert(!(tmp_format_value_7 == NULL));
tmp_format_spec_7 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
CHECK_OBJECT(tmp_format_value_7);
Py_DECREF(tmp_format_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_10 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_3);
CHECK_OBJECT(tmp_string_concat_values_3);
Py_DECREF(tmp_string_concat_values_3);
assert(!(tmp_assign_source_10 == NULL));
assert(var_type_ref == NULL);
var_type_ref = tmp_assign_source_10;
}
branch_end_2:;
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_arg_refs == NULL);
var_arg_refs = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_args);
tmp_iter_arg_1 = var_args;
tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooo";
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
tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_13 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooooooooooo";
exception_lineno = 92;
        goto try_except_handler_4;
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
{
    PyObject *old = var_arg;
    var_arg = tmp_assign_source_14;
    Py_INCREF(var_arg);
    Py_XDECREF(old);
}

}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_arg);
tmp_isinstance_inst_1 = var_arg;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
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
PyObject *tmp_assign_source_15;
PyObject *tmp_string_concat_values_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_format_value_8;
PyObject *tmp_format_spec_8;
CHECK_OBJECT(var_arg);
tmp_format_value_8 = var_arg;
tmp_format_spec_8 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_9;
PyObject *tmp_id_arg_3;
PyObject *tmp_format_spec_9;
PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_ae700375b4075bab9b1e6692b636b743;
PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
CHECK_OBJECT(var_arg);
tmp_id_arg_3 = var_arg;
tmp_format_value_9 = PyLong_FromVoidPtr(tmp_id_arg_3);
assert(!(tmp_format_value_9 == NULL));
tmp_format_spec_9 = const_str_empty;
tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
CHECK_OBJECT(tmp_format_value_9);
Py_DECREF(tmp_format_value_9);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_string_concat_values_4);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_assign_source_15 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_4);
CHECK_OBJECT(tmp_string_concat_values_4);
Py_DECREF(tmp_string_concat_values_4);
assert(!(tmp_assign_source_15 == NULL));
{
    PyObject *old = var_arg_ref;
    var_arg_ref = tmp_assign_source_15;
    Py_XDECREF(old);
}

}
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_16;
PyObject *tmp_string_concat_values_5;
PyObject *tmp_tuple_element_5;
PyObject *tmp_format_value_10;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_5;
PyObject *tmp_format_spec_10;
tmp_called_instance_2 = module_var_accessor_pydantic$_internal$_core_utils$_repr(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__repr);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(var_arg);
tmp_args_element_value_5 = var_arg;
frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame.f_lineno = 98;
tmp_format_value_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_display_as_type, tmp_args_element_value_5);
if (tmp_format_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_format_spec_10 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
CHECK_OBJECT(tmp_format_value_10);
Py_DECREF(tmp_format_value_10);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_11;
PyObject *tmp_id_arg_4;
PyObject *tmp_format_spec_11;
PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_chr_58;
PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
CHECK_OBJECT(var_arg);
tmp_id_arg_4 = var_arg;
tmp_format_value_11 = PyLong_FromVoidPtr(tmp_id_arg_4);
assert(!(tmp_format_value_11 == NULL));
tmp_format_spec_11 = const_str_empty;
tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
CHECK_OBJECT(tmp_format_value_11);
Py_DECREF(tmp_format_value_11);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_string_concat_values_5);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_assign_source_16 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_5);
CHECK_OBJECT(tmp_string_concat_values_5);
Py_DECREF(tmp_string_concat_values_5);
assert(!(tmp_assign_source_16 == NULL));
{
    PyObject *old = var_arg_ref;
    var_arg_ref = tmp_assign_source_16;
    Py_XDECREF(old);
}

}
branch_end_4:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
if (var_arg_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 99;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}

tmp_list_arg_value_1 = var_arg_refs;
CHECK_OBJECT(var_arg_ref);
tmp_item_value_1 = var_arg_ref;
tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_1 = "ooooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
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
nuitka_bool tmp_condition_result_6;
int tmp_truth_name_4;
if (var_arg_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 100;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_4 = CHECK_IF_TRUE(var_arg_refs);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_string_concat_values_6;
PyObject *tmp_tuple_element_6;
CHECK_OBJECT(var_type_ref);
tmp_tuple_element_6 = var_type_ref;
tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_str_arg_value_1;
PyObject *tmp_iterable_value_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_91;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
tmp_str_arg_value_1 = mod_consts.const_str_chr_44;
if (var_arg_refs == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_arg_refs);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 101;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_6;
}

tmp_iterable_value_1 = var_arg_refs;
tmp_tuple_element_6 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooooooooooo";
    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_chr_93;
PyTuple_SET_ITEM0(tmp_string_concat_values_6, 3, tmp_tuple_element_6);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_string_concat_values_6);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_assign_source_17 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_6);
CHECK_OBJECT(tmp_string_concat_values_6);
Py_DECREF(tmp_string_concat_values_6);
assert(!(tmp_assign_source_17 == NULL));
{
    PyObject *old = var_type_ref;
    assert(old != NULL);
    var_type_ref = tmp_assign_source_17;
    Py_DECREF(old);
}

}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref,
    type_description_1,
    par_type_,
    par_args_override,
    var_arg_refs,
    var_origin,
    var_args,
    var_generic_metadata,
    var_module_name,
    var_type_ref,
    var_qualname,
    var_arg,
    var_arg_ref
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref == cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__5_get_type_ref);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_type_ref);
tmp_return_value = var_type_ref;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_arg_refs);
var_arg_refs = NULL;
CHECK_OBJECT(var_origin);
CHECK_OBJECT(var_origin);
Py_DECREF(var_origin);
var_origin = NULL;
CHECK_OBJECT(var_args);
CHECK_OBJECT(var_args);
Py_DECREF(var_args);
var_args = NULL;
CHECK_OBJECT(var_generic_metadata);
CHECK_OBJECT(var_generic_metadata);
Py_DECREF(var_generic_metadata);
var_generic_metadata = NULL;
CHECK_OBJECT(var_module_name);
CHECK_OBJECT(var_module_name);
Py_DECREF(var_module_name);
var_module_name = NULL;
CHECK_OBJECT(var_type_ref);
CHECK_OBJECT(var_type_ref);
Py_DECREF(var_type_ref);
var_type_ref = NULL;
Py_XDECREF(var_qualname);
var_qualname = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_arg_ref);
var_arg_ref = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_arg_refs);
var_arg_refs = NULL;
Py_XDECREF(var_origin);
var_origin = NULL;
Py_XDECREF(var_args);
var_args = NULL;
Py_XDECREF(var_generic_metadata);
var_generic_metadata = NULL;
Py_XDECREF(var_module_name);
var_module_name = NULL;
Py_XDECREF(var_type_ref);
var_type_ref = NULL;
Py_XDECREF(var_qualname);
var_qualname = NULL;
Py_XDECREF(var_arg);
var_arg = NULL;
Py_XDECREF(var_arg_ref);
var_arg_ref = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_args_override);
Py_DECREF(par_args_override);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
CHECK_OBJECT(par_args_override);
Py_DECREF(par_args_override);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_core_utils$$$function__6_get_ref(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_s = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref = MAKE_FUNCTION_FRAME(tstate, code_objects_00b7565ba6373067dda7089a626e0dd2, module_pydantic$_internal$_core_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref = cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_s);
tmp_expression_value_1 = par_s;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref->m_frame.f_lineno = 109;
tmp_return_value = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ref_none_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref,
    type_description_1,
    par_s
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref == cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__6_get_ref);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_s);
Py_DECREF(par_s);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_s);
Py_DECREF(par_s);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_core_utils$$$function__7_validate_core_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_schema = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_43b21c63e03a39a270cb3c93ec3d67e0, module_pydantic$_internal$_core_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema = cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
tmp_called_instance_1 = IMPORT_HARD_OS();
assert(!(tmp_called_instance_1 == NULL));
frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema->m_frame.f_lineno = 113;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getenv,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_PYDANTIC_VALIDATE_CORE_SCHEMAS_tuple, 0)
);

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 113;
type_description_1 = "o";
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
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_core_utils$_validate_core_schema(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__validate_core_schema);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_schema);
tmp_args_element_value_1 = par_schema;
frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema->m_frame.f_lineno = 114;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema,
    type_description_1,
    par_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema == cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__7_validate_core_schema);

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


static PyObject *impl_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
PyObject *par_strip_metadata = python_pars[1];
PyObject *var_new_dct = NULL;
PyObject *var_k = NULL;
PyObject *var_v = NULL;
PyObject *var_new_metadata = NULL;
PyObject *var_meta_k = NULL;
PyObject *var_meta_v = NULL;
PyObject *outline_0_var_v = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_for_loop_2__for_iterator = NULL;
PyObject *tmp_for_loop_2__iter_value = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print = MAKE_FUNCTION_FRAME(tstate, code_objects_31324b805acf7e14515ba9dc0a69decd, module_pydantic$_internal$_core_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print = cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_1 = par_obj;
tmp_isinstance_cls_1 = module_var_accessor_pydantic$_internal$_core_utils$Mapping(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Mapping);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;
type_description_1 = "oooooooo";
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
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_new_dct == NULL);
var_new_dct = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_items);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print->m_frame.f_lineno = 122;
tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_2;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_3;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_3 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 122;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_3;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_4;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_5 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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



exception_lineno = 122;
type_description_1 = "oooooooo";
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
PyObject *tmp_assign_source_7;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_7;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_v;
    var_v = tmp_assign_source_8;
    Py_INCREF(var_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
int tmp_truth_name_1;
CHECK_OBJECT(var_k);
tmp_cmp_expr_left_1 = var_k;
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_metadata;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
if (par_strip_metadata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_truth_name_1 = CHECK_IF_TRUE(par_strip_metadata);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = MAKE_DICT_EMPTY(tstate);
{
    PyObject *old = var_new_metadata;
    var_new_metadata = tmp_assign_source_9;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_v);
tmp_expression_value_2 = var_v;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_items);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print->m_frame.f_lineno = 126;
tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_10 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
{
    PyObject *old = tmp_for_loop_2__for_iterator;
    tmp_for_loop_2__for_iterator = tmp_assign_source_10;
    Py_XDECREF(old);
}

}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
tmp_next_source_2 = tmp_for_loop_2__for_iterator;
tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_11 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 126;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_for_loop_2__iter_value;
    tmp_for_loop_2__iter_value = tmp_assign_source_11;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_for_loop_2__iter_value);
tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
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



exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_6;
// End of try:
try_end_3:;
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_meta_k;
    var_meta_k = tmp_assign_source_15;
    Py_INCREF(var_meta_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
{
    PyObject *old = var_meta_v;
    var_meta_v = tmp_assign_source_16;
    Py_INCREF(var_meta_v);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_meta_k);
tmp_cmp_expr_left_2 = var_meta_k;
tmp_cmp_expr_right_2 = mod_consts.const_tuple_fc852fd4cbc84c353f2a113c8a12f4b2_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_3 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_dictset_value = mod_consts.const_str_angle_stripped;
if (var_new_metadata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 128;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}

tmp_dictset_dict = var_new_metadata;
tmp_dictset_key = mod_consts.const_str_plain_js_metadata;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_3 = module_var_accessor_pydantic$_internal$_core_utils$_clean_schema_for_pretty_print(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__clean_schema_for_pretty_print);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(var_meta_v);
tmp_kw_call_arg_value_0_1 = var_meta_v;
if (par_strip_metadata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}

tmp_kw_call_dict_value_0_1 = par_strip_metadata;
frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print->m_frame.f_lineno = 130;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_strip_metadata_tuple);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
if (var_new_metadata == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 130;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}

tmp_dictset_dict = var_new_metadata;
CHECK_OBJECT(var_meta_k);
tmp_dictset_key = var_meta_k;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
}
branch_end_3:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_2;
// End of try:
try_end_5:;
Py_XDECREF(tmp_for_loop_2__iter_value);
tmp_for_loop_2__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
CHECK_OBJECT(tmp_for_loop_2__for_iterator);
Py_DECREF(tmp_for_loop_2__for_iterator);
tmp_for_loop_2__for_iterator = NULL;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_list_arg_1;
PyObject *tmp_dict_arg_1;
nuitka_bool tmp_tmp_condition_result_4_nbool_1;
if (var_new_metadata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 132;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_dict_arg_1 = var_new_metadata;
tmp_list_arg_1 = DICT_ITERKEYS(tstate, tmp_dict_arg_1);
assert(!(tmp_list_arg_1 == NULL));
tmp_cmp_expr_left_3 = MAKE_LIST(tstate, tmp_list_arg_1);
CHECK_OBJECT(tmp_list_arg_1);
Py_DECREF(tmp_list_arg_1);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_cmp_expr_right_3 = MAKE_LIST1(tstate, mod_consts.const_str_plain_js_metadata);
tmp_tmp_condition_result_4_nbool_1 = RICH_COMPARE_EQ_NBOOL_LIST_LIST(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_tmp_condition_result_4_nbool_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_condition_result_4 = tmp_tmp_condition_result_4_nbool_1 == NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = PySet_New(mod_consts.const_set_674e46a8494be13260690283b7c5c774);
{
    PyObject *old = var_new_metadata;
    var_new_metadata = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
branch_no_4:;
if (var_new_metadata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_dictset_value = var_new_metadata;
if (var_new_dct == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_dct);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 135;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_new_dct;
CHECK_OBJECT(var_k);
tmp_dictset_key = var_k;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto branch_end_2;
branch_no_2:;
{
bool tmp_condition_result_5;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_operand_value_1;
CHECK_OBJECT(var_k);
tmp_cmp_expr_left_4 = var_k;
tmp_cmp_expr_right_4 = mod_consts.const_tuple_str_plain_custom_init_str_plain_root_model_tuple;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_and_left_value_2 = (tmp_res == 1) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(var_v);
tmp_operand_value_1 = var_v;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
tmp_condition_result_5 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_5 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
goto loop_start_1;
goto branch_end_5;
branch_no_5:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_4 = module_var_accessor_pydantic$_internal$_core_utils$_clean_schema_for_pretty_print(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__clean_schema_for_pretty_print);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(var_v);
tmp_kw_call_arg_value_0_2 = var_v;
if (par_strip_metadata == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 140;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_kw_call_dict_value_0_2 = par_strip_metadata;
frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print->m_frame.f_lineno = 140;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_strip_metadata_tuple);
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (var_new_dct == NULL) {
Py_DECREF(tmp_dictset_value);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_dct);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 140;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}

tmp_dictset_dict = var_new_dct;
CHECK_OBJECT(var_k);
tmp_dictset_key = var_k;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
branch_end_5:;
branch_end_2:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
goto loop_start_1;
loop_end_1:;
goto try_end_6;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
if (var_new_dct == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_new_dct);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 142;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_new_dct;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_3;
nuitka_bool tmp_and_left_value_3;
nuitka_bool tmp_and_right_value_3;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_2 = par_obj;
tmp_isinstance_cls_2 = module_var_accessor_pydantic$_internal$_core_utils$Sequence(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Sequence);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_3 == 1) {
    goto and_right_3;
} else {
    goto and_left_3;
}
and_right_3:;
CHECK_OBJECT(par_obj);
tmp_isinstance_inst_3 = par_obj;
tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_6 = tmp_and_right_value_3;
goto and_end_3;
and_left_3:;
tmp_condition_result_6 = tmp_and_left_value_3;
and_end_3:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_iter_arg_5;
CHECK_OBJECT(par_obj);
tmp_iter_arg_5 = par_obj;
tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooo";
    goto try_except_handler_8;
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
loop_start_3:;
{
PyObject *tmp_next_source_3;
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_3 = tmp_listcomp_1__$0;
tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_3);
if (tmp_assign_source_20 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_3;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooo";
exception_lineno = 144;
        goto try_except_handler_9;
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
    PyObject *old = outline_0_var_v;
    outline_0_var_v = tmp_assign_source_21;
    Py_INCREF(outline_0_var_v);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_5 = module_var_accessor_pydantic$_internal$_core_utils$_clean_schema_for_pretty_print(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__clean_schema_for_pretty_print);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
CHECK_OBJECT(outline_0_var_v);
tmp_kw_call_arg_value_0_3 = outline_0_var_v;
if (par_strip_metadata == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_strip_metadata);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 144;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}

tmp_kw_call_dict_value_0_3 = par_strip_metadata;
frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print->m_frame.f_lineno = 144;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_strip_metadata_tuple);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_1 = "oooooooo";
    goto try_except_handler_9;
}
goto loop_start_3;
loop_end_3:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_return_value = tmp_listcomp_1__contraction;
Py_INCREF(tmp_return_value);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
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
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
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
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_v);
outline_0_var_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 144;
goto frame_exception_exit_1;
outline_result_1:;
goto frame_return_exit_1;
goto branch_end_6;
branch_no_6:;
CHECK_OBJECT(par_obj);
tmp_return_value = par_obj;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_end_6:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print,
    type_description_1,
    par_obj,
    par_strip_metadata,
    var_new_dct,
    var_k,
    var_v,
    var_new_metadata,
    var_meta_k,
    var_meta_v
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print == cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_new_dct);
var_new_dct = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_new_metadata);
var_new_metadata = NULL;
Py_XDECREF(var_meta_k);
var_meta_k = NULL;
Py_XDECREF(var_meta_v);
var_meta_v = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_new_dct);
var_new_dct = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var_v);
var_v = NULL;
Py_XDECREF(var_new_metadata);
var_new_metadata = NULL;
Py_XDECREF(var_meta_k);
var_meta_k = NULL;
Py_XDECREF(var_meta_v);
var_meta_v = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_strip_metadata);
Py_DECREF(par_strip_metadata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_strip_metadata);
Py_DECREF(par_strip_metadata);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_val = python_pars[0];
PyObject *par_console = python_pars[1];
PyObject *par_max_depth = python_pars[2];
PyObject *par_strip_metadata = python_pars[3];
PyObject *var_pprint = NULL;
PyObject *var_BaseModel = NULL;
PyObject *var_TypeAdapter = NULL;
PyObject *var_is_pydantic_dataclass = NULL;
PyObject *var_cleaned_schema = NULL;
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_23f36bcde2b910f7edecc605ff4e35c4, module_pydantic$_internal$_core_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema = cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bf70fdc3b80ce8a908d42a4625884f5e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$_internal$_core_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_pprint_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 167;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_pprint,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_pprint);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_pprint == NULL);
var_pprint = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 170;
tmp_assign_source_2 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic, mod_consts.const_str_plain_pydantic);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 170;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
    if (likely(hard_module != NULL)) {
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BaseModel);

        Py_DECREF(hard_module);

    } else {
        tmp_assign_source_3 = NULL;
    }
}
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_BaseModel == NULL);
var_BaseModel = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 170;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
    if (likely(hard_module != NULL)) {
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_TypeAdapter);

        Py_DECREF(hard_module);

    } else {
        tmp_assign_source_4 = NULL;
    }
}
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooo";
    goto try_except_handler_2;
}
assert(var_TypeAdapter == NULL);
var_TypeAdapter = tmp_assign_source_4;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_2;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 171;
tmp_import_name_from_2 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_415c1e95d1c38c000ce51c6c75537600, mod_consts.const_str_digest_415c1e95d1c38c000ce51c6c75537600);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_is_pydantic_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_is_pydantic_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_is_pydantic_dataclass == NULL);
var_is_pydantic_dataclass = tmp_assign_source_5;
}
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_2;
int tmp_truth_name_2;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_core_utils$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_val);
tmp_args_element_value_1 = par_val;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 173;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isclass, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_val);
tmp_issubclass_cls_1 = par_val;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 170;
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


exception_lineno = 170;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
CHECK_OBJECT(tmp_issubclass_classes_1);
Py_DECREF(tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_value_1 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_or_left_value_1 = tmp_and_left_value_1;
and_end_1:;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_is_pydantic_dataclass);
tmp_called_value_1 = var_is_pydantic_dataclass;
CHECK_OBJECT(par_val);
tmp_args_element_value_2 = par_val;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 173;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 173;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_val);
tmp_expression_value_1 = par_val;
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain___pydantic_core_schema__);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_val;
    assert(old != NULL);
    par_val = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
if (par_val == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_val);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_isinstance_inst_1 = par_val;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 170;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
    if (likely(hard_module != NULL)) {
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_TypeAdapter);

        Py_DECREF(hard_module);

    } else {
        tmp_isinstance_cls_1 = NULL;
    }
}
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "ooooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_2;
if (par_val == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_val);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 176;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = par_val;
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_core_schema);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_val;
    par_val = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_core_utils$_clean_schema_for_pretty_print(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__clean_schema_for_pretty_print);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
if (par_val == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_val);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 177;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}

tmp_kw_call_arg_value_0_1 = par_val;
CHECK_OBJECT(par_strip_metadata);
tmp_kw_call_dict_value_0_1 = par_strip_metadata;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 177;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_strip_metadata_tuple);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
assert(var_cleaned_schema == NULL);
var_cleaned_schema = tmp_assign_source_8;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_3;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_1;
CHECK_OBJECT(var_pprint);
tmp_called_value_3 = var_pprint;
CHECK_OBJECT(var_cleaned_schema);
tmp_kw_call_arg_value_0_2 = var_cleaned_schema;
CHECK_OBJECT(par_console);
tmp_kw_call_dict_value_0_2 = par_console;
CHECK_OBJECT(par_max_depth);
tmp_kw_call_dict_value_1_1 = par_max_depth;
frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame.f_lineno = 179;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_console_str_plain_max_depth_tuple);
}

if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema,
    type_description_1,
    par_val,
    par_console,
    par_max_depth,
    par_strip_metadata,
    var_pprint,
    var_BaseModel,
    var_TypeAdapter,
    var_is_pydantic_dataclass,
    var_cleaned_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema == cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema);
    cache_frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema);

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
Py_XDECREF(par_val);
par_val = NULL;
CHECK_OBJECT(var_pprint);
CHECK_OBJECT(var_pprint);
Py_DECREF(var_pprint);
var_pprint = NULL;
CHECK_OBJECT(var_BaseModel);
CHECK_OBJECT(var_BaseModel);
Py_DECREF(var_BaseModel);
var_BaseModel = NULL;
CHECK_OBJECT(var_TypeAdapter);
CHECK_OBJECT(var_TypeAdapter);
Py_DECREF(var_TypeAdapter);
var_TypeAdapter = NULL;
CHECK_OBJECT(var_is_pydantic_dataclass);
CHECK_OBJECT(var_is_pydantic_dataclass);
Py_DECREF(var_is_pydantic_dataclass);
var_is_pydantic_dataclass = NULL;
CHECK_OBJECT(var_cleaned_schema);
CHECK_OBJECT(var_cleaned_schema);
Py_DECREF(var_cleaned_schema);
var_cleaned_schema = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_val);
par_val = NULL;
Py_XDECREF(var_pprint);
var_pprint = NULL;
Py_XDECREF(var_BaseModel);
var_BaseModel = NULL;
Py_XDECREF(var_TypeAdapter);
var_TypeAdapter = NULL;
Py_XDECREF(var_is_pydantic_dataclass);
var_is_pydantic_dataclass = NULL;
Py_XDECREF(var_cleaned_schema);
var_cleaned_schema = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
CHECK_OBJECT(par_max_depth);
Py_DECREF(par_max_depth);
CHECK_OBJECT(par_strip_metadata);
Py_DECREF(par_strip_metadata);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_console);
Py_DECREF(par_console);
CHECK_OBJECT(par_max_depth);
Py_DECREF(par_max_depth);
CHECK_OBJECT(par_strip_metadata);
Py_DECREF(par_strip_metadata);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__1_is_core_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__1_is_core_schema,
        mod_consts.const_str_plain_is_core_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_a8f34c53ecffbefaebc872c7d17c5dfd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field,
        mod_consts.const_str_plain_is_core_schema_field,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8ec71dd40cc1125fb1b1f7210bcd8bf0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema,
        mod_consts.const_str_plain_is_function_with_inner_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_d8cf8b07ed444c03c3eaaae1fc477e38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema,
        mod_consts.const_str_plain_is_list_like_schema_with_items_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_de3ba25b9d766e72bd6ea16fa2c4ea51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__5_get_type_ref(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__5_get_type_ref,
        mod_consts.const_str_plain_get_type_ref,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ad9102ca066f2c50eebb1ce4cbe3f63b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        mod_consts.const_str_digest_89823c109e6d084a1104043947cf746b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__6_get_ref(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__6_get_ref,
        mod_consts.const_str_plain_get_ref,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_00b7565ba6373067dda7089a626e0dd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        mod_consts.const_str_digest_3552f6f1a69925aeffaa3bc736aaf1fc,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__7_validate_core_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__7_validate_core_schema,
        mod_consts.const_str_plain_validate_core_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_43b21c63e03a39a270cb3c93ec3d67e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print,
        mod_consts.const_str_plain__clean_schema_for_pretty_print,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_31324b805acf7e14515ba9dc0a69decd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        mod_consts.const_str_digest_61f2b7f7c752051e443fd4c70c96dd00,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema,
        mod_consts.const_str_plain_pretty_print_core_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_23f36bcde2b910f7edecc605ff4e35c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$_internal$_core_utils,
        mod_consts.const_str_digest_9d2ef96caacc0e612e688bb1efdf3429,
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

static function_impl_code const function_table_pydantic$_internal$_core_utils[] = {
impl_pydantic$_internal$_core_utils$$$function__1_is_core_schema,
impl_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field,
impl_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema,
impl_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema,
impl_pydantic$_internal$_core_utils$$$function__5_get_type_ref,
impl_pydantic$_internal$_core_utils$$$function__6_get_ref,
impl_pydantic$_internal$_core_utils$$$function__7_validate_core_schema,
impl_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print,
impl_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$_internal$_core_utils);
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
        module_pydantic$_internal$_core_utils,
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
        function_table_pydantic$_internal$_core_utils,
        sizeof(function_table_pydantic$_internal$_core_utils) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic._internal._core_utils";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$_internal$_core_utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$_internal$_core_utils");

    // Store the module for future use.
    module_pydantic$_internal$_core_utils = module;

    moduledict_pydantic$_internal$_core_utils = MODULE_DICT(module_pydantic$_internal$_core_utils);

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
        PRINT_STRING("pydantic$_internal$_core_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$_internal$_core_utils: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$_internal$_core_utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._core_utils" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$_internal$_core_utils\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$_internal$_core_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_core_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_core_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_core_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_core_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$_internal$_core_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$_internal$_core_utils);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_core_utils;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$_internal$_core_utils = MAKE_MODULE_FRAME(code_objects_addb83b9c3979a31a62622bc8a9f24d9, module_pydantic$_internal$_core_utils);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_core_utils);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_core_utils) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$_internal$_core_utils$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$_internal$_core_utils$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$_internal$_core_utils;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 3;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$_internal$_core_utils;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Mapping_str_plain_Sequence_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 5;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_Sequence,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Sequence);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Sequence, tmp_assign_source_9);
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
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_10 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_10);
tmp_import_from_2__module = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = Py_False;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_11);
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_assign_source_14 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic_core, mod_consts.const_str_plain_pydantic_core);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_5 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_CoreSchema,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_CoreSchema);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchema, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_assign_source_16 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_core_schema, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 9;
tmp_import_name_from_6 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic_core, mod_consts.const_str_plain_pydantic_core);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_validate_core_schema,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_validate_core_schema);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__validate_core_schema, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$_internal$_core_utils;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_TypeGuard_str_plain_get_args_str_plain_get_origin_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 10;
tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_18;
}
// Tried code:
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_7 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_TypeGuard,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeGuard);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeGuard, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_8 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_get_args,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_get_args);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_9 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_get_origin,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_get_origin);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin, tmp_assign_source_21);
}
goto try_end_4;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
CHECK_OBJECT(tmp_import_from_4__module);
CHECK_OBJECT(tmp_import_from_4__module);
Py_DECREF(tmp_import_from_4__module);
tmp_import_from_4__module = NULL;
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_typing_inspection;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$_internal$_core_utils;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_typing_objects_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 11;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_typing_objects,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_typing_objects);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_typing_objects, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = const_str_empty;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pydantic$_internal$_core_utils;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__repr_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 13;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain__repr,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain__repr);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__repr, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__typing_extra;
tmp_globals_arg_value_6 = (PyObject *)moduledict_pydantic$_internal$_core_utils;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_is_generic_alias_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 14;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pydantic$_internal$_core_utils,
        mod_consts.const_str_plain_is_generic_alias,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_is_generic_alias);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_generic_alias, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = module_var_accessor_pydantic$_internal$_core_utils$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 19;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_2 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_AfterValidatorFunctionSchema);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_3 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_BeforeValidatorFunctionSchema);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_4 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_WrapValidatorFunctionSchema);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 2, tmp_tuple_element_1);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_5 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_PlainValidatorFunctionSchema);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assign_source_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_AnyFunctionSchema, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_7;
tmp_expression_value_6 = module_var_accessor_pydantic$_internal$_core_utils$Union(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_7 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_AfterValidatorFunctionSchema);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_8 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_BeforeValidatorFunctionSchema);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_9 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_WrapValidatorFunctionSchema);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_FunctionSchemaWithInnerSchema, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_11;
tmp_expression_value_10 = module_var_accessor_pydantic$_internal$_core_utils$Union(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_11 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ModelField);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_3);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_12 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_DataclassField);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_3);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_13 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_TypedDictField);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 2, tmp_tuple_element_3);
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_14 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto tuple_build_exception_3;
}
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_ComputedField);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 3, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchemaField, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_16;
tmp_expression_value_15 = module_var_accessor_pydantic$_internal$_core_utils$Union(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_core_utils->m_frame.f_lineno = 8;
tmp_expression_value_16 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_expression_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_CoreSchema);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_pydantic$_internal$_core_utils$CoreSchemaField(tstate);
assert(!(tmp_tuple_element_4 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_4);
tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchemaOrField, tmp_assign_source_28);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_core_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_core_utils->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_core_utils, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$_internal$_core_utils);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = PySet_New(mod_consts.const_set_0610f43972f0376764721eaf27d4835c);
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__CORE_SCHEMA_FIELD_TYPES, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
tmp_assign_source_30 = PySet_New(mod_consts.const_set_a506ef2b7f4e29a39d5e220629cd72f5);
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__FUNCTION_WITH_INNER_SCHEMA_TYPES, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
tmp_assign_source_31 = PySet_New(mod_consts.const_set_23b47a303afeac65d3281bf7e4f20a3a);
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__LIST_LIKE_SCHEMA_WITH_ITEMS_TYPES, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_4849362a24fc28cf50217e8a7577f46c);

tmp_assign_source_32 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__1_is_core_schema(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_core_schema, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_8670692f19b58d4f68cec32930b1026e);

tmp_assign_source_33 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__2_is_core_schema_field(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_core_schema_field, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_b026700979b5eb0bf418b103eb148309);

tmp_assign_source_34 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__3_is_function_with_inner_schema(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_function_with_inner_schema, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_a91b1240c570a63b52cbc235aada696c);

tmp_assign_source_35 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__4_is_list_like_schema_with_items_schema(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_is_list_like_schema_with_items_schema, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_5;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_303ea0750b737bbcfe50935e0d706120);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_36 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__5_get_type_ref(tstate, tmp_defaults_1, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_type_ref, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_ac64ce56b6e312ffb91d9dcb88be30b3);

tmp_assign_source_37 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__6_get_ref(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_get_ref, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_347a6ef0693254a6afda41486adf0a57);

tmp_assign_source_38 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__7_validate_core_schema(tstate, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_validate_core_schema, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_8;
tmp_defaults_2 = mod_consts.const_tuple_true_tuple;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_d6ddb111b08df62b8ae44ab4ec7f34d6);
Py_INCREF(tmp_defaults_2);

tmp_assign_source_39 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__8__clean_schema_for_pretty_print(tstate, tmp_defaults_2, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain__clean_schema_for_pretty_print, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_9;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_adb69202aeb4579f9cb48be343ff1f37);
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_ac5b02818295f4809910bf8ec06ce0ea);

tmp_assign_source_40 = MAKE_FUNCTION_pydantic$_internal$_core_utils$$$function__9_pretty_print_core_schema(tstate, tmp_kw_defaults_1, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_pretty_print_core_schema, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = module_var_accessor_pydantic$_internal$_core_utils$pretty_print_core_schema(tstate);
assert(!(tmp_assign_source_41 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)mod_consts.const_str_plain_pps, tmp_assign_source_41);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$_internal$_core_utils", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._core_utils" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$_internal$_core_utils);
    return module_pydantic$_internal$_core_utils;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_core_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$_internal$_core_utils", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

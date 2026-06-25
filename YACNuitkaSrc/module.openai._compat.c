/* Generated code for Python module 'openai$_compat'
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



/* The "module_openai$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$_compat;
PyDictObject *moduledict_openai$_compat;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_PYDANTIC_V2;
PyObject *const_str_plain_model_validate;
PyObject *const_str_plain_cast;
PyObject *const_str_plain__ModelT;
PyObject *const_str_plain_parse_obj;
PyObject *const_str_plain_is_required;
PyObject *const_str_plain_required;
PyObject *const_str_plain_get_default;
PyObject *const_str_plain_pydantic_core;
PyObject *const_str_plain_PydanticUndefined;
PyObject *const_str_plain_annotation;
PyObject *const_str_plain_outer_type_;
PyObject *const_str_plain_model_config;
PyObject *const_str_plain___config__;
PyObject *const_str_plain_model_fields;
PyObject *const_str_plain___fields__;
PyObject *const_str_plain_model_copy;
PyObject *const_tuple_str_plain_deep_tuple;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_model_dump_json;
PyObject *const_tuple_str_plain_indent_tuple;
PyObject *const_str_plain_json;
PyObject *const_str_plain_model_dump;
PyObject *const_tuple_6b7a5a5c8d5bfa2e151ed9eefe4006e8_tuple;
PyObject *const_str_digest_bb369f95d9725c681f56f5ecd53d874b;
PyObject *const_str_plain_dict;
PyObject *const_tuple_21c972d0b3bd7dcea6555a2efe846fca_tuple;
PyObject *const_str_plain_model_validate_json;
PyObject *const_str_plain_parse_raw;
PyObject *const_str_plain_model_json_schema;
PyObject *const_str_plain_schema;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_datetime;
PyObject *const_tuple_str_plain_date_str_plain_datetime_tuple;
PyObject *const_str_plain_date;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Self_str_plain_Literal_tuple;
PyObject *const_str_plain_Self;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_pydantic;
PyObject *const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb;
PyObject *const_str_plain_FieldInfo;
PyObject *const_str_plain__types;
PyObject *const_tuple_str_plain_IncEx_str_plain_StrBytesIntFloat_tuple;
PyObject *const_str_plain_IncEx;
PyObject *const_str_plain_StrBytesIntFloat;
PyObject *const_tuple_str_plain__T_tuple;
PyObject *const_str_plain__T;
PyObject *const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0;
PyObject *const_str_plain_BaseModel;
PyObject *const_tuple_str_plain__ModelT_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain_VERSION;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_digest_93f20cbce6e7bf2f609ce66ba4458ff1_tuple;
PyObject *const_str_digest_f9861b1e4514d5e04250a8e007e7186b;
PyObject *const_tuple_102432b6f1f5c04cc7d4326330e0d07e_tuple;
PyObject *const_str_plain_get_args;
PyObject *const_str_plain_is_union;
PyObject *const_str_plain_get_origin;
PyObject *const_str_plain_is_typeddict;
PyObject *const_str_plain_is_literal_type;
PyObject *const_str_digest_00699fd865240a993c1bce7ab23e8908;
PyObject *const_tuple_str_plain_parse_date_str_plain_parse_datetime_tuple;
PyObject *const_str_plain_parse_date;
PyObject *const_str_plain_parse_datetime;
PyObject *const_str_digest_22888f9468e2e3396429ee399bb9f9b1;
PyObject *const_str_digest_11c909bd082b7e010cbffc54b5d25fea;
PyObject *const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049;
PyObject *const_str_plain_ConfigDict;
PyObject *const_dict_78c26b1721393fa18755a6cd10711edf;
PyObject *const_dict_074ac5ec77eb5245e77fca8c0f4f6d94;
PyObject *const_str_plain_field_is_required;
PyObject *const_dict_8ab43798154f11cef26f68b91408cf0e;
PyObject *const_str_plain_field_get_default;
PyObject *const_str_plain_field_outer_type;
PyObject *const_dict_9b4dc5399180a082491d48bffdc0a047;
PyObject *const_str_plain_get_model_config;
PyObject *const_dict_478bd9edb4b5e7652b5e001091af701f;
PyObject *const_str_plain_get_model_fields;
PyObject *const_dict_17440620d45d7925b88fee706947f25a;
PyObject *const_dict_004ad38bcff998bf92561b94fbbe8aca;
PyObject *const_dict_ac4206a3c1055ba1dd8568b634fc70bd;
PyObject *const_dict_bbed8f8edaa8b3834630d347bb3384b9;
PyObject *const_str_plain_model_json;
PyObject *const_dict_5bc4107d05ffad03360f01b1e9500e8f;
PyObject *const_dict_c096fd806e697df8ea07e7de32986028;
PyObject *const_dict_fa89ce3b779357d7a01976da8d91e837;
PyObject *const_str_plain_model_parse;
PyObject *const_dict_e64af96c366f53384f15137fbea0857a;
PyObject *const_str_plain_model_parse_json;
PyObject *const_dict_42575c5db982f3e9392ada63b535acaa;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_GenericModel;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_2626f2f5f53d7291e6aa5bff30290bab;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_189;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_248c85533a449e70f4b48c5de26c7f40;
PyObject *const_str_plain_generics;
PyObject *const_int_pos_194;
PyObject *const_str_plain_cached_property;
PyObject *const_str_plain_typed_cached_property;
PyObject *const_str_digest_6ece66b576de07fd3e4f9b8af28603c4;
PyObject *const_str_digest_3d99ea681d19d981afb74c02a1482104;
PyObject *const_tuple_str_plain_field_str_plain_value_str_plain_PydanticUndefined_tuple;
PyObject *const_tuple_str_plain_field_tuple;
PyObject *const_tuple_str_plain_model_tuple;
PyObject *const_tuple_str_plain_model_str_plain_deep_tuple;
PyObject *const_tuple_362988ad069a6955b1e149f0d367108d_tuple;
PyObject *const_tuple_str_plain_model_str_plain_indent_tuple;
PyObject *const_tuple_str_plain_model_str_plain_data_tuple;
PyObject *const_tuple_str_plain_model_str_plain_value_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[127];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai._compat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_PYDANTIC_V2);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_validate);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain__ModelT);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_obj);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_required);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_required);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_default);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefined);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotation);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_outer_type_);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_config);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain___config__);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_fields);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain___fields__);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_copy);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deep_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump_json);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_indent_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_6b7a5a5c8d5bfa2e151ed9eefe4006e8_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_dict);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_21c972d0b3bd7dcea6555a2efe846fca_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_validate_json);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_raw);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_json_schema);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_datetime);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_date_str_plain_datetime_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_date);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_str_plain_Literal_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_Self);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IncEx_str_plain_StrBytesIntFloat_tuple);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_IncEx);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrBytesIntFloat);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__T);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__ModelT_tuple);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_93f20cbce6e7bf2f609ce66ba4458ff1_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_tuple_102432b6f1f5c04cc7d4326330e0d07e_tuple);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_args);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_union);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_literal_type);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_00699fd865240a993c1bce7ab23e8908);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parse_date_str_plain_parse_datetime_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_date);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_datetime);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_22888f9468e2e3396429ee399bb9f9b1);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_11c909bd082b7e010cbffc54b5d25fea);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_dict_78c26b1721393fa18755a6cd10711edf);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_dict_074ac5ec77eb5245e77fca8c0f4f6d94);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_is_required);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_dict_8ab43798154f11cef26f68b91408cf0e);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_get_default);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_outer_type);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_dict_9b4dc5399180a082491d48bffdc0a047);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_model_config);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_dict_478bd9edb4b5e7652b5e001091af701f);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_model_fields);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_dict_17440620d45d7925b88fee706947f25a);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_dict_004ad38bcff998bf92561b94fbbe8aca);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_dict_ac4206a3c1055ba1dd8568b634fc70bd);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_dict_bbed8f8edaa8b3834630d347bb3384b9);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_json);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_dict_5bc4107d05ffad03360f01b1e9500e8f);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_dict_c096fd806e697df8ea07e7de32986028);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_dict_fa89ce3b779357d7a01976da8d91e837);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_parse);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_dict_e64af96c366f53384f15137fbea0857a);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_parse_json);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_dict_42575c5db982f3e9392ada63b535acaa);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenericModel);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_2626f2f5f53d7291e6aa5bff30290bab);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_int_pos_189);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_248c85533a449e70f4b48c5de26c7f40);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_generics);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_int_pos_194);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_typed_cached_property);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_digest_6ece66b576de07fd3e4f9b8af28603c4);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_digest_3d99ea681d19d981afb74c02a1482104);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_field_str_plain_value_str_plain_PydanticUndefined_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_field_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_deep_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_362988ad069a6955b1e149f0d367108d_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_indent_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_data_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_value_tuple);
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
void checkModuleConstants_openai$_compat(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_PYDANTIC_V2));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PYDANTIC_V2);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_validate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_validate);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain__ModelT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ModelT);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_obj));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_obj);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_required);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_required);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_default);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_core);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefined));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticUndefined);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotation);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_outer_type_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_outer_type_);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_config);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain___config__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___config__);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_fields);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain___fields__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___fields__);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_copy);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_deep_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_deep_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_dump_json);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_indent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_indent_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_dump);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_6b7a5a5c8d5bfa2e151ed9eefe4006e8_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6b7a5a5c8d5bfa2e151ed9eefe4006e8_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dict);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_21c972d0b3bd7dcea6555a2efe846fca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_21c972d0b3bd7dcea6555a2efe846fca_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_validate_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_validate_json);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_raw));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_raw);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_json_schema);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_datetime);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_date_str_plain_datetime_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_date_str_plain_datetime_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_date));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_date);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_str_plain_Literal_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Self_str_plain_Literal_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_Self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Self);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_FieldInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FieldInfo);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_IncEx_str_plain_StrBytesIntFloat_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_IncEx_str_plain_StrBytesIntFloat_tuple);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_IncEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IncEx);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrBytesIntFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrBytesIntFloat);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__T_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__T);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__ModelT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__ModelT_tuple);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VERSION);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_93f20cbce6e7bf2f609ce66ba4458ff1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_93f20cbce6e7bf2f609ce66ba4458ff1_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_tuple_102432b6f1f5c04cc7d4326330e0d07e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_102432b6f1f5c04cc7d4326330e0d07e_tuple);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_args);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_union);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_origin);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_typeddict);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_literal_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_literal_type);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_00699fd865240a993c1bce7ab23e8908));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_00699fd865240a993c1bce7ab23e8908);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parse_date_str_plain_parse_datetime_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parse_date_str_plain_parse_datetime_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_date));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_date);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_datetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_datetime);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_22888f9468e2e3396429ee399bb9f9b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_22888f9468e2e3396429ee399bb9f9b1);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_11c909bd082b7e010cbffc54b5d25fea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_11c909bd082b7e010cbffc54b5d25fea);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConfigDict);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_dict_78c26b1721393fa18755a6cd10711edf));
CHECK_OBJECT_DEEP(mod_consts.const_dict_78c26b1721393fa18755a6cd10711edf);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_dict_074ac5ec77eb5245e77fca8c0f4f6d94));
CHECK_OBJECT_DEEP(mod_consts.const_dict_074ac5ec77eb5245e77fca8c0f4f6d94);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_is_required));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_is_required);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_dict_8ab43798154f11cef26f68b91408cf0e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8ab43798154f11cef26f68b91408cf0e);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_get_default));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_get_default);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_outer_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_outer_type);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_dict_9b4dc5399180a082491d48bffdc0a047));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9b4dc5399180a082491d48bffdc0a047);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_model_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_model_config);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_dict_478bd9edb4b5e7652b5e001091af701f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_478bd9edb4b5e7652b5e001091af701f);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_model_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_model_fields);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_dict_17440620d45d7925b88fee706947f25a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_17440620d45d7925b88fee706947f25a);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_dict_004ad38bcff998bf92561b94fbbe8aca));
CHECK_OBJECT_DEEP(mod_consts.const_dict_004ad38bcff998bf92561b94fbbe8aca);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_dict_ac4206a3c1055ba1dd8568b634fc70bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ac4206a3c1055ba1dd8568b634fc70bd);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_dict_bbed8f8edaa8b3834630d347bb3384b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bbed8f8edaa8b3834630d347bb3384b9);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_json);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_dict_5bc4107d05ffad03360f01b1e9500e8f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5bc4107d05ffad03360f01b1e9500e8f);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_dict_c096fd806e697df8ea07e7de32986028));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c096fd806e697df8ea07e7de32986028);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_dict_fa89ce3b779357d7a01976da8d91e837));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fa89ce3b779357d7a01976da8d91e837);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_parse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_parse);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_dict_e64af96c366f53384f15137fbea0857a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e64af96c366f53384f15137fbea0857a);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_parse_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_parse_json);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_dict_42575c5db982f3e9392ada63b535acaa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_42575c5db982f3e9392ada63b535acaa);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenericModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenericModel);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_2626f2f5f53d7291e6aa5bff30290bab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2626f2f5f53d7291e6aa5bff30290bab);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_int_pos_189));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_189);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_248c85533a449e70f4b48c5de26c7f40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_248c85533a449e70f4b48c5de26c7f40);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_generics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generics);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_int_pos_194));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_194);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_typed_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typed_cached_property);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_digest_6ece66b576de07fd3e4f9b8af28603c4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6ece66b576de07fd3e4f9b8af28603c4);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_digest_3d99ea681d19d981afb74c02a1482104));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3d99ea681d19d981afb74c02a1482104);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_field_str_plain_value_str_plain_PydanticUndefined_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_field_str_plain_value_str_plain_PydanticUndefined_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_field_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_field_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_deep_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_str_plain_deep_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_362988ad069a6955b1e149f0d367108d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_362988ad069a6955b1e149f0d367108d_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_indent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_str_plain_indent_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_data_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_str_plain_data_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_str_plain_value_tuple);
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
static PyObject *module_var_accessor_openai$_compat$PYDANTIC_V2(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PYDANTIC_V2);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PYDANTIC_V2, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PYDANTIC_V2);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PYDANTIC_V2, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_compat$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeVar);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeVar, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_compat$_ModelT(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__ModelT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ModelT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ModelT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ModelT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ModelT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__ModelT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__ModelT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ModelT);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_compat$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_compat->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_compat$cached_property(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_cached_property);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_cached_property, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_compat$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_compat->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_compat$pydantic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$_compat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$_compat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$_compat->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pydantic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pydantic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_pydantic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_pydantic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e28f85d6826331df8413157c086f7aea;
static PyCodeObject *code_objects_155c4fe5674a36a99c66448c342f962d;
static PyCodeObject *code_objects_46a15d978665661011e997e05c4c71f5;
static PyCodeObject *code_objects_6d09a1cabc1563fc901a01d3a6d128cc;
static PyCodeObject *code_objects_ed75a92a1bccf54d66ae3accce270227;
static PyCodeObject *code_objects_9dac9aaa3538a7c1fe88422e320bf360;
static PyCodeObject *code_objects_f3a2cda70bf84cdfbb0632e075045500;
static PyCodeObject *code_objects_5f1894fa518b503046fbf5b90e16f834;
static PyCodeObject *code_objects_172515ca25aa45ca2ec0953134bd9a69;
static PyCodeObject *code_objects_57df7db4b0145f473f50a1ea4b28d9d4;
static PyCodeObject *code_objects_5cb18d8be1565540b7fd264ee2c41ce6;
static PyCodeObject *code_objects_fb73fb3189ccf672b0f5e3d74388d364;
static PyCodeObject *code_objects_9438fd68e36cd5b842da5f39f40fbde8;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_6ece66b576de07fd3e4f9b8af28603c4); CHECK_OBJECT(module_filename_obj);
code_objects_e28f85d6826331df8413157c086f7aea = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_3d99ea681d19d981afb74c02a1482104, mod_consts.const_str_digest_3d99ea681d19d981afb74c02a1482104, NULL, NULL, 0, 0, 0);
code_objects_155c4fe5674a36a99c66448c342f962d = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_field_get_default, mod_consts.const_str_plain_field_get_default, mod_consts.const_tuple_str_plain_field_str_plain_value_str_plain_PydanticUndefined_tuple, NULL, 1, 0, 0);
code_objects_46a15d978665661011e997e05c4c71f5 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_field_is_required, mod_consts.const_str_plain_field_is_required, mod_consts.const_tuple_str_plain_field_tuple, NULL, 1, 0, 0);
code_objects_6d09a1cabc1563fc901a01d3a6d128cc = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_field_outer_type, mod_consts.const_str_plain_field_outer_type, mod_consts.const_tuple_str_plain_field_tuple, NULL, 1, 0, 0);
code_objects_ed75a92a1bccf54d66ae3accce270227 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_model_config, mod_consts.const_str_plain_get_model_config, mod_consts.const_tuple_str_plain_model_tuple, NULL, 1, 0, 0);
code_objects_9dac9aaa3538a7c1fe88422e320bf360 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_model_fields, mod_consts.const_str_plain_get_model_fields, mod_consts.const_tuple_str_plain_model_tuple, NULL, 1, 0, 0);
code_objects_f3a2cda70bf84cdfbb0632e075045500 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_model_copy, mod_consts.const_str_plain_model_copy, mod_consts.const_tuple_str_plain_model_str_plain_deep_tuple, NULL, 1, 1, 0);
code_objects_5f1894fa518b503046fbf5b90e16f834 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_model_dump, mod_consts.const_str_plain_model_dump, mod_consts.const_tuple_362988ad069a6955b1e149f0d367108d_tuple, NULL, 1, 5, 0);
code_objects_172515ca25aa45ca2ec0953134bd9a69 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_model_json, mod_consts.const_str_plain_model_json, mod_consts.const_tuple_str_plain_model_str_plain_indent_tuple, NULL, 1, 1, 0);
code_objects_57df7db4b0145f473f50a1ea4b28d9d4 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_model_json_schema, mod_consts.const_str_plain_model_json_schema, mod_consts.const_tuple_str_plain_model_tuple, NULL, 1, 0, 0);
code_objects_5cb18d8be1565540b7fd264ee2c41ce6 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_model_parse, mod_consts.const_str_plain_model_parse, mod_consts.const_tuple_str_plain_model_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_fb73fb3189ccf672b0f5e3d74388d364 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_model_parse_json, mod_consts.const_str_plain_model_parse_json, mod_consts.const_tuple_str_plain_model_str_plain_data_tuple, NULL, 2, 0, 0);
code_objects_9438fd68e36cd5b842da5f39f40fbde8 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_parse_obj, mod_consts.const_str_plain_parse_obj, mod_consts.const_tuple_str_plain_model_str_plain_value_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__10_field_get_default(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__11_field_outer_type(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__12_get_model_config(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__13_get_model_fields(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__14_model_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__15_model_json(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__16_model_dump(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__17_model_parse(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__18_model_parse_json(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__19_model_json_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__8_parse_obj(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$_compat$$$function__9_field_is_required(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$_compat$$$function__8_parse_obj(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
PyObject *par_value = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__8_parse_obj;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__8_parse_obj = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__8_parse_obj)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__8_parse_obj);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__8_parse_obj == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__8_parse_obj = MAKE_FUNCTION_FRAME(tstate, code_objects_9438fd68e36cd5b842da5f39f40fbde8, module_openai$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__8_parse_obj->m_type_description == NULL);
frame_frame_openai$_compat$$$function__8_parse_obj = cache_frame_frame_openai$_compat$$$function__8_parse_obj;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__8_parse_obj);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__8_parse_obj) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_model);
tmp_called_instance_1 = par_model;
CHECK_OBJECT(par_value);
tmp_args_element_value_1 = par_value;
frame_frame_openai$_compat$$$function__8_parse_obj->m_frame.f_lineno = 81;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_model_validate, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_4;
tmp_called_value_1 = module_var_accessor_openai$_compat$cast(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_openai$_compat$_ModelT(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ModelT);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_model);
tmp_called_instance_2 = par_model;
CHECK_OBJECT(par_value);
tmp_args_element_value_4 = par_value;
frame_frame_openai$_compat$$$function__8_parse_obj->m_frame.f_lineno = 83;
tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parse_obj, tmp_args_element_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_compat$$$function__8_parse_obj->m_frame.f_lineno = 83;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__8_parse_obj, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__8_parse_obj->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__8_parse_obj, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__8_parse_obj,
    type_description_1,
    par_model,
    par_value
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__8_parse_obj == cache_frame_frame_openai$_compat$$$function__8_parse_obj) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__8_parse_obj);
    cache_frame_frame_openai$_compat$$$function__8_parse_obj = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__8_parse_obj);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__9_field_is_required(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_field = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__9_field_is_required;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__9_field_is_required = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__9_field_is_required)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__9_field_is_required);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__9_field_is_required == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__9_field_is_required = MAKE_FUNCTION_FRAME(tstate, code_objects_46a15d978665661011e997e05c4c71f5, module_openai$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__9_field_is_required->m_type_description == NULL);
frame_frame_openai$_compat$$$function__9_field_is_required = cache_frame_frame_openai$_compat$$$function__9_field_is_required;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__9_field_is_required);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__9_field_is_required) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "o";
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
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_field);
tmp_called_instance_1 = par_field;
frame_frame_openai$_compat$$$function__9_field_is_required->m_frame.f_lineno = 88;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_required);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_field);
tmp_expression_value_1 = par_field;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_required);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__9_field_is_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__9_field_is_required->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__9_field_is_required, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__9_field_is_required,
    type_description_1,
    par_field
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__9_field_is_required == cache_frame_frame_openai$_compat$$$function__9_field_is_required) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__9_field_is_required);
    cache_frame_frame_openai$_compat$$$function__9_field_is_required = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__9_field_is_required);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_field);
Py_DECREF(par_field);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_field);
Py_DECREF(par_field);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__10_field_get_default(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_field = python_pars[0];
PyObject *var_value = NULL;
PyObject *var_PydanticUndefined = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__10_field_get_default;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__10_field_get_default = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__10_field_get_default)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__10_field_get_default);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__10_field_get_default == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__10_field_get_default = MAKE_FUNCTION_FRAME(tstate, code_objects_155c4fe5674a36a99c66448c342f962d, module_openai$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__10_field_get_default->m_type_description == NULL);
frame_frame_openai$_compat$$$function__10_field_get_default = cache_frame_frame_openai$_compat$$$function__10_field_get_default;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__10_field_get_default);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__10_field_get_default) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_field);
tmp_called_instance_1 = par_field;
frame_frame_openai$_compat$$$function__10_field_get_default->m_frame.f_lineno = 93;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_default);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_value == NULL);
var_value = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;
type_description_1 = "ooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_import_name_from_1;
frame_frame_openai$_compat$$$function__10_field_get_default->m_frame.f_lineno = 95;
tmp_import_name_from_1 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic_core, mod_consts.const_str_plain_pydantic_core);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_PydanticUndefined,
        const_int_0
    );
} else {
    tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_PydanticUndefined);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_PydanticUndefined == NULL);
var_PydanticUndefined = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_value);
tmp_cmp_expr_left_1 = var_value;
CHECK_OBJECT(var_PydanticUndefined);
tmp_cmp_expr_right_1 = var_PydanticUndefined;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
CHECK_OBJECT(var_value);
tmp_return_value = var_value;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__10_field_get_default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__10_field_get_default->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__10_field_get_default, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__10_field_get_default,
    type_description_1,
    par_field,
    var_value,
    var_PydanticUndefined
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__10_field_get_default == cache_frame_frame_openai$_compat$$$function__10_field_get_default) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__10_field_get_default);
    cache_frame_frame_openai$_compat$$$function__10_field_get_default = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__10_field_get_default);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_value);
tmp_return_value = var_value;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_value);
CHECK_OBJECT(var_value);
Py_DECREF(var_value);
var_value = NULL;
Py_XDECREF(var_PydanticUndefined);
var_PydanticUndefined = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_value);
var_value = NULL;
Py_XDECREF(var_PydanticUndefined);
var_PydanticUndefined = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_field);
Py_DECREF(par_field);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_field);
Py_DECREF(par_field);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__11_field_outer_type(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_field = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__11_field_outer_type;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__11_field_outer_type = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__11_field_outer_type)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__11_field_outer_type);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__11_field_outer_type == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__11_field_outer_type = MAKE_FUNCTION_FRAME(tstate, code_objects_6d09a1cabc1563fc901a01d3a6d128cc, module_openai$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__11_field_outer_type->m_type_description == NULL);
frame_frame_openai$_compat$$$function__11_field_outer_type = cache_frame_frame_openai$_compat$$$function__11_field_outer_type;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__11_field_outer_type);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__11_field_outer_type) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;
type_description_1 = "o";
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_field);
tmp_expression_value_1 = par_field;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_annotation);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_field);
tmp_expression_value_2 = par_field;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_outer_type_);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__11_field_outer_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__11_field_outer_type->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__11_field_outer_type, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__11_field_outer_type,
    type_description_1,
    par_field
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__11_field_outer_type == cache_frame_frame_openai$_compat$$$function__11_field_outer_type) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__11_field_outer_type);
    cache_frame_frame_openai$_compat$$$function__11_field_outer_type = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__11_field_outer_type);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_field);
Py_DECREF(par_field);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_field);
Py_DECREF(par_field);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__12_get_model_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__12_get_model_config;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__12_get_model_config = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__12_get_model_config)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__12_get_model_config);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__12_get_model_config == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__12_get_model_config = MAKE_FUNCTION_FRAME(tstate, code_objects_ed75a92a1bccf54d66ae3accce270227, module_openai$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__12_get_model_config->m_type_description == NULL);
frame_frame_openai$_compat$$$function__12_get_model_config = cache_frame_frame_openai$_compat$$$function__12_get_model_config;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__12_get_model_config);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__12_get_model_config) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "o";
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_model);
tmp_expression_value_1 = par_model;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model_config);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_model);
tmp_expression_value_2 = par_model;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___config__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__12_get_model_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__12_get_model_config->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__12_get_model_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__12_get_model_config,
    type_description_1,
    par_model
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__12_get_model_config == cache_frame_frame_openai$_compat$$$function__12_get_model_config) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__12_get_model_config);
    cache_frame_frame_openai$_compat$$$function__12_get_model_config = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__12_get_model_config);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__13_get_model_fields(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__13_get_model_fields;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__13_get_model_fields = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__13_get_model_fields)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__13_get_model_fields);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__13_get_model_fields == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__13_get_model_fields = MAKE_FUNCTION_FRAME(tstate, code_objects_9dac9aaa3538a7c1fe88422e320bf360, module_openai$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__13_get_model_fields->m_type_description == NULL);
frame_frame_openai$_compat$$$function__13_get_model_fields = cache_frame_frame_openai$_compat$$$function__13_get_model_fields;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__13_get_model_fields);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__13_get_model_fields) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "o";
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
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_model);
tmp_expression_value_1 = par_model;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model_fields);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_model);
tmp_expression_value_2 = par_model;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___fields__);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__13_get_model_fields, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__13_get_model_fields->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__13_get_model_fields, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__13_get_model_fields,
    type_description_1,
    par_model
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__13_get_model_fields == cache_frame_frame_openai$_compat$$$function__13_get_model_fields) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__13_get_model_fields);
    cache_frame_frame_openai$_compat$$$function__13_get_model_fields = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__13_get_model_fields);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__14_model_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
PyObject *par_deep = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__14_model_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__14_model_copy = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__14_model_copy)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__14_model_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__14_model_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__14_model_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_f3a2cda70bf84cdfbb0632e075045500, module_openai$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__14_model_copy->m_type_description == NULL);
frame_frame_openai$_compat$$$function__14_model_copy = cache_frame_frame_openai$_compat$$$function__14_model_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__14_model_copy);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__14_model_copy) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "oo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_model);
tmp_expression_value_1 = par_model;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model_copy);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deep);
tmp_kw_call_value_0_1 = par_deep;
frame_frame_openai$_compat$$$function__14_model_copy->m_frame.f_lineno = 123;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_deep_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_2;
CHECK_OBJECT(par_model);
tmp_expression_value_2 = par_model;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_copy);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_deep);
tmp_kw_call_value_0_2 = par_deep;
frame_frame_openai$_compat$$$function__14_model_copy->m_frame.f_lineno = 124;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_deep_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__14_model_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__14_model_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__14_model_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__14_model_copy,
    type_description_1,
    par_model,
    par_deep
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__14_model_copy == cache_frame_frame_openai$_compat$$$function__14_model_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__14_model_copy);
    cache_frame_frame_openai$_compat$$$function__14_model_copy = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__14_model_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_deep);
Py_DECREF(par_deep);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_deep);
Py_DECREF(par_deep);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__15_model_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
PyObject *par_indent = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__15_model_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__15_model_json = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__15_model_json)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__15_model_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__15_model_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__15_model_json = MAKE_FUNCTION_FRAME(tstate, code_objects_172515ca25aa45ca2ec0953134bd9a69, module_openai$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__15_model_json->m_type_description == NULL);
frame_frame_openai$_compat$$$function__15_model_json = cache_frame_frame_openai$_compat$$$function__15_model_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__15_model_json);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__15_model_json) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "oo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_model);
tmp_expression_value_1 = par_model;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model_dump_json);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_indent);
tmp_kw_call_value_0_1 = par_indent;
frame_frame_openai$_compat$$$function__15_model_json->m_frame.f_lineno = 129;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_indent_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 129;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_2;
CHECK_OBJECT(par_model);
tmp_expression_value_2 = par_model;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_json);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_indent);
tmp_kw_call_value_0_2 = par_indent;
frame_frame_openai$_compat$$$function__15_model_json->m_frame.f_lineno = 130;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_2, kw_values, mod_consts.const_tuple_str_plain_indent_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__15_model_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__15_model_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__15_model_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__15_model_json,
    type_description_1,
    par_model,
    par_indent
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__15_model_json == cache_frame_frame_openai$_compat$$$function__15_model_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__15_model_json);
    cache_frame_frame_openai$_compat$$$function__15_model_json = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__15_model_json);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__16_model_dump(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
PyObject *par_exclude = python_pars[1];
PyObject *par_exclude_unset = python_pars[2];
PyObject *par_exclude_defaults = python_pars[3];
PyObject *par_warnings = python_pars[4];
PyObject *par_mode = python_pars[5];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__16_model_dump;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__16_model_dump = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__16_model_dump)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__16_model_dump);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__16_model_dump == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__16_model_dump = MAKE_FUNCTION_FRAME(tstate, code_objects_5f1894fa518b503046fbf5b90e16f834, module_openai$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__16_model_dump->m_type_description == NULL);
frame_frame_openai$_compat$$$function__16_model_dump = cache_frame_frame_openai$_compat$$$function__16_model_dump;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__16_model_dump);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__16_model_dump) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_model);
tmp_expression_value_1 = par_model;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain_model_dump);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
nuitka_bool tmp_condition_result_2;
PyObject *tmp_mvar_value_2;
int tmp_truth_name_2;
CHECK_OBJECT(par_model);
tmp_expression_value_2 = par_model;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_model_dump);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_kw_call_value_0_1 = par_mode;
CHECK_OBJECT(par_exclude);
tmp_kw_call_value_1_1 = par_exclude;
CHECK_OBJECT(par_exclude_unset);
tmp_kw_call_value_2_1 = par_exclude_unset;
CHECK_OBJECT(par_exclude_defaults);
tmp_kw_call_value_3_1 = par_exclude_defaults;
tmp_mvar_value_2 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 149;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 149;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_warnings);
tmp_kw_call_value_4_1 = par_warnings;
goto condexpr_end_1;
condexpr_false_1:;
tmp_kw_call_value_4_1 = Py_True;
condexpr_end_1:;
frame_frame_openai$_compat$$$function__16_model_dump->m_frame.f_lineno = 143;
{
    PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_6b7a5a5c8d5bfa2e151ed9eefe4006e8_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 143;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
tmp_called_value_2 = module_var_accessor_openai$_compat$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = mod_consts.const_str_digest_bb369f95d9725c681f56f5ecd53d874b;
CHECK_OBJECT(par_model);
tmp_expression_value_3 = par_model;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_dict);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_exclude);
tmp_kw_call_value_0_2 = par_exclude;
CHECK_OBJECT(par_exclude_unset);
tmp_kw_call_value_1_2 = par_exclude_unset;
CHECK_OBJECT(par_exclude_defaults);
tmp_kw_call_value_2_2 = par_exclude_defaults;
frame_frame_openai$_compat$$$function__16_model_dump->m_frame.f_lineno = 153;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

    tmp_args_element_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_21c972d0b3bd7dcea6555a2efe846fca_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$_compat$$$function__16_model_dump->m_frame.f_lineno = 151;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__16_model_dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__16_model_dump->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__16_model_dump, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__16_model_dump,
    type_description_1,
    par_model,
    par_exclude,
    par_exclude_unset,
    par_exclude_defaults,
    par_warnings,
    par_mode
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__16_model_dump == cache_frame_frame_openai$_compat$$$function__16_model_dump) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__16_model_dump);
    cache_frame_frame_openai$_compat$$$function__16_model_dump = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__16_model_dump);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
CHECK_OBJECT(par_warnings);
Py_DECREF(par_warnings);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
CHECK_OBJECT(par_warnings);
Py_DECREF(par_warnings);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__17_model_parse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__17_model_parse;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__17_model_parse = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__17_model_parse)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__17_model_parse);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__17_model_parse == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__17_model_parse = MAKE_FUNCTION_FRAME(tstate, code_objects_5cb18d8be1565540b7fd264ee2c41ce6, module_openai$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__17_model_parse->m_type_description == NULL);
frame_frame_openai$_compat$$$function__17_model_parse = cache_frame_frame_openai$_compat$$$function__17_model_parse;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__17_model_parse);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__17_model_parse) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 162;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_model);
tmp_called_instance_1 = par_model;
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_openai$_compat$$$function__17_model_parse->m_frame.f_lineno = 163;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_model_validate, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_model);
tmp_called_instance_2 = par_model;
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_openai$_compat$$$function__17_model_parse->m_frame.f_lineno = 164;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parse_obj, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 164;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__17_model_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__17_model_parse->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__17_model_parse, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__17_model_parse,
    type_description_1,
    par_model,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__17_model_parse == cache_frame_frame_openai$_compat$$$function__17_model_parse) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__17_model_parse);
    cache_frame_frame_openai$_compat$$$function__17_model_parse = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__17_model_parse);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__18_model_parse_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
PyObject *par_data = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__18_model_parse_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__18_model_parse_json = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__18_model_parse_json)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__18_model_parse_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__18_model_parse_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__18_model_parse_json = MAKE_FUNCTION_FRAME(tstate, code_objects_fb73fb3189ccf672b0f5e3d74388d364, module_openai$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__18_model_parse_json->m_type_description == NULL);
frame_frame_openai$_compat$$$function__18_model_parse_json = cache_frame_frame_openai$_compat$$$function__18_model_parse_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__18_model_parse_json);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__18_model_parse_json) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "oo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_model);
tmp_called_instance_1 = par_model;
CHECK_OBJECT(par_data);
tmp_args_element_value_1 = par_data;
frame_frame_openai$_compat$$$function__18_model_parse_json->m_frame.f_lineno = 169;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_model_validate_json, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_model);
tmp_called_instance_2 = par_model;
CHECK_OBJECT(par_data);
tmp_args_element_value_2 = par_data;
frame_frame_openai$_compat$$$function__18_model_parse_json->m_frame.f_lineno = 170;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_parse_raw, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__18_model_parse_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__18_model_parse_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__18_model_parse_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__18_model_parse_json,
    type_description_1,
    par_model,
    par_data
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__18_model_parse_json == cache_frame_frame_openai$_compat$$$function__18_model_parse_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__18_model_parse_json);
    cache_frame_frame_openai$_compat$$$function__18_model_parse_json = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__18_model_parse_json);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$_compat$$$function__19_model_json_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_model = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$_compat$$$function__19_model_json_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$_compat$$$function__19_model_json_schema = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$_compat$$$function__19_model_json_schema)) {
    Py_XDECREF(cache_frame_frame_openai$_compat$$$function__19_model_json_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$_compat$$$function__19_model_json_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$_compat$$$function__19_model_json_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_57df7db4b0145f473f50a1ea4b28d9d4, module_openai$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$_compat$$$function__19_model_json_schema->m_type_description == NULL);
frame_frame_openai$_compat$$$function__19_model_json_schema = cache_frame_frame_openai$_compat$$$function__19_model_json_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat$$$function__19_model_json_schema);
assert(Py_REFCNT(frame_frame_openai$_compat$$$function__19_model_json_schema) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 174;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_1 = "o";
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
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_model);
tmp_called_instance_1 = par_model;
frame_frame_openai$_compat$$$function__19_model_json_schema->m_frame.f_lineno = 175;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_model_json_schema);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_model);
tmp_called_instance_2 = par_model;
frame_frame_openai$_compat$$$function__19_model_json_schema->m_frame.f_lineno = 176;
tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_schema);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat$$$function__19_model_json_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat$$$function__19_model_json_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat$$$function__19_model_json_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$_compat$$$function__19_model_json_schema,
    type_description_1,
    par_model
);


// Release cached frame if used for exception.
if (frame_frame_openai$_compat$$$function__19_model_json_schema == cache_frame_frame_openai$_compat$$$function__19_model_json_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$_compat$$$function__19_model_json_schema);
    cache_frame_frame_openai$_compat$$$function__19_model_json_schema = NULL;
}

assertFrameObject(frame_frame_openai$_compat$$$function__19_model_json_schema);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_model);
Py_DECREF(par_model);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__10_field_get_default(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__10_field_get_default,
        mod_consts.const_str_plain_field_get_default,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_155c4fe5674a36a99c66448c342f962d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__11_field_outer_type(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__11_field_outer_type,
        mod_consts.const_str_plain_field_outer_type,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6d09a1cabc1563fc901a01d3a6d128cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__12_get_model_config(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__12_get_model_config,
        mod_consts.const_str_plain_get_model_config,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ed75a92a1bccf54d66ae3accce270227,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__13_get_model_fields(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__13_get_model_fields,
        mod_consts.const_str_plain_get_model_fields,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9dac9aaa3538a7c1fe88422e320bf360,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__14_model_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__14_model_copy,
        mod_consts.const_str_plain_model_copy,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_f3a2cda70bf84cdfbb0632e075045500,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__15_model_json(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__15_model_json,
        mod_consts.const_str_plain_model_json,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_172515ca25aa45ca2ec0953134bd9a69,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__16_model_dump(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__16_model_dump,
        mod_consts.const_str_plain_model_dump,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5f1894fa518b503046fbf5b90e16f834,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__17_model_parse(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__17_model_parse,
        mod_consts.const_str_plain_model_parse,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5cb18d8be1565540b7fd264ee2c41ce6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__18_model_parse_json(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__18_model_parse_json,
        mod_consts.const_str_plain_model_parse_json,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fb73fb3189ccf672b0f5e3d74388d364,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__19_model_json_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__19_model_json_schema,
        mod_consts.const_str_plain_model_json_schema,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_57df7db4b0145f473f50a1ea4b28d9d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__8_parse_obj(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__8_parse_obj,
        mod_consts.const_str_plain_parse_obj,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_9438fd68e36cd5b842da5f39f40fbde8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$_compat$$$function__9_field_is_required(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$_compat$$$function__9_field_is_required,
        mod_consts.const_str_plain_field_is_required,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_46a15d978665661011e997e05c4c71f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$_compat,
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

static function_impl_code const function_table_openai$_compat[] = {
impl_openai$_compat$$$function__8_parse_obj,
impl_openai$_compat$$$function__9_field_is_required,
impl_openai$_compat$$$function__10_field_get_default,
impl_openai$_compat$$$function__11_field_outer_type,
impl_openai$_compat$$$function__12_get_model_config,
impl_openai$_compat$$$function__13_get_model_fields,
impl_openai$_compat$$$function__14_model_copy,
impl_openai$_compat$$$function__15_model_json,
impl_openai$_compat$$$function__16_model_dump,
impl_openai$_compat$$$function__17_model_parse,
impl_openai$_compat$$$function__18_model_parse_json,
impl_openai$_compat$$$function__19_model_json_schema,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$_compat);
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
        module_openai$_compat,
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
        function_table_openai$_compat,
        sizeof(function_table_openai$_compat) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai._compat";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$_compat(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$_compat");

    // Store the module for future use.
    module_openai$_compat = module;

    moduledict_openai$_compat = MODULE_DICT(module_openai$_compat);

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
        PRINT_STRING("openai$_compat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$_compat: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$_compat: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._compat" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$_compat\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$_compat);
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

        UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$_compat;
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
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$_compat$$$class__2_GenericModel_189 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
PyObject *locals_openai$_compat$$$class__3_GenericModel_194 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$_compat = MAKE_MODULE_FRAME(code_objects_e28f85d6826331df8413157c086f7aea, module_openai$_compat);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$_compat);
assert(Py_REFCNT(frame_frame_openai$_compat) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$_compat$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$_compat$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
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
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_8);
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
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_9);
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
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_10);
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
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_13);
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
PyObject *tmp_assign_source_14;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_datetime;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_date_str_plain_datetime_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$_compat->m_frame.f_lineno = 4;
tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_8 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_date,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_date);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_date, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_datetime,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_datetime);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_datetime, tmp_assign_source_16);
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
PyObject *tmp_assign_source_17;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Self_str_plain_Literal_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_openai$_compat->m_frame.f_lineno = 5;
tmp_assign_source_17 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_17;
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_Self,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Self);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Self, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_19);
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
PyObject *tmp_assign_source_20;
frame_frame_openai$_compat->m_frame.f_lineno = 7;
tmp_assign_source_20 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic, mod_consts.const_str_plain_pydantic);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_12;
frame_frame_openai$_compat->m_frame.f_lineno = 8;
tmp_import_name_from_12 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb, mod_consts.const_str_digest_8dbd2eaf2f75f821e6a9fdf3bf82a9cb);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_FieldInfo,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_FieldInfo);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_FieldInfo, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_IncEx_str_plain_StrBytesIntFloat_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$_compat->m_frame.f_lineno = 10;
tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_22;
}
// Tried code:
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_13 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_IncEx,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_IncEx);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_IncEx, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_14 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_StrBytesIntFloat,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_StrBytesIntFloat);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_StrBytesIntFloat, tmp_assign_source_24);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_openai$_compat$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 12;

    goto frame_exception_exit_1;
}
frame_frame_openai$_compat->m_frame.f_lineno = 12;
tmp_assign_source_25 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain__T_tuple);

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__T, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_1;
tmp_called_value_2 = module_var_accessor_openai$_compat$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_openai$_compat->m_frame.f_lineno = 13;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
    if (likely(hard_module != NULL)) {
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BaseModel);

        Py_DECREF(hard_module);

    } else {
        tmp_kw_call_value_0_1 = NULL;
    }
}
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
frame_frame_openai$_compat->m_frame.f_lineno = 13;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_26 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain__ModelT_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain__ModelT, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
frame_frame_openai$_compat->m_frame.f_lineno = 7;
tmp_expression_value_2 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic, mod_consts.const_str_plain_pydantic);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_VERSION);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_startswith);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
frame_frame_openai$_compat->m_frame.f_lineno = 20;
tmp_assign_source_27 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_93f20cbce6e7bf2f609ce66ba4458ff1_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_PYDANTIC_V2, tmp_assign_source_27);
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_mvar_value_1;
int tmp_truth_name_1;
tmp_mvar_value_1 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
assert(!(tmp_mvar_value_1 == NULL));
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

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
PyObject *tmp_assign_source_28;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_f9861b1e4514d5e04250a8e007e7186b;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_102432b6f1f5c04cc7d4326330e0d07e_tuple;
tmp_level_value_4 = const_int_0;
frame_frame_openai$_compat->m_frame.f_lineno = 48;
tmp_assign_source_28 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_15 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_get_args,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_get_args);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_16 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_is_union,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_is_union);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_union, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_17 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_get_origin,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_get_origin);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_is_typeddict,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_is_typeddict);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_is_literal_type,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_is_literal_type);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_literal_type, tmp_assign_source_33);
}
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_import_from_5__module);
CHECK_OBJECT(tmp_import_from_5__module);
Py_DECREF(tmp_import_from_5__module);
tmp_import_from_5__module = NULL;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_00699fd865240a993c1bce7ab23e8908;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_parse_date_str_plain_parse_datetime_tuple;
tmp_level_value_5 = const_int_0;
frame_frame_openai$_compat->m_frame.f_lineno = 55;
tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_20 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_parse_date,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_parse_date);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_date, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_21 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_parse_datetime,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_parse_datetime);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_datetime, tmp_assign_source_36);
}
goto try_end_6;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_import_from_6__module);
CHECK_OBJECT(tmp_import_from_6__module);
Py_DECREF(tmp_import_from_6__module);
tmp_import_from_6__module = NULL;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_37;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_digest_22888f9468e2e3396429ee399bb9f9b1;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_102432b6f1f5c04cc7d4326330e0d07e_tuple;
tmp_level_value_6 = const_int_0;
frame_frame_openai$_compat->m_frame.f_lineno = 57;
tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_22 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_get_args,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_get_args);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_get_args, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_23 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_is_union,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_is_union);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_union, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_24 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_get_origin,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_get_origin);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_get_origin, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_25 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_is_typeddict,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_is_typeddict);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_26 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_is_literal_type,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_is_literal_type);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_is_literal_type, tmp_assign_source_42);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
CHECK_OBJECT(tmp_import_from_7__module);
CHECK_OBJECT(tmp_import_from_7__module);
Py_DECREF(tmp_import_from_7__module);
tmp_import_from_7__module = NULL;
{
PyObject *tmp_assign_source_43;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_digest_11c909bd082b7e010cbffc54b5d25fea;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_parse_date_str_plain_parse_datetime_tuple;
tmp_level_value_7 = const_int_0;
frame_frame_openai$_compat->m_frame.f_lineno = 64;
tmp_assign_source_43 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_43;
}
// Tried code:
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_27 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_parse_date,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_parse_date);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_date, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_28 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_parse_datetime,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_parse_datetime);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_datetime, tmp_assign_source_45);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
CHECK_OBJECT(tmp_import_from_8__module);
CHECK_OBJECT(tmp_import_from_8__module);
Py_DECREF(tmp_import_from_8__module);
tmp_import_from_8__module = NULL;
branch_end_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_mvar_value_2;
int tmp_truth_name_2;
tmp_mvar_value_2 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;

    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_46;
frame_frame_openai$_compat->m_frame.f_lineno = 72;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049);
    if (likely(hard_module != NULL)) {
        tmp_assign_source_46 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_ConfigDict);

        Py_DECREF(hard_module);

    } else {
        tmp_assign_source_46 = NULL;
    }
}
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict, tmp_assign_source_46);
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_47;
tmp_assign_source_47 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict, tmp_assign_source_47);
}
branch_end_2:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_78c26b1721393fa18755a6cd10711edf);

tmp_assign_source_48 = MAKE_FUNCTION_openai$_compat$$$function__8_parse_obj(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_parse_obj, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_074ac5ec77eb5245e77fca8c0f4f6d94);

tmp_assign_source_49 = MAKE_FUNCTION_openai$_compat$$$function__9_field_is_required(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_field_is_required, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8ab43798154f11cef26f68b91408cf0e);

tmp_assign_source_50 = MAKE_FUNCTION_openai$_compat$$$function__10_field_get_default(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_field_get_default, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_annotations_4;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_8ab43798154f11cef26f68b91408cf0e);

tmp_assign_source_51 = MAKE_FUNCTION_openai$_compat$$$function__11_field_outer_type(tstate, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_field_outer_type, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_9b4dc5399180a082491d48bffdc0a047);

tmp_assign_source_52 = MAKE_FUNCTION_openai$_compat$$$function__12_get_model_config(tstate, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_get_model_config, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_478bd9edb4b5e7652b5e001091af701f);

tmp_assign_source_53 = MAKE_FUNCTION_openai$_compat$$$function__13_get_model_fields(tstate, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_get_model_fields, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_7;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_17440620d45d7925b88fee706947f25a);
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_004ad38bcff998bf92561b94fbbe8aca);

tmp_assign_source_54 = MAKE_FUNCTION_openai$_compat$$$function__14_model_copy(tstate, tmp_kw_defaults_1, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_model_copy, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_8;
tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_ac4206a3c1055ba1dd8568b634fc70bd);
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_bbed8f8edaa8b3834630d347bb3384b9);

tmp_assign_source_55 = MAKE_FUNCTION_openai$_compat$$$function__15_model_json(tstate, tmp_kw_defaults_2, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_model_json, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_9;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_5bc4107d05ffad03360f01b1e9500e8f);
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_c096fd806e697df8ea07e7de32986028);

tmp_assign_source_56 = MAKE_FUNCTION_openai$_compat$$$function__16_model_dump(tstate, tmp_kw_defaults_3, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_model_dump, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_fa89ce3b779357d7a01976da8d91e837);

tmp_assign_source_57 = MAKE_FUNCTION_openai$_compat$$$function__17_model_parse(tstate, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_model_parse, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_e64af96c366f53384f15137fbea0857a);

tmp_assign_source_58 = MAKE_FUNCTION_openai$_compat$$$function__18_model_parse_json(tstate, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_model_parse_json, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_annotations_12;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_42575c5db982f3e9392ada63b535acaa);

tmp_assign_source_59 = MAKE_FUNCTION_openai$_compat$$$function__19_model_json_schema(tstate, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_model_json_schema, tmp_assign_source_59);
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_mvar_value_3;
int tmp_truth_name_3;
tmp_mvar_value_3 = module_var_accessor_openai$_compat$PYDANTIC_V2(tstate);
if (unlikely(tmp_mvar_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PYDANTIC_V2);
}

if (tmp_mvar_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;

    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_mvar_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;

    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_60;
PyObject *tmp_tuple_element_1;
frame_frame_openai$_compat->m_frame.f_lineno = 189;
{
    PyObject *hard_module = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
    if (likely(hard_module != NULL)) {
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_BaseModel);

        Py_DECREF(hard_module);

    } else {
        tmp_tuple_element_1 = NULL;
    }
}
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_assign_source_60 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_60, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_60;
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_61 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_62;
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_4;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_3 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_63 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_63;
}
{
bool tmp_condition_result_5;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_GenericModel;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$_compat->m_frame.f_lineno = 189;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_64;
}
{
bool tmp_condition_result_6;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_6 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_6 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_name_value_8;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_7 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_8 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_8, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_9;
}
frame_frame_openai$_compat->m_frame.f_lineno = 189;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 189;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_65;
}
branch_end_4:;
{
PyObject *tmp_assign_source_66;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_2__prepared;
locals_openai$_compat$$$class__2_GenericModel_189 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2626f2f5f53d7291e6aa5bff30290bab;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__2_GenericModel_189, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_GenericModel;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__2_GenericModel_189, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_189;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__2_GenericModel_189, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_11;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__2_GenericModel_189, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_11;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__2_GenericModel_189, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_11;
}
branch_no_6:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_GenericModel;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_openai$_compat$$$class__2_GenericModel_189;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$_compat->m_frame.f_lineno = 189;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto try_except_handler_11;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_67;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_66 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_66);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_openai$_compat$$$class__2_GenericModel_189);
locals_openai$_compat$$$class__2_GenericModel_189 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_compat$$$class__2_GenericModel_189);
locals_openai$_compat$$$class__2_GenericModel_189 = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto try_except_handler_10;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 189;
goto try_except_handler_9;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_GenericModel, tmp_assign_source_66);
}
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
Py_DECREF(tmp_class_container$class_creation_2__bases_orig);
tmp_class_container$class_creation_2__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
Py_DECREF(tmp_class_container$class_creation_2__bases);
tmp_class_container$class_creation_2__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_2__class_decl_dict);
tmp_class_container$class_creation_2__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
Py_DECREF(tmp_class_container$class_creation_2__metaclass);
tmp_class_container$class_creation_2__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
Py_DECREF(tmp_class_container$class_creation_2__prepared);
tmp_class_container$class_creation_2__prepared = NULL;
tmp_outline_return_value_1 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto outline_result_1;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_68;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_9 = mod_consts.const_str_digest_248c85533a449e70f4b48c5de26c7f40;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$_compat;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = Py_None;
tmp_level_value_8 = const_int_0;
frame_frame_openai$_compat->m_frame.f_lineno = 192;
tmp_assign_source_68 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic, tmp_assign_source_68);
}
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_69;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
tmp_expression_value_10 = module_var_accessor_openai$_compat$pydantic(tstate);
assert(!(tmp_expression_value_10 == NULL));
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_generics);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_GenericModel);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_assign_source_69 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_11;
PyTuple_SET_ITEM(tmp_assign_source_69, 0, tmp_tuple_element_5);
tmp_expression_value_11 = module_var_accessor_openai$_compat$pydantic(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_pydantic);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;

    goto tuple_build_exception_2;
}
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_BaseModel);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_assign_source_69, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_assign_source_69);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_70 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_70;
}
{
PyObject *tmp_assign_source_71;
tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_8;
int tmp_truth_name_5;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_condition_result_8 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_12 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_72;
}
{
bool tmp_condition_result_9;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_condition_result_9 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_73;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_GenericModel;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$_compat->m_frame.f_lineno = 194;
tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_73;
}
{
bool tmp_condition_result_10;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_15 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_15, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_10 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_16;
PyObject *tmp_name_value_10;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_16 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_10 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_16, tmp_name_value_10, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_17;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_12;
}
frame_frame_openai$_compat->m_frame.f_lineno = 194;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 194;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_12;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_74;
}
branch_end_7:;
{
PyObject *tmp_assign_source_75;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_3__prepared;
locals_openai$_compat$$$class__3_GenericModel_194 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_2626f2f5f53d7291e6aa5bff30290bab;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__3_GenericModel_194, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_str_plain_GenericModel;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__3_GenericModel_194, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_14;
}
tmp_dictset_value = mod_consts.const_int_pos_194;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__3_GenericModel_194, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_14;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__3_GenericModel_194, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_14;
}
{
nuitka_bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_14;
}
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$_compat$$$class__3_GenericModel_194, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_14;
}
branch_no_9:;
{
PyObject *tmp_assign_source_76;
PyObject *tmp_called_value_7;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_7 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_GenericModel;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_openai$_compat$$$class__3_GenericModel_194;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$_compat->m_frame.f_lineno = 194;
tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;

    goto try_except_handler_14;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_76;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_75 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_75);
goto try_return_handler_14;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
Py_DECREF(locals_openai$_compat$$$class__3_GenericModel_194);
locals_openai$_compat$$$class__3_GenericModel_194 = NULL;
goto try_return_handler_13;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$_compat$$$class__3_GenericModel_194);
locals_openai$_compat$$$class__3_GenericModel_194 = NULL;
// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_13;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 194;
goto try_except_handler_12;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_GenericModel, tmp_assign_source_75);
}
goto try_end_10;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
Py_DECREF(tmp_class_container$class_creation_3__bases_orig);
tmp_class_container$class_creation_3__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
Py_DECREF(tmp_class_container$class_creation_3__bases);
tmp_class_container$class_creation_3__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
Py_DECREF(tmp_class_container$class_creation_3__metaclass);
tmp_class_container$class_creation_3__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}
branch_end_3:;
{
PyObject *tmp_assign_source_77;
PyObject *tmp_import_name_from_29;
tmp_import_name_from_29 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_import_name_from_29 == NULL));
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$_compat,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_cached_property);
}

if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_77);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$_compat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$_compat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$_compat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$_compat);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_78;
tmp_assign_source_78 = module_var_accessor_openai$_compat$cached_property(tstate);
assert(!(tmp_assign_source_78 == NULL));
UPDATE_STRING_DICT0(moduledict_openai$_compat, (Nuitka_StringObject *)mod_consts.const_str_plain_typed_cached_property, tmp_assign_source_78);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$_compat", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai._compat" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$_compat);
    return module_openai$_compat;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$_compat", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

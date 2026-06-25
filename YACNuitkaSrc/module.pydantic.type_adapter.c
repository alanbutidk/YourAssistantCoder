/* Generated code for Python module 'pydantic$type_adapter'
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



/* The "module_pydantic$type_adapter" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$type_adapter;
PyDictObject *moduledict_pydantic$type_adapter;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain___slots__;
PyObject *const_str_digest_023a4678ee2d538403282720b79c3993;
PyObject *const_str_plain__typing_extra;
PyObject *const_str_plain_annotated_type;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_plain_is_dataclass;
PyObject *const_str_plain_is_typeddict;
PyObject *const_str_digest_1b31978120b6a44f2065c3f27dfc89ad;
PyObject *const_str_plain__type_has_config;
PyObject *const_str_plain_PydanticUserError;
PyObject *const_tuple_66e12f20ce5a63f84312e954463bdd75_tuple;
PyObject *const_tuple_str_plain_code_tuple;
PyObject *const_str_plain__type;
PyObject *const_str_plain__config;
PyObject *const_str_plain__parent_depth;
PyObject *const_str_plain_pydantic_complete;
PyObject *const_str_plain__fetch_parent_frame;
PyObject *const_str_plain_f_globals;
PyObject *const_str_plain_f_locals;
PyObject *const_str_plain_cast;
PyObject *const_tuple_str_plain___name___str_empty_tuple;
PyObject *const_str_plain__module_name;
PyObject *const_str_plain__init_core_attrs;
PyObject *const_str_plain__namespace_utils;
PyObject *const_str_plain_NsResolver;
PyObject *const_str_plain_NamespacesTuple;
PyObject *const_tuple_str_plain_locals_str_plain_globals_tuple;
PyObject *const_tuple_str_plain_namespaces_tuple_str_plain_parent_namespace_tuple;
PyObject *const_tuple_str_plain_ns_resolver_str_plain_force_tuple;
PyObject *const_str_plain__getframe;
PyObject *const_tuple_str_plain___name___tuple;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_f_back;
PyObject *const_str_plain__defer_build;
PyObject *const_str_plain__mock_val_ser;
PyObject *const_str_plain_set_type_adapter_mocks;
PyObject *const_str_plain__getattr_no_parents;
PyObject *const_str_plain___pydantic_core_schema__;
PyObject *const_str_plain_core_schema;
PyObject *const_str_plain___pydantic_validator__;
PyObject *const_str_plain_validator;
PyObject *const_str_plain___pydantic_serializer__;
PyObject *const_str_plain_serializer;
PyObject *const_str_plain_MockCoreSchema;
PyObject *const_str_plain_MockValSer;
PyObject *const_str_plain_ConfigWrapper;
PyObject *const_str_plain__generate_schema;
PyObject *const_str_plain_GenerateSchema;
PyObject *const_tuple_str_plain_ns_resolver_tuple;
PyObject *const_str_plain_generate_schema;
PyObject *const_str_plain_PydanticUndefinedAnnotation;
PyObject *const_str_plain_clean_schema;
PyObject *const_str_plain_InvalidSchemaError;
PyObject *const_str_plain_core_config;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_create_schema_validator;
PyObject *const_str_plain_TypeAdapter;
PyObject *const_str_plain_plugin_settings;
PyObject *const_tuple_ca589c5aba09e066956e9d99c8151541_tuple;
PyObject *const_str_plain_SchemaSerializer;
PyObject *const_str_digest_b993496fd016dd8f8efe74ec72cf4d7b;
PyObject *const_str_plain__model_config;
PyObject *const_tuple_str_plain_defer_build_tuple;
PyObject *const_str_plain__utils;
PyObject *const_str_plain_lenient_issubclass;
PyObject *const_str_plain_model_config;
PyObject *const_str_plain___pydantic_config__;
PyObject *const_str_digest_549272b18b285336db07223781275d0b;
PyObject *const_str_plain__repr;
PyObject *const_str_plain_display_as_type;
PyObject *const_str_chr_41;
PyObject *const_str_plain_parent_frame_namespace;
PyObject *const_tuple_str_plain_parent_depth_str_plain_force_tuple;
PyObject *const_str_plain_max;
PyObject *const_tuple_str_plain_ns_resolver_str_plain_force_str_plain_raise_errors_tuple;
PyObject *const_str_digest_2fbb4517aeda77321d3006005e4913fa;
PyObject *const_tuple_d74da3b96eb6d3028f14981ace934034_tuple;
PyObject *const_str_plain_validate_python;
PyObject *const_tuple_33b92bafefd19295d218fee630d92cad_tuple;
PyObject *const_str_digest_c4b3a3b036ff1dfdc2e185aba5329cb6;
PyObject *const_str_plain_validate_json;
PyObject *const_tuple_c55f49bbefedf94f71af6233bff16e06_tuple;
PyObject *const_str_digest_154d0a0196fd7581173b871163176987;
PyObject *const_str_plain_validate_strings;
PyObject *const_str_digest_2ad0e02c6eb883801661a2fe6b8985f2;
PyObject *const_str_plain_get_default_value;
PyObject *const_tuple_str_plain_strict_str_plain_context_tuple;
PyObject *const_str_digest_76c8aade4a87f7abbfca00766b2066a6;
PyObject *const_str_plain_to_python;
PyObject *const_tuple_87c459efda50c5a6cfc114f72a40110e_tuple;
PyObject *const_str_digest_03bb94f7e90b9f36bc58ef8160b45a87;
PyObject *const_str_plain_to_json;
PyObject *const_tuple_40f9d4683d093c351a1ed7f126e86c24_tuple;
PyObject *const_str_digest_3c461806467a40b4591fb53214250b8a;
PyObject *const_tuple_str_plain_by_alias_str_plain_ref_template_tuple;
PyObject *const_str_plain_rebuild;
PyObject *const_str_digest_f020844f8110b924dc42625d54666127;
PyObject *const_str_plain_generate;
PyObject *const_tuple_str_plain_mode_tuple;
PyObject *const_str_digest_557c329c5177b4e71af5b06ec026ec02;
PyObject *const_str_plain_inputs_;
PyObject *const_str_plain_generate_definitions;
PyObject *const_str_digest_59c05edaddbb3847eda2f4057a659d50;
PyObject *const_str_plain_title;
PyObject *const_str_plain_description;
PyObject *const_str_digest_389290bad2ab5068c2abfc5449b95ad8;
PyObject *const_str_digest_24fa49613587e5aad5fcc0a88bcf9572;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain__annotations;
PyObject *const_str_plain_sys;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_tuple_str_plain_Callable_str_plain_Iterable_tuple;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Iterable;
PyObject *const_str_plain_dataclasses;
PyObject *const_tuple_str_plain_is_dataclass_tuple;
PyObject *const_str_plain_FrameType;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Generic;
PyObject *const_str_plain_Literal;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_final;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_pydantic_core;
PyObject *const_str_plain_CoreSchema;
PyObject *const_str_plain_SchemaValidator;
PyObject *const_str_plain_Some;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_ParamSpec_str_plain_is_typeddict_tuple;
PyObject *const_str_plain_ParamSpec;
PyObject *const_str_digest_93451e65d1b5351f1a776493e6ffe27f;
PyObject *const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0;
PyObject *const_str_plain_IncEx;
PyObject *const_str_plain__internal;
PyObject *const_tuple_e637bdb1eba3562adc392272efa68bf5_tuple;
PyObject *const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049;
PyObject *const_str_plain_ConfigDict;
PyObject *const_str_digest_f13a85cba97af2c60e7ad0e824f76c34;
PyObject *const_str_plain_DEFAULT_REF_TEMPLATE;
PyObject *const_str_plain_GenerateJsonSchema;
PyObject *const_str_plain_JsonSchemaKeyT;
PyObject *const_str_plain_JsonSchemaMode;
PyObject *const_str_plain_JsonSchemaValue;
PyObject *const_str_digest_17d2827b063ac26087eec8ff06bda53a;
PyObject *const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple;
PyObject *const_str_plain_PluggableSchemaValidator;
PyObject *const_tuple_str_plain_T_tuple;
PyObject *const_str_plain_T;
PyObject *const_tuple_str_plain_R_tuple;
PyObject *const_str_plain_R;
PyObject *const_tuple_str_plain_P_tuple;
PyObject *const_str_plain_P;
PyObject *const_tuple_str_plain_TypeAdapterT_str_plain_TypeAdapter_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain_TypeAdapterT;
PyObject *const_dict_2d42a436658aa88f36b2cb87df748ac4;
PyObject *const_dict_ba06c6b257c927e8181558588102f426;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_a307387df849d578a05ee5d589f9d451;
PyObject *const_str_digest_081feeca920da4c163b4b540fbb8aa69;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_69;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_f85fc960bcde9ef003cffcf1c7d48185;
PyObject *const_str_plain_bool;
PyObject *const_dict_174fb8220b8d33ab8b1131aeefe7eb80;
PyObject *const_dict_509583307b1f5abd56e241d1a45e2988;
PyObject *const_str_digest_531601d87498dc44ddfe784c4b6831a0;
PyObject *const_dict_840dbddf407faadba9b1e63d438594c8;
PyObject *const_dict_bb05073d982dae641527455df13833f0;
PyObject *const_dict_a0f09ac960c7aa04bcd587d04d14b9b0;
PyObject *const_str_digest_4c2bb08aad89c1b444eabad809cda33e;
PyObject *const_tuple_false_tuple;
PyObject *const_dict_022afee94ce1650a80efbc8963c707c7;
PyObject *const_str_digest_c52134f3159b5ee94b4a933ef46286b4;
PyObject *const_str_plain_property;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_db22543c93dfc4527a4b2fcbe3e1d911;
PyObject *const_dict_8c5abb62a67e9d96898d89a1ea87b967;
PyObject *const_str_digest_3752d502f83834cb6801b800c3d294bd;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain___repr__;
PyObject *const_str_digest_c08cf4c0e064f257c47e078eef5921d0;
PyObject *const_dict_c519626931c756ed606086fe90eaccbd;
PyObject *const_dict_566e6bd45432957c1a70fa9a97e4b39a;
PyObject *const_str_digest_b7b10bd8c6cd21ba73e8e659e40270de;
PyObject *const_dict_85eeeb84df5effe57884ef33f3a6f30a;
PyObject *const_dict_39091c74643d2b170aa46c481cd17cf6;
PyObject *const_str_digest_b8b05f482177a6e54beb98ba0890a4cd;
PyObject *const_dict_77693ee4e5c3fedeeea53bbfc6cfcd00;
PyObject *const_dict_41e53a28fdd5fb75614d093f38361329;
PyObject *const_str_digest_4852504d7a19f68bd4cd3e470200fd01;
PyObject *const_dict_c2fac31c48ff1590fdbb7f42959a2563;
PyObject *const_str_digest_0f7e77033b1bb1102e2acf3ae2b8bb1e;
PyObject *const_dict_4dbd09c49b994c5831e1b9de7ca19834;
PyObject *const_dict_86d454c361118071ef72e00012041e57;
PyObject *const_str_digest_1f5792db1b72d0057e63e89f8f224a46;
PyObject *const_dict_6a5d2481b13ebaaac312be1a6ed736b2;
PyObject *const_dict_d8c2bd85652be7cd8681e2f987eb1db5;
PyObject *const_str_plain_dump_python;
PyObject *const_str_digest_9cc83e05ac17aa67024e3261c9c23122;
PyObject *const_dict_c5920bc2dc59237f4b3215030b3e67dd;
PyObject *const_dict_3bc9db2f3bcf5c61938284b1a5dba25b;
PyObject *const_str_plain_dump_json;
PyObject *const_str_digest_504b3378b24442fbafc319eec2857efb;
PyObject *const_str_plain_by_alias;
PyObject *const_str_plain_ref_template;
PyObject *const_str_plain_schema_generator;
PyObject *const_str_plain_mode;
PyObject *const_str_plain_validation;
PyObject *const_dict_5481eba61811b93e3ce28b3964f0ba23;
PyObject *const_str_plain_json_schema;
PyObject *const_str_digest_1c7bba4fe59d7bcc26d2ae7f2b3ab571;
PyObject *const_dict_2398de17715f31ccd710e1a52d0c0575;
PyObject *const_str_plain_json_schemas;
PyObject *const_str_digest_450c5743a3227fb51c8200495e9c9830;
PyObject *const_tuple_9926c4b7784196096235db5d63f0a504_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_01a980b73f18d81ca9a52db76af2b62a;
PyObject *const_str_digest_0887ce2562a80d01bebf5fc9b6c0e776;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_ec07403606d1f571c3310ed38af86a64_tuple;
PyObject *const_tuple_0f904ff62a3211c5b5a9ac2322602d20_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_config_tuple;
PyObject *const_tuple_str_plain_self_str_plain_frame_tuple;
PyObject *const_tuple_str_plain_obj_str_plain_attribute_str_plain_slots_tuple;
PyObject *const_tuple_ca4001d9a1148600088b7be7711f4384_tuple;
PyObject *const_tuple_str_plain_self_str_plain_type__tuple;
PyObject *const_tuple_str_plain_type__tuple;
PyObject *const_tuple_6e1deee8625b01f7cf59591448610aae_tuple;
PyObject *const_tuple_46e13dfa2ffd4ebc45e87f697453024f_tuple;
PyObject *const_tuple_str_plain_self_str_plain_strict_str_plain_context_tuple;
PyObject *const_tuple_e12b027be7e8eea5bd2988b49b508c3b_tuple;
PyObject *const_tuple_85a712aec93190f36254afdd9e18e31d_tuple;
PyObject *const_tuple_a96c22c8755219e1f108584f377820d1_tuple;
PyObject *const_tuple_8c25c2b70daab8493dfacbe27e0d064c_tuple;
PyObject *const_tuple_087a078fda40eeb482ce660b445c2394_tuple;
PyObject *const_tuple_6eaa99a88289186e0a2d2eedf4455bc7_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[245];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic.type_adapter"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain___slots__);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_digest_023a4678ee2d538403282720b79c3993);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__typing_extra);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotated_type);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_1b31978120b6a44f2065c3f27dfc89ad);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain__type_has_config);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUserError);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_66e12f20ce5a63f84312e954463bdd75_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_tuple);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__type);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain__config);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain__parent_depth);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_complete);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain__fetch_parent_frame);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_locals);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___name___str_empty_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__module_name);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__init_core_attrs);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__namespace_utils);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_NsResolver);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_NamespacesTuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_locals_str_plain_globals_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_namespaces_tuple_str_plain_parent_namespace_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain__getframe);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___name___tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_f_back);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__defer_build);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__mock_val_ser);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_type_adapter_mocks);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain__getattr_no_parents);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_schema__);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_validator__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_validator);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_serializer__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_serializer);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockCoreSchema);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_MockValSer);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigWrapper);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__generate_schema);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateSchema);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_schema);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefinedAnnotation);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_clean_schema);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchemaError);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_core_config);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_schema_validator);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_plugin_settings);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_tuple_ca589c5aba09e066956e9d99c8151541_tuple);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaSerializer);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_b993496fd016dd8f8efe74ec72cf4d7b);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain__model_config);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defer_build_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_lenient_issubclass);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_config);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_config__);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_digest_549272b18b285336db07223781275d0b);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__repr);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_display_as_type);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_chr_41);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_parent_frame_namespace);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parent_depth_str_plain_force_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_max);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_str_plain_raise_errors_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_digest_2fbb4517aeda77321d3006005e4913fa);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_d74da3b96eb6d3028f14981ace934034_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_python);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_33b92bafefd19295d218fee630d92cad_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4b3a3b036ff1dfdc2e185aba5329cb6);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_json);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_c55f49bbefedf94f71af6233bff16e06_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_digest_154d0a0196fd7581173b871163176987);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_strings);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ad0e02c6eb883801661a2fe6b8985f2);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_default_value);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_str_plain_context_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_digest_76c8aade4a87f7abbfca00766b2066a6);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_python);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_87c459efda50c5a6cfc114f72a40110e_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_03bb94f7e90b9f36bc58ef8160b45a87);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_json);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_40f9d4683d093c351a1ed7f126e86c24_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_digest_3c461806467a40b4591fb53214250b8a);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_by_alias_str_plain_ref_template_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_rebuild);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_digest_f020844f8110b924dc42625d54666127);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_557c329c5177b4e71af5b06ec026ec02);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_inputs_);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_definitions);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_title);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_description);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_digest_389290bad2ab5068c2abfc5449b95ad8);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_24fa49613587e5aad5fcc0a88bcf9572);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__annotations);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_sys);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_dataclass_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_FrameType);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_Generic);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_final);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchema);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaValidator);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_Some);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ParamSpec_str_plain_is_typeddict_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParamSpec);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_IncEx);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain__internal);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_e637bdb1eba3562adc392272efa68bf5_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_digest_f13a85cba97af2c60e7ad0e824f76c34);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateJsonSchema);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_JsonSchemaKeyT);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_JsonSchemaMode);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_JsonSchemaValue);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_PluggableSchemaValidator);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_T);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_R);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_P_tuple);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_P);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAdapterT_str_plain_TypeAdapter_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapterT);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_dict_2d42a436658aa88f36b2cb87df748ac4);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_ba06c6b257c927e8181558588102f426);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_081feeca920da4c163b4b540fbb8aa69);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_int_pos_69);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_f85fc960bcde9ef003cffcf1c7d48185);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_bool);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_dict_174fb8220b8d33ab8b1131aeefe7eb80);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_509583307b1f5abd56e241d1a45e2988);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_840dbddf407faadba9b1e63d438594c8);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_bb05073d982dae641527455df13833f0);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_a0f09ac960c7aa04bcd587d04d14b9b0);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c2bb08aad89c1b444eabad809cda33e);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_dict_022afee94ce1650a80efbc8963c707c7);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_digest_c52134f3159b5ee94b4a933ef46286b4);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_db22543c93dfc4527a4b2fcbe3e1d911);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_8c5abb62a67e9d96898d89a1ea87b967);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_3752d502f83834cb6801b800c3d294bd);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain___repr__);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_c08cf4c0e064f257c47e078eef5921d0);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_c519626931c756ed606086fe90eaccbd);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_566e6bd45432957c1a70fa9a97e4b39a);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_b7b10bd8c6cd21ba73e8e659e40270de);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_dict_85eeeb84df5effe57884ef33f3a6f30a);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_39091c74643d2b170aa46c481cd17cf6);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_b8b05f482177a6e54beb98ba0890a4cd);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_77693ee4e5c3fedeeea53bbfc6cfcd00);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_41e53a28fdd5fb75614d093f38361329);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_4852504d7a19f68bd4cd3e470200fd01);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_c2fac31c48ff1590fdbb7f42959a2563);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_0f7e77033b1bb1102e2acf3ae2b8bb1e);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_4dbd09c49b994c5831e1b9de7ca19834);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_86d454c361118071ef72e00012041e57);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_1f5792db1b72d0057e63e89f8f224a46);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_6a5d2481b13ebaaac312be1a6ed736b2);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_dict_d8c2bd85652be7cd8681e2f987eb1db5);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump_python);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_digest_9cc83e05ac17aa67024e3261c9c23122);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_dict_c5920bc2dc59237f4b3215030b3e67dd);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_3bc9db2f3bcf5c61938284b1a5dba25b);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_dump_json);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_504b3378b24442fbafc319eec2857efb);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_by_alias);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_ref_template);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_generator);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_validation);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_dict_5481eba61811b93e3ce28b3964f0ba23);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c7bba4fe59d7bcc26d2ae7f2b3ab571);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_dict_2398de17715f31ccd710e1a52d0c0575);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_schemas);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_digest_450c5743a3227fb51c8200495e9c9830);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_tuple_9926c4b7784196096235db5d63f0a504_tuple);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_str_digest_01a980b73f18d81ca9a52db76af2b62a);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_0887ce2562a80d01bebf5fc9b6c0e776);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_ec07403606d1f571c3310ed38af86a64_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_0f904ff62a3211c5b5a9ac2322602d20_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_config_tuple);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_str_plain_attribute_str_plain_slots_tuple);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_tuple_ca4001d9a1148600088b7be7711f4384_tuple);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_type__tuple);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__tuple);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_tuple_6e1deee8625b01f7cf59591448610aae_tuple);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_tuple_46e13dfa2ffd4ebc45e87f697453024f_tuple);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_strict_str_plain_context_tuple);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_tuple_e12b027be7e8eea5bd2988b49b508c3b_tuple);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_tuple_85a712aec93190f36254afdd9e18e31d_tuple);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_tuple_a96c22c8755219e1f108584f377820d1_tuple);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_tuple_8c25c2b70daab8493dfacbe27e0d064c_tuple);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_tuple_087a078fda40eeb482ce660b445c2394_tuple);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_tuple_6eaa99a88289186e0a2d2eedf4455bc7_tuple);
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
void checkModuleConstants_pydantic$type_adapter(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain___slots__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___slots__);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_digest_023a4678ee2d538403282720b79c3993));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_023a4678ee2d538403282720b79c3993);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__typing_extra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__typing_extra);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotated_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotated_type);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dataclass);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_typeddict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_typeddict);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_1b31978120b6a44f2065c3f27dfc89ad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1b31978120b6a44f2065c3f27dfc89ad);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain__type_has_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__type_has_config);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUserError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticUserError);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_66e12f20ce5a63f84312e954463bdd75_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_66e12f20ce5a63f84312e954463bdd75_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_code_tuple);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__type);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain__config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__config);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain__parent_depth));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__parent_depth);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_complete));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_complete);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain__fetch_parent_frame));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fetch_parent_frame);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_globals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_globals);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_locals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_locals);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___name___str_empty_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___name___str_empty_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__module_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__module_name);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__init_core_attrs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__init_core_attrs);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__namespace_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__namespace_utils);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_NsResolver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NsResolver);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_NamespacesTuple));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NamespacesTuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_locals_str_plain_globals_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_locals_str_plain_globals_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_namespaces_tuple_str_plain_parent_namespace_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_namespaces_tuple_str_plain_parent_namespace_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain__getframe));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__getframe);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___name___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___name___tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_f_back));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_f_back);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__defer_build));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__defer_build);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__mock_val_ser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mock_val_ser);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_type_adapter_mocks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_type_adapter_mocks);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain__getattr_no_parents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__getattr_no_parents);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_schema__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_core_schema__);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core_schema);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_validator__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_validator__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validator);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_serializer__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_serializer__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_serializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_serializer);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockCoreSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MockCoreSchema);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_MockValSer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MockValSer);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigWrapper));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConfigWrapper);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__generate_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__generate_schema);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenerateSchema);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ns_resolver_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_schema);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefinedAnnotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticUndefinedAnnotation);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_clean_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clean_schema);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchemaError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidSchemaError);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_core_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core_config);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_schema_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_schema_validator);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAdapter);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_plugin_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_plugin_settings);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_tuple_ca589c5aba09e066956e9d99c8151541_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ca589c5aba09e066956e9d99c8151541_tuple);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaSerializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SchemaSerializer);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_b993496fd016dd8f8efe74ec72cf4d7b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b993496fd016dd8f8efe74ec72cf4d7b);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain__model_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__model_config);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_defer_build_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_defer_build_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_lenient_issubclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lenient_issubclass);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_config);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_config__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_config__);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_digest_549272b18b285336db07223781275d0b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_549272b18b285336db07223781275d0b);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__repr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__repr);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_display_as_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_display_as_type);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_chr_41));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_41);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_parent_frame_namespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parent_frame_namespace);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_parent_depth_str_plain_force_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_parent_depth_str_plain_force_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_max));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_str_plain_raise_errors_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_str_plain_raise_errors_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_digest_2fbb4517aeda77321d3006005e4913fa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2fbb4517aeda77321d3006005e4913fa);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_d74da3b96eb6d3028f14981ace934034_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d74da3b96eb6d3028f14981ace934034_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_python));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_python);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_33b92bafefd19295d218fee630d92cad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_33b92bafefd19295d218fee630d92cad_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4b3a3b036ff1dfdc2e185aba5329cb6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4b3a3b036ff1dfdc2e185aba5329cb6);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_json);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_c55f49bbefedf94f71af6233bff16e06_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c55f49bbefedf94f71af6233bff16e06_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_digest_154d0a0196fd7581173b871163176987));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_154d0a0196fd7581173b871163176987);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_strings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_strings);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ad0e02c6eb883801661a2fe6b8985f2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ad0e02c6eb883801661a2fe6b8985f2);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_default_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_default_value);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_strict_str_plain_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_strict_str_plain_context_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_digest_76c8aade4a87f7abbfca00766b2066a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_76c8aade4a87f7abbfca00766b2066a6);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_python));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_python);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_87c459efda50c5a6cfc114f72a40110e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_87c459efda50c5a6cfc114f72a40110e_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_03bb94f7e90b9f36bc58ef8160b45a87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_03bb94f7e90b9f36bc58ef8160b45a87);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_json);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_40f9d4683d093c351a1ed7f126e86c24_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_40f9d4683d093c351a1ed7f126e86c24_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_digest_3c461806467a40b4591fb53214250b8a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3c461806467a40b4591fb53214250b8a);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_by_alias_str_plain_ref_template_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_by_alias_str_plain_ref_template_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_rebuild));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rebuild);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_digest_f020844f8110b924dc42625d54666127));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f020844f8110b924dc42625d54666127);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_mode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_mode_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_557c329c5177b4e71af5b06ec026ec02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_557c329c5177b4e71af5b06ec026ec02);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_inputs_));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inputs_);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_definitions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_definitions);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_title));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_title);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_description));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_description);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_digest_389290bad2ab5068c2abfc5449b95ad8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_389290bad2ab5068c2abfc5449b95ad8);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_24fa49613587e5aad5fcc0a88bcf9572));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_24fa49613587e5aad5fcc0a88bcf9572);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__annotations);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_sys));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sys);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_Iterable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Iterable);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_dataclass_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_dataclass_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_FrameType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FrameType);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_Generic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Generic);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_final));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_final);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_core);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_CoreSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CoreSchema);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SchemaValidator);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_Some));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Some);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ParamSpec_str_plain_is_typeddict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ParamSpec_str_plain_is_typeddict_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParamSpec));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParamSpec);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_IncEx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IncEx);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain__internal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__internal);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_e637bdb1eba3562adc392272efa68bf5_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e637bdb1eba3562adc392272efa68bf5_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConfigDict);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_digest_f13a85cba97af2c60e7ad0e824f76c34));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f13a85cba97af2c60e7ad0e824f76c34);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateJsonSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenerateJsonSchema);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_JsonSchemaKeyT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JsonSchemaKeyT);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_JsonSchemaMode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JsonSchemaMode);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_JsonSchemaValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JsonSchemaValue);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_PluggableSchemaValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PluggableSchemaValidator);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_T_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_T_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_T));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_T);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_R_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_R_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_R));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_R);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_P_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_P_tuple);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_P));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_P);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeAdapterT_str_plain_TypeAdapter_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeAdapterT_str_plain_TypeAdapter_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapterT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAdapterT);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_dict_2d42a436658aa88f36b2cb87df748ac4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2d42a436658aa88f36b2cb87df748ac4);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_ba06c6b257c927e8181558588102f426));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ba06c6b257c927e8181558588102f426);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_081feeca920da4c163b4b540fbb8aa69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_081feeca920da4c163b4b540fbb8aa69);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_int_pos_69));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_69);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_f85fc960bcde9ef003cffcf1c7d48185));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f85fc960bcde9ef003cffcf1c7d48185);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_bool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bool);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_dict_174fb8220b8d33ab8b1131aeefe7eb80));
CHECK_OBJECT_DEEP(mod_consts.const_dict_174fb8220b8d33ab8b1131aeefe7eb80);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_509583307b1f5abd56e241d1a45e2988));
CHECK_OBJECT_DEEP(mod_consts.const_dict_509583307b1f5abd56e241d1a45e2988);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_840dbddf407faadba9b1e63d438594c8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_840dbddf407faadba9b1e63d438594c8);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_bb05073d982dae641527455df13833f0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_bb05073d982dae641527455df13833f0);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_a0f09ac960c7aa04bcd587d04d14b9b0));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a0f09ac960c7aa04bcd587d04d14b9b0);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c2bb08aad89c1b444eabad809cda33e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c2bb08aad89c1b444eabad809cda33e);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_dict_022afee94ce1650a80efbc8963c707c7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_022afee94ce1650a80efbc8963c707c7);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_digest_c52134f3159b5ee94b4a933ef46286b4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c52134f3159b5ee94b4a933ef46286b4);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_db22543c93dfc4527a4b2fcbe3e1d911));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db22543c93dfc4527a4b2fcbe3e1d911);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_8c5abb62a67e9d96898d89a1ea87b967));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8c5abb62a67e9d96898d89a1ea87b967);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_3752d502f83834cb6801b800c3d294bd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3752d502f83834cb6801b800c3d294bd);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain___repr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___repr__);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_c08cf4c0e064f257c47e078eef5921d0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c08cf4c0e064f257c47e078eef5921d0);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_c519626931c756ed606086fe90eaccbd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c519626931c756ed606086fe90eaccbd);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_566e6bd45432957c1a70fa9a97e4b39a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_566e6bd45432957c1a70fa9a97e4b39a);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_b7b10bd8c6cd21ba73e8e659e40270de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b7b10bd8c6cd21ba73e8e659e40270de);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_dict_85eeeb84df5effe57884ef33f3a6f30a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85eeeb84df5effe57884ef33f3a6f30a);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_39091c74643d2b170aa46c481cd17cf6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_39091c74643d2b170aa46c481cd17cf6);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_b8b05f482177a6e54beb98ba0890a4cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b8b05f482177a6e54beb98ba0890a4cd);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_77693ee4e5c3fedeeea53bbfc6cfcd00));
CHECK_OBJECT_DEEP(mod_consts.const_dict_77693ee4e5c3fedeeea53bbfc6cfcd00);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_41e53a28fdd5fb75614d093f38361329));
CHECK_OBJECT_DEEP(mod_consts.const_dict_41e53a28fdd5fb75614d093f38361329);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_4852504d7a19f68bd4cd3e470200fd01));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4852504d7a19f68bd4cd3e470200fd01);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_c2fac31c48ff1590fdbb7f42959a2563));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c2fac31c48ff1590fdbb7f42959a2563);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_0f7e77033b1bb1102e2acf3ae2b8bb1e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0f7e77033b1bb1102e2acf3ae2b8bb1e);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_4dbd09c49b994c5831e1b9de7ca19834));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4dbd09c49b994c5831e1b9de7ca19834);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_86d454c361118071ef72e00012041e57));
CHECK_OBJECT_DEEP(mod_consts.const_dict_86d454c361118071ef72e00012041e57);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_1f5792db1b72d0057e63e89f8f224a46));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1f5792db1b72d0057e63e89f8f224a46);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_6a5d2481b13ebaaac312be1a6ed736b2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6a5d2481b13ebaaac312be1a6ed736b2);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_dict_d8c2bd85652be7cd8681e2f987eb1db5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d8c2bd85652be7cd8681e2f987eb1db5);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump_python));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump_python);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_digest_9cc83e05ac17aa67024e3261c9c23122));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9cc83e05ac17aa67024e3261c9c23122);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_dict_c5920bc2dc59237f4b3215030b3e67dd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c5920bc2dc59237f4b3215030b3e67dd);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_3bc9db2f3bcf5c61938284b1a5dba25b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_3bc9db2f3bcf5c61938284b1a5dba25b);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_dump_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dump_json);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_504b3378b24442fbafc319eec2857efb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_504b3378b24442fbafc319eec2857efb);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_by_alias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_by_alias);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_ref_template));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ref_template);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_generator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_generator);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mode);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_validation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validation);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_dict_5481eba61811b93e3ce28b3964f0ba23));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5481eba61811b93e3ce28b3964f0ba23);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_schema);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c7bba4fe59d7bcc26d2ae7f2b3ab571));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c7bba4fe59d7bcc26d2ae7f2b3ab571);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_dict_2398de17715f31ccd710e1a52d0c0575));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2398de17715f31ccd710e1a52d0c0575);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_schemas));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_schemas);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_digest_450c5743a3227fb51c8200495e9c9830));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_450c5743a3227fb51c8200495e9c9830);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_tuple_9926c4b7784196096235db5d63f0a504_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9926c4b7784196096235db5d63f0a504_tuple);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_str_digest_01a980b73f18d81ca9a52db76af2b62a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_01a980b73f18d81ca9a52db76af2b62a);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_0887ce2562a80d01bebf5fc9b6c0e776));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0887ce2562a80d01bebf5fc9b6c0e776);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_ec07403606d1f571c3310ed38af86a64_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ec07403606d1f571c3310ed38af86a64_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_0f904ff62a3211c5b5a9ac2322602d20_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0f904ff62a3211c5b5a9ac2322602d20_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_config_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_config_tuple);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_obj_str_plain_attribute_str_plain_slots_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_obj_str_plain_attribute_str_plain_slots_tuple);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_tuple_ca4001d9a1148600088b7be7711f4384_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ca4001d9a1148600088b7be7711f4384_tuple);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_type__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_type__tuple);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type__tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type__tuple);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_tuple_6e1deee8625b01f7cf59591448610aae_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e1deee8625b01f7cf59591448610aae_tuple);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_tuple_46e13dfa2ffd4ebc45e87f697453024f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_46e13dfa2ffd4ebc45e87f697453024f_tuple);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_strict_str_plain_context_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_strict_str_plain_context_tuple);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_tuple_e12b027be7e8eea5bd2988b49b508c3b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e12b027be7e8eea5bd2988b49b508c3b_tuple);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_tuple_85a712aec93190f36254afdd9e18e31d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_85a712aec93190f36254afdd9e18e31d_tuple);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_tuple_a96c22c8755219e1f108584f377820d1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a96c22c8755219e1f108584f377820d1_tuple);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_tuple_8c25c2b70daab8493dfacbe27e0d064c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8c25c2b70daab8493dfacbe27e0d064c_tuple);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_tuple_087a078fda40eeb482ce660b445c2394_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_087a078fda40eeb482ce660b445c2394_tuple);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_tuple_6eaa99a88289186e0a2d2eedf4455bc7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6eaa99a88289186e0a2d2eedf4455bc7_tuple);
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
static PyObject *module_var_accessor_pydantic$type_adapter$BaseModel(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseModel);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseModel, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$DEFAULT_REF_TEMPLATE(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$GenerateJsonSchema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateJsonSchema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GenerateJsonSchema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GenerateJsonSchema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GenerateJsonSchema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GenerateJsonSchema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateJsonSchema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateJsonSchema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateJsonSchema);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$Generic(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Generic);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Generic, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$ParamSpec(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParamSpec);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParamSpec, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ParamSpec);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ParamSpec, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$PydanticUndefinedAnnotation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticUndefinedAnnotation);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticUndefinedAnnotation, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticUndefinedAnnotation);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticUndefinedAnnotation, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$PydanticUserError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUserError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticUserError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticUserError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticUserError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticUserError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUserError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUserError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUserError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$SchemaSerializer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SchemaSerializer);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SchemaSerializer, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SchemaSerializer);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SchemaSerializer, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$T(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_T);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_T, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_T);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_config(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__config);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__config);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__config, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__config);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__config, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__config);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__config);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__config);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_generate_schema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_schema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_schema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_schema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__generate_schema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__generate_schema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_schema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_schema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_schema);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_getattr_no_parents(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_no_parents);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__getattr_no_parents);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__getattr_no_parents, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__getattr_no_parents);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__getattr_no_parents, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_no_parents);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_no_parents);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_no_parents);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_mock_val_ser(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__mock_val_ser);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mock_val_ser);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mock_val_ser, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__mock_val_ser);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__mock_val_ser, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__mock_val_ser);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__mock_val_ser);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__mock_val_ser);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_namespace_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__namespace_utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__namespace_utils);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__namespace_utils, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__namespace_utils);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__namespace_utils, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__namespace_utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__namespace_utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__namespace_utils);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_repr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__repr);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_type_has_config(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__type_has_config);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__type_has_config);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__type_has_config, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__type_has_config);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__type_has_config, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__type_has_config);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__type_has_config);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__type_has_config);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_typing_extra(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$_utils(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__utils);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$create_schema_validator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_schema_validator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_schema_validator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_create_schema_validator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_create_schema_validator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$final(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_final);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_final, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_final);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_final, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_final);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$is_dataclass(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_dataclass);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_dataclass, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_dataclass);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_dataclass, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$is_typeddict(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_typeddict);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_typeddict, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_typeddict);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_typeddict, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$type_adapter$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$type_adapter->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$type_adapter->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$type_adapter->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_overload);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_overload, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_02cea62a5a9f6d94ccc7bdd1197d60c9;
static PyCodeObject *code_objects_f1f9c83b5713fdd98db367856a88f124;
static PyCodeObject *code_objects_429f01de0a044713dd1ea24bfb4ace9c;
static PyCodeObject *code_objects_9b2e346d99a5a435c90eb52b21f98270;
static PyCodeObject *code_objects_0bad8fb1c73bcd58329966cfe8a64cb6;
static PyCodeObject *code_objects_6772c77383bac47fcae6c8a3b791c82f;
static PyCodeObject *code_objects_a312ada46392ac948a3ad16c1ea5cac4;
static PyCodeObject *code_objects_85dbbcd59b954e978d7dd71ef54c6dfe;
static PyCodeObject *code_objects_cbd5e92366b56f5f72138b6e8c77744b;
static PyCodeObject *code_objects_0c678c0bf6f02cc046c37f130e6ba8ae;
static PyCodeObject *code_objects_47a42e7edbfae0b03c81fff250ff298d;
static PyCodeObject *code_objects_5ddf3021accdf609ccfb61868f67e145;
static PyCodeObject *code_objects_7bdfa7cac04d1ecee3ebb9e64341eb88;
static PyCodeObject *code_objects_285f4ae52740fca6c020262d0561004c;
static PyCodeObject *code_objects_0cd0f8ad5df92491a76205d830ac35b5;
static PyCodeObject *code_objects_8b68a3e6f93cf397fb5267e044683aa7;
static PyCodeObject *code_objects_d4f72049aceea8a0eff7084391e20823;
static PyCodeObject *code_objects_745c846000763d659ac06fe36451b4d0;
static PyCodeObject *code_objects_f8d63cae1169008eaeb8b7b36439c46f;
static PyCodeObject *code_objects_7c160913d968b8ac8d5a7f0538ef81ec;
static PyCodeObject *code_objects_03efa68026e11437fe3163c249f1f563;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_01a980b73f18d81ca9a52db76af2b62a); CHECK_OBJECT(module_filename_obj);
code_objects_02cea62a5a9f6d94ccc7bdd1197d60c9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_0887ce2562a80d01bebf5fc9b6c0e776, mod_consts.const_str_digest_0887ce2562a80d01bebf5fc9b6c0e776, NULL, NULL, 0, 0, 0);
code_objects_f1f9c83b5713fdd98db367856a88f124 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_TypeAdapter, mod_consts.const_str_plain_TypeAdapter, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_429f01de0a044713dd1ea24bfb4ace9c = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0, mod_consts.const_tuple_ec07403606d1f571c3310ed38af86a64_tuple, NULL, 2, 3, 0);
code_objects_9b2e346d99a5a435c90eb52b21f98270 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0, mod_consts.const_tuple_ec07403606d1f571c3310ed38af86a64_tuple, NULL, 2, 3, 0);
code_objects_0bad8fb1c73bcd58329966cfe8a64cb6 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0, mod_consts.const_tuple_0f904ff62a3211c5b5a9ac2322602d20_tuple, NULL, 2, 3, 0);
code_objects_6772c77383bac47fcae6c8a3b791c82f = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___repr__, mod_consts.const_str_digest_c08cf4c0e064f257c47e078eef5921d0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_a312ada46392ac948a3ad16c1ea5cac4 = MAKE_CODE_OBJECT(module_filename_obj, 319, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__defer_build, mod_consts.const_str_digest_db22543c93dfc4527a4b2fcbe3e1d911, mod_consts.const_tuple_str_plain_self_str_plain_config_tuple, NULL, 1, 0, 0);
code_objects_85dbbcd59b954e978d7dd71ef54c6dfe = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__fetch_parent_frame, mod_consts.const_str_digest_4c2bb08aad89c1b444eabad809cda33e, mod_consts.const_tuple_str_plain_self_str_plain_frame_tuple, NULL, 1, 0, 0);
code_objects_cbd5e92366b56f5f72138b6e8c77744b = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__getattr_no_parents, mod_consts.const_str_plain__getattr_no_parents, mod_consts.const_tuple_str_plain_obj_str_plain_attribute_str_plain_slots_tuple, NULL, 2, 0, 0);
code_objects_0c678c0bf6f02cc046c37f130e6ba8ae = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__init_core_attrs, mod_consts.const_str_digest_c52134f3159b5ee94b4a933ef46286b4, mod_consts.const_tuple_ca4001d9a1148600088b7be7711f4384_tuple, NULL, 4, 0, 0);
code_objects_47a42e7edbfae0b03c81fff250ff298d = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__model_config, mod_consts.const_str_digest_3752d502f83834cb6801b800c3d294bd, mod_consts.const_tuple_str_plain_self_str_plain_type__tuple, NULL, 1, 0, 0);
code_objects_5ddf3021accdf609ccfb61868f67e145 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__type_has_config, mod_consts.const_str_plain__type_has_config, mod_consts.const_tuple_str_plain_type__tuple, NULL, 1, 0, 0);
code_objects_7bdfa7cac04d1ecee3ebb9e64341eb88 = MAKE_CODE_OBJECT(module_filename_obj, 588, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dump_json, mod_consts.const_str_digest_504b3378b24442fbafc319eec2857efb, mod_consts.const_tuple_6e1deee8625b01f7cf59591448610aae_tuple, NULL, 2, 12, 2);
code_objects_285f4ae52740fca6c020262d0561004c = MAKE_CODE_OBJECT(module_filename_obj, 532, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_dump_python, mod_consts.const_str_digest_9cc83e05ac17aa67024e3261c9c23122, mod_consts.const_tuple_46e13dfa2ffd4ebc45e87f697453024f_tuple, NULL, 2, 12, 2);
code_objects_0cd0f8ad5df92491a76205d830ac35b5 = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_get_default_value, mod_consts.const_str_digest_1f5792db1b72d0057e63e89f8f224a46, mod_consts.const_tuple_str_plain_self_str_plain_strict_str_plain_context_tuple, NULL, 1, 2, 0);
code_objects_8b68a3e6f93cf397fb5267e044683aa7 = MAKE_CODE_OBJECT(module_filename_obj, 647, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_json_schema, mod_consts.const_str_digest_1c7bba4fe59d7bcc26d2ae7f2b3ab571, mod_consts.const_tuple_e12b027be7e8eea5bd2988b49b508c3b_tuple, NULL, 1, 4, 0);
code_objects_d4f72049aceea8a0eff7084391e20823 = MAKE_CODE_OBJECT(module_filename_obj, 673, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_json_schemas, mod_consts.const_str_digest_450c5743a3227fb51c8200495e9c9830, mod_consts.const_tuple_85a712aec93190f36254afdd9e18e31d_tuple, NULL, 1, 5, 1);
code_objects_745c846000763d659ac06fe36451b4d0 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_rebuild, mod_consts.const_str_digest_b7b10bd8c6cd21ba73e8e659e40270de, mod_consts.const_tuple_a96c22c8755219e1f108584f377820d1_tuple, NULL, 1, 4, 0);
code_objects_f8d63cae1169008eaeb8b7b36439c46f = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_json, mod_consts.const_str_digest_4852504d7a19f68bd4cd3e470200fd01, mod_consts.const_tuple_8c25c2b70daab8493dfacbe27e0d064c_tuple, NULL, 2, 5, 2);
code_objects_7c160913d968b8ac8d5a7f0538ef81ec = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_python, mod_consts.const_str_digest_b8b05f482177a6e54beb98ba0890a4cd, mod_consts.const_tuple_087a078fda40eeb482ce660b445c2394_tuple, NULL, 2, 6, 2);
code_objects_03efa68026e11437fe3163c249f1f563 = MAKE_CODE_OBJECT(module_filename_obj, 477, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validate_strings, mod_consts.const_str_digest_0f7e77033b1bb1102e2acf3ae2b8bb1e, mod_consts.const_tuple_6eaa99a88289186e0a2d2eedf4455bc7_tuple, NULL, 2, 5, 2);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__10___repr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__11_rebuild(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__12_validate_python(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__13_validate_json(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__14_validate_strings(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__15_get_default_value(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__16_dump_python(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__17_dump_json(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__18_json_schema(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__19_json_schemas(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__1__getattr_no_parents(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__2__type_has_config(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__3___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__4___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__6__fetch_parent_frame(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__7__init_core_attrs(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__8__defer_build(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__9__model_config(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$type_adapter$$$function__1__getattr_no_parents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_obj = python_pars[0];
PyObject *par_attribute = python_pars[1];
PyObject *var_slots = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents = MAKE_FUNCTION_FRAME(tstate, code_objects_cbd5e92366b56f5f72138b6e8c77744b, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents = cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_1 = par_obj;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, const_str_plain___dict__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_3 = par_obj;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_3);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_attribute);
tmp_subscript_value_1 = par_attribute;
tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_KeyError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_2 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 46;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents->m_frame)) {
        frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooo";
goto try_except_handler_3;
branch_no_2:;
goto try_end_1;
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
try_end_1:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_2;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_2:;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(par_obj);
tmp_expression_value_4 = par_obj;
tmp_name_value_1 = mod_consts.const_str_plain___slots__;
tmp_default_value_1 = Py_None;
tmp_assign_source_1 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_1, tmp_default_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_slots == NULL);
var_slots = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_slots);
tmp_cmp_expr_left_2 = var_slots;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_attribute);
tmp_cmp_expr_left_3 = par_attribute;
CHECK_OBJECT(var_slots);
tmp_cmp_expr_right_3 = var_slots;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = (tmp_res == 1) ? true : false;
tmp_condition_result_3 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_3 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_2;
CHECK_OBJECT(par_obj);
tmp_expression_value_5 = par_obj;
CHECK_OBJECT(par_attribute);
tmp_name_value_2 = par_attribute;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, NULL);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_make_exception_arg_1;
CHECK_OBJECT(par_attribute);
tmp_make_exception_arg_1 = par_attribute;
frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents->m_frame.f_lineno = 55;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents,
    type_description_1,
    par_obj,
    par_attribute,
    var_slots
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents == cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents);
    cache_frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__1__getattr_no_parents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_slots);
var_slots = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_slots);
var_slots = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_attribute);
Py_DECREF(par_attribute);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_attribute);
Py_DECREF(par_attribute);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__2__type_has_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_type_ = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__2__type_has_config;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config = MAKE_FUNCTION_FRAME(tstate, code_objects_5ddf3021accdf609ccfb61868f67e145, module_pydantic$type_adapter, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__2__type_has_config = cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__2__type_has_config);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__2__type_has_config) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$type_adapter$_typing_extra(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__typing_extra);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_1 = par_type_;
frame_frame_pydantic$type_adapter$$$function__2__type_has_config->m_frame.f_lineno = 60;
tmp_or_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_annotated_type, tmp_args_element_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 60;
type_description_1 = "o";
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
{
    PyObject *old = par_type_;
    assert(old != NULL);
    par_type_ = tmp_assign_source_1;
    Py_DECREF(old);
}

}
// Tried code:
{
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_issubclass_cls_1;
PyObject *tmp_issubclass_classes_1;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_type_);
tmp_issubclass_cls_1 = par_type_;
tmp_issubclass_classes_1 = module_var_accessor_pydantic$type_adapter$BaseModel(tstate);
if (unlikely(tmp_issubclass_classes_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_issubclass_classes_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsSubclass(tmp_issubclass_cls_1, tmp_issubclass_classes_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_or_left_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_called_value_1 = module_var_accessor_pydantic$type_adapter$is_dataclass(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_dataclass);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_2 = par_type_;
frame_frame_pydantic$type_adapter$$$function__2__type_has_config->m_frame.f_lineno = 62;
tmp_or_left_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(tmp_or_left_value_3);
Py_DECREF(tmp_or_left_value_3);
tmp_called_value_2 = module_var_accessor_pydantic$type_adapter$is_typeddict(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_typeddict);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_type_);
tmp_args_element_value_3 = par_type_;
frame_frame_pydantic$type_adapter$$$function__2__type_has_config->m_frame.f_lineno = 62;
tmp_or_right_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 62;
type_description_1 = "o";
    goto try_except_handler_2;
}
tmp_or_right_value_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_or_right_value_2 = tmp_or_left_value_3;
or_end_3:;
tmp_return_value = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_return_value = tmp_or_left_value_2;
or_end_2:;
goto frame_return_exit_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__2__type_has_config, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__2__type_has_config, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_TypeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_1 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_3;
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 61;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$type_adapter$$$function__2__type_has_config->m_frame)) {
        frame_frame_pydantic$type_adapter$$$function__2__type_has_config->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "o";
goto try_except_handler_3;
branch_end_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
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
// End of try:


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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__2__type_has_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__2__type_has_config->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__2__type_has_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__2__type_has_config,
    type_description_1,
    par_type_
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__2__type_has_config == cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config);
    cache_frame_frame_pydantic$type_adapter$$$function__2__type_has_config = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__2__type_has_config);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_type_);
CHECK_OBJECT(par_type_);
Py_DECREF(par_type_);
par_type_ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_type_);
par_type_ = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

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


static PyObject *impl_pydantic$type_adapter$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_type = python_pars[1];
PyObject *par_config = python_pars[2];
PyObject *par__parent_depth = python_pars[3];
PyObject *par_module = python_pars[4];
PyObject *var_parent_frame = NULL;
PyObject *var_globalns = NULL;
PyObject *var_localns = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__5___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__5___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__5___init__)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__5___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__5___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__5___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0bad8fb1c73bcd58329966cfe8a64cb6, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__5___init__->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__5___init__ = cache_frame_frame_pydantic$type_adapter$$$function__5___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__5___init__);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__5___init__) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_called_value_1 = module_var_accessor_pydantic$type_adapter$_type_has_config(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__type_has_config);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_type);
tmp_args_element_value_1 = par_type;
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 203;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 203;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_config);
tmp_cmp_expr_left_1 = par_config;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$type_adapter$PydanticUserError(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticUserError);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 204;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts.const_tuple_66e12f20ce5a63f84312e954463bdd75_tuple, 0), mod_consts.const_tuple_str_plain_code_tuple);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 204;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_type);
tmp_assattr_value_1 = par_type;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__type, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_config);
tmp_assattr_value_2 = par_config;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__config, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par__parent_depth);
tmp_assattr_value_3 = par__parent_depth;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__parent_depth, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_pydantic_complete, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 217;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__fetch_parent_frame);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 217;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_parent_frame == NULL);
var_parent_frame = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_parent_frame);
tmp_cmp_expr_left_2 = var_parent_frame;
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
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(var_parent_frame);
tmp_expression_value_1 = var_parent_frame;
tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_f_globals);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_globalns == NULL);
var_globalns = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_parent_frame);
tmp_expression_value_2 = var_parent_frame;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_f_locals);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_globalns);
tmp_cmp_expr_right_3 = var_globalns;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(var_parent_frame);
tmp_expression_value_3 = var_parent_frame;
tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_f_locals);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 221;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
condexpr_end_1:;
assert(var_localns == NULL);
var_localns = tmp_assign_source_3;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
assert(var_globalns == NULL);
var_globalns = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
assert(var_localns == NULL);
var_localns = tmp_assign_source_5;
}
branch_end_2:;
{
PyObject *tmp_assattr_value_5;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(par_module);
tmp_or_left_value_1 = par_module;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_called_value_3 = module_var_accessor_pydantic$type_adapter$cast(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = (PyObject *)&PyUnicode_Type;
CHECK_OBJECT(var_globalns);
tmp_expression_value_4 = var_globalns;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 226;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain___name___str_empty_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_5 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assattr_value_5 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__module_name, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_1_3;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain__init_core_attrs);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_pydantic$type_adapter$_namespace_utils(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__namespace_utils);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);

exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_NsResolver);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_pydantic$type_adapter$_namespace_utils(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__namespace_utils);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 229;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_NamespacesTuple);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 229;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_localns);
tmp_kw_call_value_0_3 = var_localns;
CHECK_OBJECT(var_globalns);
tmp_kw_call_value_1_1 = var_globalns;
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 229;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_1};

    tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_str_plain_locals_str_plain_globals_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);
Py_DECREF(tmp_called_value_6);

exception_lineno = 229;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_localns);
tmp_kw_call_value_1_2 = var_localns;
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 228;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

    tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_namespaces_tuple_str_plain_parent_namespace_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 228;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_3 = Py_False;
frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame.f_lineno = 227;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_3};

    tmp_call_result_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__5___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__5___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__5___init__,
    type_description_1,
    par_self,
    par_type,
    par_config,
    par__parent_depth,
    par_module,
    var_parent_frame,
    var_globalns,
    var_localns
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__5___init__ == cache_frame_frame_pydantic$type_adapter$$$function__5___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__5___init__);
    cache_frame_frame_pydantic$type_adapter$$$function__5___init__ = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__5___init__);

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
CHECK_OBJECT(var_parent_frame);
CHECK_OBJECT(var_parent_frame);
Py_DECREF(var_parent_frame);
var_parent_frame = NULL;
CHECK_OBJECT(var_globalns);
CHECK_OBJECT(var_globalns);
Py_DECREF(var_globalns);
var_globalns = NULL;
CHECK_OBJECT(var_localns);
CHECK_OBJECT(var_localns);
Py_DECREF(var_localns);
var_localns = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_parent_frame);
var_parent_frame = NULL;
Py_XDECREF(var_globalns);
var_globalns = NULL;
Py_XDECREF(var_localns);
var_localns = NULL;
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
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
CHECK_OBJECT(par__parent_depth);
Py_DECREF(par__parent_depth);
CHECK_OBJECT(par_module);
Py_DECREF(par_module);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_type);
Py_DECREF(par_type);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
CHECK_OBJECT(par__parent_depth);
Py_DECREF(par__parent_depth);
CHECK_OBJECT(par_module);
Py_DECREF(par_module);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__6__fetch_parent_frame(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_frame = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_85dbbcd59b954e978d7dd71ef54c6dfe, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame = cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_1 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_1 == NULL));
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__getframe);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__parent_depth);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 236;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame->m_frame.f_lineno = 236;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_frame == NULL);
var_frame = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_frame);
tmp_expression_value_4 = var_frame;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_f_globals);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame->m_frame.f_lineno = 237;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain___name___tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_plain_typing;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "oo";
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
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_frame);
tmp_expression_value_5 = var_frame;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_f_back);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "oo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame,
    type_description_1,
    par_self,
    var_frame
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame == cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame);
    cache_frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__6__fetch_parent_frame);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_frame);
tmp_return_value = var_frame;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_frame);
CHECK_OBJECT(var_frame);
Py_DECREF(var_frame);
var_frame = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_frame);
var_frame = NULL;
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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__7__init_core_attrs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_ns_resolver = python_pars[1];
PyObject *par_force = python_pars[2];
PyObject *par_raise_errors = python_pars[3];
PyObject *var_config_wrapper = NULL;
PyObject *var_schema_generator = NULL;
PyObject *var_core_schema = NULL;
PyObject *var_core_config = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs = MAKE_FUNCTION_FRAME(tstate, code_objects_0c678c0bf6f02cc046c37f130e6ba8ae, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs = cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_force);
tmp_operand_value_1 = par_force;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__defer_build);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 264;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 265;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 265;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_set_type_adapter_mocks, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 265;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = Py_False;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_pydantic_complete, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
}
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
// Tried code:
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_assattr_target_2;
tmp_called_value_1 = module_var_accessor_pydantic$type_adapter$_getattr_no_parents(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__getattr_no_parents);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__type);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_3 = mod_consts.const_str_plain___pydantic_core_schema__;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 270;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_assattr_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_core_schema, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_5;
PyObject *tmp_assattr_target_3;
tmp_called_value_2 = module_var_accessor_pydantic$type_adapter$_getattr_no_parents(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__getattr_no_parents);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__type);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_5 = mod_consts.const_str_plain___pydantic_validator__;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 271;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_validator, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_assattr_target_4;
tmp_called_value_3 = module_var_accessor_pydantic$type_adapter$_getattr_no_parents(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__getattr_no_parents);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__type);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_args_element_value_7 = mod_consts.const_str_plain___pydantic_serializer__;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 272;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain_serializer, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
}
{
nuitka_bool tmp_condition_result_2;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
PyObject *tmp_isinstance_inst_3;
PyObject *tmp_isinstance_cls_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_core_schema);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_6 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 278;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_MockCoreSchema);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 278;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_validator);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_8 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_MockValSer);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_or_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 279;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_serializer);
if (tmp_isinstance_inst_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_10 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_3);

exception_lineno = 280;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_MockValSer);
if (tmp_isinstance_cls_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_3);

exception_lineno = 280;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
CHECK_OBJECT(tmp_isinstance_inst_3);
Py_DECREF(tmp_isinstance_inst_3);
CHECK_OBJECT(tmp_isinstance_cls_3);
Py_DECREF(tmp_isinstance_cls_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 282;
tmp_raise_type_input_1 = CALL_FUNCTION_NO_ARGS(tstate, PyExc_AttributeError);
assert(!(tmp_raise_type_input_1 == NULL));
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "oooooooo";
    goto try_except_handler_2;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 282;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto try_except_handler_2;
}
branch_no_2:;
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 3.
exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_AttributeError;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_element_value_8;
PyObject *tmp_expression_value_12;
tmp_expression_value_11 = module_var_accessor_pydantic$type_adapter$_config(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__config);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_ConfigWrapper);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_12 = par_self;
tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain__config);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 284;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 284;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(var_config_wrapper == NULL);
var_config_wrapper = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_expression_value_13 = module_var_accessor_pydantic$type_adapter$_generate_schema(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__generate_schema);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 286;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_GenerateSchema);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_config_wrapper);
tmp_kw_call_arg_value_0_1 = var_config_wrapper;
CHECK_OBJECT(par_ns_resolver);
tmp_kw_call_dict_value_0_1 = par_ns_resolver;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 286;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_ns_resolver_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(var_schema_generator == NULL);
var_schema_generator = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(var_schema_generator);
tmp_expression_value_14 = var_schema_generator;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_generate_schema);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_self);
tmp_expression_value_15 = par_self;
tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain__type);
if (tmp_args_element_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_6);

exception_lineno = 289;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 289;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooooooo";
    goto try_except_handler_4;
}
assert(var_core_schema == NULL);
var_core_schema = tmp_assign_source_3;
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_keeper_lineno_2);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_2, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_2);
// Tried code:
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = module_var_accessor_pydantic$type_adapter$PydanticUndefinedAnnotation(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticUndefinedAnnotation);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
CHECK_OBJECT(par_raise_errors);
tmp_truth_name_2 = CHECK_IF_TRUE(par_raise_errors);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 292;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame)) {
        frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_5;
branch_no_5:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
tmp_called_instance_2 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_10 = par_self;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 293;
tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_set_type_adapter_mocks, tmp_args_element_value_10);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_5;
goto branch_end_4;
branch_no_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 288;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame)) {
        frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_5;
branch_end_4:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_return_handler_3;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
// End of try:
try_end_2:;
// Tried code:
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_11;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_schema_generator);
tmp_called_instance_3 = var_schema_generator;
CHECK_OBJECT(var_core_schema);
tmp_args_element_value_11 = var_core_schema;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 297;
tmp_assattr_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_clean_schema, tmp_args_element_value_11);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain_core_schema, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;
type_description_1 = "oooooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_16;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_expression_value_16 = module_var_accessor_pydantic$type_adapter$_generate_schema(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__generate_schema);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_InvalidSchemaError);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_instance_4;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_12;
tmp_called_instance_4 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_called_instance_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_12 = par_self;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 299;
tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_set_type_adapter_mocks, tmp_args_element_value_12);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooooooo";
    goto try_except_handler_7;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_7;
goto branch_end_6;
branch_no_6:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 296;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame)) {
        frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_7;
branch_end_6:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto try_return_handler_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_3;
// End of try:
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_5;
CHECK_OBJECT(var_config_wrapper);
tmp_called_instance_5 = var_config_wrapper;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 302;
tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_5,
    mod_consts.const_str_plain_core_config,
    PyTuple_GET_ITEM(mod_consts.const_tuple_none_tuple, 0)
);

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
assert(var_core_config == NULL);
var_core_config = tmp_assign_source_4;
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_17;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_expression_value_19;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_20;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_expression_value_21;
PyObject *tmp_assattr_target_6;
tmp_called_value_7 = module_var_accessor_pydantic$type_adapter$create_schema_validator(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_schema_validator);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_17 = par_self;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_core_schema);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_18 = par_self;
tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain__type);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);

exception_lineno = 306;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_19 = par_self;
tmp_kw_call_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain__module_name);
if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);

exception_lineno = 307;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_20 = par_self;
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain__type);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_value_3_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);

exception_lineno = 308;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
tmp_kw_call_value_4_1 = mod_consts.const_str_plain_TypeAdapter;
CHECK_OBJECT(var_core_config);
tmp_kw_call_value_5_1 = var_core_config;
CHECK_OBJECT(var_config_wrapper);
tmp_expression_value_21 = var_config_wrapper;
tmp_kw_call_value_6_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain_plugin_settings);
if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_3_1);

exception_lineno = 311;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 304;
{
    PyObject *kw_values[7] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1};

    tmp_assattr_value_6 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts.const_tuple_ca589c5aba09e066956e9d99c8151541_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
CHECK_OBJECT(tmp_kw_call_value_2_1);
Py_DECREF(tmp_kw_call_value_2_1);
CHECK_OBJECT(tmp_kw_call_value_3_1);
Py_DECREF(tmp_kw_call_value_3_1);
CHECK_OBJECT(tmp_kw_call_value_6_1);
Py_DECREF(tmp_kw_call_value_6_1);
if (tmp_assattr_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_6 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain_validator, tmp_assattr_value_6);
CHECK_OBJECT(tmp_assattr_value_6);
Py_DECREF(tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
}
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_13;
PyObject *tmp_expression_value_22;
PyObject *tmp_args_element_value_14;
PyObject *tmp_assattr_target_7;
tmp_called_value_8 = module_var_accessor_pydantic$type_adapter$SchemaSerializer(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SchemaSerializer);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_expression_value_22 = par_self;
tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_core_schema);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(var_core_config);
tmp_args_element_value_14 = var_core_config;
frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = 313;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_assattr_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_7 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain_serializer, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "oooooooo";
    goto try_except_handler_3;
}
}
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 269;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame)) {
        frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "oooooooo";
goto try_except_handler_3;
branch_end_3:;
goto try_end_4;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_assattr_target_8;
tmp_assattr_value_8 = Py_True;
CHECK_OBJECT(par_self);
tmp_assattr_target_8 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain_pydantic_complete, tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs,
    type_description_1,
    par_self,
    par_ns_resolver,
    par_force,
    par_raise_errors,
    var_config_wrapper,
    var_schema_generator,
    var_core_schema,
    var_core_config
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs == cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs);
    cache_frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__7__init_core_attrs);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
tmp_return_value = Py_True;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_config_wrapper);
var_config_wrapper = NULL;
Py_XDECREF(var_schema_generator);
var_schema_generator = NULL;
Py_XDECREF(var_core_schema);
var_core_schema = NULL;
Py_XDECREF(var_core_config);
var_core_config = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_config_wrapper);
var_config_wrapper = NULL;
Py_XDECREF(var_schema_generator);
var_schema_generator = NULL;
Py_XDECREF(var_core_schema);
var_core_schema = NULL;
Py_XDECREF(var_core_config);
var_core_config = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ns_resolver);
Py_DECREF(par_ns_resolver);
CHECK_OBJECT(par_force);
Py_DECREF(par_force);
CHECK_OBJECT(par_raise_errors);
Py_DECREF(par_raise_errors);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_ns_resolver);
Py_DECREF(par_ns_resolver);
CHECK_OBJECT(par_force);
Py_DECREF(par_force);
CHECK_OBJECT(par_raise_errors);
Py_DECREF(par_raise_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__8__defer_build(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_config = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__8__defer_build;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build = MAKE_FUNCTION_FRAME(tstate, code_objects_a312ada46392ac948a3ad16c1ea5cac4, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__8__defer_build = cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__8__defer_build);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__8__defer_build) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__config);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__config);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__model_config);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
condexpr_end_1:;
assert(var_config == NULL);
var_config = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_config);
tmp_truth_name_1 = CHECK_IF_TRUE(var_config);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(var_config);
tmp_expression_value_4 = var_config;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__8__defer_build->m_frame.f_lineno = 322;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_defer_build_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_True;
tmp_return_value = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__8__defer_build, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__8__defer_build->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__8__defer_build, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__8__defer_build,
    type_description_1,
    par_self,
    var_config
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__8__defer_build == cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build);
    cache_frame_frame_pydantic$type_adapter$$$function__8__defer_build = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__8__defer_build);

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
CHECK_OBJECT(var_config);
CHECK_OBJECT(var_config);
Py_DECREF(var_config);
var_config = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_config);
var_config = NULL;
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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__9__model_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_type_ = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__9__model_config;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__9__model_config = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__9__model_config)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__9__model_config);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__9__model_config == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__9__model_config = MAKE_FUNCTION_FRAME(tstate, code_objects_47a42e7edbfae0b03c81fff250ff298d, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__9__model_config->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__9__model_config = cache_frame_frame_pydantic$type_adapter$$$function__9__model_config;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__9__model_config);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__9__model_config) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
tmp_expression_value_1 = module_var_accessor_pydantic$type_adapter$_typing_extra(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__typing_extra);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 327;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_annotated_type);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__type);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 327;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__9__model_config->m_frame.f_lineno = 327;
tmp_or_left_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 327;
type_description_1 = "oo";
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
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__type);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_1 = tmp_or_left_value_1;
or_end_1:;
assert(var_type_ == NULL);
var_type_ = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
int tmp_truth_name_1;
tmp_expression_value_4 = module_var_accessor_pydantic$type_adapter$_utils(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__utils);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_lenient_issubclass);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_type_);
tmp_args_element_value_2 = var_type_;
tmp_args_element_value_3 = module_var_accessor_pydantic$type_adapter$BaseModel(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseModel);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_2);

exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__9__model_config->m_frame.f_lineno = 328;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 328;
type_description_1 = "oo";
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
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_type_);
tmp_expression_value_5 = var_type_;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_model_config);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
CHECK_OBJECT(var_type_);
tmp_expression_value_6 = var_type_;
tmp_name_value_1 = mod_consts.const_str_plain___pydantic_config__;
tmp_default_value_1 = Py_None;
tmp_return_value = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_1, tmp_default_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__9__model_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__9__model_config->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__9__model_config, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__9__model_config,
    type_description_1,
    par_self,
    var_type_
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__9__model_config == cache_frame_frame_pydantic$type_adapter$$$function__9__model_config) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__9__model_config);
    cache_frame_frame_pydantic$type_adapter$$$function__9__model_config = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__9__model_config);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_type_);
CHECK_OBJECT(var_type_);
Py_DECREF(var_type_);
var_type_ = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_type_);
var_type_ = NULL;
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
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__10___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__10___repr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__10___repr__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__10___repr__)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__10___repr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__10___repr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__10___repr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6772c77383bac47fcae6c8a3b791c82f, module_pydantic$type_adapter, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__10___repr__->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__10___repr__ = cache_frame_frame_pydantic$type_adapter$$$function__10___repr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__10___repr__);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__10___repr__) == 2);

// Framed code:
{
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_549272b18b285336db07223781275d0b;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_expression_value_1 = module_var_accessor_pydantic$type_adapter$_repr(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__repr);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_display_as_type);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__type);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 333;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
frame_frame_pydantic$type_adapter$$$function__10___repr__->m_frame.f_lineno = 333;
tmp_format_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "o";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_chr_41;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_return_value = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__10___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__10___repr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__10___repr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__10___repr__,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__10___repr__ == cache_frame_frame_pydantic$type_adapter$$$function__10___repr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__10___repr__);
    cache_frame_frame_pydantic$type_adapter$$$function__10___repr__ = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__10___repr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__11_rebuild(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_force = python_pars[1];
PyObject *par_raise_errors = python_pars[2];
PyObject *par__parent_namespace_depth = python_pars[3];
PyObject *par__types_namespace = python_pars[4];
PyObject *var_rebuild_ns = NULL;
PyObject *var_globalns = NULL;
PyObject *var_ns_resolver = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__11_rebuild;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild = MAKE_FUNCTION_FRAME(tstate, code_objects_745c846000763d659ac06fe36451b4d0, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__11_rebuild = cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__11_rebuild);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__11_rebuild) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par_force);
tmp_operand_value_1 = par_force;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_pydantic_complete);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 362;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par__types_namespace);
tmp_cmp_expr_left_1 = par__types_namespace;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par__types_namespace);
tmp_assign_source_1 = par__types_namespace;
assert(var_rebuild_ns == NULL);
Py_INCREF(tmp_assign_source_1);
var_rebuild_ns = tmp_assign_source_1;
}
goto branch_end_2;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par__parent_namespace_depth);
tmp_cmp_expr_left_2 = par__parent_namespace_depth;
tmp_cmp_expr_right_2 = const_int_0;
tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
tmp_expression_value_2 = module_var_accessor_pydantic$type_adapter$_typing_extra(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__typing_extra);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_parent_frame_namespace);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par__parent_namespace_depth);
tmp_kw_call_value_0_1 = par__parent_namespace_depth;
tmp_kw_call_value_1_1 = Py_True;
frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_frame.f_lineno = 368;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_or_left_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_parent_depth_str_plain_force_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 368;
type_description_1 = "oooooooo";
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
tmp_assign_source_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_assign_source_2 = tmp_or_left_value_1;
or_end_1:;
assert(var_rebuild_ns == NULL);
var_rebuild_ns = tmp_assign_source_2;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_DICT_EMPTY(tstate);
assert(var_rebuild_ns == NULL);
var_rebuild_ns = tmp_assign_source_3;
}
branch_end_3:;
branch_end_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_sub_expr_left_1;
PyObject *tmp_sub_expr_right_1;
PyObject *tmp_args_element_value_3;
tmp_expression_value_4 = IMPORT_HARD_SYS();
assert(!(tmp_expression_value_4 == NULL));
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__getframe);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts.const_str_plain_max);
assert(tmp_called_value_3 != NULL);
CHECK_OBJECT(par__parent_namespace_depth);
tmp_sub_expr_left_1 = par__parent_namespace_depth;
tmp_sub_expr_right_1 = const_int_pos_1;
tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_3 = const_int_pos_1;
frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_frame.f_lineno = 374;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_frame.f_lineno = 374;
tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_f_globals);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_globalns == NULL);
var_globalns = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_1_3;
tmp_expression_value_5 = module_var_accessor_pydantic$type_adapter$_namespace_utils(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__namespace_utils);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 375;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_NsResolver);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_pydantic$type_adapter$_namespace_utils(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__namespace_utils);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_4);

exception_lineno = 376;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_NamespacesTuple);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 376;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rebuild_ns);
tmp_kw_call_value_0_3 = var_rebuild_ns;
CHECK_OBJECT(var_globalns);
tmp_kw_call_value_1_2 = var_globalns;
frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_frame.f_lineno = 376;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2};

    tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_locals_str_plain_globals_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 376;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_rebuild_ns);
tmp_kw_call_value_1_3 = var_rebuild_ns;
frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_frame.f_lineno = 375;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_3};

    tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_namespaces_tuple_str_plain_parent_namespace_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
assert(var_ns_resolver == NULL);
var_ns_resolver = tmp_assign_source_5;
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_kw_call_value_1_4;
PyObject *tmp_kw_call_value_2_1;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__init_core_attrs);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ns_resolver);
tmp_kw_call_value_0_4 = var_ns_resolver;
tmp_kw_call_value_1_4 = Py_True;
CHECK_OBJECT(par_raise_errors);
tmp_kw_call_value_2_1 = par_raise_errors;
frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_frame.f_lineno = 379;
{
    PyObject *kw_values[3] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_force_str_plain_raise_errors_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__11_rebuild, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__11_rebuild->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__11_rebuild, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__11_rebuild,
    type_description_1,
    par_self,
    par_force,
    par_raise_errors,
    par__parent_namespace_depth,
    par__types_namespace,
    var_rebuild_ns,
    var_globalns,
    var_ns_resolver
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__11_rebuild == cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild);
    cache_frame_frame_pydantic$type_adapter$$$function__11_rebuild = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__11_rebuild);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_rebuild_ns);
var_rebuild_ns = NULL;
Py_XDECREF(var_globalns);
var_globalns = NULL;
Py_XDECREF(var_ns_resolver);
var_ns_resolver = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_rebuild_ns);
var_rebuild_ns = NULL;
Py_XDECREF(var_globalns);
var_globalns = NULL;
Py_XDECREF(var_ns_resolver);
var_ns_resolver = NULL;
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
CHECK_OBJECT(par_force);
Py_DECREF(par_force);
CHECK_OBJECT(par_raise_errors);
Py_DECREF(par_raise_errors);
CHECK_OBJECT(par__parent_namespace_depth);
Py_DECREF(par__parent_namespace_depth);
CHECK_OBJECT(par__types_namespace);
Py_DECREF(par__types_namespace);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_force);
Py_DECREF(par_force);
CHECK_OBJECT(par_raise_errors);
Py_DECREF(par_raise_errors);
CHECK_OBJECT(par__parent_namespace_depth);
Py_DECREF(par__parent_namespace_depth);
CHECK_OBJECT(par__types_namespace);
Py_DECREF(par__types_namespace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__12_validate_python(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_object = python_pars[1];
PyObject *par_strict = python_pars[2];
PyObject *par_from_attributes = python_pars[3];
PyObject *par_context = python_pars[4];
PyObject *par_experimental_allow_partial = python_pars[5];
PyObject *par_by_alias = python_pars[6];
PyObject *par_by_name = python_pars[7];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__12_validate_python;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python = MAKE_FUNCTION_FRAME(tstate, code_objects_7c160913d968b8ac8d5a7f0538ef81ec, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__12_validate_python = cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__12_validate_python);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__12_validate_python) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_by_alias);
tmp_cmp_expr_left_1 = par_by_alias;
tmp_cmp_expr_right_1 = Py_False;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_by_name);
tmp_cmp_expr_left_2 = par_by_name;
tmp_cmp_expr_right_2 = Py_True;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$type_adapter$PydanticUserError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticUserError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__12_validate_python->m_frame.f_lineno = 416;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_d74da3b96eb6d3028f14981ace934034_tuple, 0), mod_consts.const_tuple_str_plain_code_tuple);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 416;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_validator);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_validate_python);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_object);
tmp_kw_call_arg_value_0_1 = par_object;
CHECK_OBJECT(par_strict);
tmp_kw_call_dict_value_0_1 = par_strict;
CHECK_OBJECT(par_from_attributes);
tmp_kw_call_dict_value_1_1 = par_from_attributes;
CHECK_OBJECT(par_context);
tmp_kw_call_dict_value_2_1 = par_context;
CHECK_OBJECT(par_experimental_allow_partial);
tmp_kw_call_dict_value_3_1 = par_experimental_allow_partial;
CHECK_OBJECT(par_by_alias);
tmp_kw_call_dict_value_4_1 = par_by_alias;
CHECK_OBJECT(par_by_name);
tmp_kw_call_dict_value_5_1 = par_by_name;
frame_frame_pydantic$type_adapter$$$function__12_validate_python->m_frame.f_lineno = 421;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_33b92bafefd19295d218fee630d92cad_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 421;
type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__12_validate_python, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__12_validate_python->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__12_validate_python, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__12_validate_python,
    type_description_1,
    par_self,
    par_object,
    par_strict,
    par_from_attributes,
    par_context,
    par_experimental_allow_partial,
    par_by_alias,
    par_by_name
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__12_validate_python == cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python);
    cache_frame_frame_pydantic$type_adapter$$$function__12_validate_python = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__12_validate_python);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_object);
Py_DECREF(par_object);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_from_attributes);
Py_DECREF(par_from_attributes);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_experimental_allow_partial);
Py_DECREF(par_experimental_allow_partial);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_by_name);
Py_DECREF(par_by_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_object);
Py_DECREF(par_object);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_from_attributes);
Py_DECREF(par_from_attributes);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_experimental_allow_partial);
Py_DECREF(par_experimental_allow_partial);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_by_name);
Py_DECREF(par_by_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__13_validate_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_data = python_pars[1];
PyObject *par_strict = python_pars[2];
PyObject *par_context = python_pars[3];
PyObject *par_experimental_allow_partial = python_pars[4];
PyObject *par_by_alias = python_pars[5];
PyObject *par_by_name = python_pars[6];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__13_validate_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json = MAKE_FUNCTION_FRAME(tstate, code_objects_f8d63cae1169008eaeb8b7b36439c46f, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__13_validate_json = cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__13_validate_json);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__13_validate_json) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_by_alias);
tmp_cmp_expr_left_1 = par_by_alias;
tmp_cmp_expr_right_1 = Py_False;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_by_name);
tmp_cmp_expr_left_2 = par_by_name;
tmp_cmp_expr_right_2 = Py_True;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$type_adapter$PydanticUserError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticUserError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 463;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__13_validate_json->m_frame.f_lineno = 463;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_d74da3b96eb6d3028f14981ace934034_tuple, 0), mod_consts.const_tuple_str_plain_code_tuple);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 463;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 463;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_validator);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_validate_json);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_data);
tmp_kw_call_arg_value_0_1 = par_data;
CHECK_OBJECT(par_strict);
tmp_kw_call_dict_value_0_1 = par_strict;
CHECK_OBJECT(par_context);
tmp_kw_call_dict_value_1_1 = par_context;
CHECK_OBJECT(par_experimental_allow_partial);
tmp_kw_call_dict_value_2_1 = par_experimental_allow_partial;
CHECK_OBJECT(par_by_alias);
tmp_kw_call_dict_value_3_1 = par_by_alias;
CHECK_OBJECT(par_by_name);
tmp_kw_call_dict_value_4_1 = par_by_name;
frame_frame_pydantic$type_adapter$$$function__13_validate_json->m_frame.f_lineno = 468;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_c55f49bbefedf94f71af6233bff16e06_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__13_validate_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__13_validate_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__13_validate_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__13_validate_json,
    type_description_1,
    par_self,
    par_data,
    par_strict,
    par_context,
    par_experimental_allow_partial,
    par_by_alias,
    par_by_name
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__13_validate_json == cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json);
    cache_frame_frame_pydantic$type_adapter$$$function__13_validate_json = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__13_validate_json);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_experimental_allow_partial);
Py_DECREF(par_experimental_allow_partial);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_by_name);
Py_DECREF(par_by_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_data);
Py_DECREF(par_data);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_experimental_allow_partial);
Py_DECREF(par_experimental_allow_partial);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_by_name);
Py_DECREF(par_by_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__14_validate_strings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_obj = python_pars[1];
PyObject *par_strict = python_pars[2];
PyObject *par_context = python_pars[3];
PyObject *par_experimental_allow_partial = python_pars[4];
PyObject *par_by_alias = python_pars[5];
PyObject *par_by_name = python_pars[6];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__14_validate_strings;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings = MAKE_FUNCTION_FRAME(tstate, code_objects_03efa68026e11437fe3163c249f1f563, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__14_validate_strings = cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__14_validate_strings);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__14_validate_strings) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_by_alias);
tmp_cmp_expr_left_1 = par_by_alias;
tmp_cmp_expr_right_1 = Py_False;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_by_name);
tmp_cmp_expr_left_2 = par_by_name;
tmp_cmp_expr_right_2 = Py_True;
tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
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
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$type_adapter$PydanticUserError(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticUserError);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 506;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__14_validate_strings->m_frame.f_lineno = 506;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_d74da3b96eb6d3028f14981ace934034_tuple, 0), mod_consts.const_tuple_str_plain_code_tuple);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 506;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 506;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_validator);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_validate_strings);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_obj);
tmp_kw_call_arg_value_0_1 = par_obj;
CHECK_OBJECT(par_strict);
tmp_kw_call_dict_value_0_1 = par_strict;
CHECK_OBJECT(par_context);
tmp_kw_call_dict_value_1_1 = par_context;
CHECK_OBJECT(par_experimental_allow_partial);
tmp_kw_call_dict_value_2_1 = par_experimental_allow_partial;
CHECK_OBJECT(par_by_alias);
tmp_kw_call_dict_value_3_1 = par_by_alias;
CHECK_OBJECT(par_by_name);
tmp_kw_call_dict_value_4_1 = par_by_name;
frame_frame_pydantic$type_adapter$$$function__14_validate_strings->m_frame.f_lineno = 511;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_c55f49bbefedf94f71af6233bff16e06_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
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

goto function_return_exit;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__14_validate_strings, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__14_validate_strings->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__14_validate_strings, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__14_validate_strings,
    type_description_1,
    par_self,
    par_obj,
    par_strict,
    par_context,
    par_experimental_allow_partial,
    par_by_alias,
    par_by_name
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__14_validate_strings == cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings);
    cache_frame_frame_pydantic$type_adapter$$$function__14_validate_strings = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__14_validate_strings);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_experimental_allow_partial);
Py_DECREF(par_experimental_allow_partial);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_by_name);
Py_DECREF(par_by_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_obj);
Py_DECREF(par_obj);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
CHECK_OBJECT(par_experimental_allow_partial);
Py_DECREF(par_experimental_allow_partial);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_by_name);
Py_DECREF(par_by_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__15_get_default_value(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_strict = python_pars[1];
PyObject *par_context = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__15_get_default_value;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value = MAKE_FUNCTION_FRAME(tstate, code_objects_0cd0f8ad5df92491a76205d830ac35b5, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__15_get_default_value = cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__15_get_default_value);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__15_get_default_value) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_validator);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_get_default_value);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_strict);
tmp_kw_call_value_0_1 = par_strict;
CHECK_OBJECT(par_context);
tmp_kw_call_value_1_1 = par_context;
frame_frame_pydantic$type_adapter$$$function__15_get_default_value->m_frame.f_lineno = 530;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_strict_str_plain_context_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__15_get_default_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__15_get_default_value->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__15_get_default_value, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__15_get_default_value,
    type_description_1,
    par_self,
    par_strict,
    par_context
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__15_get_default_value == cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value);
    cache_frame_frame_pydantic$type_adapter$$$function__15_get_default_value = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__15_get_default_value);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_strict);
Py_DECREF(par_strict);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__16_dump_python(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_instance = python_pars[1];
PyObject *par_mode = python_pars[2];
PyObject *par_include = python_pars[3];
PyObject *par_exclude = python_pars[4];
PyObject *par_by_alias = python_pars[5];
PyObject *par_exclude_unset = python_pars[6];
PyObject *par_exclude_defaults = python_pars[7];
PyObject *par_exclude_none = python_pars[8];
PyObject *par_round_trip = python_pars[9];
PyObject *par_warnings = python_pars[10];
PyObject *par_fallback = python_pars[11];
PyObject *par_serialize_as_any = python_pars[12];
PyObject *par_context = python_pars[13];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__16_dump_python;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python = MAKE_FUNCTION_FRAME(tstate, code_objects_285f4ae52740fca6c020262d0561004c, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__16_dump_python = cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__16_dump_python);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__16_dump_python) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_kw_call_dict_value_11_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_serializer);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_to_python);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_instance);
tmp_kw_call_arg_value_0_1 = par_instance;
CHECK_OBJECT(par_mode);
tmp_kw_call_dict_value_0_1 = par_mode;
CHECK_OBJECT(par_by_alias);
tmp_kw_call_dict_value_1_1 = par_by_alias;
CHECK_OBJECT(par_include);
tmp_kw_call_dict_value_2_1 = par_include;
CHECK_OBJECT(par_exclude);
tmp_kw_call_dict_value_3_1 = par_exclude;
CHECK_OBJECT(par_exclude_unset);
tmp_kw_call_dict_value_4_1 = par_exclude_unset;
CHECK_OBJECT(par_exclude_defaults);
tmp_kw_call_dict_value_5_1 = par_exclude_defaults;
CHECK_OBJECT(par_exclude_none);
tmp_kw_call_dict_value_6_1 = par_exclude_none;
CHECK_OBJECT(par_round_trip);
tmp_kw_call_dict_value_7_1 = par_round_trip;
CHECK_OBJECT(par_warnings);
tmp_kw_call_dict_value_8_1 = par_warnings;
CHECK_OBJECT(par_fallback);
tmp_kw_call_dict_value_9_1 = par_fallback;
CHECK_OBJECT(par_serialize_as_any);
tmp_kw_call_dict_value_10_1 = par_serialize_as_any;
CHECK_OBJECT(par_context);
tmp_kw_call_dict_value_11_1 = par_context;
frame_frame_pydantic$type_adapter$$$function__16_dump_python->m_frame.f_lineno = 572;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[12] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_87c459efda50c5a6cfc114f72a40110e_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__16_dump_python, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__16_dump_python->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__16_dump_python, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__16_dump_python,
    type_description_1,
    par_self,
    par_instance,
    par_mode,
    par_include,
    par_exclude,
    par_by_alias,
    par_exclude_unset,
    par_exclude_defaults,
    par_exclude_none,
    par_round_trip,
    par_warnings,
    par_fallback,
    par_serialize_as_any,
    par_context
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__16_dump_python == cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python);
    cache_frame_frame_pydantic$type_adapter$$$function__16_dump_python = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__16_dump_python);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
CHECK_OBJECT(par_exclude_none);
Py_DECREF(par_exclude_none);
CHECK_OBJECT(par_round_trip);
Py_DECREF(par_round_trip);
CHECK_OBJECT(par_warnings);
Py_DECREF(par_warnings);
CHECK_OBJECT(par_fallback);
Py_DECREF(par_fallback);
CHECK_OBJECT(par_serialize_as_any);
Py_DECREF(par_serialize_as_any);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
CHECK_OBJECT(par_exclude_none);
Py_DECREF(par_exclude_none);
CHECK_OBJECT(par_round_trip);
Py_DECREF(par_round_trip);
CHECK_OBJECT(par_warnings);
Py_DECREF(par_warnings);
CHECK_OBJECT(par_fallback);
Py_DECREF(par_fallback);
CHECK_OBJECT(par_serialize_as_any);
Py_DECREF(par_serialize_as_any);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__17_dump_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_instance = python_pars[1];
PyObject *par_indent = python_pars[2];
PyObject *par_include = python_pars[3];
PyObject *par_exclude = python_pars[4];
PyObject *par_by_alias = python_pars[5];
PyObject *par_exclude_unset = python_pars[6];
PyObject *par_exclude_defaults = python_pars[7];
PyObject *par_exclude_none = python_pars[8];
PyObject *par_round_trip = python_pars[9];
PyObject *par_warnings = python_pars[10];
PyObject *par_fallback = python_pars[11];
PyObject *par_serialize_as_any = python_pars[12];
PyObject *par_context = python_pars[13];
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__17_dump_json;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json = MAKE_FUNCTION_FRAME(tstate, code_objects_7bdfa7cac04d1ecee3ebb9e64341eb88, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__17_dump_json = cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__17_dump_json);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__17_dump_json) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_kw_call_dict_value_5_1;
PyObject *tmp_kw_call_dict_value_6_1;
PyObject *tmp_kw_call_dict_value_7_1;
PyObject *tmp_kw_call_dict_value_8_1;
PyObject *tmp_kw_call_dict_value_9_1;
PyObject *tmp_kw_call_dict_value_10_1;
PyObject *tmp_kw_call_dict_value_11_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_serializer);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_to_json);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_instance);
tmp_kw_call_arg_value_0_1 = par_instance;
CHECK_OBJECT(par_indent);
tmp_kw_call_dict_value_0_1 = par_indent;
CHECK_OBJECT(par_include);
tmp_kw_call_dict_value_1_1 = par_include;
CHECK_OBJECT(par_exclude);
tmp_kw_call_dict_value_2_1 = par_exclude;
CHECK_OBJECT(par_by_alias);
tmp_kw_call_dict_value_3_1 = par_by_alias;
CHECK_OBJECT(par_exclude_unset);
tmp_kw_call_dict_value_4_1 = par_exclude_unset;
CHECK_OBJECT(par_exclude_defaults);
tmp_kw_call_dict_value_5_1 = par_exclude_defaults;
CHECK_OBJECT(par_exclude_none);
tmp_kw_call_dict_value_6_1 = par_exclude_none;
CHECK_OBJECT(par_round_trip);
tmp_kw_call_dict_value_7_1 = par_round_trip;
CHECK_OBJECT(par_warnings);
tmp_kw_call_dict_value_8_1 = par_warnings;
CHECK_OBJECT(par_fallback);
tmp_kw_call_dict_value_9_1 = par_fallback;
CHECK_OBJECT(par_serialize_as_any);
tmp_kw_call_dict_value_10_1 = par_serialize_as_any;
CHECK_OBJECT(par_context);
tmp_kw_call_dict_value_11_1 = par_context;
frame_frame_pydantic$type_adapter$$$function__17_dump_json->m_frame.f_lineno = 631;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[12] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_40f9d4683d093c351a1ed7f126e86c24_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_1 = "oooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__17_dump_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__17_dump_json->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__17_dump_json, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__17_dump_json,
    type_description_1,
    par_self,
    par_instance,
    par_indent,
    par_include,
    par_exclude,
    par_by_alias,
    par_exclude_unset,
    par_exclude_defaults,
    par_exclude_none,
    par_round_trip,
    par_warnings,
    par_fallback,
    par_serialize_as_any,
    par_context
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__17_dump_json == cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json);
    cache_frame_frame_pydantic$type_adapter$$$function__17_dump_json = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__17_dump_json);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
CHECK_OBJECT(par_exclude_none);
Py_DECREF(par_exclude_none);
CHECK_OBJECT(par_round_trip);
Py_DECREF(par_round_trip);
CHECK_OBJECT(par_warnings);
Py_DECREF(par_warnings);
CHECK_OBJECT(par_fallback);
Py_DECREF(par_fallback);
CHECK_OBJECT(par_serialize_as_any);
Py_DECREF(par_serialize_as_any);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_indent);
Py_DECREF(par_indent);
CHECK_OBJECT(par_include);
Py_DECREF(par_include);
CHECK_OBJECT(par_exclude);
Py_DECREF(par_exclude);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_exclude_unset);
Py_DECREF(par_exclude_unset);
CHECK_OBJECT(par_exclude_defaults);
Py_DECREF(par_exclude_defaults);
CHECK_OBJECT(par_exclude_none);
Py_DECREF(par_exclude_none);
CHECK_OBJECT(par_round_trip);
Py_DECREF(par_round_trip);
CHECK_OBJECT(par_warnings);
Py_DECREF(par_warnings);
CHECK_OBJECT(par_fallback);
Py_DECREF(par_fallback);
CHECK_OBJECT(par_serialize_as_any);
Py_DECREF(par_serialize_as_any);
CHECK_OBJECT(par_context);
Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__18_json_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_by_alias = python_pars[1];
PyObject *par_ref_template = python_pars[2];
PyObject *par_schema_generator = python_pars[3];
PyObject *par_mode = python_pars[4];
PyObject *var_schema_generator_instance = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__18_json_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_8b68a3e6f93cf397fb5267e044683aa7, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__18_json_schema = cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__18_json_schema);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__18_json_schema) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
CHECK_OBJECT(par_schema_generator);
tmp_called_value_1 = par_schema_generator;
CHECK_OBJECT(par_by_alias);
tmp_kw_call_value_0_1 = par_by_alias;
CHECK_OBJECT(par_ref_template);
tmp_kw_call_value_1_1 = par_ref_template;
frame_frame_pydantic$type_adapter$$$function__18_json_schema->m_frame.f_lineno = 666;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_by_alias_str_plain_ref_template_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
assert(var_schema_generator_instance == NULL);
var_schema_generator_instance = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_core_schema);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 667;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MockCoreSchema);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 667;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 667;
type_description_1 = "oooooo";
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_core_schema);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter$$$function__18_json_schema->m_frame.f_lineno = 668;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_rebuild);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 668;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_core_schema);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 669;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_MockCoreSchema);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 669;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_f020844f8110b924dc42625d54666127;
frame_frame_pydantic$type_adapter$$$function__18_json_schema->m_frame.f_lineno = 669;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 669;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(var_schema_generator_instance);
tmp_expression_value_6 = var_schema_generator_instance;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_generate);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_core_schema);
if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 670;
type_description_1 = "oooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_mode);
tmp_kw_call_dict_value_0_1 = par_mode;
frame_frame_pydantic$type_adapter$$$function__18_json_schema->m_frame.f_lineno = 670;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_mode_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 670;
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__18_json_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__18_json_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__18_json_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__18_json_schema,
    type_description_1,
    par_self,
    par_by_alias,
    par_ref_template,
    par_schema_generator,
    par_mode,
    var_schema_generator_instance
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__18_json_schema == cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema);
    cache_frame_frame_pydantic$type_adapter$$$function__18_json_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__18_json_schema);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_schema_generator_instance);
CHECK_OBJECT(var_schema_generator_instance);
Py_DECREF(var_schema_generator_instance);
var_schema_generator_instance = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_schema_generator_instance);
var_schema_generator_instance = NULL;
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
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_ref_template);
Py_DECREF(par_ref_template);
CHECK_OBJECT(par_schema_generator);
Py_DECREF(par_schema_generator);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_ref_template);
Py_DECREF(par_ref_template);
CHECK_OBJECT(par_schema_generator);
Py_DECREF(par_schema_generator);
CHECK_OBJECT(par_mode);
Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$type_adapter$$$function__19_json_schemas(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_inputs = python_pars[0];
PyObject *par_by_alias = python_pars[1];
PyObject *par_title = python_pars[2];
PyObject *par_description = python_pars[3];
PyObject *par_ref_template = python_pars[4];
PyObject *par_schema_generator = python_pars[5];
PyObject *var_json_schema = NULL;
PyObject *var_schema_generator_instance = NULL;
PyObject *var_inputs_ = NULL;
PyObject *var_key = NULL;
PyObject *var_mode = NULL;
PyObject *var_adapter = NULL;
PyObject *var_json_schemas_map = NULL;
PyObject *var_definitions = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__element_3 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$function__19_json_schemas;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *tmp_dictset_value;
PyObject *tmp_dictset_dict;
PyObject *tmp_dictset_key;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas)) {
    Py_XDECREF(cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas = MAKE_FUNCTION_FRAME(tstate, code_objects_d4f72049aceea8a0eff7084391e20823, module_pydantic$type_adapter, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas->m_type_description == NULL);
frame_frame_pydantic$type_adapter$$$function__19_json_schemas = cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$function__19_json_schemas);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$function__19_json_schemas) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
CHECK_OBJECT(par_schema_generator);
tmp_called_value_1 = par_schema_generator;
CHECK_OBJECT(par_by_alias);
tmp_kw_call_value_0_1 = par_by_alias;
CHECK_OBJECT(par_ref_template);
tmp_kw_call_value_1_1 = par_ref_template;
frame_frame_pydantic$type_adapter$$$function__19_json_schemas->m_frame.f_lineno = 705;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_str_plain_by_alias_str_plain_ref_template_tuple);
}

if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 705;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_schema_generator_instance == NULL);
var_schema_generator_instance = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 0);
assert(var_inputs_ == NULL);
var_inputs_ = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(par_inputs);
tmp_iter_arg_1 = par_inputs;
tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
exception_lineno = 708;
        goto try_except_handler_2;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_iter_arg_2;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_3;
}
{
    PyObject *old = tmp_tuple_unpack_1__source_iter;
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_6 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_1;
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_7 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 3);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_2;
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_8 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 2, 3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_4;
}
{
    PyObject *old = tmp_tuple_unpack_1__element_3;
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 3);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 708;
type_description_1 = "oooooooooooooo";
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
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;
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
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
{
    PyObject *old = var_key;
    var_key = tmp_assign_source_9;
    Py_INCREF(var_key);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_10;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
{
    PyObject *old = var_mode;
    var_mode = tmp_assign_source_10;
    Py_INCREF(var_mode);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;
{
    PyObject *old = var_adapter;
    var_adapter = tmp_assign_source_11;
    Py_INCREF(var_adapter);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_1__element_3);
tmp_tuple_unpack_1__element_3 = NULL;

{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_adapter);
tmp_expression_value_1 = var_adapter;
tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_core_schema);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_2 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 710;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_MockCoreSchema);
if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 710;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
CHECK_OBJECT(tmp_isinstance_cls_1);
Py_DECREF(tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 710;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
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
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_call_result_1;
CHECK_OBJECT(var_adapter);
tmp_expression_value_3 = var_adapter;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_core_schema);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
frame_frame_pydantic$type_adapter$$$function__19_json_schemas->m_frame.f_lineno = 711;
tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_rebuild);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 711;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
bool tmp_condition_result_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_adapter);
tmp_expression_value_4 = var_adapter;
tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_core_schema);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_5 = module_var_accessor_pydantic$type_adapter$_mock_val_ser(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 712;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_MockCoreSchema);
if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 712;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
CHECK_OBJECT(tmp_isinstance_cls_2);
Py_DECREF(tmp_isinstance_cls_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 712;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}
tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_f020844f8110b924dc42625d54666127;
frame_frame_pydantic$type_adapter$$$function__19_json_schemas->m_frame.f_lineno = 712;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AssertionError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 712;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooooooooooooo";
goto try_except_handler_2;
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_list_arg_value_1;
PyObject *tmp_item_value_1;
PyObject *tmp_tuple_element_1;
if (var_inputs_ == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inputs_);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 715;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_2;
}

tmp_list_arg_value_1 = var_inputs_;
CHECK_OBJECT(var_key);
tmp_tuple_element_1 = var_key;
tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_6;
PyTuple_SET_ITEM0(tmp_item_value_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_mode);
tmp_tuple_element_1 = var_mode;
PyTuple_SET_ITEM0(tmp_item_value_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(var_adapter);
tmp_expression_value_6 = var_adapter;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_core_schema);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 715;
type_description_1 = "oooooooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_item_value_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_item_value_1);
goto try_except_handler_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
assert(!(tmp_result == false));
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 708;
type_description_1 = "oooooooooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_iter_arg_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_schema_generator_instance);
tmp_expression_value_7 = var_schema_generator_instance;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_generate_definitions);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
if (var_inputs_ == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_inputs_);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 717;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_1 = var_inputs_;
frame_frame_pydantic$type_adapter$$$function__19_json_schemas->m_frame.f_lineno = 717;
tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_iter_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
CHECK_OBJECT(tmp_iter_arg_3);
Py_DECREF(tmp_iter_arg_3);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 717;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_5;
}
assert(tmp_tuple_unpack_2__source_iter == NULL);
tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_13 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 0, 2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 717;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_1 == NULL);
tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 1, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 717;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
assert(tmp_tuple_unpack_2__element_2 == NULL);
tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
}
{
PyObject *tmp_iterator_name_2;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_2, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 717;
type_description_1 = "oooooooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_5;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_5:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
assert(var_json_schemas_map == NULL);
Py_INCREF(tmp_assign_source_15);
var_json_schemas_map = tmp_assign_source_15;
}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
assert(var_definitions == NULL);
Py_INCREF(tmp_assign_source_16);
var_definitions = tmp_assign_source_16;
}
Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
PyObject *tmp_assign_source_17;
tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
assert(var_json_schema == NULL);
var_json_schema = tmp_assign_source_17;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
CHECK_OBJECT(var_definitions);
tmp_truth_name_1 = CHECK_IF_TRUE(var_definitions);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 720;
type_description_1 = "oooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(var_definitions);
tmp_dictset_value = var_definitions;
CHECK_OBJECT(var_json_schema);
tmp_dictset_dict = var_json_schema;
tmp_dictset_key = mod_consts.const_str_digest_59c05edaddbb3847eda2f4057a659d50;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_title);
tmp_truth_name_2 = CHECK_IF_TRUE(par_title);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 722;
type_description_1 = "oooooooooooooo";
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
CHECK_OBJECT(par_title);
tmp_dictset_value = par_title;
CHECK_OBJECT(var_json_schema);
tmp_dictset_dict = var_json_schema;
tmp_dictset_key = mod_consts.const_str_plain_title;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_3;
CHECK_OBJECT(par_description);
tmp_truth_name_3 = CHECK_IF_TRUE(par_description);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 724;
type_description_1 = "oooooooooooooo";
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
CHECK_OBJECT(par_description);
tmp_dictset_value = par_description;
CHECK_OBJECT(var_json_schema);
tmp_dictset_dict = var_json_schema;
tmp_dictset_key = mod_consts.const_str_plain_description;
assert(PyDict_CheckExact(tmp_dictset_dict));
tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

assert(!(tmp_res != 0));
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$function__19_json_schemas, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$function__19_json_schemas->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$function__19_json_schemas, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$function__19_json_schemas,
    type_description_1,
    par_inputs,
    par_by_alias,
    par_title,
    par_description,
    par_ref_template,
    par_schema_generator,
    var_json_schema,
    var_schema_generator_instance,
    var_inputs_,
    var_key,
    var_mode,
    var_adapter,
    var_json_schemas_map,
    var_definitions
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$type_adapter$$$function__19_json_schemas == cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas);
    cache_frame_frame_pydantic$type_adapter$$$function__19_json_schemas = NULL;
}

assertFrameObject(frame_frame_pydantic$type_adapter$$$function__19_json_schemas);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_json_schemas_map);
tmp_tuple_element_2 = var_json_schemas_map;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_json_schema);
tmp_tuple_element_2 = var_json_schema;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_json_schema);
CHECK_OBJECT(var_json_schema);
Py_DECREF(var_json_schema);
var_json_schema = NULL;
CHECK_OBJECT(var_schema_generator_instance);
CHECK_OBJECT(var_schema_generator_instance);
Py_DECREF(var_schema_generator_instance);
var_schema_generator_instance = NULL;
Py_XDECREF(var_inputs_);
var_inputs_ = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
Py_XDECREF(var_adapter);
var_adapter = NULL;
CHECK_OBJECT(var_json_schemas_map);
CHECK_OBJECT(var_json_schemas_map);
Py_DECREF(var_json_schemas_map);
var_json_schemas_map = NULL;
CHECK_OBJECT(var_definitions);
CHECK_OBJECT(var_definitions);
Py_DECREF(var_definitions);
var_definitions = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_json_schema);
var_json_schema = NULL;
Py_XDECREF(var_schema_generator_instance);
var_schema_generator_instance = NULL;
Py_XDECREF(var_inputs_);
var_inputs_ = NULL;
Py_XDECREF(var_key);
var_key = NULL;
Py_XDECREF(var_mode);
var_mode = NULL;
Py_XDECREF(var_adapter);
var_adapter = NULL;
Py_XDECREF(var_json_schemas_map);
var_json_schemas_map = NULL;
Py_XDECREF(var_definitions);
var_definitions = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_inputs);
Py_DECREF(par_inputs);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_ref_template);
Py_DECREF(par_ref_template);
CHECK_OBJECT(par_schema_generator);
Py_DECREF(par_schema_generator);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_inputs);
Py_DECREF(par_inputs);
CHECK_OBJECT(par_by_alias);
Py_DECREF(par_by_alias);
CHECK_OBJECT(par_title);
Py_DECREF(par_title);
CHECK_OBJECT(par_description);
Py_DECREF(par_description);
CHECK_OBJECT(par_ref_template);
Py_DECREF(par_ref_template);
CHECK_OBJECT(par_schema_generator);
Py_DECREF(par_schema_generator);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__10___repr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__10___repr__,
        mod_consts.const_str_plain___repr__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c08cf4c0e064f257c47e078eef5921d0,
#endif
        code_objects_6772c77383bac47fcae6c8a3b791c82f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$type_adapter,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__11_rebuild(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__11_rebuild,
        mod_consts.const_str_plain_rebuild,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b7b10bd8c6cd21ba73e8e659e40270de,
#endif
        code_objects_745c846000763d659ac06fe36451b4d0,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_2fbb4517aeda77321d3006005e4913fa,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__12_validate_python(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__12_validate_python,
        mod_consts.const_str_plain_validate_python,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b8b05f482177a6e54beb98ba0890a4cd,
#endif
        code_objects_7c160913d968b8ac8d5a7f0538ef81ec,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_c4b3a3b036ff1dfdc2e185aba5329cb6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__13_validate_json(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__13_validate_json,
        mod_consts.const_str_plain_validate_json,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4852504d7a19f68bd4cd3e470200fd01,
#endif
        code_objects_f8d63cae1169008eaeb8b7b36439c46f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_154d0a0196fd7581173b871163176987,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__14_validate_strings(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__14_validate_strings,
        mod_consts.const_str_plain_validate_strings,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0f7e77033b1bb1102e2acf3ae2b8bb1e,
#endif
        code_objects_03efa68026e11437fe3163c249f1f563,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_2ad0e02c6eb883801661a2fe6b8985f2,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__15_get_default_value(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__15_get_default_value,
        mod_consts.const_str_plain_get_default_value,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1f5792db1b72d0057e63e89f8f224a46,
#endif
        code_objects_0cd0f8ad5df92491a76205d830ac35b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_76c8aade4a87f7abbfca00766b2066a6,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__16_dump_python(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__16_dump_python,
        mod_consts.const_str_plain_dump_python,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9cc83e05ac17aa67024e3261c9c23122,
#endif
        code_objects_285f4ae52740fca6c020262d0561004c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_03bb94f7e90b9f36bc58ef8160b45a87,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__17_dump_json(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__17_dump_json,
        mod_consts.const_str_plain_dump_json,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_504b3378b24442fbafc319eec2857efb,
#endif
        code_objects_7bdfa7cac04d1ecee3ebb9e64341eb88,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_3c461806467a40b4591fb53214250b8a,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__18_json_schema(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__18_json_schema,
        mod_consts.const_str_plain_json_schema,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1c7bba4fe59d7bcc26d2ae7f2b3ab571,
#endif
        code_objects_8b68a3e6f93cf397fb5267e044683aa7,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_557c329c5177b4e71af5b06ec026ec02,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__19_json_schemas(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__19_json_schemas,
        mod_consts.const_str_plain_json_schemas,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_450c5743a3227fb51c8200495e9c9830,
#endif
        code_objects_d4f72049aceea8a0eff7084391e20823,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_389290bad2ab5068c2abfc5449b95ad8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__1__getattr_no_parents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__1__getattr_no_parents,
        mod_consts.const_str_plain__getattr_no_parents,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_cbd5e92366b56f5f72138b6e8c77744b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_023a4678ee2d538403282720b79c3993,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__2__type_has_config(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__2__type_has_config,
        mod_consts.const_str_plain__type_has_config,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5ddf3021accdf609ccfb61868f67e145,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_1b31978120b6a44f2065c3f27dfc89ad,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__3___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0,
#endif
        code_objects_429f01de0a044713dd1ea24bfb4ace9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__4___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0,
#endif
        code_objects_9b2e346d99a5a435c90eb52b21f98270,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_531601d87498dc44ddfe784c4b6831a0,
#endif
        code_objects_0bad8fb1c73bcd58329966cfe8a64cb6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$type_adapter,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__6__fetch_parent_frame(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__6__fetch_parent_frame,
        mod_consts.const_str_plain__fetch_parent_frame,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c2bb08aad89c1b444eabad809cda33e,
#endif
        code_objects_85dbbcd59b954e978d7dd71ef54c6dfe,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$type_adapter,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__7__init_core_attrs(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__7__init_core_attrs,
        mod_consts.const_str_plain__init_core_attrs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c52134f3159b5ee94b4a933ef46286b4,
#endif
        code_objects_0c678c0bf6f02cc046c37f130e6ba8ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$type_adapter,
        mod_consts.const_str_digest_b993496fd016dd8f8efe74ec72cf4d7b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__8__defer_build(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__8__defer_build,
        mod_consts.const_str_plain__defer_build,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_db22543c93dfc4527a4b2fcbe3e1d911,
#endif
        code_objects_a312ada46392ac948a3ad16c1ea5cac4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$type_adapter,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$type_adapter$$$function__9__model_config(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$type_adapter$$$function__9__model_config,
        mod_consts.const_str_plain__model_config,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3752d502f83834cb6801b800c3d294bd,
#endif
        code_objects_47a42e7edbfae0b03c81fff250ff298d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$type_adapter,
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

static function_impl_code const function_table_pydantic$type_adapter[] = {
impl_pydantic$type_adapter$$$function__1__getattr_no_parents,
impl_pydantic$type_adapter$$$function__2__type_has_config,
impl_pydantic$type_adapter$$$function__5___init__,
impl_pydantic$type_adapter$$$function__6__fetch_parent_frame,
impl_pydantic$type_adapter$$$function__7__init_core_attrs,
impl_pydantic$type_adapter$$$function__8__defer_build,
impl_pydantic$type_adapter$$$function__9__model_config,
impl_pydantic$type_adapter$$$function__10___repr__,
impl_pydantic$type_adapter$$$function__11_rebuild,
impl_pydantic$type_adapter$$$function__12_validate_python,
impl_pydantic$type_adapter$$$function__13_validate_json,
impl_pydantic$type_adapter$$$function__14_validate_strings,
impl_pydantic$type_adapter$$$function__15_get_default_value,
impl_pydantic$type_adapter$$$function__16_dump_python,
impl_pydantic$type_adapter$$$function__17_dump_json,
impl_pydantic$type_adapter$$$function__18_json_schema,
impl_pydantic$type_adapter$$$function__19_json_schemas,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$type_adapter);
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
        module_pydantic$type_adapter,
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
        function_table_pydantic$type_adapter,
        sizeof(function_table_pydantic$type_adapter) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic.type_adapter";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$type_adapter(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$type_adapter");

    // Store the module for future use.
    module_pydantic$type_adapter = module;

    moduledict_pydantic$type_adapter = MODULE_DICT(module_pydantic$type_adapter);

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
        PRINT_STRING("pydantic$type_adapter: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$type_adapter: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$type_adapter: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.type_adapter" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$type_adapter\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$type_adapter,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$type_adapter,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$type_adapter,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$type_adapter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$type_adapter,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$type_adapter);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$type_adapter);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter;
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
PyObject *locals_pydantic$type_adapter$$$class__1_TypeAdapter_69 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_24fa49613587e5aad5fcc0a88bcf9572;
UPDATE_STRING_DICT0(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$type_adapter = MAKE_MODULE_FRAME(code_objects_02cea62a5a9f6d94ccc7bdd1197d60c9, module_pydantic$type_adapter);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$type_adapter$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$type_adapter$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_SYS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_sys, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$type_adapter;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Callable_str_plain_Iterable_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 6;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
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
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_7);
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
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_Iterable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Iterable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Iterable, tmp_assign_source_8);
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
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$type_adapter;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_is_dataclass_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_is_dataclass,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_is_dataclass);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_dataclass, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_4;
tmp_import_name_from_4 = IMPORT_HARD_TYPES();
assert(!(tmp_import_name_from_4 == NULL));
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_FrameType,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_FrameType);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_FrameType, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_6 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_Generic,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Generic);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Generic, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_7 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_14);
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
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_15);
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
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_final,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_final);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_final, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_18);
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
PyObject *tmp_assign_source_19;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 19;
tmp_assign_source_19 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic_core, mod_consts.const_str_plain_pydantic_core);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_CoreSchema,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_CoreSchema);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_CoreSchema, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_SchemaSerializer,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_SchemaSerializer);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_SchemaValidator,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_SchemaValidator);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaValidator, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_Some,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_Some);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_Some, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$type_adapter;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ParamSpec_str_plain_is_typeddict_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 20;
tmp_assign_source_24 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_ParamSpec,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ParamSpec);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_ParamSpec, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_is_typeddict,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_is_typeddict);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_is_typeddict, tmp_assign_source_26);
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
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_18;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 22;
tmp_import_name_from_18 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_PydanticUserError,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_PydanticUserError);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUserError, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 23;
tmp_assign_source_28 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0, mod_consts.const_str_digest_bfe4d764d81ba66d1179fc365f01bcb0);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_28;
}
// Tried code:
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_BaseModel);
}

if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_20 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_IncEx,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_IncEx);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_IncEx, tmp_assign_source_30);
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
PyObject *tmp_assign_source_31;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__internal;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$type_adapter;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_e637bdb1eba3562adc392272efa68bf5_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 25;
tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_31;
}
// Tried code:
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_21 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain__config,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain__config);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__config, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_22 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain__generate_schema,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain__generate_schema);
}

if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__generate_schema, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_23 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain__mock_val_ser,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain__mock_val_ser);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__mock_val_ser, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_24 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain__namespace_utils,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain__namespace_utils);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__namespace_utils, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_25 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain__repr,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain__repr);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__repr, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_26 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain__typing_extra,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain__typing_extra);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__typing_extra, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_27 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain__utils,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain__utils);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__utils, tmp_assign_source_38);
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
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_28;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 26;
tmp_import_name_from_28 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049, mod_consts.const_str_digest_d3c31fdf52e4c9bcb4f80d1bc4c8b049);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_ConfigDict,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ConfigDict);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_ConfigDict, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_29;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 27;
tmp_import_name_from_29 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_PydanticUndefinedAnnotation,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_PydanticUndefinedAnnotation);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 28;
tmp_assign_source_41 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_f13a85cba97af2c60e7ad0e824f76c34, mod_consts.const_str_digest_f13a85cba97af2c60e7ad0e824f76c34);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_41;
}
// Tried code:
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_30 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_31 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_GenerateJsonSchema,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_GenerateJsonSchema);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateJsonSchema, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_32 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_JsonSchemaKeyT,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_JsonSchemaKeyT);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_JsonSchemaKeyT, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_33 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_JsonSchemaMode,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_JsonSchemaMode);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_JsonSchemaMode, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_34 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_JsonSchemaValue,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_JsonSchemaValue);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_JsonSchemaValue, tmp_assign_source_46);
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
PyObject *tmp_assign_source_47;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pydantic$type_adapter;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 35;
tmp_assign_source_47 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_47;
}
// Tried code:
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_35 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_PluggableSchemaValidator,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_PluggableSchemaValidator);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_PluggableSchemaValidator, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_36 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_pydantic$type_adapter,
        mod_consts.const_str_plain_create_schema_validator,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_create_schema_validator);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator, tmp_assign_source_49);
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
{
PyObject *tmp_assign_source_50;
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$type_adapter$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 37;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 37;
tmp_assign_source_50 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_T_tuple);

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_T, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_2;
tmp_called_value_2 = module_var_accessor_pydantic$type_adapter$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 38;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 38;
tmp_assign_source_51 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_R_tuple);

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_R, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$type_adapter$ParamSpec(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ParamSpec);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 39;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 39;
tmp_assign_source_52 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_P_tuple);

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_P, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_pydantic$type_adapter$TypeVar(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 40;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 40;
tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_TypeAdapterT_str_plain_TypeAdapter_tuple, 0), mod_consts.const_tuple_str_plain_bound_tuple);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAdapterT, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_2d42a436658aa88f36b2cb87df748ac4);

tmp_assign_source_54 = MAKE_FUNCTION_pydantic$type_adapter$$$function__1__getattr_no_parents(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_no_parents, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_ba06c6b257c927e8181558588102f426);

tmp_assign_source_55 = MAKE_FUNCTION_pydantic$type_adapter$$$function__2__type_has_config(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain__type_has_config, tmp_assign_source_55);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_56;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_pydantic$type_adapter$Generic(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Generic);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_subscript_value_1 = module_var_accessor_pydantic$type_adapter$T(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_T);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_assign_source_56 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_56, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_57 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_58;
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_2 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_59 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_59;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_condition_result_2 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_TypeAdapter;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 69;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_60;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_5 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_3 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_name_value_6;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_6 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_6 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_6, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_7;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

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


exception_lineno = 69;

    goto try_except_handler_9;
}
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 69;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 69;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_9;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_61;
}
branch_end_1:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
tmp_called_value_6 = module_var_accessor_pydantic$type_adapter$final(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_final);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto try_except_handler_9;
}
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pydantic$type_adapter$$$class__1_TypeAdapter_69 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_a307387df849d578a05ee5d589f9d451;
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_digest_081feeca920da4c163b4b540fbb8aa69;
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_str_plain_TypeAdapter;
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
tmp_dictset_value = mod_consts.const_int_pos_69;
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2 = MAKE_CLASS_FRAME(tstate, code_objects_f1f9c83b5713fdd98db367856a88f124, module_pydantic$type_adapter, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2);
assert(Py_REFCNT(frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_plain_CoreSchema;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_core_schema;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_f85fc960bcde9ef003cffcf1c7d48185;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_validator;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_plain_SchemaSerializer;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_serializer;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_plain_bool;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_pydantic_complete;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_3;
tmp_called_value_7 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_overload);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_pydantic$type_adapter$overload(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_174fb8220b8d33ab8b1131aeefe7eb80);
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_509583307b1f5abd56e241d1a45e2988);

tmp_args_element_value_2 = MAKE_FUNCTION_pydantic$type_adapter$$$function__3___init__(tstate, tmp_kw_defaults_1, tmp_annotations_3);

frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2->m_frame.f_lineno = 172;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_annotations_4;
tmp_called_value_8 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_overload);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_pydantic$type_adapter$overload(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts.const_dict_174fb8220b8d33ab8b1131aeefe7eb80);
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_840dbddf407faadba9b1e63d438594c8);

tmp_args_element_value_3 = MAKE_FUNCTION_pydantic$type_adapter$$$function__4___init__(tstate, tmp_kw_defaults_2, tmp_annotations_4);

frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2->m_frame.f_lineno = 185;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_annotations_5;
tmp_kw_defaults_3 = DICT_COPY(tstate, mod_consts.const_dict_bb05073d982dae641527455df13833f0);
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_840dbddf407faadba9b1e63d438594c8);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__5___init__(tstate, tmp_kw_defaults_3, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_a0f09ac960c7aa04bcd587d04d14b9b0);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__6__fetch_parent_frame(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain__fetch_parent_frame, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_7;
tmp_defaults_1 = mod_consts.const_tuple_false_tuple;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_022afee94ce1650a80efbc8963c707c7);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__7__init_core_attrs(tstate, tmp_defaults_1, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain__init_core_attrs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_8;
tmp_called_value_9 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_args_element_value_4 = MAKE_FUNCTION_pydantic$type_adapter$$$function__8__defer_build(tstate, tmp_annotations_8);

frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2->m_frame.f_lineno = 318;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain__defer_build, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_9;
tmp_called_value_10 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_property);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_8c5abb62a67e9d96898d89a1ea87b967);

tmp_args_element_value_5 = MAKE_FUNCTION_pydantic$type_adapter$$$function__9__model_config(tstate, tmp_annotations_9);

frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2->m_frame.f_lineno = 325;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain__model_config, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__10___repr__(tstate, tmp_annotations_10);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain___repr__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_annotations_11;
tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts.const_dict_c519626931c756ed606086fe90eaccbd);
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_566e6bd45432957c1a70fa9a97e4b39a);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__11_rebuild(tstate, tmp_kw_defaults_4, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_rebuild, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_5;
PyObject *tmp_annotations_12;
tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts.const_dict_85eeeb84df5effe57884ef33f3a6f30a);
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_39091c74643d2b170aa46c481cd17cf6);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__12_validate_python(tstate, tmp_kw_defaults_5, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_validate_python, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_6;
PyObject *tmp_annotations_13;
tmp_kw_defaults_6 = DICT_COPY(tstate, mod_consts.const_dict_77693ee4e5c3fedeeea53bbfc6cfcd00);
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_41e53a28fdd5fb75614d093f38361329);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__13_validate_json(tstate, tmp_kw_defaults_6, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_validate_json, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_7;
PyObject *tmp_annotations_14;
tmp_kw_defaults_7 = DICT_COPY(tstate, mod_consts.const_dict_77693ee4e5c3fedeeea53bbfc6cfcd00);
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_c2fac31c48ff1590fdbb7f42959a2563);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__14_validate_strings(tstate, tmp_kw_defaults_7, tmp_annotations_14);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_validate_strings, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_8;
PyObject *tmp_annotations_15;
tmp_kw_defaults_8 = DICT_COPY(tstate, mod_consts.const_dict_4dbd09c49b994c5831e1b9de7ca19834);
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_86d454c361118071ef72e00012041e57);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__15_get_default_value(tstate, tmp_kw_defaults_8, tmp_annotations_15);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_get_default_value, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_9;
PyObject *tmp_annotations_16;
tmp_kw_defaults_9 = DICT_COPY(tstate, mod_consts.const_dict_6a5d2481b13ebaaac312be1a6ed736b2);
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_d8c2bd85652be7cd8681e2f987eb1db5);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__16_dump_python(tstate, tmp_kw_defaults_9, tmp_annotations_16);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_dump_python, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_10;
PyObject *tmp_annotations_17;
tmp_kw_defaults_10 = DICT_COPY(tstate, mod_consts.const_dict_c5920bc2dc59237f4b3215030b3e67dd);
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_3bc9db2f3bcf5c61938284b1a5dba25b);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__17_dump_json(tstate, tmp_kw_defaults_10, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_dump_json, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_11;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_18;
tmp_dict_key_1 = mod_consts.const_str_plain_by_alias;
tmp_dict_value_1 = Py_True;
tmp_kw_defaults_11 = _PyDict_NewPresized( 4 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ref_template;
tmp_dict_value_1 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_pydantic$type_adapter$DEFAULT_REF_TEMPLATE(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 651;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_schema_generator;
tmp_dict_value_1 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_GenerateJsonSchema);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_pydantic$type_adapter$GenerateJsonSchema(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GenerateJsonSchema);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 652;
type_description_2 = "o";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_mode;
tmp_dict_value_1 = mod_consts.const_str_plain_validation;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_11);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_5481eba61811b93e3ce28b3964f0ba23);

tmp_dictset_value = MAKE_FUNCTION_pydantic$type_adapter$$$function__18_json_schema(tstate, tmp_kw_defaults_11, tmp_annotations_18);

tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_json_schema, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 647;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_defaults_12;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_19;
tmp_called_value_11 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, const_str_plain_staticmethod);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyStaticMethod_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_dict_key_2 = mod_consts.const_str_plain_by_alias;
tmp_dict_value_2 = Py_True;
tmp_kw_defaults_12 = _PyDict_NewPresized( 5 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_title;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_description;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_ref_template;
tmp_dict_value_2 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_pydantic$type_adapter$DEFAULT_REF_TEMPLATE(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_REF_TEMPLATE);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 680;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_schema_generator;
tmp_dict_value_2 = PyObject_GetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_GenerateJsonSchema);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_pydantic$type_adapter$GenerateJsonSchema(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GenerateJsonSchema);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 681;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_12, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_defaults_12);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_2398de17715f31ccd710e1a52d0c0575);

tmp_args_element_value_6 = MAKE_FUNCTION_pydantic$type_adapter$$$function__19_json_schemas(tstate, tmp_kw_defaults_12, tmp_annotations_19);

frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2->m_frame.f_lineno = 672;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain_json_schemas, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_2:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pydantic$type_adapter$$$class__1_TypeAdapter_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_11;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_9926c4b7784196096235db5d63f0a504_tuple;
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_1 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_1 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
branch_no_3:;
{
PyObject *tmp_assign_source_63;
PyObject *tmp_called_value_12;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_12 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_TypeAdapter;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_pydantic$type_adapter$$$class__1_TypeAdapter_69;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 69;
tmp_assign_source_63 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_11;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_63;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_args_element_value_1 = outline_0_var___class__;
Py_INCREF(tmp_args_element_value_1);
goto try_return_handler_11;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
Py_DECREF(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69);
locals_pydantic$type_adapter$$$class__1_TypeAdapter_69 = NULL;
goto try_return_handler_10;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pydantic$type_adapter$$$class__1_TypeAdapter_69);
locals_pydantic$type_adapter$$$class__1_TypeAdapter_69 = NULL;
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
exception_lineno = 69;
goto try_except_handler_9;
outline_result_2:;
frame_frame_pydantic$type_adapter->m_frame.f_lineno = 68;
tmp_assign_source_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAdapter, tmp_assign_source_62);
}
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
tmp_class_container$class_creation_1__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
Py_DECREF(tmp_class_container$class_creation_1__bases);
tmp_class_container$class_creation_1__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
Py_DECREF(tmp_class_container$class_creation_1__metaclass);
tmp_class_container$class_creation_1__metaclass = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
tmp_outline_return_value_1 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_1);
goto outline_result_1;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
CHECK_OBJECT(tmp_outline_return_value_1);
Py_DECREF(tmp_outline_return_value_1);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$type_adapter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$type_adapter->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$type_adapter, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$type_adapter);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$type_adapter", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic.type_adapter" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$type_adapter);
    return module_pydantic$type_adapter;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$type_adapter, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$type_adapter", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

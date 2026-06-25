/* Generated code for Python module 'pydantic$_internal$_dataclasses'
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



/* The "module_pydantic$_internal$_dataclasses" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$_internal$_dataclasses;
PyDictObject *moduledict_pydantic$_internal$_dataclasses;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_get_standard_typevars_map;
PyObject *const_str_plain_collect_dataclass_fields;
PyObject *const_tuple_b3c62154630d7c396bdd7ca0a6663bdf_tuple;
PyObject *const_str_plain___pydantic_fields__;
PyObject *const_str_digest_ef46af15c726be259730251d31d8817b;
PyObject *const_dict_e730bdec7fbefbebc3049eefa7c26a6b;
PyObject *const_str_digest_bbb6c2d3f590f59ebd1e358c80148126;
PyObject *const_str_plain___qualname__;
PyObject *const_str_digest_60fdb6517d4d9b4d3bef7a5fec932bfc;
PyObject *const_str_plain_config_dict;
PyObject *const_str_plain___pydantic_config__;
PyObject *const_str_plain_set_dataclass_fields;
PyObject *const_tuple_str_plain_config_wrapper_tuple;
PyObject *const_str_plain_defer_build;
PyObject *const_str_plain_set_dataclass_mocks;
PyObject *const_str_plain___post_init_post_parse__;
PyObject *const_str_plain_warnings;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_c55e20c031990fed866c1b6bbefef09f;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_str_plain_GenerateSchema;
PyObject *const_tuple_str_plain_ns_resolver_str_plain_typevars_map_tuple;
PyObject *const_str_plain_LazyClassAttribute;
PyObject *const_str_plain___signature__;
PyObject *const_str_plain_partial;
PyObject *const_str_plain_generate_pydantic_signature;
PyObject *const_str_plain_validate_by_name;
PyObject *const_str_plain_extra;
PyObject *const_tuple_6e846c1e98defd0f68eeb5d8fa6d8f9a_tuple;
PyObject *const_str_plain_generate_schema;
PyObject *const_str_plain_PydanticUndefinedAnnotation;
PyObject *const_str_chr_96;
PyObject *const_str_plain_core_config;
PyObject *const_tuple_str_plain_title_tuple;
PyObject *const_str_plain_clean_schema;
PyObject *const_str_plain_InvalidSchemaError;
PyObject *const_str_plain_cast;
PyObject *const_str_digest_5d6306d3c9fa006e783e0bc76c921bb2;
PyObject *const_str_plain___pydantic_core_schema__;
PyObject *const_str_plain_create_schema_validator;
PyObject *const_str_plain_dataclass;
PyObject *const_str_plain_plugin_settings;
PyObject *const_str_plain___pydantic_validator__;
PyObject *const_str_plain_SchemaSerializer;
PyObject *const_str_plain___pydantic_serializer__;
PyObject *const_str_plain_validate_assignment;
PyObject *const_str_plain_wraps;
PyObject *const_str_plain___setattr__;
PyObject *const_dict_714240e1711b5baceff6a1c89a1d9d7c;
PyObject *const_str_plain_validated_setattr;
PyObject *const_str_digest_4ff8e2e5e11f2abdf5c1a226a0b99cdd;
PyObject *const_str_plain___get__;
PyObject *const_str_plain___pydantic_complete__;
PyObject *const_str_digest_fd9455af14894f012822a4ceefaf4cfd;
PyObject *const_str_plain_validate_python;
PyObject *const_str_plain_ArgsKwargs;
PyObject *const_tuple_str_plain_self_instance_tuple;
PyObject *const_str_plain_validator;
PyObject *const_str_plain_dataclasses;
PyObject *const_str_plain_is_dataclass;
PyObject *const_str_plain___dataclass_fields__;
PyObject *const_str_plain_issuperset;
PyObject *const_str_digest_a777755bfc5ab0987f302582afdc3c4a;
PyObject *const_str_digest_0ad372711b209fadf6b0d875c5314cad;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain__annotations;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_ClassVar;
PyObject *const_str_plain_pydantic_core;
PyObject *const_str_plain_SchemaValidator;
PyObject *const_str_digest_3be1977a43d6fc92a01e1adc500d16b3;
PyObject *const_str_plain_core_schema;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_TypeGuard_tuple;
PyObject *const_str_plain_TypeGuard;
PyObject *const_str_digest_93451e65d1b5351f1a776493e6ffe27f;
PyObject *const_str_digest_17d2827b063ac26087eec8ff06bda53a;
PyObject *const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_PluggableSchemaValidator;
PyObject *const_str_digest_c19110e962cc33b179db397d44e7edf4;
PyObject *const_str_plain_PydanticDeprecatedSince20;
PyObject *const_tuple_str_plain__config_str_plain__decorators_tuple;
PyObject *const_str_plain__config;
PyObject *const_str_plain__decorators;
PyObject *const_str_plain__fields;
PyObject *const_tuple_str_plain_collect_dataclass_fields_tuple;
PyObject *const_str_digest_56bdcd58f20cca9b95306027a6dce33f;
PyObject *const_str_plain__generics;
PyObject *const_tuple_str_plain_get_standard_typevars_map_tuple;
PyObject *const_str_plain__mock_val_ser;
PyObject *const_tuple_str_plain_set_dataclass_mocks_tuple;
PyObject *const_str_plain__namespace_utils;
PyObject *const_tuple_str_plain_NsResolver_tuple;
PyObject *const_str_plain_NsResolver;
PyObject *const_str_plain__signature;
PyObject *const_tuple_str_plain_generate_pydantic_signature_tuple;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_LazyClassAttribute_tuple;
PyObject *const_tuple_none_none_tuple;
PyObject *const_dict_a9a5ba3b2d98bfd79fe98dbe1ccd48c8;
PyObject *const_dict_ae1938a2e86e44990f3c86b6e5979cfb;
PyObject *const_dict_a2c8e07b2fe4c89fb55483a2da789ad2;
PyObject *const_str_plain_complete_dataclass;
PyObject *const_dict_6d183a2a32f86ae3cd728130365f7dea;
PyObject *const_str_plain_is_builtin_dataclass;
PyObject *const_str_digest_cc38cf1d1a32bfd5ad76f84f6dff1987;
PyObject *const_str_digest_4732208a96536dfef57c32ef79461614;
PyObject *const_tuple_c33bbcd838ab2e592db08e559b010db1_tuple;
PyObject *const_tuple_0665e254da8eb27bb62ec318438b92ab_tuple;
PyObject *const_tuple_str_plain__cls_tuple;
PyObject *const_tuple_76e8dd99aa608f43b3b5d6810327e891_tuple;
PyObject *const_tuple_ebbe7d4ed8068fa8c20c07b3cbab20ac_tuple;
PyObject *const_tuple_str_plain_validator_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[117];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic._internal._dataclasses"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_standard_typevars_map);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_collect_dataclass_fields);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_b3c62154630d7c396bdd7ca0a6663bdf_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_fields__);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_ef46af15c726be259730251d31d8817b);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_dict_e730bdec7fbefbebc3049eefa7c26a6b);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_bbb6c2d3f590f59ebd1e358c80148126);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_60fdb6517d4d9b4d3bef7a5fec932bfc);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_config_dict);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_config__);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_dataclass_fields);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_wrapper_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_defer_build);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_dataclass_mocks);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain___post_init_post_parse__);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_c55e20c031990fed866c1b6bbefef09f);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateSchema);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_typevars_map_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_LazyClassAttribute);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain___signature__);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_pydantic_signature);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_by_name);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_6e846c1e98defd0f68eeb5d8fa6d8f9a_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_schema);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefinedAnnotation);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_chr_96);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_core_config);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_clean_schema);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchemaError);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d6306d3c9fa006e783e0bc76c921bb2);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_schema__);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_schema_validator);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_plugin_settings);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_validator__);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaSerializer);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_serializer__);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_assignment);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_wraps);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_dict_714240e1711b5baceff6a1c89a1d9d7c);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_validated_setattr);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ff8e2e5e11f2abdf5c1a226a0b99cdd);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain___get__);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_complete__);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_fd9455af14894f012822a4ceefaf4cfd);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_python);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ArgsKwargs);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_instance_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_validator);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass_fields__);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_issuperset);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_a777755bfc5ab0987f302582afdc3c4a);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_0ad372711b209fadf6b0d875c5314cad);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__annotations);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaValidator);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeGuard_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_PluggableSchemaValidator);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince20);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__config_str_plain__decorators_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain__config);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__decorators);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain__fields);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_collect_dataclass_fields_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_digest_56bdcd58f20cca9b95306027a6dce33f);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain__generics);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_standard_typevars_map_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain__mock_val_ser);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_dataclass_mocks_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain__namespace_utils);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NsResolver_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_NsResolver);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain__signature);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_generate_pydantic_signature_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LazyClassAttribute_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_dict_a9a5ba3b2d98bfd79fe98dbe1ccd48c8);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_dict_ae1938a2e86e44990f3c86b6e5979cfb);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_dict_a2c8e07b2fe4c89fb55483a2da789ad2);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_complete_dataclass);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_dict_6d183a2a32f86ae3cd728130365f7dea);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_builtin_dataclass);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_cc38cf1d1a32bfd5ad76f84f6dff1987);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_4732208a96536dfef57c32ef79461614);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_c33bbcd838ab2e592db08e559b010db1_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_0665e254da8eb27bb62ec318438b92ab_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cls_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_76e8dd99aa608f43b3b5d6810327e891_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_ebbe7d4ed8068fa8c20c07b3cbab20ac_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validator_tuple);
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
void checkModuleConstants_pydantic$_internal$_dataclasses(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_standard_typevars_map));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_standard_typevars_map);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_collect_dataclass_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_collect_dataclass_fields);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_b3c62154630d7c396bdd7ca0a6663bdf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b3c62154630d7c396bdd7ca0a6663bdf_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_fields__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_fields__);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_ef46af15c726be259730251d31d8817b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ef46af15c726be259730251d31d8817b);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_dict_e730bdec7fbefbebc3049eefa7c26a6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e730bdec7fbefbebc3049eefa7c26a6b);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_bbb6c2d3f590f59ebd1e358c80148126));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bbb6c2d3f590f59ebd1e358c80148126);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_60fdb6517d4d9b4d3bef7a5fec932bfc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_60fdb6517d4d9b4d3bef7a5fec932bfc);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_config_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config_dict);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_config__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_config__);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_dataclass_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_dataclass_fields);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_config_wrapper_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_config_wrapper_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_defer_build));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defer_build);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_dataclass_mocks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_dataclass_mocks);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain___post_init_post_parse__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___post_init_post_parse__);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_c55e20c031990fed866c1b6bbefef09f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c55e20c031990fed866c1b6bbefef09f);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenerateSchema);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_typevars_map_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ns_resolver_str_plain_typevars_map_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_LazyClassAttribute));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LazyClassAttribute);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain___signature__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___signature__);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_pydantic_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_pydantic_signature);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_by_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_by_name);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_6e846c1e98defd0f68eeb5d8fa6d8f9a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6e846c1e98defd0f68eeb5d8fa6d8f9a_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_schema);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefinedAnnotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticUndefinedAnnotation);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_chr_96));
CHECK_OBJECT_DEEP(mod_consts.const_str_chr_96);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_core_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core_config);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_title_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_title_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_clean_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clean_schema);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidSchemaError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidSchemaError);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d6306d3c9fa006e783e0bc76c921bb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d6306d3c9fa006e783e0bc76c921bb2);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_core_schema__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_core_schema__);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_schema_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_schema_validator);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclass);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_plugin_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_plugin_settings);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_validator__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_validator__);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaSerializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SchemaSerializer);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_serializer__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_serializer__);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_assignment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_assignment);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_wraps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_wraps);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain___setattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___setattr__);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_dict_714240e1711b5baceff6a1c89a1d9d7c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_714240e1711b5baceff6a1c89a1d9d7c);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_validated_setattr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validated_setattr);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ff8e2e5e11f2abdf5c1a226a0b99cdd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ff8e2e5e11f2abdf5c1a226a0b99cdd);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain___get__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___get__);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain___pydantic_complete__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___pydantic_complete__);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_fd9455af14894f012822a4ceefaf4cfd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fd9455af14894f012822a4ceefaf4cfd);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_python));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_python);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ArgsKwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ArgsKwargs);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_instance_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_instance_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validator);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_dataclass);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain___dataclass_fields__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___dataclass_fields__);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_issuperset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_issuperset);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_a777755bfc5ab0987f302582afdc3c4a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a777755bfc5ab0987f302582afdc3c4a);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_0ad372711b209fadf6b0d875c5314cad));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0ad372711b209fadf6b0d875c5314cad);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__annotations);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClassVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClassVar);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_core));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_core);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_SchemaValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SchemaValidator);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core_schema);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_TypeGuard_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_TypeGuard_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeGuard));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeGuard);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_PluggableSchemaValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PluggableSchemaValidator);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince20));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecatedSince20);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__config_str_plain__decorators_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__config_str_plain__decorators_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain__config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__config);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__decorators));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__decorators);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain__fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__fields);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_collect_dataclass_fields_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_collect_dataclass_fields_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_digest_56bdcd58f20cca9b95306027a6dce33f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56bdcd58f20cca9b95306027a6dce33f);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain__generics));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__generics);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_standard_typevars_map_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_standard_typevars_map_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain__mock_val_ser));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__mock_val_ser);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_dataclass_mocks_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_dataclass_mocks_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain__namespace_utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__namespace_utils);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_NsResolver_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_NsResolver_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_NsResolver));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NsResolver);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain__signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__signature);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_generate_pydantic_signature_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_generate_pydantic_signature_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_LazyClassAttribute_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_LazyClassAttribute_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_dict_a9a5ba3b2d98bfd79fe98dbe1ccd48c8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a9a5ba3b2d98bfd79fe98dbe1ccd48c8);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_dict_ae1938a2e86e44990f3c86b6e5979cfb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ae1938a2e86e44990f3c86b6e5979cfb);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_dict_a2c8e07b2fe4c89fb55483a2da789ad2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a2c8e07b2fe4c89fb55483a2da789ad2);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_complete_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_complete_dataclass);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_dict_6d183a2a32f86ae3cd728130365f7dea));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6d183a2a32f86ae3cd728130365f7dea);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_builtin_dataclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_builtin_dataclass);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_cc38cf1d1a32bfd5ad76f84f6dff1987));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cc38cf1d1a32bfd5ad76f84f6dff1987);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_4732208a96536dfef57c32ef79461614));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4732208a96536dfef57c32ef79461614);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_c33bbcd838ab2e592db08e559b010db1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c33bbcd838ab2e592db08e559b010db1_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_0665e254da8eb27bb62ec318438b92ab_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0665e254da8eb27bb62ec318438b92ab_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__cls_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__cls_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_76e8dd99aa608f43b3b5d6810327e891_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_76e8dd99aa608f43b3b5d6810327e891_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_ebbe7d4ed8068fa8c20c07b3cbab20ac_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ebbe7d4ed8068fa8c20c07b3cbab20ac_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_validator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_validator_tuple);
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
static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$ArgsKwargs(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgsKwargs);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ArgsKwargs);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ArgsKwargs, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ArgsKwargs);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ArgsKwargs, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgsKwargs);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgsKwargs);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgsKwargs);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DeprecationWarning);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DeprecationWarning, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$GenerateSchema(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateSchema);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GenerateSchema);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GenerateSchema, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GenerateSchema);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GenerateSchema, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateSchema);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateSchema);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateSchema);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$InvalidSchemaError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchemaError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidSchemaError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidSchemaError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_InvalidSchemaError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_InvalidSchemaError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchemaError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchemaError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchemaError);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$LazyClassAttribute(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyClassAttribute);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LazyClassAttribute);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LazyClassAttribute, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_LazyClassAttribute);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_LazyClassAttribute, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyClassAttribute);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyClassAttribute);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyClassAttribute);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$PydanticDeprecatedSince20(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticDeprecatedSince20);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticDeprecatedSince20, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PydanticDeprecatedSince20);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PydanticDeprecatedSince20, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$PydanticUndefinedAnnotation(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$SchemaSerializer(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$collect_dataclass_fields(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_collect_dataclass_fields);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_collect_dataclass_fields);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_collect_dataclass_fields, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_collect_dataclass_fields);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_collect_dataclass_fields, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_collect_dataclass_fields);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_collect_dataclass_fields);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_collect_dataclass_fields);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$create_schema_validator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$dataclasses(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_dataclasses);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_dataclasses, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$generate_pydantic_signature(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_pydantic_signature);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_pydantic_signature);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_pydantic_signature, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_generate_pydantic_signature);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_generate_pydantic_signature, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_pydantic_signature);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_pydantic_signature);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_pydantic_signature);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$get_standard_typevars_map(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_standard_typevars_map);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_standard_typevars_map);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_standard_typevars_map, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_get_standard_typevars_map);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_get_standard_typevars_map, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_standard_typevars_map);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_standard_typevars_map);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_get_standard_typevars_map);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$set_dataclass_fields(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_fields);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_dataclass_fields);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_dataclass_fields, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_dataclass_fields);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_dataclass_fields, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_fields);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_fields);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_fields);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$set_dataclass_mocks(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_mocks);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_dataclass_mocks);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_dataclass_mocks, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_set_dataclass_mocks);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_set_dataclass_mocks, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_mocks);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_mocks);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_mocks);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$warnings(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warnings);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warnings, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_dataclasses$wraps(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_dataclasses->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_dataclasses->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_dataclasses->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wraps);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wraps, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_wraps);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_wraps, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5ab392dc06cb27556b80347cefc8d5e8;
static PyCodeObject *code_objects_5ad24d14faa9a863c7acf9357ff2f2a0;
static PyCodeObject *code_objects_e99300b97e2cbc3e6720e6e1a0089416;
static PyCodeObject *code_objects_5bbed3d9dc2b71e25e4ed25aa41c3a98;
static PyCodeObject *code_objects_492a5f771fa597ebcdc30d5172572858;
static PyCodeObject *code_objects_c062b7edcd3e95ce4fcfe89917239dea;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_cc38cf1d1a32bfd5ad76f84f6dff1987); CHECK_OBJECT(module_filename_obj);
code_objects_5ab392dc06cb27556b80347cefc8d5e8 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_4732208a96536dfef57c32ef79461614, mod_consts.const_str_digest_4732208a96536dfef57c32ef79461614, NULL, NULL, 0, 0, 0);
code_objects_5ad24d14faa9a863c7acf9357ff2f2a0 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_bbb6c2d3f590f59ebd1e358c80148126, mod_consts.const_tuple_c33bbcd838ab2e592db08e559b010db1_tuple, NULL, 1, 0, 0);
code_objects_e99300b97e2cbc3e6720e6e1a0089416 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_complete_dataclass, mod_consts.const_str_plain_complete_dataclass, mod_consts.const_tuple_0665e254da8eb27bb62ec318438b92ab_tuple, NULL, 2, 3, 0);
code_objects_5bbed3d9dc2b71e25e4ed25aa41c3a98 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_is_builtin_dataclass, mod_consts.const_str_plain_is_builtin_dataclass, mod_consts.const_tuple_str_plain__cls_tuple, NULL, 1, 0, 0);
code_objects_492a5f771fa597ebcdc30d5172572858 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_set_dataclass_fields, mod_consts.const_str_plain_set_dataclass_fields, mod_consts.const_tuple_76e8dd99aa608f43b3b5d6810327e891_tuple, NULL, 3, 0, 0);
code_objects_c062b7edcd3e95ce4fcfe89917239dea = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_validated_setattr, mod_consts.const_str_digest_4ff8e2e5e11f2abdf5c1a226a0b99cdd, mod_consts.const_tuple_ebbe7d4ed8068fa8c20c07b3cbab20ac_tuple, mod_consts.const_tuple_str_plain_validator_tuple, 3, 0, 3);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_ns_resolver = python_pars[1];
PyObject *par_config_wrapper = python_pars[2];
PyObject *var_typevars_map = NULL;
PyObject *var_fields = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields = MAKE_FUNCTION_FRAME(tstate, code_objects_492a5f771fa597ebcdc30d5172572858, module_pydantic$_internal$_dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields->m_type_description == NULL);
frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields = cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_dataclasses$get_standard_typevars_map(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_standard_typevars_map);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields->m_frame.f_lineno = 79;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_typevars_map == NULL);
var_typevars_map = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
PyObject *tmp_kw_call_dict_value_2_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_dataclasses$collect_dataclass_fields(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_collect_dataclass_fields);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_kw_call_arg_value_0_1 = par_cls;
CHECK_OBJECT(par_ns_resolver);
tmp_kw_call_dict_value_0_1 = par_ns_resolver;
CHECK_OBJECT(var_typevars_map);
tmp_kw_call_dict_value_1_1 = var_typevars_map;
CHECK_OBJECT(par_config_wrapper);
tmp_kw_call_dict_value_2_1 = par_config_wrapper;
frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields->m_frame.f_lineno = 80;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_b3c62154630d7c396bdd7ca0a6663bdf_tuple);
}

if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_fields == NULL);
var_fields = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_fields);
tmp_assattr_value_1 = var_fields;
CHECK_OBJECT(par_cls);
tmp_assattr_target_1 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___pydantic_fields__, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields,
    type_description_1,
    par_cls,
    par_ns_resolver,
    par_config_wrapper,
    var_typevars_map,
    var_fields
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields == cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields);
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields);

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
CHECK_OBJECT(var_typevars_map);
CHECK_OBJECT(var_typevars_map);
Py_DECREF(var_typevars_map);
var_typevars_map = NULL;
CHECK_OBJECT(var_fields);
CHECK_OBJECT(var_fields);
Py_DECREF(var_fields);
var_fields = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_typevars_map);
var_typevars_map = NULL;
Py_XDECREF(var_fields);
var_fields = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_ns_resolver);
Py_DECREF(par_ns_resolver);
CHECK_OBJECT(par_config_wrapper);
Py_DECREF(par_config_wrapper);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_cls);
Py_DECREF(par_cls);
CHECK_OBJECT(par_ns_resolver);
Py_DECREF(par_ns_resolver);
CHECK_OBJECT(par_config_wrapper);
Py_DECREF(par_config_wrapper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_cls = python_pars[0];
PyObject *par_config_wrapper = python_pars[1];
PyObject *par_raise_errors = python_pars[2];
PyObject *par_ns_resolver = python_pars[3];
PyObject *par__force_build = python_pars[4];
PyObject *var_original_init = NULL;
PyObject *var___init__ = NULL;
PyObject *var_typevars_map = NULL;
PyObject *var_gen_schema = NULL;
PyObject *var_schema = NULL;
PyObject *var_e = NULL;
PyObject *var_core_config = NULL;
struct Nuitka_CellObject *var_validator = Nuitka_Cell_NewEmpty();
PyObject *var_validated_setattr = NULL;
PyObject *tmp_assign_unpack_1__assign_source = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass = MAKE_FUNCTION_FRAME(tstate, code_objects_e99300b97e2cbc3e6720e6e1a0089416, module_pydantic$_internal$_dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_type_description == NULL);
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass = cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_1 = par_cls;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain___init__);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
assert(var_original_init == NULL);
var_original_init = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_e730bdec7fbefbebc3049eefa7c26a6b);

tmp_assign_source_2 = MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__(tstate, tmp_annotations_1);

assert(var___init__ == NULL);
var___init__ = tmp_assign_source_2;
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_format_spec_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_cls);
tmp_expression_value_2 = par_cls;
tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___qualname__);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_60fdb6517d4d9b4d3bef7a5fec932bfc;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_assattr_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assattr_value_1 == NULL));
CHECK_OBJECT(var___init__);
tmp_assattr_target_1 = var___init__;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain___qualname__, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 125;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(var___init__);
tmp_assattr_value_2 = var___init__;
CHECK_OBJECT(par_cls);
tmp_assattr_target_2 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, const_str_plain___init__, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 127;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_config_wrapper);
tmp_expression_value_3 = par_config_wrapper;
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_config_dict);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_assattr_target_3 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain___pydantic_config__, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_arg_value_1_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_1 = module_var_accessor_pydantic$_internal$_dataclasses$set_dataclass_fields(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_dataclass_fields);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_kw_call_arg_value_0_1 = par_cls;
CHECK_OBJECT(par_ns_resolver);
tmp_kw_call_arg_value_1_1 = par_ns_resolver;
CHECK_OBJECT(par_config_wrapper);
tmp_kw_call_dict_value_0_1 = par_config_wrapper;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 130;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_config_wrapper_tuple);
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(par__force_build);
tmp_operand_value_1 = par__force_build;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooco";
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
CHECK_OBJECT(par_config_wrapper);
tmp_expression_value_4 = par_config_wrapper;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_defer_build);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 132;
type_description_1 = "ooooooooooooco";
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_1;
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_dataclasses$set_dataclass_mocks(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_dataclass_mocks);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 133;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_1 = par_cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 133;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_cls);
tmp_expression_value_5 = par_cls;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts.const_str_plain___post_init_post_parse__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "ooooooooooooco";
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
tmp_expression_value_6 = module_var_accessor_pydantic$_internal$_dataclasses$warnings(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warnings);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 137;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_warn);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = mod_consts.const_str_digest_c55e20c031990fed866c1b6bbefef09f;
tmp_args_element_value_3 = module_var_accessor_pydantic$_internal$_dataclasses$DeprecationWarning(tstate);
if (unlikely(tmp_args_element_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_args_element_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 138;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 137;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 137;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_4;
tmp_called_value_4 = module_var_accessor_pydantic$_internal$_dataclasses$get_standard_typevars_map(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_get_standard_typevars_map);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 141;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_4 = par_cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 141;
tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 141;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
assert(var_typevars_map == NULL);
var_typevars_map = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_5;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_called_value_5 = module_var_accessor_pydantic$_internal$_dataclasses$GenerateSchema(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GenerateSchema);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config_wrapper);
tmp_kw_call_arg_value_0_2 = par_config_wrapper;
CHECK_OBJECT(par_ns_resolver);
tmp_kw_call_dict_value_0_2 = par_ns_resolver;
CHECK_OBJECT(var_typevars_map);
tmp_kw_call_dict_value_1_1 = var_typevars_map;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 142;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_ns_resolver_str_plain_typevars_map_tuple);
}

if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
assert(var_gen_schema == NULL);
var_gen_schema = tmp_assign_source_4;
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_7;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_kw_call_dict_value_2_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_dict_value_3_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_kw_call_dict_value_4_1;
PyObject *tmp_assattr_target_4;
tmp_called_value_6 = module_var_accessor_pydantic$_internal$_dataclasses$LazyClassAttribute(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_LazyClassAttribute);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 151;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain___signature__;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_called_value_7 == NULL));
tmp_kw_call_arg_value_0_3 = module_var_accessor_pydantic$_internal$_dataclasses$generate_pydantic_signature(tstate);
if (unlikely(tmp_kw_call_arg_value_0_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_generate_pydantic_signature);
}

if (tmp_kw_call_arg_value_0_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 154;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_original_init);
tmp_kw_call_dict_value_0_3 = var_original_init;
CHECK_OBJECT(par_cls);
tmp_expression_value_7 = par_cls;
tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain___pydantic_fields__);
if (tmp_kw_call_dict_value_1_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 158;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config_wrapper);
tmp_expression_value_8 = par_config_wrapper;
tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_validate_by_name);
if (tmp_kw_call_dict_value_2_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_dict_value_1_2);

exception_lineno = 159;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_config_wrapper);
tmp_expression_value_9 = par_config_wrapper;
tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_extra);
if (tmp_kw_call_dict_value_3_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);
Py_DECREF(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_2_1);

exception_lineno = 160;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_kw_call_dict_value_4_1 = Py_True;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 153;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_6e846c1e98defd0f68eeb5d8fa6d8f9a_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_kw_call_dict_value_1_2);
Py_DECREF(tmp_kw_call_dict_value_1_2);
CHECK_OBJECT(tmp_kw_call_dict_value_2_1);
Py_DECREF(tmp_kw_call_dict_value_2_1);
CHECK_OBJECT(tmp_kw_call_dict_value_3_1);
Py_DECREF(tmp_kw_call_dict_value_3_1);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 151;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_assattr_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_assattr_target_4 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain___signature__, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_value_4);
Py_DECREF(tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_7;
CHECK_OBJECT(var_gen_schema);
tmp_called_instance_1 = var_gen_schema;
CHECK_OBJECT(par_cls);
tmp_args_element_value_7 = par_cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 166;
tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_generate_schema, tmp_args_element_value_7);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_2;
}
assert(var_schema == NULL);
var_schema = tmp_assign_source_5;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = module_var_accessor_pydantic$_internal$_dataclasses$PydanticUndefinedAnnotation(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticUndefinedAnnotation);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 167;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_3;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 167;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_3;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_6); 
assert(var_e == NULL);
Py_INCREF(tmp_assign_source_6);
var_e = tmp_assign_source_6;
}
// Tried code:
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
CHECK_OBJECT(par_raise_errors);
tmp_truth_name_2 = CHECK_IF_TRUE(par_raise_errors);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_4;
}
tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 169;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame)) {
        frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooco";
goto try_except_handler_4;
branch_no_4:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_2;
tmp_called_value_8 = module_var_accessor_pydantic$_internal$_dataclasses$set_dataclass_mocks(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_dataclass_mocks);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_8 = par_cls;
tmp_tuple_element_2 = mod_consts.const_str_chr_96;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_e);
tmp_expression_value_10 = var_e;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_name);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooooooco";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooooooco";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_chr_96;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_2);
goto try_except_handler_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_args_element_value_9 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_args_element_value_9 == NULL));
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 170;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_4;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(var_e);
var_e = NULL;

goto try_return_handler_3;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_e);
var_e = NULL;

// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
goto branch_end_3;
branch_no_3:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 165;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame)) {
        frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooco";
goto try_except_handler_3;
branch_end_3:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_3:;
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
// End of try:
try_end_1:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(par_config_wrapper);
tmp_expression_value_11 = par_config_wrapper;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_core_config);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_12 = par_cls;
tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 173;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 173;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_9, kw_values, mod_consts.const_tuple_str_plain_title_tuple);
}

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
assert(var_core_config == NULL);
var_core_config = tmp_assign_source_7;
}
// Tried code:
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_10;
CHECK_OBJECT(var_gen_schema);
tmp_called_instance_2 = var_gen_schema;
CHECK_OBJECT(var_schema);
tmp_args_element_value_10 = var_schema;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 176;
tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_clean_schema, tmp_args_element_value_10);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_5;
}
{
    PyObject *old = var_schema;
    assert(old != NULL);
    var_schema = tmp_assign_source_8;
    Py_DECREF(old);
}

}
goto try_end_2;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 2.
exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass, exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = module_var_accessor_pydantic$_internal$_dataclasses$InvalidSchemaError(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_InvalidSchemaError);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 177;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_6;
}
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_6;
}
tmp_condition_result_5 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_10;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_11;
tmp_called_value_10 = module_var_accessor_pydantic$_internal$_dataclasses$set_dataclass_mocks(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_set_dataclass_mocks);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 178;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_6;
}
CHECK_OBJECT(par_cls);
tmp_args_element_value_11 = par_cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 178;
tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_11);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 178;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_6;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
tmp_return_value = Py_False;
Py_INCREF_IMMORTAL(tmp_return_value);
goto try_return_handler_6;
goto branch_end_5;
branch_no_5:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 175;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame)) {
        frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
type_description_1 = "ooooooooooooco";
goto try_except_handler_6;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_6:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

goto frame_return_exit_1;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_2:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_instance_3 = IMPORT_HARD_TYPING();
assert(!(tmp_called_instance_3 == NULL));
tmp_args_element_value_12 = mod_consts.const_str_digest_5d6306d3c9fa006e783e0bc76c921bb2;
CHECK_OBJECT(par_cls);
tmp_args_element_value_13 = par_cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 183;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_cast,
        call_args
    );
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 183;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_cls;
    assert(old != NULL);
    par_cls = tmp_assign_source_9;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_5;
PyObject *tmp_assattr_target_5;
CHECK_OBJECT(var_schema);
tmp_assattr_value_5 = var_schema;
CHECK_OBJECT(par_cls);
tmp_assattr_target_5 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain___pydantic_core_schema__, tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_expression_value_13;
PyObject *tmp_args_element_value_17;
PyObject *tmp_expression_value_14;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_expression_value_15;
tmp_called_value_11 = module_var_accessor_pydantic$_internal$_dataclasses$create_schema_validator(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_create_schema_validator);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 187;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_7;
}
CHECK_OBJECT(var_schema);
tmp_args_element_value_14 = var_schema;
CHECK_OBJECT(par_cls);
tmp_args_element_value_15 = par_cls;
CHECK_OBJECT(par_cls);
tmp_expression_value_13 = par_cls;
tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain___module__);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_7;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_14 = par_cls;
tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain___qualname__);
if (tmp_args_element_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);

exception_lineno = 188;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_7;
}
tmp_args_element_value_18 = mod_consts.const_str_plain_dataclass;
CHECK_OBJECT(var_core_config);
tmp_args_element_value_19 = var_core_config;
CHECK_OBJECT(par_config_wrapper);
tmp_expression_value_15 = par_config_wrapper;
tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_plugin_settings);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_17);

exception_lineno = 188;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_7;
}
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 187;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS7(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_7;
}
assert(tmp_assign_unpack_1__assign_source == NULL);
tmp_assign_unpack_1__assign_source = tmp_assign_source_10;
}
{
PyObject *tmp_assattr_value_6;
PyObject *tmp_assattr_target_6;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assattr_value_6 = tmp_assign_unpack_1__assign_source;
CHECK_OBJECT(par_cls);
tmp_assattr_target_6 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts.const_str_plain___pydantic_validator__, tmp_assattr_value_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 187;
type_description_1 = "ooooooooooooco";
    goto try_except_handler_7;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
tmp_assign_source_11 = tmp_assign_unpack_1__assign_source;
assert(Nuitka_Cell_GET(var_validator) == NULL);
Py_INCREF(tmp_assign_source_11);
Nuitka_Cell_SET(var_validator, tmp_assign_source_11);

}
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
Py_DECREF(tmp_assign_unpack_1__assign_source);
tmp_assign_unpack_1__assign_source = NULL;
{
PyObject *tmp_assattr_value_7;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_21;
PyObject *tmp_args_element_value_22;
PyObject *tmp_assattr_target_7;
tmp_called_value_12 = module_var_accessor_pydantic$_internal$_dataclasses$SchemaSerializer(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SchemaSerializer);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_args_element_value_21 = var_schema;
CHECK_OBJECT(var_core_config);
tmp_args_element_value_22 = var_core_config;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 190;
{
    PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
    tmp_assattr_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

if (tmp_assattr_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_assattr_target_7 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts.const_str_plain___pydantic_serializer__, tmp_assattr_value_7);
CHECK_OBJECT(tmp_assattr_value_7);
Py_DECREF(tmp_assattr_value_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_16;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
CHECK_OBJECT(par_config_wrapper);
tmp_expression_value_16 = par_config_wrapper;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_validate_assignment);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 192;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_12;
PyObject *tmp_called_value_13;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_23;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_24;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_called_value_14 = module_var_accessor_pydantic$_internal$_dataclasses$wraps(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_wraps);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 194;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_expression_value_17 = par_cls;
tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain___setattr__);
if (tmp_args_element_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 194;
tmp_called_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_23);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_called_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_714240e1711b5baceff6a1c89a1d9d7c);
tmp_closure_1[0] = var_validator;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_24 = MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr(tstate, tmp_annotations_2, tmp_closure_1);

frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 194;
tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
assert(var_validated_setattr == NULL);
var_validated_setattr = tmp_assign_source_12;
}
{
PyObject *tmp_assattr_value_8;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_assattr_target_8;
CHECK_OBJECT(var_validated_setattr);
tmp_called_instance_4 = var_validated_setattr;
tmp_args_element_value_25 = Py_None;
CHECK_OBJECT(par_cls);
tmp_args_element_value_26 = par_cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame.f_lineno = 198;
{
    PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_assattr_value_8 = CALL_METHOD_WITH_ARGS2(
        tstate,
        tmp_called_instance_4,
        mod_consts.const_str_plain___get__,
        call_args
    );
}

if (tmp_assattr_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_cls);
tmp_assattr_target_8 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts.const_str_plain___setattr__, tmp_assattr_value_8);
CHECK_OBJECT(tmp_assattr_value_8);
Py_DECREF(tmp_assattr_value_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooooooooooco";
    goto frame_exception_exit_1;
}
}
branch_no_6:;
{
PyObject *tmp_assattr_value_9;
PyObject *tmp_assattr_target_9;
tmp_assattr_value_9 = Py_True;
CHECK_OBJECT(par_cls);
tmp_assattr_target_9 = par_cls;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts.const_str_plain___pydantic_complete__, tmp_assattr_value_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooooooooooco";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass,
    type_description_1,
    par_cls,
    par_config_wrapper,
    par_raise_errors,
    par_ns_resolver,
    par__force_build,
    var_original_init,
    var___init__,
    var_typevars_map,
    var_gen_schema,
    var_schema,
    var_e,
    var_core_config,
    var_validator,
    var_validated_setattr
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass == cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass);
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass);

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
Py_XDECREF(par_cls);
par_cls = NULL;
CHECK_OBJECT(var_original_init);
CHECK_OBJECT(var_original_init);
Py_DECREF(var_original_init);
var_original_init = NULL;
CHECK_OBJECT(var___init__);
CHECK_OBJECT(var___init__);
Py_DECREF(var___init__);
var___init__ = NULL;
Py_XDECREF(var_typevars_map);
var_typevars_map = NULL;
Py_XDECREF(var_gen_schema);
var_gen_schema = NULL;
Py_XDECREF(var_schema);
var_schema = NULL;
Py_XDECREF(var_core_config);
var_core_config = NULL;
CHECK_OBJECT(var_validator);
CHECK_OBJECT(var_validator);
Py_DECREF(var_validator);
var_validator = NULL;
Py_XDECREF(var_validated_setattr);
var_validated_setattr = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_cls);
par_cls = NULL;
Py_XDECREF(var_original_init);
var_original_init = NULL;
Py_XDECREF(var___init__);
var___init__ = NULL;
Py_XDECREF(var_typevars_map);
var_typevars_map = NULL;
Py_XDECREF(var_gen_schema);
var_gen_schema = NULL;
Py_XDECREF(var_schema);
var_schema = NULL;
Py_XDECREF(var_core_config);
var_core_config = NULL;
CHECK_OBJECT(var_validator);
CHECK_OBJECT(var_validator);
Py_DECREF(var_validator);
var_validator = NULL;
Py_XDECREF(var_validated_setattr);
var_validated_setattr = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_config_wrapper);
Py_DECREF(par_config_wrapper);
CHECK_OBJECT(par_raise_errors);
Py_DECREF(par_raise_errors);
CHECK_OBJECT(par_ns_resolver);
Py_DECREF(par_ns_resolver);
CHECK_OBJECT(par__force_build);
Py_DECREF(par__force_build);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_config_wrapper);
Py_DECREF(par_config_wrapper);
CHECK_OBJECT(par_raise_errors);
Py_DECREF(par_raise_errors);
CHECK_OBJECT(par_ns_resolver);
Py_DECREF(par_ns_resolver);
CHECK_OBJECT(par__force_build);
Py_DECREF(par__force_build);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par___dataclass_self__ = python_pars[0];
PyObject *par_args = python_pars[1];
PyObject *par_kwargs = python_pars[2];
PyObject *var_s = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par___dataclass_self__);
tmp_assign_source_1 = par___dataclass_self__;
assert(var_s == NULL);
Py_INCREF(tmp_assign_source_1);
var_s = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_5ad24d14faa9a863c7acf9357ff2f2a0, module_pydantic$_internal$_dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__->m_type_description == NULL);
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__ = cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_kw_call_dict_value_0_1;
CHECK_OBJECT(var_s);
tmp_expression_value_2 = var_s;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain___pydantic_validator__);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_validate_python);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = module_var_accessor_pydantic$_internal$_dataclasses$ArgsKwargs(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ArgsKwargs);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 123;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_args);
tmp_args_element_value_1 = par_args;
CHECK_OBJECT(par_kwargs);
tmp_args_element_value_2 = par_kwargs;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_kw_call_arg_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 123;
type_description_1 = "oooNo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_s);
tmp_kw_call_dict_value_0_1 = var_s;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__->m_frame.f_lineno = 123;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_self_instance_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_arg_value_0_1);
Py_DECREF(tmp_kw_call_arg_value_0_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooNo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__,
    type_description_1,
    par___dataclass_self__,
    par_args,
    par_kwargs,
    NULL,
    var_s
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__ == cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__);
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__);

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
CHECK_OBJECT(var_s);
CHECK_OBJECT(var_s);
Py_DECREF(var_s);
var_s = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_s);
CHECK_OBJECT(var_s);
Py_DECREF(var_s);
var_s = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par___dataclass_self__);
Py_DECREF(par___dataclass_self__);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par___dataclass_self__);
Py_DECREF(par___dataclass_self__);
CHECK_OBJECT(par_args);
Py_DECREF(par_args);
CHECK_OBJECT(par_kwargs);
Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_instance = python_pars[0];
PyObject *par_field = python_pars[1];
PyObject *par_value = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr = MAKE_FUNCTION_FRAME(tstate, code_objects_c062b7edcd3e95ce4fcfe89917239dea, module_pydantic$_internal$_dataclasses, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr->m_type_description == NULL);
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr = cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_validator);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 196;
type_description_1 = "oooc";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_instance);
tmp_args_element_value_1 = par_instance;
CHECK_OBJECT(par_field);
tmp_args_element_value_2 = par_field;
CHECK_OBJECT(par_value);
tmp_args_element_value_3 = par_value;
frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr->m_frame.f_lineno = 196;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_1,
        mod_consts.const_str_plain_validate_assignment,
        call_args
    );
}

if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr,
    type_description_1,
    par_instance,
    par_field,
    par_value,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr == cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr);
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr);

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
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_field);
Py_DECREF(par_field);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_instance);
Py_DECREF(par_instance);
CHECK_OBJECT(par_field);
Py_DECREF(par_field);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par__cls = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass = MAKE_FUNCTION_FRAME(tstate, code_objects_5bbed3d9dc2b71e25e4ed25aa41c3a98, module_pydantic$_internal$_dataclasses, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass->m_type_description == NULL);
frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass = cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass) == 2);

// Framed code:
{
int tmp_and_left_truth_1;
PyObject *tmp_and_left_value_1;
PyObject *tmp_and_right_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
int tmp_and_left_truth_2;
PyObject *tmp_and_left_value_2;
PyObject *tmp_and_right_value_2;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_set_arg_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_set_arg_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_called_instance_1 = module_var_accessor_pydantic$_internal$_dataclasses$dataclasses(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_dataclasses);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par__cls);
tmp_args_element_value_1 = par__cls;
frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass->m_frame.f_lineno = 235;
tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_dataclass, tmp_args_element_value_1);
if (tmp_and_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_and_left_value_1);

exception_lineno = 235;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(tmp_and_left_value_1);
Py_DECREF(tmp_and_left_value_1);
CHECK_OBJECT(par__cls);
tmp_expression_value_1 = par__cls;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts.const_str_plain___pydantic_validator__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_and_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par__cls);
tmp_expression_value_3 = par__cls;
tmp_set_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___dataclass_fields__);
if (tmp_set_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = PySet_New(tmp_set_arg_1);
CHECK_OBJECT(tmp_set_arg_1);
Py_DECREF(tmp_set_arg_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_issuperset);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
assert(!(tmp_called_value_1 == NULL));
CHECK_OBJECT(par__cls);
tmp_expression_value_4 = par__cls;
tmp_name_value_1 = const_str_plain___annotations__;
tmp_default_value_1 = MAKE_DICT_EMPTY(tstate);
tmp_set_arg_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_4, tmp_name_value_1, tmp_default_value_1);
CHECK_OBJECT(tmp_default_value_1);
Py_DECREF(tmp_default_value_1);
if (tmp_set_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 237;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = PySet_New(tmp_set_arg_2);
CHECK_OBJECT(tmp_set_arg_2);
Py_DECREF(tmp_set_arg_2);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 237;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass->m_frame.f_lineno = 237;
tmp_and_right_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_and_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
Py_INCREF(tmp_and_left_value_2);
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
tmp_return_value = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_return_value = tmp_and_left_value_1;
and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass,
    type_description_1,
    par__cls
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass == cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass);
    cache_frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par__cls);
Py_DECREF(par__cls);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par__cls);
Py_DECREF(par__cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields,
        mod_consts.const_str_plain_set_dataclass_fields,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_492a5f771fa597ebcdc30d5172572858,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_dataclasses,
        mod_consts.const_str_digest_ef46af15c726be259730251d31d8817b,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass,
        mod_consts.const_str_plain_complete_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e99300b97e2cbc3e6720e6e1a0089416,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_pydantic$_internal$_dataclasses,
        mod_consts.const_str_digest_fd9455af14894f012822a4ceefaf4cfd,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bbb6c2d3f590f59ebd1e358c80148126,
#endif
        code_objects_5ad24d14faa9a863c7acf9357ff2f2a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_dataclasses,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr,
        mod_consts.const_str_plain_validated_setattr,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ff8e2e5e11f2abdf5c1a226a0b99cdd,
#endif
        code_objects_c062b7edcd3e95ce4fcfe89917239dea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_dataclasses,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass,
        mod_consts.const_str_plain_is_builtin_dataclass,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5bbed3d9dc2b71e25e4ed25aa41c3a98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_dataclasses,
        mod_consts.const_str_digest_a777755bfc5ab0987f302582afdc3c4a,
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

static function_impl_code const function_table_pydantic$_internal$_dataclasses[] = {
impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__1___init__,
impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass$$$function__2_validated_setattr,
impl_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields,
impl_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass,
impl_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$_internal$_dataclasses);
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
        module_pydantic$_internal$_dataclasses,
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
        function_table_pydantic$_internal$_dataclasses,
        sizeof(function_table_pydantic$_internal$_dataclasses) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic._internal._dataclasses";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$_internal$_dataclasses(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$_internal$_dataclasses");

    // Store the module for future use.
    module_pydantic$_internal$_dataclasses = module;

    moduledict_pydantic$_internal$_dataclasses = MODULE_DICT(module_pydantic$_internal$_dataclasses);

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
        PRINT_STRING("pydantic$_internal$_dataclasses: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$_internal$_dataclasses: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$_internal$_dataclasses: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._dataclasses" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$_internal$_dataclasses\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$_internal$_dataclasses,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_dataclasses,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_dataclasses,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_dataclasses,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_dataclasses,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$_internal$_dataclasses);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$_internal$_dataclasses);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_dataclasses;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_0ad372711b209fadf6b0d875c5314cad;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$_internal$_dataclasses = MAKE_MODULE_FRAME(code_objects_5ab392dc06cb27556b80347cefc8d5e8, module_pydantic$_internal$_dataclasses);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_dataclasses);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_dataclasses) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$_internal$_dataclasses$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$_internal$_dataclasses$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_dataclasses;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 5;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_dataclasses, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 7;
tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_warnings, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_FUNCTOOLS();
assert(!(tmp_assign_source_8 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_8);
tmp_import_from_1__module = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
{
    PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
    tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_partial);
}
assert(!(tmp_assign_source_9 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_partial, tmp_assign_source_9);
}
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_wraps,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_wraps);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_wraps, tmp_assign_source_10);
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
tmp_assign_source_11 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_11 == NULL));
assert(tmp_import_from_2__module == NULL);
Py_INCREF(tmp_assign_source_11);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_2 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_ClassVar,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ClassVar);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ClassVar, tmp_assign_source_13);
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
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 11;
tmp_assign_source_14 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_plain_pydantic_core, mod_consts.const_str_plain_pydantic_core);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_4 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_ArgsKwargs,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ArgsKwargs);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_ArgsKwargs, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_5 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_SchemaSerializer,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_SchemaSerializer);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaSerializer, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_6 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_SchemaValidator,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_SchemaValidator);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_SchemaValidator, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 11;
tmp_assign_source_18 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_core_schema, tmp_assign_source_18);
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
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_TypeGuard_tuple;
tmp_level_value_3 = const_int_0;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 17;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_TypeGuard,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_TypeGuard);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeGuard, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_8;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 19;
tmp_import_name_from_8 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f, mod_consts.const_str_digest_93451e65d1b5351f1a776493e6ffe27f);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_PydanticUndefinedAnnotation,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_PydanticUndefinedAnnotation);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticUndefinedAnnotation, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_digest_17d2827b063ac26087eec8ff06bda53a;
tmp_globals_arg_value_4 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_76f5b5b2115da60bb2b4714db9caf888_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 20;
tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_21;
}
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_9 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_PluggableSchemaValidator,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_PluggableSchemaValidator);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PluggableSchemaValidator, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_10 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_create_schema_validator,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_create_schema_validator);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_create_schema_validator, tmp_assign_source_23);
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
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_11;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 21;
tmp_import_name_from_11 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4, mod_consts.const_str_digest_c19110e962cc33b179db397d44e7edf4);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_PydanticDeprecatedSince20,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_PydanticDeprecatedSince20);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_PydanticDeprecatedSince20, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = const_str_empty;
tmp_globals_arg_value_5 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__config_str_plain__decorators_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 22;
tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_25;
}
// Tried code:
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_12 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain__config,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain__config);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__config, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_13 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain__decorators,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain__decorators);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain__decorators, tmp_assign_source_27);
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
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__fields;
tmp_globals_arg_value_6 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_collect_dataclass_fields_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 23;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_collect_dataclass_fields,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_collect_dataclass_fields);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_collect_dataclass_fields, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 24;
tmp_assign_source_29 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_56bdcd58f20cca9b95306027a6dce33f, mod_consts.const_str_digest_56bdcd58f20cca9b95306027a6dce33f);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_15 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_GenerateSchema,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_GenerateSchema);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateSchema, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_16 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_InvalidSchemaError,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_InvalidSchemaError);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidSchemaError, tmp_assign_source_31);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__generics;
tmp_globals_arg_value_7 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_get_standard_typevars_map_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 25;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_get_standard_typevars_map,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_get_standard_typevars_map);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_get_standard_typevars_map, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__mock_val_ser;
tmp_globals_arg_value_8 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_set_dataclass_mocks_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 26;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_set_dataclass_mocks,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_set_dataclass_mocks);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_mocks, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__namespace_utils;
tmp_globals_arg_value_9 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_NsResolver_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 27;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_NsResolver,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_NsResolver);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_NsResolver, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__signature;
tmp_globals_arg_value_10 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_generate_pydantic_signature_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 28;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_generate_pydantic_signature,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_generate_pydantic_signature);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_generate_pydantic_signature, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_11 = (PyObject *)moduledict_pydantic$_internal$_dataclasses;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_LazyClassAttribute_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_pydantic$_internal$_dataclasses->m_frame.f_lineno = 29;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_pydantic$_internal$_dataclasses,
        mod_consts.const_str_plain_LazyClassAttribute,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_LazyClassAttribute);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_LazyClassAttribute, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
tmp_assign_source_37 = module_var_accessor_pydantic$_internal$_dataclasses$PydanticDeprecatedSince20(tstate);
if (unlikely(tmp_assign_source_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PydanticDeprecatedSince20);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning, tmp_assign_source_37);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_dataclasses, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_dataclasses->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_dataclasses, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$_internal$_dataclasses);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_38;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
tmp_defaults_1 = mod_consts.const_tuple_none_none_tuple;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_a9a5ba3b2d98bfd79fe98dbe1ccd48c8);
Py_INCREF(tmp_defaults_1);

tmp_assign_source_38 = MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__2_set_dataclass_fields(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_set_dataclass_fields, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_2;
tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_ae1938a2e86e44990f3c86b6e5979cfb);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_a2c8e07b2fe4c89fb55483a2da789ad2);

tmp_assign_source_39 = MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__3_complete_dataclass(tstate, tmp_kw_defaults_1, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_complete_dataclass, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_6d183a2a32f86ae3cd728130365f7dea);

tmp_assign_source_40 = MAKE_FUNCTION_pydantic$_internal$_dataclasses$$$function__4_is_builtin_dataclass(tstate, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)mod_consts.const_str_plain_is_builtin_dataclass, tmp_assign_source_40);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$_internal$_dataclasses", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._dataclasses" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$_internal$_dataclasses);
    return module_pydantic$_internal$_dataclasses;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_dataclasses, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$_internal$_dataclasses", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

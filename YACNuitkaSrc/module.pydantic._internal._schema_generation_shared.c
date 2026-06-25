/* Generated code for Python module 'pydantic$_internal$_schema_generation_shared'
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



/* The "module_pydantic$_internal$_schema_generation_shared" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic$_internal$_schema_generation_shared;
PyDictObject *moduledict_pydantic$_internal$_schema_generation_shared;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_generate_json_schema;
PyObject *const_str_plain_generate_inner;
PyObject *const_str_plain_handler;
PyObject *const_str_plain_mode;
PyObject *const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f;
PyObject *const_str_plain_get_schema_from_definitions;
PyObject *const_str_digest_8715bae7c8fe9f64d5bb9b006b5dfe12;
PyObject *const_str_digest_e74652f37a00399c2f781aeadac59d1c;
PyObject *const_str_digest_6af45644414b253bb49ecb61a54eeff8;
PyObject *const_str_plain__handler;
PyObject *const_str_plain__generate_schema;
PyObject *const_str_plain__ref_mode;
PyObject *const_str_digest_3976ec8fab5be63b631601c69940c6b2;
PyObject *const_tuple_str_plain_ref_tuple;
PyObject *const_str_plain_defs;
PyObject *const_str_plain_create_definition_reference_schema;
PyObject *const_str_plain_resolve_ref_schema;
PyObject *const_str_plain__types_namespace;
PyObject *const_str_plain_generate_schema;
PyObject *const_str_plain_field_name_stack;
PyObject *const_str_digest_e6581307060bc290b9609475ed33edfb;
PyObject *const_str_plain_schema_ref;
PyObject *const_str_plain_get_schema_from_ref;
PyObject *const_str_plain_definitions;
PyObject *const_str_plain_schema;
PyObject *const_str_digest_3f41258b4c54587505b68f2a1376a451;
PyObject *const_str_digest_5e934eaf8b979f11dc71feb76c078f47;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Literal;
PyObject *const_str_digest_3be1977a43d6fc92a01e1adc500d16b3;
PyObject *const_str_plain_core_schema;
PyObject *const_str_digest_a170b0a20434bc7eb9ff7cae086aef1b;
PyObject *const_str_plain_GetCoreSchemaHandler;
PyObject *const_str_plain_GetJsonSchemaHandler;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_GenerateJsonSchemaHandler;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_638a6ebdeef6a205a9ece223f0bf34b5;
PyObject *const_str_digest_a422d1942f0bb18d958868914a51284b;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_21;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_ae851f0d9e634ab9a977270f53620b6d;
PyObject *const_str_digest_589cde85ea403ff5d49523cf64a2a6ba;
PyObject *const_dict_4333df146eed87ef1df20566c4369df4;
PyObject *const_str_plain___call__;
PyObject *const_str_digest_848d596ca07e2ee9865d8f25967a405c;
PyObject *const_dict_8512cc5af1c17834c5398c38da930c92;
PyObject *const_str_digest_4c892f5341d7ea4060e1a9e865a26533;
PyObject *const_tuple_8f248505ee92e46b7d9bdabdc9fcf147_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_CallbackGetCoreSchemaHandler;
PyObject *const_str_digest_0215345dfbef98c50edb16291bdab7fc;
PyObject *const_int_pos_65;
PyObject *const_tuple_str_digest_3976ec8fab5be63b631601c69940c6b2_tuple;
PyObject *const_dict_0f02d8ed5fb19a67b64027af260a71b7;
PyObject *const_str_digest_490b91f3a6a64d006ba7412270282143;
PyObject *const_dict_aed25765a970b85f1400cc64c5e94e03;
PyObject *const_str_digest_a2584ba9419f50a8acf37ce65f62d102;
PyObject *const_dict_25ccb4aaecb01303d6626ae7f5a74d97;
PyObject *const_str_plain__get_types_namespace;
PyObject *const_str_digest_d5174ccdc6d2f5aef6140b5fd81d4e5f;
PyObject *const_str_digest_9d6525e12709225dd4b9b16306d93747;
PyObject *const_str_plain_property;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_plain_field_name;
PyObject *const_str_digest_fc6199bf969949b10897f5b44181da37;
PyObject *const_dict_04eb9d224a3da1d49887b5f737548463;
PyObject *const_str_digest_5572ccb18c595f172390407fa7adc78d;
PyObject *const_tuple_66c96a3982d631af4e6257cca18c5775_tuple;
PyObject *const_str_digest_1455be32657660bc4a791b94a22bed5f;
PyObject *const_str_digest_fbbc613261d6bf7dd1e3d6da60ab178c;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_b01b22b3da5c0e68e7c35aa1b72c0a90_tuple;
PyObject *const_tuple_str_plain_self_str_plain_core_schema_tuple;
PyObject *const_tuple_18331099027ca73da3e2bd539812bafe_tuple;
PyObject *const_tuple_6f34ea02b51073826cfd211c890071b2_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_str_plain_self_str_plain_source_type_tuple;
PyObject *const_tuple_839e6457964d968868d76255c98612fa_tuple;
PyObject *const_tuple_b02eba6ecef72ff625f4d0409bbc1a91_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[89];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic._internal._schema_generation_shared"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_json_schema);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_inner);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_handler);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_mode);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_schema_from_definitions);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_8715bae7c8fe9f64d5bb9b006b5dfe12);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_e74652f37a00399c2f781aeadac59d1c);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_6af45644414b253bb49ecb61a54eeff8);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__handler);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain__generate_schema);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__ref_mode);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_3976ec8fab5be63b631601c69940c6b2);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ref_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_defs);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_definition_reference_schema);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_ref_schema);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain__types_namespace);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_generate_schema);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_name_stack);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_e6581307060bc290b9609475ed33edfb);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_ref);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_schema_from_ref);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_definitions);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f41258b4c54587505b68f2a1376a451);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e934eaf8b979f11dc71feb76c078f47);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_a170b0a20434bc7eb9ff7cae086aef1b);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCoreSchemaHandler);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetJsonSchemaHandler);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateJsonSchemaHandler);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_638a6ebdeef6a205a9ece223f0bf34b5);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_a422d1942f0bb18d958868914a51284b);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_int_pos_21);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_dict_ae851f0d9e634ab9a977270f53620b6d);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_digest_589cde85ea403ff5d49523cf64a2a6ba);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_dict_4333df146eed87ef1df20566c4369df4);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain___call__);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_digest_848d596ca07e2ee9865d8f25967a405c);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_dict_8512cc5af1c17834c5398c38da930c92);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_4c892f5341d7ea4060e1a9e865a26533);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_tuple_8f248505ee92e46b7d9bdabdc9fcf147_tuple);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackGetCoreSchemaHandler);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_digest_0215345dfbef98c50edb16291bdab7fc);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_65);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3976ec8fab5be63b631601c69940c6b2_tuple);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_dict_0f02d8ed5fb19a67b64027af260a71b7);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_digest_490b91f3a6a64d006ba7412270282143);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_dict_aed25765a970b85f1400cc64c5e94e03);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2584ba9419f50a8acf37ce65f62d102);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_dict_25ccb4aaecb01303d6626ae7f5a74d97);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_types_namespace);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_digest_d5174ccdc6d2f5aef6140b5fd81d4e5f);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_9d6525e12709225dd4b9b16306d93747);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_name);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc6199bf969949b10897f5b44181da37);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_dict_04eb9d224a3da1d49887b5f737548463);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_digest_5572ccb18c595f172390407fa7adc78d);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_tuple_66c96a3982d631af4e6257cca18c5775_tuple);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_1455be32657660bc4a791b94a22bed5f);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_fbbc613261d6bf7dd1e3d6da60ab178c);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_b01b22b3da5c0e68e7c35aa1b72c0a90_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_core_schema_tuple);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_18331099027ca73da3e2bd539812bafe_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_6f34ea02b51073826cfd211c890071b2_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_source_type_tuple);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_839e6457964d968868d76255c98612fa_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_b02eba6ecef72ff625f4d0409bbc1a91_tuple);
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
void checkModuleConstants_pydantic$_internal$_schema_generation_shared(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_json_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_json_schema);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_inner));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_inner);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handler);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mode);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_schema_from_definitions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_schema_from_definitions);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_8715bae7c8fe9f64d5bb9b006b5dfe12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8715bae7c8fe9f64d5bb9b006b5dfe12);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_e74652f37a00399c2f781aeadac59d1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e74652f37a00399c2f781aeadac59d1c);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_6af45644414b253bb49ecb61a54eeff8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6af45644414b253bb49ecb61a54eeff8);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__handler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__handler);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain__generate_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__generate_schema);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__ref_mode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ref_mode);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_3976ec8fab5be63b631601c69940c6b2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3976ec8fab5be63b631601c69940c6b2);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ref_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ref_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_defs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_defs);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_definition_reference_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_definition_reference_schema);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_resolve_ref_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resolve_ref_schema);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain__types_namespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types_namespace);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_generate_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generate_schema);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_name_stack));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_name_stack);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_e6581307060bc290b9609475ed33edfb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e6581307060bc290b9609475ed33edfb);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_ref);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_schema_from_ref));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_schema_from_ref);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_definitions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_definitions);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f41258b4c54587505b68f2a1376a451));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f41258b4c54587505b68f2a1376a451);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e934eaf8b979f11dc71feb76c078f47));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e934eaf8b979f11dc71feb76c078f47);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_core_schema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_core_schema);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_a170b0a20434bc7eb9ff7cae086aef1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a170b0a20434bc7eb9ff7cae086aef1b);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCoreSchemaHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetCoreSchemaHandler);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetJsonSchemaHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetJsonSchemaHandler);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateJsonSchemaHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenerateJsonSchemaHandler);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_638a6ebdeef6a205a9ece223f0bf34b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_638a6ebdeef6a205a9ece223f0bf34b5);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_a422d1942f0bb18d958868914a51284b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a422d1942f0bb18d958868914a51284b);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_int_pos_21));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_21);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_dict_ae851f0d9e634ab9a977270f53620b6d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ae851f0d9e634ab9a977270f53620b6d);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_digest_589cde85ea403ff5d49523cf64a2a6ba));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_589cde85ea403ff5d49523cf64a2a6ba);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_dict_4333df146eed87ef1df20566c4369df4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_4333df146eed87ef1df20566c4369df4);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain___call__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___call__);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_digest_848d596ca07e2ee9865d8f25967a405c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_848d596ca07e2ee9865d8f25967a405c);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_dict_8512cc5af1c17834c5398c38da930c92));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8512cc5af1c17834c5398c38da930c92);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_4c892f5341d7ea4060e1a9e865a26533));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4c892f5341d7ea4060e1a9e865a26533);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_tuple_8f248505ee92e46b7d9bdabdc9fcf147_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8f248505ee92e46b7d9bdabdc9fcf147_tuple);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_CallbackGetCoreSchemaHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CallbackGetCoreSchemaHandler);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_digest_0215345dfbef98c50edb16291bdab7fc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0215345dfbef98c50edb16291bdab7fc);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_65));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_65);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3976ec8fab5be63b631601c69940c6b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3976ec8fab5be63b631601c69940c6b2_tuple);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_dict_0f02d8ed5fb19a67b64027af260a71b7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0f02d8ed5fb19a67b64027af260a71b7);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_digest_490b91f3a6a64d006ba7412270282143));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_490b91f3a6a64d006ba7412270282143);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_dict_aed25765a970b85f1400cc64c5e94e03));
CHECK_OBJECT_DEEP(mod_consts.const_dict_aed25765a970b85f1400cc64c5e94e03);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2584ba9419f50a8acf37ce65f62d102));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2584ba9419f50a8acf37ce65f62d102);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_dict_25ccb4aaecb01303d6626ae7f5a74d97));
CHECK_OBJECT_DEEP(mod_consts.const_dict_25ccb4aaecb01303d6626ae7f5a74d97);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_types_namespace));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_types_namespace);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_digest_d5174ccdc6d2f5aef6140b5fd81d4e5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d5174ccdc6d2f5aef6140b5fd81d4e5f);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_9d6525e12709225dd4b9b16306d93747));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9d6525e12709225dd4b9b16306d93747);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_name);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc6199bf969949b10897f5b44181da37));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc6199bf969949b10897f5b44181da37);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_dict_04eb9d224a3da1d49887b5f737548463));
CHECK_OBJECT_DEEP(mod_consts.const_dict_04eb9d224a3da1d49887b5f737548463);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_digest_5572ccb18c595f172390407fa7adc78d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5572ccb18c595f172390407fa7adc78d);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_tuple_66c96a3982d631af4e6257cca18c5775_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_66c96a3982d631af4e6257cca18c5775_tuple);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_1455be32657660bc4a791b94a22bed5f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1455be32657660bc4a791b94a22bed5f);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_fbbc613261d6bf7dd1e3d6da60ab178c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fbbc613261d6bf7dd1e3d6da60ab178c);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_b01b22b3da5c0e68e7c35aa1b72c0a90_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b01b22b3da5c0e68e7c35aa1b72c0a90_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_core_schema_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_core_schema_tuple);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_18331099027ca73da3e2bd539812bafe_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_18331099027ca73da3e2bd539812bafe_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_6f34ea02b51073826cfd211c890071b2_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_6f34ea02b51073826cfd211c890071b2_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_source_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_source_type_tuple);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_839e6457964d968868d76255c98612fa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_839e6457964d968868d76255c98612fa_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_b02eba6ecef72ff625f4d0409bbc1a91_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b02eba6ecef72ff625f4d0409bbc1a91_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 3
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
static PyObject *module_var_accessor_pydantic$_internal$_schema_generation_shared$GetCoreSchemaHandler(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_schema_generation_shared->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_schema_generation_shared->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCoreSchemaHandler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_schema_generation_shared->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetCoreSchemaHandler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetCoreSchemaHandler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetCoreSchemaHandler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetCoreSchemaHandler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCoreSchemaHandler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCoreSchemaHandler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCoreSchemaHandler);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_schema_generation_shared$GetJsonSchemaHandler(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_schema_generation_shared->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_schema_generation_shared->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetJsonSchemaHandler);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_schema_generation_shared->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetJsonSchemaHandler);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetJsonSchemaHandler, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GetJsonSchemaHandler);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GetJsonSchemaHandler, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetJsonSchemaHandler);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetJsonSchemaHandler);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GetJsonSchemaHandler);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_internal$_schema_generation_shared$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic$_internal$_schema_generation_shared->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic$_internal$_schema_generation_shared->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic$_internal$_schema_generation_shared->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_7a8030af15aca781c60191756f38b478;
static PyCodeObject *code_objects_41ed53a41b6572bdba5c6dbac36efe3f;
static PyCodeObject *code_objects_5d5f7a71df912170ab106aab6e502dfd;
static PyCodeObject *code_objects_a0099822c705d58dd2c01bf3fc4ce7f7;
static PyCodeObject *code_objects_620573804e48853638882b265780604a;
static PyCodeObject *code_objects_3f0e86f1c920ca4d17b6e2d9b4f3303c;
static PyCodeObject *code_objects_2c1d1885e4e7ccc73b4ce1baa736d8f8;
static PyCodeObject *code_objects_f04b9fac6639970799ad1392bb7b74a9;
static PyCodeObject *code_objects_8a09421a7bf43e1393b2f53ed6c2d749;
static PyCodeObject *code_objects_6d8eddecf9436200041ad611954a36d5;
static PyCodeObject *code_objects_762f8c6c86a9610079e2be89781c0f5b;
static PyCodeObject *code_objects_9d072aeaeca66c84168176ee113c2a52;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_1455be32657660bc4a791b94a22bed5f); CHECK_OBJECT(module_filename_obj);
code_objects_7a8030af15aca781c60191756f38b478 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_fbbc613261d6bf7dd1e3d6da60ab178c, mod_consts.const_str_digest_fbbc613261d6bf7dd1e3d6da60ab178c, NULL, NULL, 0, 0, 0);
code_objects_41ed53a41b6572bdba5c6dbac36efe3f = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_CallbackGetCoreSchemaHandler, mod_consts.const_str_plain_CallbackGetCoreSchemaHandler, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_5d5f7a71df912170ab106aab6e502dfd = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_GenerateJsonSchemaHandler, mod_consts.const_str_plain_GenerateJsonSchemaHandler, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a0099822c705d58dd2c01bf3fc4ce7f7 = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_a2584ba9419f50a8acf37ce65f62d102, mod_consts.const_tuple_b01b22b3da5c0e68e7c35aa1b72c0a90_tuple, NULL, 2, 0, 2);
code_objects_620573804e48853638882b265780604a = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain___call__, mod_consts.const_str_digest_848d596ca07e2ee9865d8f25967a405c, mod_consts.const_tuple_str_plain_self_str_plain_core_schema_tuple, NULL, 2, 0, 2);
code_objects_3f0e86f1c920ca4d17b6e2d9b4f3303c = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_490b91f3a6a64d006ba7412270282143, mod_consts.const_tuple_18331099027ca73da3e2bd539812bafe_tuple, NULL, 4, 0, 0);
code_objects_2c1d1885e4e7ccc73b4ce1baa736d8f8 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_589cde85ea403ff5d49523cf64a2a6ba, mod_consts.const_tuple_6f34ea02b51073826cfd211c890071b2_tuple, NULL, 3, 0, 0);
code_objects_f04b9fac6639970799ad1392bb7b74a9 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_types_namespace, mod_consts.const_str_digest_d5174ccdc6d2f5aef6140b5fd81d4e5f, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_8a09421a7bf43e1393b2f53ed6c2d749 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_field_name, mod_consts.const_str_digest_fc6199bf969949b10897f5b44181da37, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6d8eddecf9436200041ad611954a36d5 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_generate_schema, mod_consts.const_str_digest_9d6525e12709225dd4b9b16306d93747, mod_consts.const_tuple_str_plain_self_str_plain_source_type_tuple, NULL, 2, 0, 2);
code_objects_762f8c6c86a9610079e2be89781c0f5b = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_ref_schema, mod_consts.const_str_digest_5572ccb18c595f172390407fa7adc78d, mod_consts.const_tuple_839e6457964d968868d76255c98612fa_tuple, NULL, 2, 0, 0);
code_objects_9d072aeaeca66c84168176ee113c2a52 = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_resolve_ref_schema, mod_consts.const_str_digest_4c892f5341d7ea4060e1a9e865a26533, mod_consts.const_tuple_b02eba6ecef72ff625f4d0409bbc1a91_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__2___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__5___call__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__8_field_name(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_generate_json_schema = python_pars[1];
PyObject *par_handler_override = python_pars[2];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_2c1d1885e4e7ccc73b4ce1baa736d8f8, module_pydantic$_internal$_schema_generation_shared, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__ = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_generate_json_schema);
tmp_assattr_value_1 = par_generate_json_schema;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_generate_json_schema, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_handler_override);
tmp_or_left_value_1 = par_handler_override;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_generate_json_schema);
tmp_expression_value_1 = par_generate_json_schema;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_generate_inner);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_assattr_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assattr_value_2 = tmp_or_left_value_1;
or_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_handler, tmp_assattr_value_2);
CHECK_OBJECT(tmp_assattr_value_2);
Py_DECREF(tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_expression_value_2;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_generate_json_schema);
tmp_expression_value_2 = par_generate_json_schema;
tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_mode);
if (tmp_assattr_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_mode, tmp_assattr_value_3);
CHECK_OBJECT(tmp_assattr_value_3);
Py_DECREF(tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;
type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__,
    type_description_1,
    par_self,
    par_generate_json_schema,
    par_handler_override
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__ == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__1___init__);

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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_generate_json_schema);
Py_DECREF(par_generate_json_schema);
CHECK_OBJECT(par_handler_override);
Py_DECREF(par_handler_override);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_generate_json_schema);
Py_DECREF(par_generate_json_schema);
CHECK_OBJECT(par_handler_override);
Py_DECREF(par_handler_override);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__2___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_core_schema = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_620573804e48853638882b265780604a, module_pydantic$_internal$_schema_generation_shared, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__ = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_core_schema);
tmp_args_element_value_1 = par_core_schema;
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__->m_frame.f_lineno = 37;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_handler, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__,
    type_description_1,
    par_self,
    par_core_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__ == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__ = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__2___call__);

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
CHECK_OBJECT(par_core_schema);
Py_DECREF(par_core_schema);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_core_schema);
Py_DECREF(par_core_schema);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_maybe_ref_json_schema = python_pars[1];
PyObject *var_ref = NULL;
PyObject *var_json_schema = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_9d072aeaeca66c84168176ee113c2a52, module_pydantic$_internal$_schema_generation_shared, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f;
CHECK_OBJECT(par_maybe_ref_json_schema);
tmp_cmp_expr_right_1 = par_maybe_ref_json_schema;
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_1 = "oooo";
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
CHECK_OBJECT(par_maybe_ref_json_schema);
tmp_return_value = par_maybe_ref_json_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_maybe_ref_json_schema);
tmp_expression_value_1 = par_maybe_ref_json_schema;
tmp_subscript_value_1 = mod_consts.const_str_digest_99b2b9518bc27b61b80729fcb0aefd4f;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_ref == NULL);
var_ref = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_generate_json_schema);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ref);
tmp_args_element_value_1 = var_ref;
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema->m_frame.f_lineno = 56;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_schema_from_definitions, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_json_schema == NULL);
var_json_schema = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_json_schema);
tmp_cmp_expr_left_2 = var_json_schema;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8715bae7c8fe9f64d5bb9b006b5dfe12;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_ref);
tmp_format_value_1 = var_ref;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e74652f37a00399c2f781aeadac59d1c;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema->m_frame.f_lineno = 58;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_LookupError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 58;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema,
    type_description_1,
    par_self,
    par_maybe_ref_json_schema,
    var_ref,
    var_json_schema
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_json_schema);
tmp_return_value = var_json_schema;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_ref);
var_ref = NULL;
Py_XDECREF(var_json_schema);
var_json_schema = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ref);
var_ref = NULL;
Py_XDECREF(var_json_schema);
var_json_schema = NULL;
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
CHECK_OBJECT(par_maybe_ref_json_schema);
Py_DECREF(par_maybe_ref_json_schema);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_maybe_ref_json_schema);
Py_DECREF(par_maybe_ref_json_schema);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_handler = python_pars[1];
PyObject *par_generate_schema = python_pars[2];
PyObject *par_ref_mode = python_pars[3];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3f0e86f1c920ca4d17b6e2d9b4f3303c, module_pydantic$_internal$_schema_generation_shared, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__ = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_handler);
tmp_assattr_value_1 = par_handler;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__handler, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_generate_schema);
tmp_assattr_value_2 = par_generate_schema;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__generate_schema, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_ref_mode);
tmp_assattr_value_3 = par_ref_mode;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__ref_mode, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__,
    type_description_1,
    par_self,
    par_handler,
    par_generate_schema,
    par_ref_mode
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__ == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__ = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__4___init__);

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
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
CHECK_OBJECT(par_generate_schema);
Py_DECREF(par_generate_schema);
CHECK_OBJECT(par_ref_mode);
Py_DECREF(par_ref_mode);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_handler);
Py_DECREF(par_handler);
CHECK_OBJECT(par_generate_schema);
Py_DECREF(par_generate_schema);
CHECK_OBJECT(par_ref_mode);
Py_DECREF(par_ref_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__5___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_source_type = python_pars[1];
PyObject *var_schema = NULL;
PyObject *var_ref = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a0099822c705d58dd2c01bf3fc4ce7f7, module_pydantic$_internal$_schema_generation_shared, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__ = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
CHECK_OBJECT(par_source_type);
tmp_args_element_value_1 = par_source_type;
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__->m_frame.f_lineno = 83;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain__handler, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 83;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_schema == NULL);
var_schema = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__ref_mode);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_3976ec8fab5be63b631601c69940c6b2;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 84;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_schema);
tmp_expression_value_2 = var_schema;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__->m_frame.f_lineno = 85;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_ref_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_ref == NULL);
var_ref = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_ref);
tmp_cmp_expr_left_2 = var_ref;
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
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__generate_schema);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_defs);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_schema);
tmp_args_element_value_2 = var_schema;
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__->m_frame.f_lineno = 87;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_create_definition_reference_schema, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 87;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
CHECK_OBJECT(var_schema);
tmp_return_value = var_schema;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_3;
CHECK_OBJECT(par_self);
tmp_called_instance_3 = par_self;
CHECK_OBJECT(var_schema);
tmp_args_element_value_3 = var_schema;
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__->m_frame.f_lineno = 90;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_resolve_ref_schema, tmp_args_element_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_1 = "oooo";
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

goto try_return_handler_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__,
    type_description_1,
    par_self,
    par_source_type,
    var_schema,
    var_ref
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__ == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__ = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__5___call__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_schema);
CHECK_OBJECT(var_schema);
Py_DECREF(var_schema);
var_schema = NULL;
Py_XDECREF(var_ref);
var_ref = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_schema);
var_schema = NULL;
Py_XDECREF(var_ref);
var_ref = NULL;
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
CHECK_OBJECT(par_source_type);
Py_DECREF(par_source_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_source_type);
Py_DECREF(par_source_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace = MAKE_FUNCTION_FRAME(tstate, code_objects_f04b9fac6639970799ad1392bb7b74a9, module_pydantic$_internal$_schema_generation_shared, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__generate_schema);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__types_namespace);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace);

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


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_source_type = python_pars[1];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_6d8eddecf9436200041ad611954a36d5, module_pydantic$_internal$_schema_generation_shared, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__generate_schema);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_source_type);
tmp_args_element_value_1 = par_source_type;
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema->m_frame.f_lineno = 96;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_generate_schema, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 96;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema,
    type_description_1,
    par_self,
    par_source_type
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema);

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
CHECK_OBJECT(par_source_type);
Py_DECREF(par_source_type);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_source_type);
Py_DECREF(par_source_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__8_field_name(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name = MAKE_FUNCTION_FRAME(tstate, code_objects_8a09421a7bf43e1393b2f53ed6c2d749, module_pydantic$_internal$_schema_generation_shared, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__generate_schema);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_field_name_stack);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name->m_frame.f_lineno = 100;
tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__8_field_name);

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


static PyObject *impl_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_maybe_ref_schema = python_pars[1];
PyObject *var_ref = NULL;
PyObject *var_definition = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema)) {
    Py_XDECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema = MAKE_FUNCTION_FRAME(tstate, code_objects_762f8c6c86a9610079e2be89781c0f5b, module_pydantic$_internal$_schema_generation_shared, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema->m_type_description == NULL);
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema = cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
CHECK_OBJECT(par_maybe_ref_schema);
tmp_expression_value_1 = par_maybe_ref_schema;
tmp_subscript_value_1 = const_str_plain_type;
tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_e6581307060bc290b9609475ed33edfb;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;
type_description_1 = "oooo";
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
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
CHECK_OBJECT(par_maybe_ref_schema);
tmp_expression_value_2 = par_maybe_ref_schema;
tmp_subscript_value_2 = mod_consts.const_str_plain_schema_ref;
tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 115;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_ref == NULL);
var_ref = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__generate_schema);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_defs);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_ref);
tmp_args_element_value_1 = var_ref;
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema->m_frame.f_lineno = 116;
tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_get_schema_from_ref, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_definition == NULL);
var_definition = tmp_assign_source_2;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_definition);
tmp_cmp_expr_left_2 = var_definition;
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_8715bae7c8fe9f64d5bb9b006b5dfe12;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_ref);
tmp_format_value_1 = var_ref;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_e74652f37a00399c2f781aeadac59d1c;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
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
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema->m_frame.f_lineno = 118;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_LookupError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 118;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_2:;
CHECK_OBJECT(var_definition);
tmp_return_value = var_definition;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_3;
CHECK_OBJECT(par_maybe_ref_schema);
tmp_expression_value_5 = par_maybe_ref_schema;
tmp_subscript_value_3 = const_str_plain_type;
tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_str_plain_definitions;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_resolve_ref_schema);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_maybe_ref_schema);
tmp_expression_value_7 = par_maybe_ref_schema;
tmp_subscript_value_4 = mod_consts.const_str_plain_schema;
tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_4);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema->m_frame.f_lineno = 124;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema,
    type_description_1,
    par_self,
    par_maybe_ref_schema,
    var_ref,
    var_definition
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema == cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema);
    cache_frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema = NULL;
}

assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_maybe_ref_schema);
tmp_return_value = par_maybe_ref_schema;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_ref);
var_ref = NULL;
Py_XDECREF(var_definition);
var_definition = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_ref);
var_ref = NULL;
Py_XDECREF(var_definition);
var_definition = NULL;
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
CHECK_OBJECT(par_maybe_ref_schema);
Py_DECREF(par_maybe_ref_schema);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_maybe_ref_schema);
Py_DECREF(par_maybe_ref_schema);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_589cde85ea403ff5d49523cf64a2a6ba,
#endif
        code_objects_2c1d1885e4e7ccc73b4ce1baa736d8f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__2___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__2___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_848d596ca07e2ee9865d8f25967a405c,
#endif
        code_objects_620573804e48853638882b265780604a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema,
        mod_consts.const_str_plain_resolve_ref_schema,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4c892f5341d7ea4060e1a9e865a26533,
#endif
        code_objects_9d072aeaeca66c84168176ee113c2a52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        mod_consts.const_str_digest_6af45644414b253bb49ecb61a54eeff8,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__4___init__(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_490b91f3a6a64d006ba7412270282143,
#endif
        code_objects_3f0e86f1c920ca4d17b6e2d9b4f3303c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__5___call__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__5___call__,
        mod_consts.const_str_plain___call__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a2584ba9419f50a8acf37ce65f62d102,
#endif
        code_objects_a0099822c705d58dd2c01bf3fc4ce7f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace,
        mod_consts.const_str_plain__get_types_namespace,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_d5174ccdc6d2f5aef6140b5fd81d4e5f,
#endif
        code_objects_f04b9fac6639970799ad1392bb7b74a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema,
        mod_consts.const_str_plain_generate_schema,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9d6525e12709225dd4b9b16306d93747,
#endif
        code_objects_6d8eddecf9436200041ad611954a36d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__8_field_name(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__8_field_name,
        mod_consts.const_str_plain_field_name,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fc6199bf969949b10897f5b44181da37,
#endif
        code_objects_8a09421a7bf43e1393b2f53ed6c2d749,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema,
        mod_consts.const_str_plain_resolve_ref_schema,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5572ccb18c595f172390407fa7adc78d,
#endif
        code_objects_762f8c6c86a9610079e2be89781c0f5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic$_internal$_schema_generation_shared,
        mod_consts.const_str_digest_3f41258b4c54587505b68f2a1376a451,
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

static function_impl_code const function_table_pydantic$_internal$_schema_generation_shared[] = {
impl_pydantic$_internal$_schema_generation_shared$$$function__1___init__,
impl_pydantic$_internal$_schema_generation_shared$$$function__2___call__,
impl_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema,
impl_pydantic$_internal$_schema_generation_shared$$$function__4___init__,
impl_pydantic$_internal$_schema_generation_shared$$$function__5___call__,
impl_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace,
impl_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema,
impl_pydantic$_internal$_schema_generation_shared$$$function__8_field_name,
impl_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic$_internal$_schema_generation_shared);
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
        module_pydantic$_internal$_schema_generation_shared,
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
        function_table_pydantic$_internal$_schema_generation_shared,
        sizeof(function_table_pydantic$_internal$_schema_generation_shared) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic._internal._schema_generation_shared";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic$_internal$_schema_generation_shared(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic$_internal$_schema_generation_shared");

    // Store the module for future use.
    module_pydantic$_internal$_schema_generation_shared = module;

    moduledict_pydantic$_internal$_schema_generation_shared = MODULE_DICT(module_pydantic$_internal$_schema_generation_shared);

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
        PRINT_STRING("pydantic$_internal$_schema_generation_shared: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic$_internal$_schema_generation_shared: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic$_internal$_schema_generation_shared: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._schema_generation_shared" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic$_internal$_schema_generation_shared\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic$_internal$_schema_generation_shared,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_schema_generation_shared,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic$_internal$_schema_generation_shared,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_schema_generation_shared,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic$_internal$_schema_generation_shared,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic$_internal$_schema_generation_shared);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic$_internal$_schema_generation_shared);
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

        UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__bases = NULL;
PyObject *tmp_class_container$class_creation_1__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__metaclass = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65 = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = mod_consts.const_str_digest_5e934eaf8b979f11dc71feb76c078f47;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic$_internal$_schema_generation_shared = MAKE_MODULE_FRAME(code_objects_7a8030af15aca781c60191756f38b478, module_pydantic$_internal$_schema_generation_shared);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$_internal$_schema_generation_shared$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$_internal$_schema_generation_shared$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
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
UPDATE_STRING_DICT0(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_6);
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
        (PyObject *)moduledict_pydantic$_internal$_schema_generation_shared,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_7);
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
        (PyObject *)moduledict_pydantic$_internal$_schema_generation_shared,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_8);
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
        (PyObject *)moduledict_pydantic$_internal$_schema_generation_shared,
        mod_consts.const_str_plain_Literal,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Literal);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_Literal, tmp_assign_source_9);
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
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 7;
tmp_assign_source_10 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3, mod_consts.const_str_digest_3be1977a43d6fc92a01e1adc500d16b3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_core_schema, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 9;
tmp_assign_source_11 = IMPORT_MODULE_FIXED(tstate, mod_consts.const_str_digest_a170b0a20434bc7eb9ff7cae086aef1b, mod_consts.const_str_digest_a170b0a20434bc7eb9ff7cae086aef1b);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_11;
}
// Tried code:
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_pydantic$_internal$_schema_generation_shared,
        mod_consts.const_str_plain_GetCoreSchemaHandler,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_GetCoreSchemaHandler);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetCoreSchemaHandler, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_5 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_pydantic$_internal$_schema_generation_shared,
        mod_consts.const_str_plain_GetJsonSchemaHandler,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_GetJsonSchemaHandler);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GetJsonSchemaHandler, tmp_assign_source_13);
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
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_14;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_pydantic$_internal$_schema_generation_shared$GetJsonSchemaHandler(tstate);
assert(!(tmp_tuple_element_1 == NULL));
tmp_assign_source_14 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_14, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_14;
}
// Tried code:
{
PyObject *tmp_assign_source_15;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_15 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_15;
}
{
PyObject *tmp_assign_source_16;
tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_16;
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_1 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_1 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_17 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_17;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
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
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_3 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_GenerateJsonSchemaHandler;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 21;
tmp_assign_source_18 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_18;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_4 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
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
PyObject *tmp_expression_value_5;
PyObject *tmp_name_value_1;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_1 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_1, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_6;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_3;
}
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 21;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 21;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_3;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_19;
tmp_assign_source_19 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_19;
}
branch_end_1:;
{
PyObject *tmp_assign_source_20;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_638a6ebdeef6a205a9ece223f0bf34b5;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_digest_a422d1942f0bb18d958868914a51284b;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_str_plain_GenerateJsonSchemaHandler;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
tmp_dictset_value = mod_consts.const_int_pos_21;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2 = MAKE_CLASS_FRAME(tstate, code_objects_5d5f7a71df912170ab106aab6e502dfd, module_pydantic$_internal$_schema_generation_shared, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_ae851f0d9e634ab9a977270f53620b6d);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__1___init__(tstate, tmp_annotations_1);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_4333df146eed87ef1df20566c4369df4);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__2___call__(tstate, tmp_annotations_2);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_8512cc5af1c17834c5398c38da930c92);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__3_resolve_ref_schema(tstate, tmp_annotations_3);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, mod_consts.const_str_plain_resolve_ref_schema, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_8f248505ee92e46b7d9bdabdc9fcf147_tuple;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
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


exception_lineno = 21;

    goto try_except_handler_5;
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
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
branch_no_3:;
{
PyObject *tmp_assign_source_21;
PyObject *tmp_called_value_2;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_2 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_GenerateJsonSchemaHandler;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 21;
tmp_assign_source_21 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_21;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_20 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_20);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21);
locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21);
locals_pydantic$_internal$_schema_generation_shared$$$class__1_GenerateJsonSchemaHandler_21 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 21;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_GenerateJsonSchemaHandler, tmp_assign_source_20);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
Py_DECREF(tmp_class_container$class_creation_1__bases_orig);
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
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
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
{
PyObject *tmp_outline_return_value_2;
// Tried code:
{
PyObject *tmp_assign_source_22;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_pydantic$_internal$_schema_generation_shared$GetCoreSchemaHandler(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GetCoreSchemaHandler);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_assign_source_22 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_22, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_22;
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_23 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_24;
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_2;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_7 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_2 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_25 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_25;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_condition_result_6 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_CallbackGetCoreSchemaHandler;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 65;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_26;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_10 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_7 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_11;
PyObject *tmp_name_value_2;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_2 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_2, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_12;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_6;
}
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 65;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 65;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_27;
tmp_assign_source_27 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_27;
}
branch_end_4:;
{
PyObject *tmp_assign_source_28;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_638a6ebdeef6a205a9ece223f0bf34b5;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_0215345dfbef98c50edb16291bdab7fc;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_CallbackGetCoreSchemaHandler;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_65;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3 = MAKE_CLASS_FRAME(tstate, code_objects_41ed53a41b6572bdba5c6dbac36efe3f, module_pydantic$_internal$_schema_generation_shared, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3);
assert(Py_REFCNT(frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3) == 2);

// Framed code:
{
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_4;
tmp_defaults_1 = mod_consts.const_tuple_str_digest_3976ec8fab5be63b631601c69940c6b2_tuple;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_0f02d8ed5fb19a67b64027af260a71b7);
Py_INCREF(tmp_defaults_1);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__4___init__(tstate, tmp_defaults_1, tmp_annotations_4);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_aed25765a970b85f1400cc64c5e94e03);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__5___call__(tstate, tmp_annotations_5);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain___call__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_25ccb4aaecb01303d6626ae7f5a74d97);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__6__get_types_namespace(tstate, tmp_annotations_6);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain__get_types_namespace, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_aed25765a970b85f1400cc64c5e94e03);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__7_generate_schema(tstate, tmp_annotations_7);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain_generate_schema, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_8;
tmp_called_value_4 = PyObject_GetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_1 = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__8_field_name(tstate, tmp_annotations_8);

frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3->m_frame.f_lineno = 98;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 98;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain_field_name, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 99;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_04eb9d224a3da1d49887b5f737548463);

tmp_dictset_value = MAKE_FUNCTION_pydantic$_internal$_schema_generation_shared$$$function__9_resolve_ref_schema(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain_resolve_ref_schema, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_2;
frame_exception_exit_3:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_66c96a3982d631af4e6257cca18c5775_tuple;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
branch_no_6:;
{
PyObject *tmp_assign_source_29;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_CallbackGetCoreSchemaHandler;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_pydantic$_internal$_schema_generation_shared->m_frame.f_lineno = 65;
tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_29;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_28 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_28);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65);
locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65);
locals_pydantic$_internal$_schema_generation_shared$$$class__2_CallbackGetCoreSchemaHandler_65 = NULL;
// Re-raise.
exception_state = exception_keeper_name_6;
exception_lineno = exception_keeper_lineno_6;

goto try_except_handler_7;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_7:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 65;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)mod_consts.const_str_plain_CallbackGetCoreSchemaHandler, tmp_assign_source_28);
}
goto try_end_4;
// Exception handler code:
try_except_handler_6:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
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
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto frame_exception_exit_1;
// End of try:
try_end_4:;
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
tmp_outline_return_value_2 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_2);
goto outline_result_3;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_3:;
CHECK_OBJECT(tmp_outline_return_value_2);
Py_DECREF(tmp_outline_return_value_2);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$_internal$_schema_generation_shared, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$_internal$_schema_generation_shared->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$_internal$_schema_generation_shared, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic$_internal$_schema_generation_shared);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic$_internal$_schema_generation_shared", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic._internal._schema_generation_shared" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic$_internal$_schema_generation_shared);
    return module_pydantic$_internal$_schema_generation_shared;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic$_internal$_schema_generation_shared, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic$_internal$_schema_generation_shared", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

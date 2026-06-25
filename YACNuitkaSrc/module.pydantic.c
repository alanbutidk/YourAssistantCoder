/* Generated code for Python module 'pydantic'
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



/* The "module_pydantic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pydantic;
PyDictObject *moduledict_pydantic;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__deprecated_dynamic_imports;
PyObject *const_str_plain_warn;
PyObject *const_str_digest_1c59d036563140d9a51a689d8d4e2489;
PyObject *const_str_digest_f3b17c4a328ea3995012d307ef05aa8c;
PyObject *const_str_plain_DeprecationWarning;
PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
PyObject *const_str_plain__dynamic_imports;
PyObject *const_str_plain__getattr_migration;
PyObject *const_str_plain_import_module;
PyObject *const_str_plain_items;
PyObject *const_str_plain_module;
PyObject *const_str_plain_g;
PyObject *const_str_plain_list;
PyObject *const_str_plain_environ;
PyObject *const_tuple_621f04dc5d2c2412df52bd86946770c7_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_typing;
PyObject *const_str_plain_warnings;
PyObject *const_tuple_str_plain_warn_tuple;
PyObject *const_str_plain__migration;
PyObject *const_tuple_str_plain_getattr_migration_tuple;
PyObject *const_str_plain_getattr_migration;
PyObject *const_str_plain_version;
PyObject *const_tuple_str_plain_VERSION_tuple;
PyObject *const_str_plain_VERSION;
PyObject *const_str_plain___version__;
PyObject *const_tuple_83e1d90a6d22b9f84a74873d865a812f_tuple;
PyObject *const_str_plain_dataclasses;
PyObject *const_str_plain_field_validator;
PyObject *const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyObject *const_str_plain_model_validator;
PyObject *const_str_plain_AfterValidator;
PyObject *const_str_plain_BeforeValidator;
PyObject *const_str_plain_PlainValidator;
PyObject *const_str_plain_WrapValidator;
PyObject *const_str_plain_SkipValidation;
PyObject *const_str_plain_InstanceOf;
PyObject *const_str_plain_ModelWrapValidatorHandler;
PyObject *const_str_plain_WithJsonSchema;
PyObject *const_str_digest_d9d5bc4369ddeaf3cccd611787a3de0d;
PyObject *const_str_plain_field_serializer;
PyObject *const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8;
PyObject *const_str_plain_model_serializer;
PyObject *const_str_plain_PlainSerializer;
PyObject *const_str_plain_SerializeAsAny;
PyObject *const_str_plain_WrapSerializer;
PyObject *const_str_plain_ConfigDict;
PyObject *const_str_digest_787bd342a9a62d3efb07503426149edb;
PyObject *const_str_plain_with_config;
PyObject *const_str_plain_validate_call;
PyObject *const_str_digest_194123bf7cd9a079f19d08d3252278e0;
PyObject *const_str_plain_PydanticErrorCodes;
PyObject *const_str_digest_e2301d8e90149aba491ef4d639680460;
PyObject *const_str_plain_PydanticUserError;
PyObject *const_str_plain_PydanticSchemaGenerationError;
PyObject *const_str_plain_PydanticImportError;
PyObject *const_str_plain_PydanticUndefinedAnnotation;
PyObject *const_str_plain_PydanticInvalidForJsonSchema;
PyObject *const_str_plain_PydanticForbiddenQualifier;
PyObject *const_str_plain_Field;
PyObject *const_str_digest_b6388161f54497f81241bf37f590750b;
PyObject *const_str_plain_computed_field;
PyObject *const_str_plain_PrivateAttr;
PyObject *const_str_plain_AliasChoices;
PyObject *const_str_digest_c3b4ce85c1543fd9236ad8486c2a82cd;
PyObject *const_str_plain_AliasGenerator;
PyObject *const_str_plain_AliasPath;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_digest_2a8d191bb057a8ece19c7cba2dcb38b5;
PyObject *const_str_plain_create_model;
PyObject *const_str_plain_AnyUrl;
PyObject *const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyObject *const_str_plain_AnyHttpUrl;
PyObject *const_str_plain_FileUrl;
PyObject *const_str_plain_HttpUrl;
PyObject *const_str_plain_FtpUrl;
PyObject *const_str_plain_WebsocketUrl;
PyObject *const_str_plain_AnyWebsocketUrl;
PyObject *const_str_plain_UrlConstraints;
PyObject *const_str_plain_EmailStr;
PyObject *const_str_plain_NameEmail;
PyObject *const_str_plain_IPvAnyAddress;
PyObject *const_str_plain_IPvAnyInterface;
PyObject *const_str_plain_IPvAnyNetwork;
PyObject *const_str_plain_PostgresDsn;
PyObject *const_str_plain_CockroachDsn;
PyObject *const_str_plain_AmqpDsn;
PyObject *const_str_plain_RedisDsn;
PyObject *const_str_plain_MongoDsn;
PyObject *const_str_plain_KafkaDsn;
PyObject *const_str_plain_NatsDsn;
PyObject *const_str_plain_MySQLDsn;
PyObject *const_str_plain_MariaDBDsn;
PyObject *const_str_plain_ClickHouseDsn;
PyObject *const_str_plain_SnowflakeDsn;
PyObject *const_str_plain_validate_email;
PyObject *const_str_plain_RootModel;
PyObject *const_str_digest_278ea4261c59410e9ca8b2cf1b5a558f;
PyObject *const_str_plain_Strict;
PyObject *const_str_digest_21706d79aec80da20efc021192bde613;
PyObject *const_str_plain_StrictStr;
PyObject *const_str_plain_conbytes;
PyObject *const_str_plain_conlist;
PyObject *const_str_plain_conset;
PyObject *const_str_plain_confrozenset;
PyObject *const_str_plain_constr;
PyObject *const_str_plain_StringConstraints;
PyObject *const_str_plain_ImportString;
PyObject *const_str_plain_conint;
PyObject *const_str_plain_PositiveInt;
PyObject *const_str_plain_NegativeInt;
PyObject *const_str_plain_NonNegativeInt;
PyObject *const_str_plain_NonPositiveInt;
PyObject *const_str_plain_confloat;
PyObject *const_str_plain_PositiveFloat;
PyObject *const_str_plain_NegativeFloat;
PyObject *const_str_plain_NonNegativeFloat;
PyObject *const_str_plain_NonPositiveFloat;
PyObject *const_str_plain_FiniteFloat;
PyObject *const_str_plain_condecimal;
PyObject *const_str_plain_condate;
PyObject *const_str_plain_UUID1;
PyObject *const_str_plain_UUID3;
PyObject *const_str_plain_UUID4;
PyObject *const_str_plain_UUID5;
PyObject *const_str_plain_UUID6;
PyObject *const_str_plain_UUID7;
PyObject *const_str_plain_UUID8;
PyObject *const_str_plain_FilePath;
PyObject *const_str_plain_DirectoryPath;
PyObject *const_str_plain_NewPath;
PyObject *const_str_plain_Json;
PyObject *const_str_plain_Secret;
PyObject *const_str_plain_SecretStr;
PyObject *const_str_plain_SecretBytes;
PyObject *const_str_plain_StrictBool;
PyObject *const_str_plain_StrictBytes;
PyObject *const_str_plain_StrictInt;
PyObject *const_str_plain_StrictFloat;
PyObject *const_str_plain_PaymentCardNumber;
PyObject *const_str_plain_ByteSize;
PyObject *const_str_plain_PastDate;
PyObject *const_str_plain_SocketPath;
PyObject *const_str_plain_FutureDate;
PyObject *const_str_plain_PastDatetime;
PyObject *const_str_plain_FutureDatetime;
PyObject *const_str_plain_AwareDatetime;
PyObject *const_str_plain_NaiveDatetime;
PyObject *const_str_plain_AllowInfNan;
PyObject *const_str_plain_EncoderProtocol;
PyObject *const_str_plain_EncodedBytes;
PyObject *const_str_plain_EncodedStr;
PyObject *const_str_plain_Base64Encoder;
PyObject *const_str_plain_Base64Bytes;
PyObject *const_str_plain_Base64Str;
PyObject *const_str_plain_Base64UrlBytes;
PyObject *const_str_plain_Base64UrlStr;
PyObject *const_str_plain_GetPydanticSchema;
PyObject *const_str_plain_Tag;
PyObject *const_str_plain_Discriminator;
PyObject *const_str_plain_JsonValue;
PyObject *const_str_plain_OnErrorOmit;
PyObject *const_str_plain_FailFast;
PyObject *const_str_plain_TypeAdapter;
PyObject *const_str_digest_edcc6a110508959863b62d378c879983;
PyObject *const_str_plain_PydanticDeprecatedSince20;
PyObject *const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyObject *const_str_plain_PydanticDeprecatedSince26;
PyObject *const_str_plain_PydanticDeprecatedSince29;
PyObject *const_str_plain_PydanticDeprecatedSince210;
PyObject *const_str_plain_PydanticDeprecatedSince211;
PyObject *const_str_plain_PydanticDeprecationWarning;
PyObject *const_str_plain_PydanticExperimentalWarning;
PyObject *const_str_plain_GetCoreSchemaHandler;
PyObject *const_str_digest_6db041ddfb481dc4a7eb87f36f73d281;
PyObject *const_str_plain_GetJsonSchemaHandler;
PyObject *const_str_plain_ValidationError;
PyObject *const_tuple_str_plain_pydantic_core_str_dot_tuple;
PyObject *const_str_plain_ValidationInfo;
PyObject *const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple;
PyObject *const_str_plain_SerializationInfo;
PyObject *const_str_plain_ValidatorFunctionWrapHandler;
PyObject *const_str_plain_FieldSerializationInfo;
PyObject *const_str_plain_SerializerFunctionWrapHandler;
PyObject *const_str_plain_root_validator;
PyObject *const_str_digest_5e0d5be0eae1ffe4fd5e0f731749f989;
PyObject *const_str_plain_validator;
PyObject *const_str_plain_BaseConfig;
PyObject *const_str_digest_82a1ad21f1b36d975bb6c3f5b892db3a;
PyObject *const_str_plain_Extra;
PyObject *const_str_plain_parse_obj_as;
PyObject *const_str_digest_25c1bee5f185241c1cda853c6d01a5d7;
PyObject *const_str_plain_schema_of;
PyObject *const_str_plain_schema_json_of;
PyObject *const_str_plain_FieldValidationInfo;
PyObject *const_str_plain_GenerateSchema;
PyObject *const_str_digest_b1902a05c7e13bca6c2c3dcf544b5db9;
PyObject *const_str_digest_ae2ec25258659540c7c4f7d6452fedca;
PyObject *const_set_1e1b29a93c20d11330ff403f7a16cb69;
PyObject *const_tuple_str_plain_pydantic_tuple;
PyObject *const_str_plain_attr_name;
PyObject *const_str_plain_str;
PyObject *const_str_plain_return;
PyObject *const_str_plain_object;
PyObject *const_str_plain___getattr__;
PyObject *const_dict_0fc05ed22f6723891cdf750312b81bd3;
PyObject *const_str_plain___dir__;
PyObject *const_str_digest_5ca1deec50ef7d85ff804511cc99278a;
PyObject *const_str_digest_5d58dbba6a1e9ceb72bd2499fc108147;
PyObject *const_tuple_df43da20dc96c5954e7036a5ef7dea03_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[212];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("pydantic"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__deprecated_dynamic_imports);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_warn);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_1c59d036563140d9a51a689d8d4e2489);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_f3b17c4a328ea3995012d307ef05aa8c);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain__dynamic_imports);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__getattr_migration);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_import_module);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_items);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_module);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_g);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_list);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_621f04dc5d2c2412df52bd86946770c7_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_warnings);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_warn_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain__migration);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getattr_migration_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_getattr_migration);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_tuple_83e1d90a6d22b9f84a74873d865a812f_tuple);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_validator);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_validator);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_AfterValidator);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_BeforeValidator);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlainValidator);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_WrapValidator);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_SkipValidation);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_InstanceOf);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ModelWrapValidatorHandler);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_WithJsonSchema);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_d9d5bc4369ddeaf3cccd611787a3de0d);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_field_serializer);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_serializer);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_PlainSerializer);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_SerializeAsAny);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_WrapSerializer);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_787bd342a9a62d3efb07503426149edb);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_config);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_call);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_194123bf7cd9a079f19d08d3252278e0);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticErrorCodes);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUserError);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticSchemaGenerationError);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticImportError);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefinedAnnotation);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticInvalidForJsonSchema);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticForbiddenQualifier);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Field);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6388161f54497f81241bf37f590750b);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_computed_field);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateAttr);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_AliasChoices);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_digest_c3b4ce85c1543fd9236ad8486c2a82cd);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_AliasGenerator);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_AliasPath);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a8d191bb057a8ece19c7cba2dcb38b5);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_create_model);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUrl);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyHttpUrl);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_FileUrl);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_HttpUrl);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_FtpUrl);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebsocketUrl);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_AnyWebsocketUrl);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_UrlConstraints);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_EmailStr);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_NameEmail);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPvAnyAddress);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPvAnyInterface);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_IPvAnyNetwork);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_PostgresDsn);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_CockroachDsn);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_AmqpDsn);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_RedisDsn);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_MongoDsn);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_KafkaDsn);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_NatsDsn);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_MySQLDsn);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_MariaDBDsn);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClickHouseDsn);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_SnowflakeDsn);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_validate_email);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_RootModel);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_digest_278ea4261c59410e9ca8b2cf1b5a558f);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_Strict);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_21706d79aec80da20efc021192bde613);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrictStr);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_conbytes);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_conlist);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_conset);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_confrozenset);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_constr);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_StringConstraints);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ImportString);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_conint);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_PositiveInt);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_NegativeInt);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_NonNegativeInt);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_NonPositiveInt);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_confloat);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_PositiveFloat);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_NegativeFloat);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_NonNegativeFloat);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_NonPositiveFloat);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_FiniteFloat);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_condecimal);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_condate);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID1);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID3);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID4);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID5);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID6);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID7);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_UUID8);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_FilePath);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_DirectoryPath);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_NewPath);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_Json);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_Secret);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecretStr);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_SecretBytes);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrictBool);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrictBytes);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrictInt);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_StrictFloat);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_PaymentCardNumber);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_ByteSize);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_PastDate);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_SocketPath);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_FutureDate);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_PastDatetime);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_FutureDatetime);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_AwareDatetime);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_NaiveDatetime);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_AllowInfNan);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_EncoderProtocol);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_EncodedBytes);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_EncodedStr);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base64Encoder);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base64Bytes);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base64Str);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base64UrlBytes);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_Base64UrlStr);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetPydanticSchema);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_Tag);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_Discriminator);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_JsonValue);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_OnErrorOmit);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain_FailFast);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_edcc6a110508959863b62d378c879983);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince20);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince26);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince29);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince210);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince211);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecationWarning);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticExperimentalWarning);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetCoreSchemaHandler);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_6db041ddfb481dc4a7eb87f36f73d281);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_GetJsonSchemaHandler);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationError);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pydantic_core_str_dot_tuple);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationInfo);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_SerializationInfo);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_ValidatorFunctionWrapHandler);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_plain_FieldSerializationInfo);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_SerializerFunctionWrapHandler);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain_root_validator);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e0d5be0eae1ffe4fd5e0f731749f989);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_validator);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseConfig);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_digest_82a1ad21f1b36d975bb6c3f5b892db3a);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_Extra);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain_parse_obj_as);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_25c1bee5f185241c1cda853c6d01a5d7);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_of);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json_of);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_FieldValidationInfo);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateSchema);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1902a05c7e13bca6c2c3dcf544b5db9);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae2ec25258659540c7c4f7d6452fedca);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_set_1e1b29a93c20d11330ff403f7a16cb69);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pydantic_tuple);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain_attr_name);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_object);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain___dir__);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_digest_5ca1deec50ef7d85ff804511cc99278a);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_digest_5d58dbba6a1e9ceb72bd2499fc108147);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_df43da20dc96c5954e7036a5ef7dea03_tuple);
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
void checkModuleConstants_pydantic(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__deprecated_dynamic_imports));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__deprecated_dynamic_imports);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_warn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warn);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_1c59d036563140d9a51a689d8d4e2489));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1c59d036563140d9a51a689d8d4e2489);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_f3b17c4a328ea3995012d307ef05aa8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f3b17c4a328ea3995012d307ef05aa8c);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_DeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DeprecationWarning);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain__dynamic_imports));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__dynamic_imports);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__getattr_migration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__getattr_migration);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_import_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_import_module);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_items));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_items);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_module);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_g));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_g);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_list));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_list);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_621f04dc5d2c2412df52bd86946770c7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_621f04dc5d2c2412df52bd86946770c7_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_warnings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_warnings);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_warn_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_warn_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain__migration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__migration);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_getattr_migration_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_getattr_migration_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_getattr_migration));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getattr_migration);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VERSION_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VERSION);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_tuple_83e1d90a6d22b9f84a74873d865a812f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_83e1d90a6d22b9f84a74873d865a812f_tuple);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_dataclasses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dataclasses);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_validator);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_validator);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_AfterValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AfterValidator);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_BeforeValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BeforeValidator);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlainValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlainValidator);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_WrapValidator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WrapValidator);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_SkipValidation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SkipValidation);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_InstanceOf));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InstanceOf);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ModelWrapValidatorHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ModelWrapValidatorHandler);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_WithJsonSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WithJsonSchema);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_d9d5bc4369ddeaf3cccd611787a3de0d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d9d5bc4369ddeaf3cccd611787a3de0d);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_field_serializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_field_serializer);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_serializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_serializer);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_PlainSerializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PlainSerializer);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_SerializeAsAny));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SerializeAsAny);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_WrapSerializer));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WrapSerializer);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConfigDict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConfigDict);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_787bd342a9a62d3efb07503426149edb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_787bd342a9a62d3efb07503426149edb);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_config);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_call);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_194123bf7cd9a079f19d08d3252278e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_194123bf7cd9a079f19d08d3252278e0);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticErrorCodes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticErrorCodes);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUserError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticUserError);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticSchemaGenerationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticSchemaGenerationError);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticImportError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticImportError);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticUndefinedAnnotation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticUndefinedAnnotation);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticInvalidForJsonSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticInvalidForJsonSchema);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticForbiddenQualifier));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticForbiddenQualifier);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Field);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6388161f54497f81241bf37f590750b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6388161f54497f81241bf37f590750b);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_computed_field));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_computed_field);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_PrivateAttr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PrivateAttr);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_AliasChoices));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AliasChoices);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_digest_c3b4ce85c1543fd9236ad8486c2a82cd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c3b4ce85c1543fd9236ad8486c2a82cd);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_AliasGenerator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AliasGenerator);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_AliasPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AliasPath);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a8d191bb057a8ece19c7cba2dcb38b5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a8d191bb057a8ece19c7cba2dcb38b5);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_create_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_create_model);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyUrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyUrl);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyHttpUrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyHttpUrl);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_FileUrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FileUrl);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_HttpUrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HttpUrl);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_FtpUrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FtpUrl);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebsocketUrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebsocketUrl);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_AnyWebsocketUrl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AnyWebsocketUrl);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_UrlConstraints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UrlConstraints);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_EmailStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EmailStr);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_NameEmail));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NameEmail);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPvAnyAddress));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPvAnyAddress);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPvAnyInterface));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPvAnyInterface);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_IPvAnyNetwork));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_IPvAnyNetwork);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_PostgresDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PostgresDsn);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_CockroachDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CockroachDsn);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_AmqpDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AmqpDsn);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_RedisDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RedisDsn);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_MongoDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MongoDsn);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_KafkaDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_KafkaDsn);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_NatsDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NatsDsn);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_MySQLDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MySQLDsn);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_MariaDBDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MariaDBDsn);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClickHouseDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClickHouseDsn);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_SnowflakeDsn));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SnowflakeDsn);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_validate_email));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validate_email);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_RootModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RootModel);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_digest_278ea4261c59410e9ca8b2cf1b5a558f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_278ea4261c59410e9ca8b2cf1b5a558f);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_Strict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Strict);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_21706d79aec80da20efc021192bde613));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_21706d79aec80da20efc021192bde613);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrictStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrictStr);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_conbytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conbytes);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_conlist));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conlist);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_conset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conset);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_confrozenset));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_confrozenset);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_constr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_constr);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_StringConstraints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StringConstraints);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ImportString));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ImportString);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_conint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conint);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_PositiveInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PositiveInt);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_NegativeInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NegativeInt);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_NonNegativeInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NonNegativeInt);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_NonPositiveInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NonPositiveInt);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_confloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_confloat);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_PositiveFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PositiveFloat);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_NegativeFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NegativeFloat);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_NonNegativeFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NonNegativeFloat);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_NonPositiveFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NonPositiveFloat);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_FiniteFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FiniteFloat);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_condecimal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_condecimal);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_condate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_condate);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID1));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID1);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID3));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID3);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID4));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID4);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID5));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID5);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID6));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID6);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID7));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID7);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_UUID8));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UUID8);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_FilePath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FilePath);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_DirectoryPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DirectoryPath);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_NewPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NewPath);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_Json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Json);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_Secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Secret);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecretStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecretStr);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_SecretBytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SecretBytes);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrictBool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrictBool);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrictBytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrictBytes);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrictInt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrictInt);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_StrictFloat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_StrictFloat);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_PaymentCardNumber));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PaymentCardNumber);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_ByteSize));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ByteSize);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_PastDate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PastDate);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_SocketPath));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SocketPath);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_FutureDate));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FutureDate);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_PastDatetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PastDatetime);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_FutureDatetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FutureDatetime);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_AwareDatetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AwareDatetime);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_NaiveDatetime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NaiveDatetime);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_AllowInfNan));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AllowInfNan);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_EncoderProtocol));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EncoderProtocol);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_EncodedBytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EncodedBytes);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_EncodedStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_EncodedStr);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base64Encoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Base64Encoder);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base64Bytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Base64Bytes);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base64Str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Base64Str);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base64UrlBytes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Base64UrlBytes);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_Base64UrlStr));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Base64UrlStr);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetPydanticSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetPydanticSchema);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_Tag));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Tag);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_Discriminator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Discriminator);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_JsonValue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JsonValue);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_OnErrorOmit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OnErrorOmit);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain_FailFast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FailFast);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAdapter);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_edcc6a110508959863b62d378c879983));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_edcc6a110508959863b62d378c879983);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince20));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecatedSince20);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince26));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecatedSince26);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince29));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecatedSince29);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince210));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecatedSince210);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecatedSince211));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecatedSince211);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticDeprecationWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticDeprecationWarning);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_plain_PydanticExperimentalWarning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PydanticExperimentalWarning);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetCoreSchemaHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetCoreSchemaHandler);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_6db041ddfb481dc4a7eb87f36f73d281));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6db041ddfb481dc4a7eb87f36f73d281);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_GetJsonSchemaHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GetJsonSchemaHandler);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValidationError);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pydantic_core_str_dot_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pydantic_core_str_dot_tuple);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValidationInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValidationInfo);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_SerializationInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SerializationInfo);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_ValidatorFunctionWrapHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ValidatorFunctionWrapHandler);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_plain_FieldSerializationInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FieldSerializationInfo);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_SerializerFunctionWrapHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SerializerFunctionWrapHandler);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain_root_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_root_validator);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e0d5be0eae1ffe4fd5e0f731749f989));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e0d5be0eae1ffe4fd5e0f731749f989);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_validator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_validator);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseConfig);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_digest_82a1ad21f1b36d975bb6c3f5b892db3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_82a1ad21f1b36d975bb6c3f5b892db3a);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_Extra));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Extra);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain_parse_obj_as));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parse_obj_as);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_25c1bee5f185241c1cda853c6d01a5d7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25c1bee5f185241c1cda853c6d01a5d7);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_of);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_schema_json_of));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_schema_json_of);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_FieldValidationInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FieldValidationInfo);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_GenerateSchema));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GenerateSchema);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1902a05c7e13bca6c2c3dcf544b5db9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1902a05c7e13bca6c2c3dcf544b5db9);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae2ec25258659540c7c4f7d6452fedca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae2ec25258659540c7c4f7d6452fedca);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_set_1e1b29a93c20d11330ff403f7a16cb69));
CHECK_OBJECT_DEEP(mod_consts.const_set_1e1b29a93c20d11330ff403f7a16cb69);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_pydantic_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_pydantic_tuple);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain_attr_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_attr_name);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_object);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain___getattr__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getattr__);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain___dir__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___dir__);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_digest_5ca1deec50ef7d85ff804511cc99278a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5ca1deec50ef7d85ff804511cc99278a);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_digest_5d58dbba6a1e9ceb72bd2499fc108147));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5d58dbba6a1e9ceb72bd2499fc108147);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_df43da20dc96c5954e7036a5ef7dea03_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_df43da20dc96c5954e7036a5ef7dea03_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 16
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
static PyObject *module_var_accessor_pydantic$DeprecationWarning(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DeprecationWarning);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$VERSION(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERSION);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERSION, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_VERSION);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_VERSION, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$__all__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___all__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___all__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___all__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___all__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___all__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___all__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___all__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___all__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___annotations__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___annotations__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain___path__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain___path__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_deprecated_dynamic_imports(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecated_dynamic_imports);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__deprecated_dynamic_imports);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__deprecated_dynamic_imports, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__deprecated_dynamic_imports);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__deprecated_dynamic_imports, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecated_dynamic_imports);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecated_dynamic_imports);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecated_dynamic_imports);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_dynamic_imports(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__dynamic_imports);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dynamic_imports);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dynamic_imports, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__dynamic_imports);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__dynamic_imports, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__dynamic_imports);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__dynamic_imports);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__dynamic_imports);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$_getattr_migration(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_migration);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__getattr_migration);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__getattr_migration, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__getattr_migration);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__getattr_migration, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_migration);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_migration);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_migration);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$getattr(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain_getattr);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_getattr);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_getattr, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_getattr);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_getattr, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain_getattr);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain_getattr);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_getattr);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$getattr_migration(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_getattr_migration);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getattr_migration);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getattr_migration, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getattr_migration);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getattr_migration, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_getattr_migration);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_getattr_migration);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getattr_migration);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$globals(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain_globals);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_globals);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_globals, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(const_str_plain_globals);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, const_str_plain_globals, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain_globals);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain_globals);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_globals);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$list(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_list);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_list, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_list);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_list, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_list);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$object(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_object);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_object);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_object, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_object);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_object, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_object);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_object);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_object);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$str(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_str);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_str, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_str);
    }

    return result;
}

static PyObject *module_var_accessor_pydantic$warn(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_pydantic->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_pydantic->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_warn);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_pydantic->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warn);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warn, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_warn);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_warn, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_warn);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_warn);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_warn);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_f4c58f4041a503f954180f852961f7d9;
static PyCodeObject *code_objects_4912e839101253f6b1245bfe4217e3e3;
static PyCodeObject *code_objects_6a6e83e37e736c7dc4ace3db3fdc0005;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5ca1deec50ef7d85ff804511cc99278a); CHECK_OBJECT(module_filename_obj);
code_objects_f4c58f4041a503f954180f852961f7d9 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_5d58dbba6a1e9ceb72bd2499fc108147, mod_consts.const_str_digest_5d58dbba6a1e9ceb72bd2499fc108147, NULL, NULL, 0, 0, 0);
code_objects_4912e839101253f6b1245bfe4217e3e3 = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___dir__, mod_consts.const_str_plain___dir__, NULL, NULL, 0, 0, 0);
code_objects_6a6e83e37e736c7dc4ace3db3fdc0005 = MAKE_CODE_OBJECT(module_filename_obj, 416, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain___getattr__, mod_consts.const_str_plain___getattr__, mod_consts.const_tuple_df43da20dc96c5954e7036a5ef7dea03_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_pydantic$$$function__1___getattr__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pydantic$$$function__2___dir__(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_pydantic$$$function__1___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_attr_name = python_pars[0];
PyObject *var_dynamic_attr = NULL;
PyObject *var_package = NULL;
PyObject *var_module_name = NULL;
PyObject *var_result = NULL;
PyObject *var_module = NULL;
PyObject *var_g = NULL;
PyObject *var_k = NULL;
PyObject *var__ = NULL;
PyObject *var_v_module_name = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_tuple_unpack_1__element_1 = NULL;
PyObject *tmp_tuple_unpack_1__element_2 = NULL;
PyObject *tmp_tuple_unpack_1__source_iter = NULL;
PyObject *tmp_tuple_unpack_2__element_1 = NULL;
PyObject *tmp_tuple_unpack_2__element_2 = NULL;
PyObject *tmp_tuple_unpack_2__source_iter = NULL;
PyObject *tmp_tuple_unpack_3__element_1 = NULL;
PyObject *tmp_tuple_unpack_3__element_2 = NULL;
PyObject *tmp_tuple_unpack_3__source_iter = NULL;
struct Nuitka_FrameObject *frame_frame_pydantic$$$function__1___getattr__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$$$function__1___getattr__ = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_pydantic$$$function__1___getattr__)) {
    Py_XDECREF(cache_frame_frame_pydantic$$$function__1___getattr__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$$$function__1___getattr__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$$$function__1___getattr__ = MAKE_FUNCTION_FRAME(tstate, code_objects_6a6e83e37e736c7dc4ace3db3fdc0005, module_pydantic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$$$function__1___getattr__->m_type_description == NULL);
frame_frame_pydantic$$$function__1___getattr__ = cache_frame_frame_pydantic$$$function__1___getattr__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$$$function__1___getattr__);
assert(Py_REFCNT(frame_frame_pydantic$$$function__1___getattr__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_attr_name);
tmp_cmp_expr_left_1 = par_attr_name;
tmp_cmp_expr_right_1 = module_var_accessor_pydantic$_deprecated_dynamic_imports(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__deprecated_dynamic_imports);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 417;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (tmp_res == 1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$warn(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_warn);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = mod_consts.const_str_digest_1c59d036563140d9a51a689d8d4e2489;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_attr_name);
tmp_format_value_1 = par_attr_name;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 419;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_f3b17c4a328ea3995012d307ef05aa8c;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_tuple_element_1 == NULL));
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_pydantic$DeprecationWarning(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DeprecationWarning);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 420;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_args_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_f154c9a58c9419d7e391901d7b7fe49e);
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 418;
tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_pydantic$_dynamic_imports(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dynamic_imports);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_attr_name);
tmp_args_element_value_1 = par_attr_name;
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 424;
tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 424;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_dynamic_attr == NULL);
var_dynamic_attr = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_dynamic_attr);
tmp_cmp_expr_left_2 = var_dynamic_attr;
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
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
tmp_called_value_3 = module_var_accessor_pydantic$_getattr_migration(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__getattr_migration);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_attr_name);
tmp_args_element_value_2 = par_attr_name;
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 426;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
CHECK_OBJECT(var_dynamic_attr);
tmp_iter_arg_1 = var_dynamic_attr;
tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_1 = "oooooooooo";
    goto try_except_handler_2;
}
assert(tmp_tuple_unpack_1__source_iter == NULL);
tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
}
// Tried code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_unpack_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_3 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_1, 0, 2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_1 == NULL);
tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_unpack_2;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
tmp_assign_source_4 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_2, 1, 2);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
assert(tmp_tuple_unpack_1__element_2 == NULL);
tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
}
{
PyObject *tmp_iterator_name_1;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
tmp_result = UNPACK_ITERATOR_CHECK(tstate, &exception_state, tmp_iterator_name_1, 2);
if (tmp_result == false) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 428;
type_description_1 = "oooooooooo";
    goto try_except_handler_3;
}
}
goto try_end_1;
// Exception handler code:
try_except_handler_3:;
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

goto try_except_handler_2;
// End of try:
try_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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

goto frame_exception_exit_1;
// End of try:
try_end_2:;
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
Py_DECREF(tmp_tuple_unpack_1__source_iter);
tmp_tuple_unpack_1__source_iter = NULL;
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
assert(var_package == NULL);
Py_INCREF(tmp_assign_source_5);
var_package = tmp_assign_source_5;
}
Py_XDECREF(tmp_tuple_unpack_1__element_1);
tmp_tuple_unpack_1__element_1 = NULL;

{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
assert(var_module_name == NULL);
Py_INCREF(tmp_assign_source_6);
var_module_name = tmp_assign_source_6;
}
Py_XDECREF(tmp_tuple_unpack_1__element_2);
tmp_tuple_unpack_1__element_2 = NULL;

{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(var_module_name);
tmp_cmp_expr_left_3 = var_module_name;
tmp_cmp_expr_right_3 = const_str_plain___module__;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 430;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_7;
PyObject *tmp_name_value_1;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_package_value_1;
tmp_tuple_element_3 = const_str_dot;
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(par_attr_name);
tmp_format_value_2 = par_attr_name;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_string_concat_values_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_name_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_name_value_1 == NULL));
CHECK_OBJECT(var_package);
tmp_package_value_1 = var_package;
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 431;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    PyObject *import_module_func = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
    PyObject *args[2] = { tmp_name_value_1, tmp_package_value_1 };
    tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tstate, import_module_func, args);
    Py_DECREF(import_module_func);
}
CHECK_OBJECT(tmp_name_value_1);
Py_DECREF(tmp_name_value_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 431;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
Py_INCREF(tmp_assign_source_7);
var_result = tmp_assign_source_7;
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_called_value_4;
PyObject *tmp_ass_subscript_1;
CHECK_OBJECT(var_result);
tmp_ass_subvalue_1 = var_result;
tmp_called_value_4 = module_var_accessor_pydantic$globals(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_globals);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 432;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 432;
tmp_ass_subscribed_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_attr_name);
tmp_ass_subscript_1 = par_attr_name;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
}
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_2;
PyObject *tmp_package_value_2;
CHECK_OBJECT(var_module_name);
tmp_name_value_2 = var_module_name;
CHECK_OBJECT(var_package);
tmp_package_value_2 = var_package;
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 435;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    PyObject *import_module_func = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
    PyObject *args[2] = { tmp_name_value_2, tmp_package_value_2 };
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, import_module_func, args);
    Py_DECREF(import_module_func);
}
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 435;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_module == NULL);
Py_INCREF(tmp_assign_source_8);
var_module = tmp_assign_source_8;
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_5 = module_var_accessor_pydantic$getattr(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_getattr);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 436;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_module);
tmp_args_element_value_3 = var_module;
CHECK_OBJECT(par_attr_name);
tmp_args_element_value_4 = par_attr_name;
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 436;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 436;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_result == NULL);
var_result = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_pydantic$globals(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_globals);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 437;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 437;
tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 437;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_g == NULL);
var_g = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = module_var_accessor_pydantic$_dynamic_imports(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__dynamic_imports);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_items);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 438;
tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_11;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_12;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_12 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooooooooo";
exception_lineno = 438;
        goto try_except_handler_4;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_12;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_13;
PyObject *tmp_iter_arg_3;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
tmp_assign_source_13 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_5;
}
{
    PyObject *old = tmp_tuple_unpack_2__source_iter;
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_14;
PyObject *tmp_unpack_3;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_14 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_3, 0, 2);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_1;
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_unpack_4;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
tmp_assign_source_15 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_4, 1, 2);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
{
    PyObject *old = tmp_tuple_unpack_2__element_2;
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
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



exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_6;
}
}
goto try_end_3;
// Exception handler code:
try_except_handler_6:;
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

goto try_except_handler_5;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
Py_DECREF(tmp_tuple_unpack_2__source_iter);
tmp_tuple_unpack_2__source_iter = NULL;
{
PyObject *tmp_assign_source_16;
CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
{
    PyObject *old = var_k;
    var_k = tmp_assign_source_16;
    Py_INCREF(var_k);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_2__element_1);
tmp_tuple_unpack_2__element_1 = NULL;

// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_iter_arg_4;
CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
tmp_iter_arg_4 = tmp_tuple_unpack_2__element_2;
tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_7;
}
{
    PyObject *old = tmp_tuple_unpack_3__source_iter;
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_17;
    Py_XDECREF(old);
}

}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_unpack_5;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_18 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_5, 0, 2);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_1;
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_18;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_unpack_6;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
tmp_assign_source_19 = UNPACK_NEXT(tstate, &exception_state, tmp_unpack_6, 1, 2);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
{
    PyObject *old = tmp_tuple_unpack_3__element_2;
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_19;
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



exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_8;
}
}
goto try_end_4;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto try_except_handler_7;
// End of try:
try_end_4:;
goto try_end_5;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto try_except_handler_5;
// End of try:
try_end_5:;
goto try_end_6;
// Exception handler code:
try_except_handler_5:;
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

goto try_except_handler_4;
// End of try:
try_end_6:;
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
Py_DECREF(tmp_tuple_unpack_3__source_iter);
tmp_tuple_unpack_3__source_iter = NULL;
{
PyObject *tmp_assign_source_20;
CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;
{
    PyObject *old = var__;
    var__ = tmp_assign_source_20;
    Py_INCREF(var__);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_1);
tmp_tuple_unpack_3__element_1 = NULL;

{
PyObject *tmp_assign_source_21;
CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;
{
    PyObject *old = var_v_module_name;
    var_v_module_name = tmp_assign_source_21;
    Py_INCREF(var_v_module_name);
    Py_XDECREF(old);
}

}
Py_XDECREF(tmp_tuple_unpack_3__element_2);
tmp_tuple_unpack_3__element_2 = NULL;

Py_XDECREF(tmp_tuple_unpack_2__element_2);
tmp_tuple_unpack_2__element_2 = NULL;

{
nuitka_bool tmp_condition_result_4;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(var_v_module_name);
tmp_cmp_expr_left_4 = var_v_module_name;
CHECK_OBJECT(var_module_name);
tmp_cmp_expr_right_4 = var_module_name;
tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_k);
tmp_cmp_expr_left_5 = var_k;
tmp_cmp_expr_right_5 = module_var_accessor_pydantic$_deprecated_dynamic_imports(tstate);
if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__deprecated_dynamic_imports);
}

if (tmp_cmp_expr_right_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 439;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 439;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_called_value_8 = module_var_accessor_pydantic$getattr(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_getattr);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
if (var_module == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_module);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}

tmp_args_element_value_5 = var_module;
CHECK_OBJECT(var_k);
tmp_args_element_value_6 = var_k;
frame_frame_pydantic$$$function__1___getattr__->m_frame.f_lineno = 440;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
if (var_g == NULL) {
Py_DECREF(tmp_ass_subvalue_2);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_g);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 440;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}

tmp_ass_subscribed_2 = var_g;
CHECK_OBJECT(var_k);
tmp_ass_subscript_2 = var_k;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
}
branch_no_4:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 438;
type_description_1 = "oooooooooo";
    goto try_except_handler_4;
}
goto loop_start_1;
loop_end_1:;
goto try_end_7;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
CHECK_OBJECT(var_result);
tmp_return_value = var_result;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$$$function__1___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$$$function__1___getattr__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$$$function__1___getattr__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$$$function__1___getattr__,
    type_description_1,
    par_attr_name,
    var_dynamic_attr,
    var_package,
    var_module_name,
    var_result,
    var_module,
    var_g,
    var_k,
    var__,
    var_v_module_name
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$$$function__1___getattr__ == cache_frame_frame_pydantic$$$function__1___getattr__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$$$function__1___getattr__);
    cache_frame_frame_pydantic$$$function__1___getattr__ = NULL;
}

assertFrameObject(frame_frame_pydantic$$$function__1___getattr__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_dynamic_attr);
CHECK_OBJECT(var_dynamic_attr);
Py_DECREF(var_dynamic_attr);
var_dynamic_attr = NULL;
Py_XDECREF(var_package);
var_package = NULL;
Py_XDECREF(var_module_name);
var_module_name = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_module);
var_module = NULL;
Py_XDECREF(var_g);
var_g = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_v_module_name);
var_v_module_name = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_dynamic_attr);
var_dynamic_attr = NULL;
Py_XDECREF(var_package);
var_package = NULL;
Py_XDECREF(var_module_name);
var_module_name = NULL;
Py_XDECREF(var_result);
var_result = NULL;
Py_XDECREF(var_module);
var_module = NULL;
Py_XDECREF(var_g);
var_g = NULL;
Py_XDECREF(var_k);
var_k = NULL;
Py_XDECREF(var__);
var__ = NULL;
Py_XDECREF(var_v_module_name);
var_v_module_name = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_attr_name);
Py_DECREF(par_attr_name);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_attr_name);
Py_DECREF(par_attr_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pydantic$$$function__2___dir__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_pydantic$$$function__2___dir__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_pydantic$$$function__2___dir__ = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_pydantic$$$function__2___dir__)) {
    Py_XDECREF(cache_frame_frame_pydantic$$$function__2___dir__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_pydantic$$$function__2___dir__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_pydantic$$$function__2___dir__ = MAKE_FUNCTION_FRAME(tstate, code_objects_4912e839101253f6b1245bfe4217e3e3, module_pydantic, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_pydantic$$$function__2___dir__->m_type_description == NULL);
frame_frame_pydantic$$$function__2___dir__ = cache_frame_frame_pydantic$$$function__2___dir__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic$$$function__2___dir__);
assert(Py_REFCNT(frame_frame_pydantic$$$function__2___dir__) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_pydantic$list(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_list);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_pydantic$__all__(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___all__);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 445;

    goto frame_exception_exit_1;
}
frame_frame_pydantic$$$function__2___dir__->m_frame.f_lineno = 445;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic$$$function__2___dir__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic$$$function__2___dir__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic$$$function__2___dir__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_pydantic$$$function__2___dir__,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_pydantic$$$function__2___dir__ == cache_frame_frame_pydantic$$$function__2___dir__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_pydantic$$$function__2___dir__);
    cache_frame_frame_pydantic$$$function__2___dir__ = NULL;
}

assertFrameObject(frame_frame_pydantic$$$function__2___dir__);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto function_exception_exit;
frame_no_exception_1:;

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



static PyObject *MAKE_FUNCTION_pydantic$$$function__1___getattr__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$$$function__1___getattr__,
        mod_consts.const_str_plain___getattr__,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_6a6e83e37e736c7dc4ace3db3fdc0005,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pydantic$$$function__2___dir__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pydantic$$$function__2___dir__,
        mod_consts.const_str_plain___dir__,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4912e839101253f6b1245bfe4217e3e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pydantic,
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

static function_impl_code const function_table_pydantic[] = {
impl_pydantic$$$function__1___getattr__,
impl_pydantic$$$function__2___dir__,
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

    return Nuitka_Function_GetFunctionState(function, function_table_pydantic);
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
        module_pydantic,
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
        function_table_pydantic,
        sizeof(function_table_pydantic) / sizeof(function_impl_code)
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
static char const *module_full_name = "pydantic";
#endif

// Internal entry point for module code.
PyObject *module_code_pydantic(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pydantic");

    // Store the module for future use.
    module_pydantic = module;

    moduledict_pydantic = MODULE_DICT(module_pydantic);

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
        PRINT_STRING("pydantic: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("pydantic: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pydantic: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initpydantic\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pydantic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pydantic,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pydantic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pydantic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pydantic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pydantic);
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

        UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_FrameObject *frame_frame_pydantic;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_pydantic = MAKE_MODULE_FRAME(code_objects_f4c58f4041a503f954180f852961f7d9, module_pydantic);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_pydantic);
assert(Py_REFCNT(frame_frame_pydantic) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_pydantic->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_1 = NULL;
    }
}
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_dirname);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_filename_obj;
frame_frame_pydantic->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_pydantic->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_2 = NULL;
    }
}
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_pydantic->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_621f04dc5d2c2412df52bd86946770c7_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_pydantic$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_pydantic$__spec__(tstate);
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
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
tmp_assattr_value_3 = module_var_accessor_pydantic$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_assattr_target_3 == NULL));
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_submodule_search_locations, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = Py_None;
UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_typing, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
{
    PyObject *hard_module = IMPORT_HARD_IMPORTLIB();
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_import_module);
}
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_import_module, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_warnings;
tmp_globals_arg_value_1 = (PyObject *)moduledict_pydantic;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_warn_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_pydantic->m_frame.f_lineno = 3;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_pydantic,
        mod_consts.const_str_plain_warn,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_warn);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_warn, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__migration;
tmp_globals_arg_value_2 = (PyObject *)moduledict_pydantic;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_getattr_migration_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_pydantic->m_frame.f_lineno = 5;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_pydantic,
        mod_consts.const_str_plain_getattr_migration,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_getattr_migration);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_getattr_migration, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_version;
tmp_globals_arg_value_3 = (PyObject *)moduledict_pydantic;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_VERSION_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_pydantic->m_frame.f_lineno = 6;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_pydantic,
        mod_consts.const_str_plain_VERSION,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_VERSION);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
tmp_assign_source_11 = module_var_accessor_pydantic$VERSION(tstate);
assert(!(tmp_assign_source_11 == NULL));
UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
tmp_assign_source_12 = mod_consts.const_tuple_83e1d90a6d22b9f84a74873d865a812f_tuple;
UPDATE_STRING_DICT0(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_3;
tmp_dict_key_1 = mod_consts.const_str_plain_dataclasses;
tmp_expression_value_3 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_3 == NULL));
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_parent);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 243;

    goto frame_exception_exit_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_str_plain___module__;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
tmp_assign_source_13 = _PyDict_NewPresized( 149 );
{
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_6;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_tuple_element_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_9;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_10;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_11;
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_12;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_13;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_14;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_15;
PyObject *tmp_tuple_element_14;
PyObject *tmp_expression_value_16;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_17;
PyObject *tmp_tuple_element_16;
PyObject *tmp_expression_value_18;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_19;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_20;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_21;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_22;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_23;
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_24;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_25;
PyObject *tmp_tuple_element_24;
PyObject *tmp_expression_value_26;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_27;
PyObject *tmp_tuple_element_26;
PyObject *tmp_expression_value_28;
PyObject *tmp_tuple_element_27;
PyObject *tmp_expression_value_29;
PyObject *tmp_tuple_element_28;
PyObject *tmp_expression_value_30;
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_31;
PyObject *tmp_tuple_element_30;
PyObject *tmp_expression_value_32;
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_33;
PyObject *tmp_tuple_element_32;
PyObject *tmp_expression_value_34;
PyObject *tmp_tuple_element_33;
PyObject *tmp_expression_value_35;
PyObject *tmp_tuple_element_34;
PyObject *tmp_expression_value_36;
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_37;
PyObject *tmp_tuple_element_36;
PyObject *tmp_expression_value_38;
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_39;
PyObject *tmp_tuple_element_38;
PyObject *tmp_expression_value_40;
PyObject *tmp_tuple_element_39;
PyObject *tmp_expression_value_41;
PyObject *tmp_tuple_element_40;
PyObject *tmp_expression_value_42;
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_43;
PyObject *tmp_tuple_element_42;
PyObject *tmp_expression_value_44;
PyObject *tmp_tuple_element_43;
PyObject *tmp_expression_value_45;
PyObject *tmp_tuple_element_44;
PyObject *tmp_expression_value_46;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_47;
PyObject *tmp_tuple_element_46;
PyObject *tmp_expression_value_48;
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_49;
PyObject *tmp_tuple_element_48;
PyObject *tmp_expression_value_50;
PyObject *tmp_tuple_element_49;
PyObject *tmp_expression_value_51;
PyObject *tmp_tuple_element_50;
PyObject *tmp_expression_value_52;
PyObject *tmp_tuple_element_51;
PyObject *tmp_expression_value_53;
PyObject *tmp_tuple_element_52;
PyObject *tmp_expression_value_54;
PyObject *tmp_tuple_element_53;
PyObject *tmp_expression_value_55;
PyObject *tmp_tuple_element_54;
PyObject *tmp_expression_value_56;
PyObject *tmp_tuple_element_55;
PyObject *tmp_expression_value_57;
PyObject *tmp_tuple_element_56;
PyObject *tmp_expression_value_58;
PyObject *tmp_tuple_element_57;
PyObject *tmp_expression_value_59;
PyObject *tmp_tuple_element_58;
PyObject *tmp_expression_value_60;
PyObject *tmp_tuple_element_59;
PyObject *tmp_expression_value_61;
PyObject *tmp_tuple_element_60;
PyObject *tmp_expression_value_62;
PyObject *tmp_tuple_element_61;
PyObject *tmp_expression_value_63;
PyObject *tmp_tuple_element_62;
PyObject *tmp_expression_value_64;
PyObject *tmp_tuple_element_63;
PyObject *tmp_expression_value_65;
PyObject *tmp_tuple_element_64;
PyObject *tmp_expression_value_66;
PyObject *tmp_tuple_element_65;
PyObject *tmp_expression_value_67;
PyObject *tmp_tuple_element_66;
PyObject *tmp_expression_value_68;
PyObject *tmp_tuple_element_67;
PyObject *tmp_expression_value_69;
PyObject *tmp_tuple_element_68;
PyObject *tmp_expression_value_70;
PyObject *tmp_tuple_element_69;
PyObject *tmp_expression_value_71;
PyObject *tmp_tuple_element_70;
PyObject *tmp_expression_value_72;
PyObject *tmp_tuple_element_71;
PyObject *tmp_expression_value_73;
PyObject *tmp_tuple_element_72;
PyObject *tmp_expression_value_74;
PyObject *tmp_tuple_element_73;
PyObject *tmp_expression_value_75;
PyObject *tmp_tuple_element_74;
PyObject *tmp_expression_value_76;
PyObject *tmp_tuple_element_75;
PyObject *tmp_expression_value_77;
PyObject *tmp_tuple_element_76;
PyObject *tmp_expression_value_78;
PyObject *tmp_tuple_element_77;
PyObject *tmp_expression_value_79;
PyObject *tmp_tuple_element_78;
PyObject *tmp_expression_value_80;
PyObject *tmp_tuple_element_79;
PyObject *tmp_expression_value_81;
PyObject *tmp_tuple_element_80;
PyObject *tmp_expression_value_82;
PyObject *tmp_tuple_element_81;
PyObject *tmp_expression_value_83;
PyObject *tmp_tuple_element_82;
PyObject *tmp_expression_value_84;
PyObject *tmp_tuple_element_83;
PyObject *tmp_expression_value_85;
PyObject *tmp_tuple_element_84;
PyObject *tmp_expression_value_86;
PyObject *tmp_tuple_element_85;
PyObject *tmp_expression_value_87;
PyObject *tmp_tuple_element_86;
PyObject *tmp_expression_value_88;
PyObject *tmp_tuple_element_87;
PyObject *tmp_expression_value_89;
PyObject *tmp_tuple_element_88;
PyObject *tmp_expression_value_90;
PyObject *tmp_tuple_element_89;
PyObject *tmp_expression_value_91;
PyObject *tmp_tuple_element_90;
PyObject *tmp_expression_value_92;
PyObject *tmp_tuple_element_91;
PyObject *tmp_expression_value_93;
PyObject *tmp_tuple_element_92;
PyObject *tmp_expression_value_94;
PyObject *tmp_tuple_element_93;
PyObject *tmp_expression_value_95;
PyObject *tmp_tuple_element_94;
PyObject *tmp_expression_value_96;
PyObject *tmp_tuple_element_95;
PyObject *tmp_expression_value_97;
PyObject *tmp_tuple_element_96;
PyObject *tmp_expression_value_98;
PyObject *tmp_tuple_element_97;
PyObject *tmp_expression_value_99;
PyObject *tmp_tuple_element_98;
PyObject *tmp_expression_value_100;
PyObject *tmp_tuple_element_99;
PyObject *tmp_expression_value_101;
PyObject *tmp_tuple_element_100;
PyObject *tmp_expression_value_102;
PyObject *tmp_tuple_element_101;
PyObject *tmp_expression_value_103;
PyObject *tmp_tuple_element_102;
PyObject *tmp_expression_value_104;
PyObject *tmp_tuple_element_103;
PyObject *tmp_expression_value_105;
PyObject *tmp_tuple_element_104;
PyObject *tmp_expression_value_106;
PyObject *tmp_tuple_element_105;
PyObject *tmp_expression_value_107;
PyObject *tmp_tuple_element_106;
PyObject *tmp_expression_value_108;
PyObject *tmp_tuple_element_107;
PyObject *tmp_expression_value_109;
PyObject *tmp_tuple_element_108;
PyObject *tmp_expression_value_110;
PyObject *tmp_tuple_element_109;
PyObject *tmp_expression_value_111;
PyObject *tmp_tuple_element_110;
PyObject *tmp_expression_value_112;
PyObject *tmp_tuple_element_111;
PyObject *tmp_expression_value_113;
PyObject *tmp_tuple_element_112;
PyObject *tmp_expression_value_114;
PyObject *tmp_tuple_element_113;
PyObject *tmp_expression_value_115;
PyObject *tmp_tuple_element_114;
PyObject *tmp_expression_value_116;
PyObject *tmp_tuple_element_115;
PyObject *tmp_expression_value_117;
PyObject *tmp_tuple_element_116;
PyObject *tmp_expression_value_118;
PyObject *tmp_tuple_element_117;
PyObject *tmp_expression_value_119;
PyObject *tmp_tuple_element_118;
PyObject *tmp_expression_value_120;
PyObject *tmp_tuple_element_119;
PyObject *tmp_expression_value_121;
PyObject *tmp_tuple_element_120;
PyObject *tmp_expression_value_122;
PyObject *tmp_tuple_element_121;
PyObject *tmp_expression_value_123;
PyObject *tmp_tuple_element_122;
PyObject *tmp_expression_value_124;
PyObject *tmp_tuple_element_123;
PyObject *tmp_expression_value_125;
PyObject *tmp_tuple_element_124;
PyObject *tmp_expression_value_126;
PyObject *tmp_tuple_element_125;
PyObject *tmp_expression_value_127;
PyObject *tmp_tuple_element_126;
PyObject *tmp_expression_value_128;
PyObject *tmp_tuple_element_127;
PyObject *tmp_expression_value_129;
PyObject *tmp_tuple_element_128;
PyObject *tmp_expression_value_130;
PyObject *tmp_tuple_element_129;
PyObject *tmp_expression_value_131;
PyObject *tmp_tuple_element_130;
PyObject *tmp_expression_value_132;
PyObject *tmp_tuple_element_131;
PyObject *tmp_expression_value_133;
PyObject *tmp_tuple_element_132;
PyObject *tmp_expression_value_134;
PyObject *tmp_tuple_element_133;
PyObject *tmp_expression_value_135;
PyObject *tmp_tuple_element_134;
PyObject *tmp_expression_value_136;
PyObject *tmp_tuple_element_135;
PyObject *tmp_expression_value_137;
PyObject *tmp_tuple_element_136;
PyObject *tmp_expression_value_138;
PyObject *tmp_tuple_element_137;
PyObject *tmp_expression_value_139;
PyObject *tmp_tuple_element_138;
PyObject *tmp_expression_value_140;
PyObject *tmp_tuple_element_139;
PyObject *tmp_expression_value_141;
PyObject *tmp_tuple_element_140;
PyObject *tmp_expression_value_142;
PyObject *tmp_tuple_element_141;
PyObject *tmp_expression_value_143;
PyObject *tmp_tuple_element_142;
PyObject *tmp_expression_value_144;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_field_validator;
tmp_expression_value_4 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_4 == NULL));
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_parent);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 245;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_2);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_model_validator;
tmp_expression_value_5 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_5 == NULL));
tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_parent);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_3);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AfterValidator;
tmp_expression_value_6 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_6 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_parent);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 247;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_4);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_BeforeValidator;
tmp_expression_value_7 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_7 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_parent);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_5);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PlainValidator;
tmp_expression_value_8 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_8 == NULL));
tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_parent);
if (tmp_tuple_element_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_6);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_WrapValidator;
tmp_expression_value_9 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_9 == NULL));
tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, const_str_plain_parent);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 250;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SkipValidation;
tmp_expression_value_10 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_10 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_parent);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_InstanceOf;
tmp_expression_value_11 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_11 == NULL));
tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain_parent);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ModelWrapValidatorHandler;
tmp_expression_value_12 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_12 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_parent);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = mod_consts.const_str_digest_6fa2cf26bc050a74beefbc1f2bf67ca9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_10);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_WithJsonSchema;
tmp_expression_value_13 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_13 == NULL));
tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_parent);
if (tmp_tuple_element_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = mod_consts.const_str_digest_d9d5bc4369ddeaf3cccd611787a3de0d;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_11);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_field_serializer;
tmp_expression_value_14 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_parent);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_12);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_model_serializer;
tmp_expression_value_15 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain_parent);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_13);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PlainSerializer;
tmp_expression_value_16 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_16 == NULL));
tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, const_str_plain_parent);
if (tmp_tuple_element_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_14);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SerializeAsAny;
tmp_expression_value_17 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_17 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, const_str_plain_parent);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_15);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_WrapSerializer;
tmp_expression_value_18 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_18 == NULL));
tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, const_str_plain_parent);
if (tmp_tuple_element_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 261;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = mod_consts.const_str_digest_dd61f0615e11f5eb5622ac51bf69f0b8;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_16);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ConfigDict;
tmp_expression_value_19 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_19 == NULL));
tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, const_str_plain_parent);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = mod_consts.const_str_digest_787bd342a9a62d3efb07503426149edb;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_17);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_with_config;
tmp_expression_value_20 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_20 == NULL));
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, const_str_plain_parent);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = mod_consts.const_str_digest_787bd342a9a62d3efb07503426149edb;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_18);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_validate_call;
tmp_expression_value_21 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain_parent);
if (tmp_tuple_element_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = mod_consts.const_str_digest_194123bf7cd9a079f19d08d3252278e0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_19);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticErrorCodes;
tmp_expression_value_22 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_22 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, const_str_plain_parent);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 268;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_20);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticUserError;
tmp_expression_value_23 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_23 == NULL));
tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, const_str_plain_parent);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_21);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticSchemaGenerationError;
tmp_expression_value_24 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_24 == NULL));
tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_parent);
if (tmp_tuple_element_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_22);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticImportError;
tmp_expression_value_25 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_25 == NULL));
tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, const_str_plain_parent);
if (tmp_tuple_element_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_23);
tmp_tuple_element_23 = mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_23);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticUndefinedAnnotation;
tmp_expression_value_26 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_26 == NULL));
tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, const_str_plain_parent);
if (tmp_tuple_element_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 272;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_24);
tmp_tuple_element_24 = mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_24);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticInvalidForJsonSchema;
tmp_expression_value_27 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain_parent);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_25);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticForbiddenQualifier;
tmp_expression_value_28 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_28 == NULL));
tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, const_str_plain_parent);
if (tmp_tuple_element_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = mod_consts.const_str_digest_e2301d8e90149aba491ef4d639680460;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_26);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Field;
tmp_expression_value_29 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_29 == NULL));
tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, const_str_plain_parent);
if (tmp_tuple_element_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = mod_consts.const_str_digest_b6388161f54497f81241bf37f590750b;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_27);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_computed_field;
tmp_expression_value_30 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain_parent);
if (tmp_tuple_element_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_28);
tmp_tuple_element_28 = mod_consts.const_str_digest_b6388161f54497f81241bf37f590750b;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_28);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PrivateAttr;
tmp_expression_value_31 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_31 == NULL));
tmp_tuple_element_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, const_str_plain_parent);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_29);
tmp_tuple_element_29 = mod_consts.const_str_digest_b6388161f54497f81241bf37f590750b;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_29);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AliasChoices;
tmp_expression_value_32 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_32 == NULL));
tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, const_str_plain_parent);
if (tmp_tuple_element_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_30);
tmp_tuple_element_30 = mod_consts.const_str_digest_c3b4ce85c1543fd9236ad8486c2a82cd;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_30);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AliasGenerator;
tmp_expression_value_33 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain_parent);
if (tmp_tuple_element_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_31);
tmp_tuple_element_31 = mod_consts.const_str_digest_c3b4ce85c1543fd9236ad8486c2a82cd;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_31);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AliasPath;
tmp_expression_value_34 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_34 == NULL));
tmp_tuple_element_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, const_str_plain_parent);
if (tmp_tuple_element_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_32);
tmp_tuple_element_32 = mod_consts.const_str_digest_c3b4ce85c1543fd9236ad8486c2a82cd;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_32);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_BaseModel;
tmp_expression_value_35 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_35 == NULL));
tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, const_str_plain_parent);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_33);
tmp_tuple_element_33 = mod_consts.const_str_digest_2a8d191bb057a8ece19c7cba2dcb38b5;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_33);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_create_model;
tmp_expression_value_36 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_36 == NULL));
tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, const_str_plain_parent);
if (tmp_tuple_element_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = mod_consts.const_str_digest_2a8d191bb057a8ece19c7cba2dcb38b5;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_34);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AnyUrl;
tmp_expression_value_37 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_37 == NULL));
tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, const_str_plain_parent);
if (tmp_tuple_element_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_35);
tmp_tuple_element_35 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_35);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AnyHttpUrl;
tmp_expression_value_38 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_38 == NULL));
tmp_tuple_element_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, const_str_plain_parent);
if (tmp_tuple_element_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_36);
tmp_tuple_element_36 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_36);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FileUrl;
tmp_expression_value_39 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_39 == NULL));
tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, const_str_plain_parent);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_37);
tmp_tuple_element_37 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_37);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_HttpUrl;
tmp_expression_value_40 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_40 == NULL));
tmp_tuple_element_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, const_str_plain_parent);
if (tmp_tuple_element_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_38);
tmp_tuple_element_38 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_38);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FtpUrl;
tmp_expression_value_41 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_41 == NULL));
tmp_tuple_element_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, const_str_plain_parent);
if (tmp_tuple_element_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 291;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_39);
tmp_tuple_element_39 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_39);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_WebsocketUrl;
tmp_expression_value_42 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_42 == NULL));
tmp_tuple_element_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, const_str_plain_parent);
if (tmp_tuple_element_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_40);
tmp_tuple_element_40 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_40);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AnyWebsocketUrl;
tmp_expression_value_43 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_43 == NULL));
tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, const_str_plain_parent);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_41);
tmp_tuple_element_41 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_41);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UrlConstraints;
tmp_expression_value_44 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_44 == NULL));
tmp_tuple_element_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, const_str_plain_parent);
if (tmp_tuple_element_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 294;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_42);
tmp_tuple_element_42 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_42);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_EmailStr;
tmp_expression_value_45 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_45 == NULL));
tmp_tuple_element_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, const_str_plain_parent);
if (tmp_tuple_element_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_43);
tmp_tuple_element_43 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_43);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NameEmail;
tmp_expression_value_46 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_46 == NULL));
tmp_tuple_element_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, const_str_plain_parent);
if (tmp_tuple_element_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_44);
tmp_tuple_element_44 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_44);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_IPvAnyAddress;
tmp_expression_value_47 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_47 == NULL));
tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, const_str_plain_parent);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 297;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_45);
tmp_tuple_element_45 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_45);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_IPvAnyInterface;
tmp_expression_value_48 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_48 == NULL));
tmp_tuple_element_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, const_str_plain_parent);
if (tmp_tuple_element_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_46);
tmp_tuple_element_46 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_46);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_IPvAnyNetwork;
tmp_expression_value_49 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_49 == NULL));
tmp_tuple_element_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, const_str_plain_parent);
if (tmp_tuple_element_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_47);
tmp_tuple_element_47 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_47);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PostgresDsn;
tmp_expression_value_50 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_50 == NULL));
tmp_tuple_element_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, const_str_plain_parent);
if (tmp_tuple_element_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_48);
tmp_tuple_element_48 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_48);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_CockroachDsn;
tmp_expression_value_51 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_51 == NULL));
tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, const_str_plain_parent);
if (tmp_tuple_element_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 301;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_49);
tmp_tuple_element_49 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_49);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AmqpDsn;
tmp_expression_value_52 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_52 == NULL));
tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, const_str_plain_parent);
if (tmp_tuple_element_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 302;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_50);
tmp_tuple_element_50 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_50);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_RedisDsn;
tmp_expression_value_53 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_53 == NULL));
tmp_tuple_element_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, const_str_plain_parent);
if (tmp_tuple_element_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_51);
tmp_tuple_element_51 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_51);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_MongoDsn;
tmp_expression_value_54 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_54 == NULL));
tmp_tuple_element_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, const_str_plain_parent);
if (tmp_tuple_element_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_52);
tmp_tuple_element_52 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_52);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_KafkaDsn;
tmp_expression_value_55 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_55 == NULL));
tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, const_str_plain_parent);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_53);
tmp_tuple_element_53 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_53);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NatsDsn;
tmp_expression_value_56 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_56 == NULL));
tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, const_str_plain_parent);
if (tmp_tuple_element_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_54);
tmp_tuple_element_54 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_54);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_MySQLDsn;
tmp_expression_value_57 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_57 == NULL));
tmp_tuple_element_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, const_str_plain_parent);
if (tmp_tuple_element_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_55);
tmp_tuple_element_55 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_55);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_MariaDBDsn;
tmp_expression_value_58 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_58 == NULL));
tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, const_str_plain_parent);
if (tmp_tuple_element_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_56);
tmp_tuple_element_56 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_56);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ClickHouseDsn;
tmp_expression_value_59 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_59 == NULL));
tmp_tuple_element_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, const_str_plain_parent);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_57);
tmp_tuple_element_57 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_57);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SnowflakeDsn;
tmp_expression_value_60 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_60 == NULL));
tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, const_str_plain_parent);
if (tmp_tuple_element_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_58);
tmp_tuple_element_58 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_58);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_validate_email;
tmp_expression_value_61 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_61 == NULL));
tmp_tuple_element_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, const_str_plain_parent);
if (tmp_tuple_element_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_59);
tmp_tuple_element_59 = mod_consts.const_str_digest_483abe7429414ca18fdb4b7c90405fd0;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_59);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_RootModel;
tmp_expression_value_62 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_62 == NULL));
tmp_tuple_element_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, const_str_plain_parent);
if (tmp_tuple_element_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_60);
tmp_tuple_element_60 = mod_consts.const_str_digest_278ea4261c59410e9ca8b2cf1b5a558f;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_60);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Strict;
tmp_expression_value_63 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_63 == NULL));
tmp_tuple_element_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, const_str_plain_parent);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_61);
tmp_tuple_element_61 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_61);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_StrictStr;
tmp_expression_value_64 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_64 == NULL));
tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, const_str_plain_parent);
if (tmp_tuple_element_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_62);
tmp_tuple_element_62 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_62);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_conbytes;
tmp_expression_value_65 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_65 == NULL));
tmp_tuple_element_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, const_str_plain_parent);
if (tmp_tuple_element_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_63);
tmp_tuple_element_63 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_63);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_conlist;
tmp_expression_value_66 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_66 == NULL));
tmp_tuple_element_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, const_str_plain_parent);
if (tmp_tuple_element_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_64);
tmp_tuple_element_64 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_64);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_conset;
tmp_expression_value_67 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_67 == NULL));
tmp_tuple_element_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, const_str_plain_parent);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_65);
tmp_tuple_element_65 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_65);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_confrozenset;
tmp_expression_value_68 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_68 == NULL));
tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, const_str_plain_parent);
if (tmp_tuple_element_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_66);
tmp_tuple_element_66 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_66);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_constr;
tmp_expression_value_69 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_69 == NULL));
tmp_tuple_element_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, const_str_plain_parent);
if (tmp_tuple_element_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_67);
tmp_tuple_element_67 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_67);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_StringConstraints;
tmp_expression_value_70 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_70 == NULL));
tmp_tuple_element_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, const_str_plain_parent);
if (tmp_tuple_element_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_68);
tmp_tuple_element_68 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_68);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ImportString;
tmp_expression_value_71 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_71 == NULL));
tmp_tuple_element_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, const_str_plain_parent);
if (tmp_tuple_element_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_69);
tmp_tuple_element_69 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_69);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_conint;
tmp_expression_value_72 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_72 == NULL));
tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, const_str_plain_parent);
if (tmp_tuple_element_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_70);
tmp_tuple_element_70 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_70);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PositiveInt;
tmp_expression_value_73 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_73 == NULL));
tmp_tuple_element_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, const_str_plain_parent);
if (tmp_tuple_element_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_71);
tmp_tuple_element_71 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_71);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NegativeInt;
tmp_expression_value_74 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_74 == NULL));
tmp_tuple_element_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, const_str_plain_parent);
if (tmp_tuple_element_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_72);
tmp_tuple_element_72 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_72);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NonNegativeInt;
tmp_expression_value_75 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_75 == NULL));
tmp_tuple_element_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, const_str_plain_parent);
if (tmp_tuple_element_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_73);
tmp_tuple_element_73 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_73);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NonPositiveInt;
tmp_expression_value_76 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_76 == NULL));
tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, const_str_plain_parent);
if (tmp_tuple_element_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_74);
tmp_tuple_element_74 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_74);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_confloat;
tmp_expression_value_77 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_77 == NULL));
tmp_tuple_element_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, const_str_plain_parent);
if (tmp_tuple_element_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 329;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_75);
tmp_tuple_element_75 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_75);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PositiveFloat;
tmp_expression_value_78 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_78 == NULL));
tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, const_str_plain_parent);
if (tmp_tuple_element_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_76);
tmp_tuple_element_76 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_76);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NegativeFloat;
tmp_expression_value_79 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_79 == NULL));
tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, const_str_plain_parent);
if (tmp_tuple_element_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_77);
tmp_tuple_element_77 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_77);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NonNegativeFloat;
tmp_expression_value_80 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_80 == NULL));
tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, const_str_plain_parent);
if (tmp_tuple_element_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_78);
tmp_tuple_element_78 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_78);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NonPositiveFloat;
tmp_expression_value_81 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_81 == NULL));
tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, const_str_plain_parent);
if (tmp_tuple_element_79 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_79);
tmp_tuple_element_79 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_79);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FiniteFloat;
tmp_expression_value_82 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_82 == NULL));
tmp_tuple_element_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, const_str_plain_parent);
if (tmp_tuple_element_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_80);
tmp_tuple_element_80 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_80);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_condecimal;
tmp_expression_value_83 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_83 == NULL));
tmp_tuple_element_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, const_str_plain_parent);
if (tmp_tuple_element_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 335;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_81);
tmp_tuple_element_81 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_81);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_condate;
tmp_expression_value_84 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_84 == NULL));
tmp_tuple_element_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, const_str_plain_parent);
if (tmp_tuple_element_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 336;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_82);
tmp_tuple_element_82 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_82);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UUID1;
tmp_expression_value_85 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_85 == NULL));
tmp_tuple_element_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, const_str_plain_parent);
if (tmp_tuple_element_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 337;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_83);
tmp_tuple_element_83 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_83);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UUID3;
tmp_expression_value_86 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_86 == NULL));
tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, const_str_plain_parent);
if (tmp_tuple_element_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_84);
tmp_tuple_element_84 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_84);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UUID4;
tmp_expression_value_87 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_87 == NULL));
tmp_tuple_element_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, const_str_plain_parent);
if (tmp_tuple_element_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_85);
tmp_tuple_element_85 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_85);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UUID5;
tmp_expression_value_88 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_88 == NULL));
tmp_tuple_element_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, const_str_plain_parent);
if (tmp_tuple_element_86 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_86);
tmp_tuple_element_86 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_86);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UUID6;
tmp_expression_value_89 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_89 == NULL));
tmp_tuple_element_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, const_str_plain_parent);
if (tmp_tuple_element_87 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_87);
tmp_tuple_element_87 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_87);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UUID7;
tmp_expression_value_90 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_90 == NULL));
tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, const_str_plain_parent);
if (tmp_tuple_element_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 342;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_88);
tmp_tuple_element_88 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_88);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_UUID8;
tmp_expression_value_91 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_91 == NULL));
tmp_tuple_element_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, const_str_plain_parent);
if (tmp_tuple_element_89 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_89);
tmp_tuple_element_89 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_89);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FilePath;
tmp_expression_value_92 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_92 == NULL));
tmp_tuple_element_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, const_str_plain_parent);
if (tmp_tuple_element_90 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_90);
tmp_tuple_element_90 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_90);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_DirectoryPath;
tmp_expression_value_93 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_93 == NULL));
tmp_tuple_element_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, const_str_plain_parent);
if (tmp_tuple_element_91 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_91);
tmp_tuple_element_91 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_91);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NewPath;
tmp_expression_value_94 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_94 == NULL));
tmp_tuple_element_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, const_str_plain_parent);
if (tmp_tuple_element_92 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_92);
tmp_tuple_element_92 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_92);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Json;
tmp_expression_value_95 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_95 == NULL));
tmp_tuple_element_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, const_str_plain_parent);
if (tmp_tuple_element_93 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_93);
tmp_tuple_element_93 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_93);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Secret;
tmp_expression_value_96 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_96 == NULL));
tmp_tuple_element_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, const_str_plain_parent);
if (tmp_tuple_element_94 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_94);
tmp_tuple_element_94 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_94);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SecretStr;
tmp_expression_value_97 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_97 == NULL));
tmp_tuple_element_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, const_str_plain_parent);
if (tmp_tuple_element_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_95);
tmp_tuple_element_95 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_95);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SecretBytes;
tmp_expression_value_98 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_98 == NULL));
tmp_tuple_element_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, const_str_plain_parent);
if (tmp_tuple_element_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 350;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_96);
tmp_tuple_element_96 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_96);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_StrictBool;
tmp_expression_value_99 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_99 == NULL));
tmp_tuple_element_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, const_str_plain_parent);
if (tmp_tuple_element_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_97);
tmp_tuple_element_97 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_97);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_StrictBytes;
tmp_expression_value_100 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_100 == NULL));
tmp_tuple_element_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, const_str_plain_parent);
if (tmp_tuple_element_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_98);
tmp_tuple_element_98 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_98);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_StrictInt;
tmp_expression_value_101 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_101 == NULL));
tmp_tuple_element_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, const_str_plain_parent);
if (tmp_tuple_element_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_99);
tmp_tuple_element_99 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_99);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_StrictFloat;
tmp_expression_value_102 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_102 == NULL));
tmp_tuple_element_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, const_str_plain_parent);
if (tmp_tuple_element_100 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 354;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_100);
tmp_tuple_element_100 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_100);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PaymentCardNumber;
tmp_expression_value_103 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_103 == NULL));
tmp_tuple_element_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, const_str_plain_parent);
if (tmp_tuple_element_101 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_101);
tmp_tuple_element_101 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_101);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ByteSize;
tmp_expression_value_104 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_104 == NULL));
tmp_tuple_element_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, const_str_plain_parent);
if (tmp_tuple_element_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_102);
tmp_tuple_element_102 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_102);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PastDate;
tmp_expression_value_105 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_105 == NULL));
tmp_tuple_element_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, const_str_plain_parent);
if (tmp_tuple_element_103 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_103);
tmp_tuple_element_103 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_103);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SocketPath;
tmp_expression_value_106 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_106 == NULL));
tmp_tuple_element_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, const_str_plain_parent);
if (tmp_tuple_element_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_104);
tmp_tuple_element_104 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_104);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FutureDate;
tmp_expression_value_107 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_107 == NULL));
tmp_tuple_element_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, const_str_plain_parent);
if (tmp_tuple_element_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_105);
tmp_tuple_element_105 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_105);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PastDatetime;
tmp_expression_value_108 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_108 == NULL));
tmp_tuple_element_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, const_str_plain_parent);
if (tmp_tuple_element_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_106);
tmp_tuple_element_106 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_106);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FutureDatetime;
tmp_expression_value_109 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_109 == NULL));
tmp_tuple_element_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, const_str_plain_parent);
if (tmp_tuple_element_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_107);
tmp_tuple_element_107 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_107);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AwareDatetime;
tmp_expression_value_110 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_110 == NULL));
tmp_tuple_element_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, const_str_plain_parent);
if (tmp_tuple_element_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 362;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_108);
tmp_tuple_element_108 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_108);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_NaiveDatetime;
tmp_expression_value_111 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_111 == NULL));
tmp_tuple_element_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, const_str_plain_parent);
if (tmp_tuple_element_109 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_109);
tmp_tuple_element_109 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_109);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_AllowInfNan;
tmp_expression_value_112 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_112 == NULL));
tmp_tuple_element_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, const_str_plain_parent);
if (tmp_tuple_element_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_110);
tmp_tuple_element_110 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_110);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_EncoderProtocol;
tmp_expression_value_113 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_113 == NULL));
tmp_tuple_element_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, const_str_plain_parent);
if (tmp_tuple_element_111 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 365;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_111);
tmp_tuple_element_111 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_111);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_EncodedBytes;
tmp_expression_value_114 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_114 == NULL));
tmp_tuple_element_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, const_str_plain_parent);
if (tmp_tuple_element_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_112);
tmp_tuple_element_112 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_112);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_EncodedStr;
tmp_expression_value_115 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_115 == NULL));
tmp_tuple_element_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, const_str_plain_parent);
if (tmp_tuple_element_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_113);
tmp_tuple_element_113 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_113);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Base64Encoder;
tmp_expression_value_116 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_116 == NULL));
tmp_tuple_element_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, const_str_plain_parent);
if (tmp_tuple_element_114 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_114);
tmp_tuple_element_114 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_114);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Base64Bytes;
tmp_expression_value_117 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_117 == NULL));
tmp_tuple_element_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, const_str_plain_parent);
if (tmp_tuple_element_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_115);
tmp_tuple_element_115 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_115);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Base64Str;
tmp_expression_value_118 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_118 == NULL));
tmp_tuple_element_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, const_str_plain_parent);
if (tmp_tuple_element_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_116);
tmp_tuple_element_116 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_116);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Base64UrlBytes;
tmp_expression_value_119 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_119 == NULL));
tmp_tuple_element_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, const_str_plain_parent);
if (tmp_tuple_element_117 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 371;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_117);
tmp_tuple_element_117 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_117);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Base64UrlStr;
tmp_expression_value_120 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_120 == NULL));
tmp_tuple_element_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, const_str_plain_parent);
if (tmp_tuple_element_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_118);
tmp_tuple_element_118 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_118);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_GetPydanticSchema;
tmp_expression_value_121 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_121 == NULL));
tmp_tuple_element_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, const_str_plain_parent);
if (tmp_tuple_element_119 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_119);
tmp_tuple_element_119 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_119);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Tag;
tmp_expression_value_122 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_122 == NULL));
tmp_tuple_element_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, const_str_plain_parent);
if (tmp_tuple_element_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_120);
tmp_tuple_element_120 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_120);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Discriminator;
tmp_expression_value_123 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_123 == NULL));
tmp_tuple_element_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, const_str_plain_parent);
if (tmp_tuple_element_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 375;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_121);
tmp_tuple_element_121 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_121);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_JsonValue;
tmp_expression_value_124 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_124 == NULL));
tmp_tuple_element_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, const_str_plain_parent);
if (tmp_tuple_element_122 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_122);
tmp_tuple_element_122 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_122);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_OnErrorOmit;
tmp_expression_value_125 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_125 == NULL));
tmp_tuple_element_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, const_str_plain_parent);
if (tmp_tuple_element_123 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 377;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_123);
tmp_tuple_element_123 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_123);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FailFast;
tmp_expression_value_126 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_126 == NULL));
tmp_tuple_element_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, const_str_plain_parent);
if (tmp_tuple_element_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_124);
tmp_tuple_element_124 = mod_consts.const_str_digest_21706d79aec80da20efc021192bde613;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_124);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_TypeAdapter;
tmp_expression_value_127 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_127 == NULL));
tmp_tuple_element_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, const_str_plain_parent);
if (tmp_tuple_element_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_125);
tmp_tuple_element_125 = mod_consts.const_str_digest_edcc6a110508959863b62d378c879983;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_125);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticDeprecatedSince20;
tmp_expression_value_128 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_128 == NULL));
tmp_tuple_element_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, const_str_plain_parent);
if (tmp_tuple_element_126 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_126);
tmp_tuple_element_126 = mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_126);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticDeprecatedSince26;
tmp_expression_value_129 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_129 == NULL));
tmp_tuple_element_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, const_str_plain_parent);
if (tmp_tuple_element_127 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 383;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_127);
tmp_tuple_element_127 = mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_127);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticDeprecatedSince29;
tmp_expression_value_130 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_130 == NULL));
tmp_tuple_element_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, const_str_plain_parent);
if (tmp_tuple_element_128 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_128);
tmp_tuple_element_128 = mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_128);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticDeprecatedSince210;
tmp_expression_value_131 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_131 == NULL));
tmp_tuple_element_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, const_str_plain_parent);
if (tmp_tuple_element_129 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_129);
tmp_tuple_element_129 = mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_129);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticDeprecatedSince211;
tmp_expression_value_132 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_132 == NULL));
tmp_tuple_element_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, const_str_plain_parent);
if (tmp_tuple_element_130 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_130);
tmp_tuple_element_130 = mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_130);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticDeprecationWarning;
tmp_expression_value_133 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_133 == NULL));
tmp_tuple_element_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, const_str_plain_parent);
if (tmp_tuple_element_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 387;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_131);
tmp_tuple_element_131 = mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_131);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_PydanticExperimentalWarning;
tmp_expression_value_134 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_134 == NULL));
tmp_tuple_element_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, const_str_plain_parent);
if (tmp_tuple_element_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_132);
tmp_tuple_element_132 = mod_consts.const_str_digest_d23692040eae0904336da94d95bc4ecf;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_132);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_GetCoreSchemaHandler;
tmp_expression_value_135 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_135 == NULL));
tmp_tuple_element_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, const_str_plain_parent);
if (tmp_tuple_element_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_133);
tmp_tuple_element_133 = mod_consts.const_str_digest_6db041ddfb481dc4a7eb87f36f73d281;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_133);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_GetJsonSchemaHandler;
tmp_expression_value_136 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_136 == NULL));
tmp_tuple_element_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, const_str_plain_parent);
if (tmp_tuple_element_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_134);
tmp_tuple_element_134 = mod_consts.const_str_digest_6db041ddfb481dc4a7eb87f36f73d281;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_134);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ValidationError;
tmp_dict_value_1 = mod_consts.const_tuple_str_plain_pydantic_core_str_dot_tuple;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ValidationInfo;
tmp_dict_value_1 = mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SerializationInfo;
tmp_dict_value_1 = mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_ValidatorFunctionWrapHandler;
tmp_dict_value_1 = mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FieldSerializationInfo;
tmp_dict_value_1 = mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_SerializerFunctionWrapHandler;
tmp_dict_value_1 = mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_root_validator;
tmp_expression_value_137 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_137 == NULL));
tmp_tuple_element_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, const_str_plain_parent);
if (tmp_tuple_element_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_135);
tmp_tuple_element_135 = mod_consts.const_str_digest_5e0d5be0eae1ffe4fd5e0f731749f989;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_135);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_validator;
tmp_expression_value_138 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_138 == NULL));
tmp_tuple_element_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, const_str_plain_parent);
if (tmp_tuple_element_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 401;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_136);
tmp_tuple_element_136 = mod_consts.const_str_digest_5e0d5be0eae1ffe4fd5e0f731749f989;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_136);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_BaseConfig;
tmp_expression_value_139 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_139 == NULL));
tmp_tuple_element_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, const_str_plain_parent);
if (tmp_tuple_element_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 402;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_137);
tmp_tuple_element_137 = mod_consts.const_str_digest_82a1ad21f1b36d975bb6c3f5b892db3a;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_137);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_Extra;
tmp_expression_value_140 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_140 == NULL));
tmp_tuple_element_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, const_str_plain_parent);
if (tmp_tuple_element_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 403;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_138);
tmp_tuple_element_138 = mod_consts.const_str_digest_82a1ad21f1b36d975bb6c3f5b892db3a;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_138);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_parse_obj_as;
tmp_expression_value_141 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_141 == NULL));
tmp_tuple_element_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, const_str_plain_parent);
if (tmp_tuple_element_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 404;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_139);
tmp_tuple_element_139 = mod_consts.const_str_digest_25c1bee5f185241c1cda853c6d01a5d7;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_139);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_schema_of;
tmp_expression_value_142 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_142 == NULL));
tmp_tuple_element_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, const_str_plain_parent);
if (tmp_tuple_element_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_140);
tmp_tuple_element_140 = mod_consts.const_str_digest_25c1bee5f185241c1cda853c6d01a5d7;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_140);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_schema_json_of;
tmp_expression_value_143 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_143 == NULL));
tmp_tuple_element_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, const_str_plain_parent);
if (tmp_tuple_element_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 406;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_141);
tmp_tuple_element_141 = mod_consts.const_str_digest_25c1bee5f185241c1cda853c6d01a5d7;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_141);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_FieldValidationInfo;
tmp_dict_value_1 = mod_consts.const_tuple_8624952c1c34888726a04fab6be2f7f6_tuple;
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_GenerateSchema;
tmp_expression_value_144 = module_var_accessor_pydantic$__spec__(tstate);
assert(!(tmp_expression_value_144 == NULL));
tmp_tuple_element_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, const_str_plain_parent);
if (tmp_tuple_element_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_142);
tmp_tuple_element_142 = mod_consts.const_str_digest_b1902a05c7e13bca6c2c3dcf544b5db9;
PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_142);
tmp_res = PyDict_SetItem(tmp_assign_source_13, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_assign_source_13);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__dynamic_imports, tmp_assign_source_13);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_ae2ec25258659540c7c4f7d6452fedca;
tmp_ass_subscribed_1 = module_var_accessor_pydantic$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 242;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__dynamic_imports;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_14;
tmp_assign_source_14 = PySet_New(mod_consts.const_set_1e1b29a93c20d11330ff403f7a16cb69);
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__deprecated_dynamic_imports, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_pydantic$getattr_migration(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getattr_migration);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 413;

    goto frame_exception_exit_1;
}
frame_frame_pydantic->m_frame.f_lineno = 413;
tmp_assign_source_15 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_pydantic_tuple);

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 413;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain__getattr_migration, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
tmp_dict_key_2 = mod_consts.const_str_plain_attr_name;
tmp_dict_value_2 = module_var_accessor_pydantic$str(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_str);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = module_var_accessor_pydantic$object(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_object);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 416;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_assign_source_16 = MAKE_FUNCTION_pydantic$$$function__1___getattr__(tstate, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain___getattr__, tmp_assign_source_16);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_pydantic, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_pydantic->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_pydantic, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_pydantic);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;
{
PyObject *tmp_assign_source_17;
PyObject *tmp_annotations_2;
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_0fc05ed22f6723891cdf750312b81bd3);

tmp_assign_source_17 = MAKE_FUNCTION_pydantic$$$function__2___dir__(tstate, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_pydantic, (Nuitka_StringObject *)mod_consts.const_str_plain___dir__, tmp_assign_source_17);
}

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pydantic", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "pydantic" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_pydantic);
    return module_pydantic;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pydantic, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pydantic", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

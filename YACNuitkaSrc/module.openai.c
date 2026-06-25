/* Generated code for Python module 'openai'
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



/* The "module_openai" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai;
PyDictObject *moduledict_openai;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_api_key;
PyObject *const_str_plain_organization;
PyObject *const_str_plain_project;
PyObject *const_str_plain_webhook_secret;
PyObject *const_str_plain_base_url;
PyObject *const_str_plain__httpx;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_max_retries;
PyObject *const_str_plain_default_headers;
PyObject *const_str_plain_default_query;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain__client;
PyObject *const_tuple_str_digest_adcadcba4af36a3a88c09e211aaae612_tuple;
PyObject *const_str_plain_environ;
PyObject *const_tuple_str_plain_OPENAI_API_KEY_tuple;
PyObject *const_str_plain_azure_endpoint;
PyObject *const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple;
PyObject *const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple;
PyObject *const_str_plain_azure_ad_token;
PyObject *const_str_plain_azure_ad_token_provider;
PyObject *const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple;
PyObject *const_str_plain_api_version;
PyObject *const_tuple_str_plain_OPENAI_API_VERSION_tuple;
PyObject *const_str_plain_api_type;
PyObject *const_str_plain__has_openai_credentials;
PyObject *const_str_plain__has_azure_credentials;
PyObject *const_str_plain__has_azure_ad_credentials;
PyObject *const_str_plain__AmbiguousModuleClientUsageError;
PyObject *const_str_plain_azure;
PyObject *const_str_plain_openai;
PyObject *const_str_plain__AzureModuleClient;
PyObject *const_tuple_8d33f373f5227a8b78b34acb83478926_tuple;
PyObject *const_str_plain__ModuleClient;
PyObject *const_tuple_252f4142a9fba8c77bd246cbab159b5d_tuple;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain__os;
PyObject *const_str_plain__t;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_override_tuple;
PyObject *const_str_plain_override;
PyObject *const_tuple_str_plain_types_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_f3f0988927b8a9f6367483ee7375096e_tuple;
PyObject *const_str_plain_NOT_GIVEN;
PyObject *const_str_plain_Omit;
PyObject *const_str_plain_NoneType;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain_Transport;
PyObject *const_str_plain_ProxiesTypes;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_file_from_path_tuple;
PyObject *const_str_plain_file_from_path;
PyObject *const_tuple_5f8f2fdcb3d88d3da60db9257d68e635_tuple;
PyObject *const_str_plain_Client;
PyObject *const_str_plain_OpenAI;
PyObject *const_str_plain_Stream;
PyObject *const_str_plain_Timeout;
PyObject *const_str_plain_AsyncClient;
PyObject *const_str_plain_AsyncOpenAI;
PyObject *const_str_plain_AsyncStream;
PyObject *const_str_plain_RequestOptions;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_BaseModel_tuple;
PyObject *const_str_plain_BaseModel;
PyObject *const_str_plain__version;
PyObject *const_tuple_str_plain___title___str_plain___version___tuple;
PyObject *const_str_plain___title__;
PyObject *const_str_plain___version__;
PyObject *const_str_plain__response;
PyObject *const_tuple_str_plain_APIResponse_str_plain_AsyncAPIResponse_tuple;
PyObject *const_str_plain_APIResponse;
PyObject *const_str_plain_AsyncAPIResponse;
PyObject *const_str_plain__constants;
PyObject *const_tuple_03356056ac4b3125294dce2033b6dda1_tuple;
PyObject *const_str_plain_DEFAULT_TIMEOUT;
PyObject *const_str_plain_DEFAULT_MAX_RETRIES;
PyObject *const_str_plain_DEFAULT_CONNECTION_LIMITS;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_43f460372f3a0aae60b3f6c16860b4ae_tuple;
PyObject *const_str_plain_APIError;
PyObject *const_str_plain_OpenAIError;
PyObject *const_str_plain_ConflictError;
PyObject *const_str_plain_NotFoundError;
PyObject *const_str_plain_APIStatusError;
PyObject *const_str_plain_RateLimitError;
PyObject *const_str_plain_APITimeoutError;
PyObject *const_str_plain_BadRequestError;
PyObject *const_str_plain_APIConnectionError;
PyObject *const_str_plain_AuthenticationError;
PyObject *const_str_plain_InternalServerError;
PyObject *const_str_plain_PermissionDeniedError;
PyObject *const_str_plain_LengthFinishReasonError;
PyObject *const_str_plain_UnprocessableEntityError;
PyObject *const_str_plain_APIResponseValidationError;
PyObject *const_str_plain_InvalidWebhookSignatureError;
PyObject *const_str_plain_ContentFilterFinishReasonError;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_9c483bbc929e744a73dc83119c4d47e0_tuple;
PyObject *const_str_plain_DefaultHttpxClient;
PyObject *const_str_plain_DefaultAioHttpClient;
PyObject *const_str_plain_DefaultAsyncHttpxClient;
PyObject *const_str_digest_b6718596fd79d63bf6c39b860d6c0567;
PyObject *const_tuple_str_plain_setup_logging_tuple;
PyObject *const_str_plain_setup_logging;
PyObject *const_str_plain__setup_logging;
PyObject *const_str_plain__legacy_response;
PyObject *const_tuple_str_plain_HttpxBinaryResponseContent_tuple;
PyObject *const_str_plain_HttpxBinaryResponseContent;
PyObject *const_list_2f6fca1c9ad70c4ac2524e1d68566637_list;
PyObject *const_str_digest_e88fc83ef07c0cab5b77808045e314b7;
PyObject *const_tuple_str_plain_resources_tuple;
PyObject *const_str_plain_resources;
PyObject *const_str_plain_lib;
PyObject *const_tuple_str_plain_azure_str_plain_pydantic_function_tool_tuple;
PyObject *const_str_plain__azure;
PyObject *const_str_plain_pydantic_function_tool;
PyObject *const_str_plain_version;
PyObject *const_tuple_str_plain_VERSION_tuple;
PyObject *const_str_plain_VERSION;
PyObject *const_str_digest_0bf6c2af2a30f8ae93475762e286ee36;
PyObject *const_tuple_str_plain_AzureOpenAI_str_plain_AsyncAzureOpenAI_tuple;
PyObject *const_str_plain_AzureOpenAI;
PyObject *const_str_plain_AsyncAzureOpenAI;
PyObject *const_str_digest_15ee78bf465376d340665840886b93a5;
PyObject *const_tuple_str_chr_42_tuple;
PyObject *const_str_digest_1da5756fd890233839534c800cd28ffd;
PyObject *const_tuple_978998751080f49daf72ff1b3156c0a1_tuple;
PyObject *const_str_plain_AssistantEventHandler;
PyObject *const_str_plain_AsyncAssistantEventHandler;
PyObject *const_str_plain___locals;
PyObject *const_str_plain___name;
PyObject *const_str_plain_startswith;
PyObject *const_tuple_str_plain____tuple;
PyObject *const_str_plain_TypeError;
PyObject *const_str_plain_AttributeError;
PyObject *const_str_plain__te;
PyObject *const_str_plain_httpx;
PyObject *const_tuple_str_plain_DEFAULT_TIMEOUT_str_plain_DEFAULT_MAX_RETRIES_tuple;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_str_digest_9244d3adb14c7ab2c7d066d014bb45e0;
PyObject *const_str_digest_04ceafc304100bbeb4fe56d0b8f9a6a5;
PyObject *const_str_digest_5baa136d01f15538039b6cfcb5254f2e;
PyObject *const_str_digest_fababbf50cbb10ce74188f7a1416018f;
PyObject *const_str_digest_9751605ea7016d178bb7ee6a4daa3c96;
PyObject *const_str_plain_Literal;
PyObject *const_tuple_str_plain_openai_str_plain_azure_tuple;
PyObject *const_str_plain__ApiType;
PyObject *const_str_plain_cast;
PyObject *const_tuple_str_plain_OPENAI_API_TYPE_tuple;
PyObject *const_str_digest_69d1e40a0d620268d22d9eb6b7a1b308;
PyObject *const_str_digest_50ba79f9e132f763e964968ce8fe6f59;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_153;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_property;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_digest_569527c40b13df229ef1071d2fa4d793;
PyObject *const_str_plain_setter;
PyObject *const_dict_711b2c1c0e65c48719bb2550c8b83254;
PyObject *const_str_digest_84ef89a3d76337a33a7b201bd67d3bee;
PyObject *const_str_digest_972af1d215c471afe389022098939f7a;
PyObject *const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0;
PyObject *const_dict_c9f0ed4735897e2438cd11cb5fb5f9be;
PyObject *const_str_digest_8f5fa443d6ef278198291283ba63db93;
PyObject *const_dict_37ad0d3f17cd1a588f8189b61264ea7d;
PyObject *const_dict_0053fbd20ed52d2518365ef8c320bf22;
PyObject *const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128;
PyObject *const_dict_f541b9d1541888c1a13ac82f094dadae;
PyObject *const_dict_85b825f4db9c19f334e726fd877a8261;
PyObject *const_str_digest_843dc5b87b6bbf4c96315acd2300b027;
PyObject *const_dict_0a899e084b4d4c69f04f56fc6fc3c923;
PyObject *const_dict_a3fdc7e347e070b6759d9cdad3e128ed;
PyObject *const_str_plain__custom_headers;
PyObject *const_str_digest_1094d9f3a0134db2a2702e9309544757;
PyObject *const_dict_f58f5b69f8bbd7ac7682ec1ddbc3f3bb;
PyObject *const_dict_501fd4312d9be2928d87226d1f41b406;
PyObject *const_str_plain__custom_query;
PyObject *const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9;
PyObject *const_dict_d1bcd62e474f0c9dfd990c68663b32c7;
PyObject *const_dict_cfb573c842ecf456ddcf3c5ad4205464;
PyObject *const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93;
PyObject *const_dict_77c48e4b375080dfd65dd5baee8ec6e4;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_int_pos_269;
PyObject *const_int_pos_273;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_55aa96f64587af1295f515d69d96c453;
PyObject *const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6;
PyObject *const_str_digest_670974be954bb84ddd7870689b3248dd;
PyObject *const_dict_5f031fe2f466a896cdf63739eeb39fae;
PyObject *const_str_plain__load_client;
PyObject *const_str_plain__reset_client;
PyObject *const_str_plain__module_client;
PyObject *const_tuple_b2743be265f3fc317cd1684739542a5a_tuple;
PyObject *const_str_plain_beta;
PyObject *const_str_plain_chat;
PyObject *const_str_plain_audio;
PyObject *const_str_plain_evals;
PyObject *const_str_plain_files;
PyObject *const_str_plain_images;
PyObject *const_str_plain_models;
PyObject *const_str_plain_batches;
PyObject *const_str_plain_uploads;
PyObject *const_str_plain_webhooks;
PyObject *const_str_plain_responses;
PyObject *const_str_plain_containers;
PyObject *const_str_plain_embeddings;
PyObject *const_str_plain_completions;
PyObject *const_str_plain_fine_tuning;
PyObject *const_str_plain_moderations;
PyObject *const_str_plain_conversations;
PyObject *const_str_plain_vector_stores;
PyObject *const_str_digest_5e31d25d0442dac13a0d9188ab5c44aa;
PyObject *const_str_digest_98a767d06c5f827c14a1e2ba0340b3d2;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_b2f23ba6f271f14ca2b69fc76d268172_tuple;
PyObject *const_tuple_str_plain_self_str_plain_url_str_plain___class___tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[230];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_key);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_organization);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_project);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_webhook_secret);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_url);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain__httpx);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_headers);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_query);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_adcadcba4af36a3a88c09e211aaae612_tuple);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_KEY_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure_endpoint);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token_provider);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_version);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_type);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_openai_credentials);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_azure_credentials);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain__has_azure_ad_credentials);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_openai);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain__AzureModuleClient);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_8d33f373f5227a8b78b34acb83478926_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain__ModuleClient);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_tuple_252f4142a9fba8c77bd246cbab159b5d_tuple);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__os);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__t);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_override_tuple);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_override);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_f3f0988927b8a9f6367483ee7375096e_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_Omit);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_NoneType);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_Transport);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxiesTypes);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_from_path_tuple);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_from_path);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_5f8f2fdcb3d88d3da60db9257d68e635_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_Client);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAI);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_Stream);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncOpenAI);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestOptions);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain__version);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___title___str_plain___version___tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain___title__);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain__response);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIResponse_str_plain_AsyncAPIResponse_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIResponse);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResponse);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain__constants);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_03356056ac4b3125294dce2033b6dda1_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TIMEOUT);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CONNECTION_LIMITS);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_tuple_43f460372f3a0aae60b3f6c16860b4ae_tuple);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIError);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAIError);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictError);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotFoundError);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitError);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_APITimeoutError);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_BadRequestError);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIConnectionError);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationError);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_InternalServerError);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_PermissionDeniedError);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_LengthFinishReasonError);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnprocessableEntityError);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIResponseValidationError);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidWebhookSignatureError);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ContentFilterFinishReasonError);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_9c483bbc929e744a73dc83119c4d47e0_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultHttpxClient);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultAioHttpClient);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultAsyncHttpxClient);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6718596fd79d63bf6c39b860d6c0567);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_setup_logging_tuple);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_setup_logging);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain__setup_logging);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HttpxBinaryResponseContent_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_HttpxBinaryResponseContent);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_list_2f6fca1c9ad70c4ac2524e1d68566637_list);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_digest_e88fc83ef07c0cab5b77808045e314b7);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resources_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_resources);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_lib);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_azure_str_plain_pydantic_function_tool_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__azure);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_function_tool);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_version);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_tuple);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bf6c2af2a30f8ae93475762e286ee36);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AzureOpenAI_str_plain_AsyncAzureOpenAI_tuple);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_AzureOpenAI);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAzureOpenAI);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_15ee78bf465376d340665840886b93a5);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_1da5756fd890233839534c800cd28ffd);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_tuple_978998751080f49daf72ff1b3156c0a1_tuple);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantEventHandler);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAssistantEventHandler);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___locals);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain___name);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_startswith);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain____tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeError);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_AttributeError);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__te);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_str_plain_DEFAULT_MAX_RETRIES_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_9244d3adb14c7ab2c7d066d014bb45e0);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_digest_04ceafc304100bbeb4fe56d0b8f9a6a5);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_5baa136d01f15538039b6cfcb5254f2e);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_fababbf50cbb10ce74188f7a1416018f);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_9751605ea7016d178bb7ee6a4daa3c96);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_Literal);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openai_str_plain_azure_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain__ApiType);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_TYPE_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_69d1e40a0d620268d22d9eb6b7a1b308);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_50ba79f9e132f763e964968ce8fe6f59);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_int_pos_153);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_569527c40b13df229ef1071d2fa4d793);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_setter);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_dict_711b2c1c0e65c48719bb2550c8b83254);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_84ef89a3d76337a33a7b201bd67d3bee);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_972af1d215c471afe389022098939f7a);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_c9f0ed4735897e2438cd11cb5fb5f9be);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f5fa443d6ef278198291283ba63db93);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_37ad0d3f17cd1a588f8189b61264ea7d);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_0053fbd20ed52d2518365ef8c320bf22);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_f541b9d1541888c1a13ac82f094dadae);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_843dc5b87b6bbf4c96315acd2300b027);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_dict_a3fdc7e347e070b6759d9cdad3e128ed);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain__custom_headers);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_digest_1094d9f3a0134db2a2702e9309544757);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_f58f5b69f8bbd7ac7682ec1ddbc3f3bb);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_dict_501fd4312d9be2928d87226d1f41b406);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain__custom_query);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_dict_d1bcd62e474f0c9dfd990c68663b32c7);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_cfb573c842ecf456ddcf3c5ad4205464);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_77c48e4b375080dfd65dd5baee8ec6e4);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_int_pos_269);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_int_pos_273);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_55aa96f64587af1295f515d69d96c453);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_670974be954bb84ddd7870689b3248dd);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_5f031fe2f466a896cdf63739eeb39fae);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain__load_client);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain__reset_client);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_plain__module_client);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_b2743be265f3fc317cd1684739542a5a_tuple);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_plain_beta);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_str_plain_audio);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain_evals);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_plain_files);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_str_plain_images);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain_models);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_plain_batches);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_str_plain_uploads);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain_webhooks);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain_responses);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_containers);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_str_plain_embeddings);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_plain_completions);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_plain_moderations);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_str_plain_conversations);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_str_digest_5e31d25d0442dac13a0d9188ab5c44aa);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_98a767d06c5f827c14a1e2ba0340b3d2);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_tuple_b2f23ba6f271f14ca2b69fc76d268172_tuple);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_url_str_plain___class___tuple);
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
void checkModuleConstants_openai(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_key);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_organization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_organization);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_project));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_project);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_webhook_secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_webhook_secret);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_url);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain__httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__httpx);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_retries);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_headers);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_query);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_adcadcba4af36a3a88c09e211aaae612_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_adcadcba4af36a3a88c09e211aaae612_tuple);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_KEY_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OPENAI_API_KEY_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure_endpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure_endpoint);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure_ad_token);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token_provider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure_ad_token_provider);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_version);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_type);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_openai_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_openai_credentials);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_azure_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_azure_credentials);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain__has_azure_ad_credentials));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__has_azure_ad_credentials);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain__AmbiguousModuleClientUsageError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_openai));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_openai);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain__AzureModuleClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AzureModuleClient);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_8d33f373f5227a8b78b34acb83478926_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8d33f373f5227a8b78b34acb83478926_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain__ModuleClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ModuleClient);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_tuple_252f4142a9fba8c77bd246cbab159b5d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_252f4142a9fba8c77bd246cbab159b5d_tuple);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__os);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__t);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_override_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_override_tuple);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_override);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_types_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_f3f0988927b8a9f6367483ee7375096e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f3f0988927b8a9f6367483ee7375096e_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_GIVEN);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_Omit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Omit);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_NoneType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NoneType);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_Transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Transport);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxiesTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxiesTypes);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_file_from_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_file_from_path_tuple);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_from_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_from_path);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_5f8f2fdcb3d88d3da60db9257d68e635_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5f8f2fdcb3d88d3da60db9257d68e635_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_Client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Client);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenAI);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_Stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Stream);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncClient);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncOpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncOpenAI);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncStream);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestOptions);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseModel_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseModel_tuple);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModel));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModel);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain__version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__version);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___title___str_plain___version___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___title___str_plain___version___tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain___title__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___title__);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain__response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__response);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIResponse_str_plain_AsyncAPIResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_APIResponse_str_plain_AsyncAPIResponse_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIResponse);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAPIResponse);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain__constants));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__constants);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_03356056ac4b3125294dce2033b6dda1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_03356056ac4b3125294dce2033b6dda1_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_TIMEOUT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_TIMEOUT);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_CONNECTION_LIMITS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_CONNECTION_LIMITS);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_tuple_43f460372f3a0aae60b3f6c16860b4ae_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_43f460372f3a0aae60b3f6c16860b4ae_tuple);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIError);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenAIError);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConflictError);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotFoundError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotFoundError);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIStatusError);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RateLimitError);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_APITimeoutError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APITimeoutError);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_BadRequestError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BadRequestError);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIConnectionError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIConnectionError);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthenticationError);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_InternalServerError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InternalServerError);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_PermissionDeniedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PermissionDeniedError);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_LengthFinishReasonError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LengthFinishReasonError);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnprocessableEntityError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnprocessableEntityError);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIResponseValidationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIResponseValidationError);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_InvalidWebhookSignatureError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InvalidWebhookSignatureError);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ContentFilterFinishReasonError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ContentFilterFinishReasonError);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_9c483bbc929e744a73dc83119c4d47e0_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9c483bbc929e744a73dc83119c4d47e0_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultHttpxClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DefaultHttpxClient);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultAioHttpClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DefaultAioHttpClient);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_DefaultAsyncHttpxClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DefaultAsyncHttpxClient);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6718596fd79d63bf6c39b860d6c0567));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6718596fd79d63bf6c39b860d6c0567);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_setup_logging_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_setup_logging_tuple);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_setup_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setup_logging);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain__setup_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__setup_logging);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__legacy_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__legacy_response);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_HttpxBinaryResponseContent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_HttpxBinaryResponseContent_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_HttpxBinaryResponseContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_HttpxBinaryResponseContent);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_list_2f6fca1c9ad70c4ac2524e1d68566637_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_2f6fca1c9ad70c4ac2524e1d68566637_list);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_digest_e88fc83ef07c0cab5b77808045e314b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e88fc83ef07c0cab5b77808045e314b7);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_resources_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_resources_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_resources));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_resources);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_lib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lib);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_azure_str_plain_pydantic_function_tool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_azure_str_plain_pydantic_function_tool_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__azure));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__azure);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_pydantic_function_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pydantic_function_tool);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_version);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_VERSION_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_VERSION_tuple);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_VERSION));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_VERSION);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bf6c2af2a30f8ae93475762e286ee36));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bf6c2af2a30f8ae93475762e286ee36);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AzureOpenAI_str_plain_AsyncAzureOpenAI_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AzureOpenAI_str_plain_AsyncAzureOpenAI_tuple);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_AzureOpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AzureOpenAI);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAzureOpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAzureOpenAI);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_15ee78bf465376d340665840886b93a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15ee78bf465376d340665840886b93a5);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_chr_42_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_chr_42_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_1da5756fd890233839534c800cd28ffd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1da5756fd890233839534c800cd28ffd);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_tuple_978998751080f49daf72ff1b3156c0a1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_978998751080f49daf72ff1b3156c0a1_tuple);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_AssistantEventHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AssistantEventHandler);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAssistantEventHandler));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAssistantEventHandler);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___locals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___locals);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain___name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___name);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_startswith));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_startswith);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain____tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain____tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeError);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_AttributeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AttributeError);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__te));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__te);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_str_plain_DEFAULT_MAX_RETRIES_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_str_plain_DEFAULT_MAX_RETRIES_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_9244d3adb14c7ab2c7d066d014bb45e0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9244d3adb14c7ab2c7d066d014bb45e0);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_digest_04ceafc304100bbeb4fe56d0b8f9a6a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04ceafc304100bbeb4fe56d0b8f9a6a5);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_5baa136d01f15538039b6cfcb5254f2e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5baa136d01f15538039b6cfcb5254f2e);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_fababbf50cbb10ce74188f7a1416018f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fababbf50cbb10ce74188f7a1416018f);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_9751605ea7016d178bb7ee6a4daa3c96));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9751605ea7016d178bb7ee6a4daa3c96);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_Literal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Literal);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_openai_str_plain_azure_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_openai_str_plain_azure_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain__ApiType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ApiType);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_TYPE_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OPENAI_API_TYPE_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_69d1e40a0d620268d22d9eb6b7a1b308));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_69d1e40a0d620268d22d9eb6b7a1b308);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_50ba79f9e132f763e964968ce8fe6f59));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_50ba79f9e132f763e964968ce8fe6f59);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_int_pos_153));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_153);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_569527c40b13df229ef1071d2fa4d793));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_569527c40b13df229ef1071d2fa4d793);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_setter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setter);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_dict_711b2c1c0e65c48719bb2550c8b83254));
CHECK_OBJECT_DEEP(mod_consts.const_dict_711b2c1c0e65c48719bb2550c8b83254);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_84ef89a3d76337a33a7b201bd67d3bee));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84ef89a3d76337a33a7b201bd67d3bee);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_972af1d215c471afe389022098939f7a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_972af1d215c471afe389022098939f7a);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_c9f0ed4735897e2438cd11cb5fb5f9be));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c9f0ed4735897e2438cd11cb5fb5f9be);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f5fa443d6ef278198291283ba63db93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f5fa443d6ef278198291283ba63db93);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_37ad0d3f17cd1a588f8189b61264ea7d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_37ad0d3f17cd1a588f8189b61264ea7d);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_0053fbd20ed52d2518365ef8c320bf22));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0053fbd20ed52d2518365ef8c320bf22);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_f541b9d1541888c1a13ac82f094dadae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f541b9d1541888c1a13ac82f094dadae);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261));
CHECK_OBJECT_DEEP(mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_843dc5b87b6bbf4c96315acd2300b027));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_843dc5b87b6bbf4c96315acd2300b027);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_dict_a3fdc7e347e070b6759d9cdad3e128ed));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a3fdc7e347e070b6759d9cdad3e128ed);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain__custom_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__custom_headers);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_digest_1094d9f3a0134db2a2702e9309544757));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1094d9f3a0134db2a2702e9309544757);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_f58f5b69f8bbd7ac7682ec1ddbc3f3bb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f58f5b69f8bbd7ac7682ec1ddbc3f3bb);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_dict_501fd4312d9be2928d87226d1f41b406));
CHECK_OBJECT_DEEP(mod_consts.const_dict_501fd4312d9be2928d87226d1f41b406);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain__custom_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__custom_query);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_dict_d1bcd62e474f0c9dfd990c68663b32c7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d1bcd62e474f0c9dfd990c68663b32c7);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_cfb573c842ecf456ddcf3c5ad4205464));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cfb573c842ecf456ddcf3c5ad4205464);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_77c48e4b375080dfd65dd5baee8ec6e4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_77c48e4b375080dfd65dd5baee8ec6e4);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_int_pos_269));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_269);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_int_pos_273));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_273);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_55aa96f64587af1295f515d69d96c453));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_55aa96f64587af1295f515d69d96c453);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_670974be954bb84ddd7870689b3248dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_670974be954bb84ddd7870689b3248dd);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_5f031fe2f466a896cdf63739eeb39fae));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5f031fe2f466a896cdf63739eeb39fae);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain__load_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__load_client);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain__reset_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__reset_client);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_plain__module_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__module_client);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_b2743be265f3fc317cd1684739542a5a_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b2743be265f3fc317cd1684739542a5a_tuple);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_plain_beta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_beta);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_str_plain_audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_audio);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain_evals));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_evals);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_plain_files));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_files);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_str_plain_images));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_images);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain_models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_models);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_plain_batches));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_batches);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_str_plain_uploads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uploads);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain_webhooks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_webhooks);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain_responses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_responses);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_containers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_containers);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_str_plain_embeddings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_embeddings);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_plain_completions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completions);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_str_plain_fine_tuning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fine_tuning);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_plain_moderations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_moderations);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_str_plain_conversations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_conversations);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_plain_vector_stores));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vector_stores);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_str_digest_5e31d25d0442dac13a0d9188ab5c44aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5e31d25d0442dac13a0d9188ab5c44aa);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_98a767d06c5f827c14a1e2ba0340b3d2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_98a767d06c5f827c14a1e2ba0340b3d2);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_value_tuple);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_tuple_b2f23ba6f271f14ca2b69fc76d268172_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b2f23ba6f271f14ca2b69fc76d268172_tuple);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_url_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_url_str_plain___class___tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 41
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
static PyObject *module_var_accessor_openai$AttributeError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AttributeError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AttributeError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AttributeError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AttributeError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AttributeError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AttributeError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AttributeError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AttributeError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$AzureOpenAI(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AzureOpenAI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AzureOpenAI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AzureOpenAI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AzureOpenAI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AzureOpenAI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AzureOpenAI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AzureOpenAI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AzureOpenAI);
    }

    return result;
}

static PyObject *module_var_accessor_openai$DEFAULT_MAX_RETRIES(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
    }

    return result;
}

static PyObject *module_var_accessor_openai$DEFAULT_TIMEOUT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_TIMEOUT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_TIMEOUT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_DEFAULT_TIMEOUT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_DEFAULT_TIMEOUT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT);
    }

    return result;
}

static PyObject *module_var_accessor_openai$OpenAI(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OpenAI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OpenAI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OpenAI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OpenAI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
    }

    return result;
}

static PyObject *module_var_accessor_openai$OpenAIError(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OpenAIError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OpenAIError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_OpenAIError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_OpenAIError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$TypeError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_AmbiguousModuleClientUsageError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AmbiguousModuleClientUsageError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AmbiguousModuleClientUsageError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_ApiType(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ApiType);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ApiType);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ApiType, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ApiType);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ApiType, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ApiType);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ApiType);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ApiType);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_AzureModuleClient(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AzureModuleClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AzureModuleClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AzureModuleClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AzureModuleClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AzureModuleClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AzureModuleClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AzureModuleClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AzureModuleClient);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_ModuleClient(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ModuleClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ModuleClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ModuleClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__ModuleClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__ModuleClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ModuleClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ModuleClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__ModuleClient);
    }

    return result;
}

static PyObject *module_var_accessor_openai$__all__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___all__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___all__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___all__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___all__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$__locals(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___locals);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___locals, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___locals);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___locals, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___locals);
    }

    return result;
}

static PyObject *module_var_accessor_openai$__name(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___name);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___name, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___name);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___name, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___name);
    }

    return result;
}

static PyObject *module_var_accessor_openai$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__client);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_has_azure_ad_credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_ad_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_azure_ad_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_azure_ad_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_azure_ad_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_azure_ad_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_ad_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_ad_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_ad_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_has_azure_credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_azure_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_azure_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_azure_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_azure_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_has_openai_credentials(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_openai_credentials);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_openai_credentials);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_openai_credentials, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__has_openai_credentials);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__has_openai_credentials, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_openai_credentials);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_openai_credentials);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__has_openai_credentials);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_httpx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__httpx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__httpx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__httpx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__httpx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__httpx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__httpx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__httpx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__httpx);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_setup_logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__setup_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setup_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setup_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__setup_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__setup_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__setup_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__setup_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__setup_logging);
    }

    return result;
}

static PyObject *module_var_accessor_openai$_te(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__te);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__te);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__te, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__te);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__te, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__te);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__te);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__te);
    }

    return result;
}

static PyObject *module_var_accessor_openai$api_key(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_key);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_api_key);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_api_key, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_api_key);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_api_key, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_key);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_key);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_api_key);
    }

    return result;
}

static PyObject *module_var_accessor_openai$api_type(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_type);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_api_type);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_api_type, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_api_type);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_api_type, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_type);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_type);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_api_type);
    }

    return result;
}

static PyObject *module_var_accessor_openai$api_version(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_version);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_api_version);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_api_version, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_api_version);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_api_version, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_version);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_version);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_api_version);
    }

    return result;
}

static PyObject *module_var_accessor_openai$azure_ad_token(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_azure_ad_token);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_azure_ad_token, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_azure_ad_token);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_azure_ad_token, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token);
    }

    return result;
}

static PyObject *module_var_accessor_openai$azure_ad_token_provider(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token_provider);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_azure_ad_token_provider);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_azure_ad_token_provider, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_azure_ad_token_provider);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_azure_ad_token_provider, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token_provider);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token_provider);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token_provider);
    }

    return result;
}

static PyObject *module_var_accessor_openai$azure_endpoint(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_endpoint);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_azure_endpoint);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_azure_endpoint, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_azure_endpoint);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_azure_endpoint, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_endpoint);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_endpoint);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_endpoint);
    }

    return result;
}

static PyObject *module_var_accessor_openai$base_url(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_base_url);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base_url);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base_url, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_base_url);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_base_url, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_base_url);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_base_url);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_base_url);
    }

    return result;
}

static PyObject *module_var_accessor_openai$default_headers(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_headers);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_default_headers);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_default_headers, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_default_headers);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_default_headers, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_headers);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_headers);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_default_headers);
    }

    return result;
}

static PyObject *module_var_accessor_openai$default_query(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_query);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_default_query);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_default_query, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_default_query);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_default_query, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_query);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_query);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_default_query);
    }

    return result;
}

static PyObject *module_var_accessor_openai$http_client(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_http_client);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_http_client, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_http_client);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_http_client, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client);
    }

    return result;
}

static PyObject *module_var_accessor_openai$max_retries(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_max_retries);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_max_retries);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_max_retries, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_max_retries);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_max_retries, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_max_retries);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_max_retries);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_max_retries);
    }

    return result;
}

static PyObject *module_var_accessor_openai$organization(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_organization);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_organization);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_organization, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_organization);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_organization, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_organization);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_organization);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_organization);
    }

    return result;
}

static PyObject *module_var_accessor_openai$override(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_override);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_override, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }

    return result;
}

static PyObject *module_var_accessor_openai$project(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_project);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_project);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_project, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_project);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_project, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_project);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_project);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_project);
    }

    return result;
}

static PyObject *module_var_accessor_openai$property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_property);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_property, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_property);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_property, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_property);
    }

    return result;
}

static PyObject *module_var_accessor_openai$timeout(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_timeout);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_timeout, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_timeout);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_timeout, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout);
    }

    return result;
}

static PyObject *module_var_accessor_openai$webhook_secret(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_webhook_secret);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_webhook_secret);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_webhook_secret, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_webhook_secret);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_webhook_secret, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_webhook_secret);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_webhook_secret);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_webhook_secret);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_43db927ba0a1f2e2825610f188a1f81e;
static PyCodeObject *code_objects_ada936408053cc1521e559897b61adb1;
static PyCodeObject *code_objects_01779916796c8a519bbd25c195dd052c;
static PyCodeObject *code_objects_fe75a0aeda1b4b91513685f7211796b3;
static PyCodeObject *code_objects_36cc5823f4f73e2915a51bc2c1406dfc;
static PyCodeObject *code_objects_e7b6fa62c76ee755d510a757536acba1;
static PyCodeObject *code_objects_aa89e8df0e2f0be8a0c8543d359c348c;
static PyCodeObject *code_objects_98c5a52ff86da95621b81134914808b5;
static PyCodeObject *code_objects_ae534a1e430c6b22db865de7d950b6fc;
static PyCodeObject *code_objects_6e1baf83b14707066b76660a83f7ca54;
static PyCodeObject *code_objects_5ad5ab64ac911c050fed9ec08452378d;
static PyCodeObject *code_objects_abcb5d752f29c3b4d33096adcf246f66;
static PyCodeObject *code_objects_027efbd2cc4e7b665588f27440db05c3;
static PyCodeObject *code_objects_97dfbdce2a4c74e4225685d6f550854b;
static PyCodeObject *code_objects_8c6132dd7060531fa4a82c99e9201641;
static PyCodeObject *code_objects_b65f69702a58b71b93f37514c604a413;
static PyCodeObject *code_objects_c3845ce81a528476c2a2f265c6d08966;
static PyCodeObject *code_objects_29199a77224d296184b6cb689e0fdde8;
static PyCodeObject *code_objects_5112131ebb236ea503ddadad86339c38;
static PyCodeObject *code_objects_5d4f8603fe97d23f19aa68106d5f97e9;
static PyCodeObject *code_objects_fdb19896bf69dfd5648a8094c5698e83;
static PyCodeObject *code_objects_84f47a71d07d7fe0cd01368ed011901b;
static PyCodeObject *code_objects_46b08655d5e3aa3e52043d384e5cb949;
static PyCodeObject *code_objects_0bfb21a77fb49210fee578ac8df0d515;
static PyCodeObject *code_objects_7c7aa6e13d4e547cc2c6dd408881ef2d;
static PyCodeObject *code_objects_f766dc75865944d2f8aad09ac213e61d;
static PyCodeObject *code_objects_97836ca38e06c67d3f790077c6e5b925;
static PyCodeObject *code_objects_bc0ed35062b1b8852ad0ce998b0f547c;
static PyCodeObject *code_objects_0dc670189c256d7486da3606d0c347cd;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_5e31d25d0442dac13a0d9188ab5c44aa); CHECK_OBJECT(module_filename_obj);
code_objects_43db927ba0a1f2e2825610f188a1f81e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_98a767d06c5f827c14a1e2ba0340b3d2, mod_consts.const_str_digest_98a767d06c5f827c14a1e2ba0340b3d2, NULL, NULL, 0, 0, 0);
code_objects_ada936408053cc1521e559897b61adb1 = MAKE_CODE_OBJECT(module_filename_obj, 273, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__AmbiguousModuleClientUsageError, mod_consts.const_str_plain__AmbiguousModuleClientUsageError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_01779916796c8a519bbd25c195dd052c = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__ModuleClient, mod_consts.const_str_plain__ModuleClient, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_fe75a0aeda1b4b91513685f7211796b3 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_55aa96f64587af1295f515d69d96c453, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_36cc5823f4f73e2915a51bc2c1406dfc = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__client, mod_consts.const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_e7b6fa62c76ee755d510a757536acba1 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__client, mod_consts.const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_aa89e8df0e2f0be8a0c8543d359c348c = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__custom_headers, mod_consts.const_str_digest_1094d9f3a0134db2a2702e9309544757, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_98c5a52ff86da95621b81134914808b5 = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__custom_headers, mod_consts.const_str_digest_1094d9f3a0134db2a2702e9309544757, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_ae534a1e430c6b22db865de7d950b6fc = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__custom_query, mod_consts.const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_6e1baf83b14707066b76660a83f7ca54 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__custom_query, mod_consts.const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_5ad5ab64ac911c050fed9ec08452378d = MAKE_CODE_OBJECT(module_filename_obj, 288, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__has_azure_ad_credentials, mod_consts.const_str_plain__has_azure_ad_credentials, NULL, NULL, 0, 0, 0);
code_objects_abcb5d752f29c3b4d33096adcf246f66 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__has_azure_credentials, mod_consts.const_str_plain__has_azure_credentials, NULL, NULL, 0, 0, 0);
code_objects_027efbd2cc4e7b665588f27440db05c3 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__has_openai_credentials, mod_consts.const_str_plain__has_openai_credentials, NULL, NULL, 0, 0, 0);
code_objects_97dfbdce2a4c74e4225685d6f550854b = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__load_client, mod_consts.const_str_plain__load_client, mod_consts.const_tuple_b2f23ba6f271f14ca2b69fc76d268172_tuple, NULL, 0, 0, 0);
code_objects_8c6132dd7060531fa4a82c99e9201641 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__reset_client, mod_consts.const_str_plain__reset_client, NULL, NULL, 0, 0, 0);
code_objects_b65f69702a58b71b93f37514c604a413 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_api_key, mod_consts.const_str_digest_569527c40b13df229ef1071d2fa4d793, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_c3845ce81a528476c2a2f265c6d08966 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_api_key, mod_consts.const_str_digest_569527c40b13df229ef1071d2fa4d793, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_29199a77224d296184b6cb689e0fdde8 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_base_url, mod_consts.const_str_digest_8f5fa443d6ef278198291283ba63db93, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_5112131ebb236ea503ddadad86339c38 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_base_url, mod_consts.const_str_digest_8f5fa443d6ef278198291283ba63db93, mod_consts.const_tuple_str_plain_self_str_plain_url_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_5d4f8603fe97d23f19aa68106d5f97e9 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_max_retries, mod_consts.const_str_digest_843dc5b87b6bbf4c96315acd2300b027, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_fdb19896bf69dfd5648a8094c5698e83 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_max_retries, mod_consts.const_str_digest_843dc5b87b6bbf4c96315acd2300b027, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_84f47a71d07d7fe0cd01368ed011901b = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_organization, mod_consts.const_str_digest_84ef89a3d76337a33a7b201bd67d3bee, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_46b08655d5e3aa3e52043d384e5cb949 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_organization, mod_consts.const_str_digest_84ef89a3d76337a33a7b201bd67d3bee, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_0bfb21a77fb49210fee578ac8df0d515 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_project, mod_consts.const_str_digest_972af1d215c471afe389022098939f7a, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_7c7aa6e13d4e547cc2c6dd408881ef2d = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_project, mod_consts.const_str_digest_972af1d215c471afe389022098939f7a, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_f766dc75865944d2f8aad09ac213e61d = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_timeout, mod_consts.const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_97836ca38e06c67d3f790077c6e5b925 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_timeout, mod_consts.const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
code_objects_bc0ed35062b1b8852ad0ce998b0f547c = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhook_secret, mod_consts.const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_0dc670189c256d7486da3606d0c347cd = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhook_secret, mod_consts.const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0, mod_consts.const_tuple_str_plain_self_str_plain_value_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$$$function__10_base_url(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$$$function__11_timeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__12_timeout(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__13_max_retries(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__14_max_retries(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__15__custom_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__16__custom_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__17__custom_query(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__18__custom_query(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__19__client(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$$$function__1_api_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__20__client(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__21___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$$$function__22__has_openai_credentials(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__23__has_azure_credentials(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__24__has_azure_ad_credentials(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__25__load_client(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__26__reset_client(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__2_api_key(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__3_organization(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__4_organization(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__5_project(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__6_project(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__7_webhook_secret(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__8_webhook_secret(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$$$function__9_base_url(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_openai$$$function__1_api_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__1_api_key;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__1_api_key = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__1_api_key)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__1_api_key);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__1_api_key == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__1_api_key = MAKE_FUNCTION_FRAME(tstate, code_objects_b65f69702a58b71b93f37514c604a413, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__1_api_key->m_type_description == NULL);
frame_frame_openai$$$function__1_api_key = cache_frame_frame_openai$$$function__1_api_key;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__1_api_key);
assert(Py_REFCNT(frame_frame_openai$$$function__1_api_key) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$api_key(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_key);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__1_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__1_api_key->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__1_api_key, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__1_api_key,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__1_api_key == cache_frame_frame_openai$$$function__1_api_key) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__1_api_key);
    cache_frame_frame_openai$$$function__1_api_key = NULL;
}

assertFrameObject(frame_frame_openai$$$function__1_api_key);

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


static PyObject *impl_openai$$$function__2_api_key(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_key, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__3_organization(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__3_organization;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__3_organization = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__3_organization)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__3_organization);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__3_organization == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__3_organization = MAKE_FUNCTION_FRAME(tstate, code_objects_84f47a71d07d7fe0cd01368ed011901b, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__3_organization->m_type_description == NULL);
frame_frame_openai$$$function__3_organization = cache_frame_frame_openai$$$function__3_organization;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__3_organization);
assert(Py_REFCNT(frame_frame_openai$$$function__3_organization) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$organization(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_organization);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__3_organization, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__3_organization->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__3_organization, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__3_organization,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__3_organization == cache_frame_frame_openai$$$function__3_organization) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__3_organization);
    cache_frame_frame_openai$$$function__3_organization = NULL;
}

assertFrameObject(frame_frame_openai$$$function__3_organization);

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


static PyObject *impl_openai$$$function__4_organization(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_organization, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__5_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__5_project;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__5_project = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__5_project)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__5_project);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__5_project == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__5_project = MAKE_FUNCTION_FRAME(tstate, code_objects_0bfb21a77fb49210fee578ac8df0d515, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__5_project->m_type_description == NULL);
frame_frame_openai$$$function__5_project = cache_frame_frame_openai$$$function__5_project;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__5_project);
assert(Py_REFCNT(frame_frame_openai$$$function__5_project) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$project(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_project);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 182;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__5_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__5_project->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__5_project, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__5_project,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__5_project == cache_frame_frame_openai$$$function__5_project) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__5_project);
    cache_frame_frame_openai$$$function__5_project = NULL;
}

assertFrameObject(frame_frame_openai$$$function__5_project);

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


static PyObject *impl_openai$$$function__6_project(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_project, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__7_webhook_secret(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__7_webhook_secret;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__7_webhook_secret = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__7_webhook_secret)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__7_webhook_secret);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__7_webhook_secret == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__7_webhook_secret = MAKE_FUNCTION_FRAME(tstate, code_objects_bc0ed35062b1b8852ad0ce998b0f547c, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__7_webhook_secret->m_type_description == NULL);
frame_frame_openai$$$function__7_webhook_secret = cache_frame_frame_openai$$$function__7_webhook_secret;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__7_webhook_secret);
assert(Py_REFCNT(frame_frame_openai$$$function__7_webhook_secret) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$webhook_secret(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_webhook_secret);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__7_webhook_secret, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__7_webhook_secret->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__7_webhook_secret, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__7_webhook_secret,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__7_webhook_secret == cache_frame_frame_openai$$$function__7_webhook_secret) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__7_webhook_secret);
    cache_frame_frame_openai$$$function__7_webhook_secret = NULL;
}

assertFrameObject(frame_frame_openai$$$function__7_webhook_secret);

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


static PyObject *impl_openai$$$function__8_webhook_secret(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_webhook_secret, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__9_base_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__9_base_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__9_base_url = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__9_base_url)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__9_base_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__9_base_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__9_base_url = MAKE_FUNCTION_FRAME(tstate, code_objects_29199a77224d296184b6cb689e0fdde8, module_openai, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__9_base_url->m_type_description == NULL);
frame_frame_openai$$$function__9_base_url = cache_frame_frame_openai$$$function__9_base_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__9_base_url);
assert(Py_REFCNT(frame_frame_openai$$$function__9_base_url) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_openai$base_url(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_url);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
tmp_expression_value_1 = module_var_accessor_openai$_httpx(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__httpx);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 205;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_URL);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = module_var_accessor_openai$base_url(tstate);
if (unlikely(tmp_args_element_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_url);
}

if (tmp_args_element_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_1);

exception_lineno = 205;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__9_base_url->m_frame.f_lineno = 205;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_expression_value_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 207;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_2 = BUILTIN_SUPER0(tstate, moduledict_openai, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_base_url);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 207;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__9_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__9_base_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__9_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__9_base_url,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__9_base_url == cache_frame_frame_openai$$$function__9_base_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__9_base_url);
    cache_frame_frame_openai$$$function__9_base_url = NULL;
}

assertFrameObject(frame_frame_openai$$$function__9_base_url);

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


static PyObject *impl_openai$$$function__10_base_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
struct Nuitka_FrameObject *frame_frame_openai$$$function__10_base_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__10_base_url = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__10_base_url)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__10_base_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__10_base_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__10_base_url = MAKE_FUNCTION_FRAME(tstate, code_objects_5112131ebb236ea503ddadad86339c38, module_openai, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__10_base_url->m_type_description == NULL);
frame_frame_openai$$$function__10_base_url = cache_frame_frame_openai$$$function__10_base_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__10_base_url);
assert(Py_REFCNT(frame_frame_openai$$$function__10_base_url) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
CHECK_OBJECT(par_url);
tmp_assattr_value_1 = par_url;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 211;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_assattr_target_1 = BUILTIN_SUPER0(tstate, moduledict_openai, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_assattr_target_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooc";
    goto frame_exception_exit_1;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_base_url, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_target_1);
Py_DECREF(tmp_assattr_target_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__10_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__10_base_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__10_base_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__10_base_url,
    type_description_1,
    par_self,
    par_url,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__10_base_url == cache_frame_frame_openai$$$function__10_base_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__10_base_url);
    cache_frame_frame_openai$$$function__10_base_url = NULL;
}

assertFrameObject(frame_frame_openai$$$function__10_base_url);

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
CHECK_OBJECT(par_url);
Py_DECREF(par_url);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_url);
Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__11_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__11_timeout;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__11_timeout = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__11_timeout)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__11_timeout);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__11_timeout == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__11_timeout = MAKE_FUNCTION_FRAME(tstate, code_objects_f766dc75865944d2f8aad09ac213e61d, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__11_timeout->m_type_description == NULL);
frame_frame_openai$$$function__11_timeout = cache_frame_frame_openai$$$function__11_timeout;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__11_timeout);
assert(Py_REFCNT(frame_frame_openai$$$function__11_timeout) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$timeout(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__11_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__11_timeout->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__11_timeout, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__11_timeout,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__11_timeout == cache_frame_frame_openai$$$function__11_timeout) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__11_timeout);
    cache_frame_frame_openai$$$function__11_timeout = NULL;
}

assertFrameObject(frame_frame_openai$$$function__11_timeout);

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


static PyObject *impl_openai$$$function__12_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__13_max_retries(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__13_max_retries;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__13_max_retries = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__13_max_retries)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__13_max_retries);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__13_max_retries == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__13_max_retries = MAKE_FUNCTION_FRAME(tstate, code_objects_5d4f8603fe97d23f19aa68106d5f97e9, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__13_max_retries->m_type_description == NULL);
frame_frame_openai$$$function__13_max_retries = cache_frame_frame_openai$$$function__13_max_retries;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__13_max_retries);
assert(Py_REFCNT(frame_frame_openai$$$function__13_max_retries) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$max_retries(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_retries);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__13_max_retries, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__13_max_retries->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__13_max_retries, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__13_max_retries,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__13_max_retries == cache_frame_frame_openai$$$function__13_max_retries) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__13_max_retries);
    cache_frame_frame_openai$$$function__13_max_retries = NULL;
}

assertFrameObject(frame_frame_openai$$$function__13_max_retries);

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


static PyObject *impl_openai$$$function__14_max_retries(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_max_retries, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__15__custom_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__15__custom_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__15__custom_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__15__custom_headers)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__15__custom_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__15__custom_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__15__custom_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_aa89e8df0e2f0be8a0c8543d359c348c, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__15__custom_headers->m_type_description == NULL);
frame_frame_openai$$$function__15__custom_headers = cache_frame_frame_openai$$$function__15__custom_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__15__custom_headers);
assert(Py_REFCNT(frame_frame_openai$$$function__15__custom_headers) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$default_headers(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_default_headers);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 238;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__15__custom_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__15__custom_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__15__custom_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__15__custom_headers,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__15__custom_headers == cache_frame_frame_openai$$$function__15__custom_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__15__custom_headers);
    cache_frame_frame_openai$$$function__15__custom_headers = NULL;
}

assertFrameObject(frame_frame_openai$$$function__15__custom_headers);

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


static PyObject *impl_openai$$$function__16__custom_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_headers, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__17__custom_query(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__17__custom_query;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__17__custom_query = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__17__custom_query)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__17__custom_query);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__17__custom_query == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__17__custom_query = MAKE_FUNCTION_FRAME(tstate, code_objects_ae534a1e430c6b22db865de7d950b6fc, module_openai, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__17__custom_query->m_type_description == NULL);
frame_frame_openai$$$function__17__custom_query = cache_frame_frame_openai$$$function__17__custom_query;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__17__custom_query);
assert(Py_REFCNT(frame_frame_openai$$$function__17__custom_query) == 2);

// Framed code:
tmp_return_value = module_var_accessor_openai$default_query(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_default_query);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 249;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__17__custom_query, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__17__custom_query->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__17__custom_query, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__17__custom_query,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__17__custom_query == cache_frame_frame_openai$$$function__17__custom_query) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__17__custom_query);
    cache_frame_frame_openai$$$function__17__custom_query = NULL;
}

assertFrameObject(frame_frame_openai$$$function__17__custom_query);

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


static PyObject *impl_openai$$$function__18__custom_query(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_query, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__19__client(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__19__client;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__19__client = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__19__client)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__19__client);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__19__client == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__19__client = MAKE_FUNCTION_FRAME(tstate, code_objects_36cc5823f4f73e2915a51bc2c1406dfc, module_openai, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__19__client->m_type_description == NULL);
frame_frame_openai$$$function__19__client = cache_frame_frame_openai$$$function__19__client;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__19__client);
assert(Py_REFCNT(frame_frame_openai$$$function__19__client) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
tmp_or_left_value_1 = module_var_accessor_openai$http_client(tstate);
if (unlikely(tmp_or_left_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_or_left_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 260;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 260;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_openai, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__client);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 260;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__19__client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__19__client->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__19__client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__19__client,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__19__client == cache_frame_frame_openai$$$function__19__client) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__19__client);
    cache_frame_frame_openai$$$function__19__client = NULL;
}

assertFrameObject(frame_frame_openai$$$function__19__client);

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


static PyObject *impl_openai$$$function__20__client(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_value = python_pars[1];
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
CHECK_OBJECT(par_value);
tmp_assign_source_1 = par_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;


function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_value);
Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$$$function__21___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$$$function__21___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__21___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__21___init__)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__21___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__21___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__21___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fe75a0aeda1b4b91513685f7211796b3, module_openai, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__21___init__->m_type_description == NULL);
frame_frame_openai$$$function__21___init__ = cache_frame_frame_openai$$$function__21___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__21___init__);
assert(Py_REFCNT(frame_frame_openai$$$function__21___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 275;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_openai, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__21___init__->m_frame.f_lineno = 275;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_adcadcba4af36a3a88c09e211aaae612_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 275;
type_description_1 = "oc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__21___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__21___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__21___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__21___init__ == cache_frame_frame_openai$$$function__21___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__21___init__);
    cache_frame_frame_openai$$$function__21___init__ = NULL;
}

assertFrameObject(frame_frame_openai$$$function__21___init__);

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


static PyObject *impl_openai$$$function__22__has_openai_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_openai$$$function__22__has_openai_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__22__has_openai_credentials = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__22__has_openai_credentials)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__22__has_openai_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__22__has_openai_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__22__has_openai_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_027efbd2cc4e7b665588f27440db05c3, module_openai, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__22__has_openai_credentials->m_type_description == NULL);
frame_frame_openai$$$function__22__has_openai_credentials = cache_frame_frame_openai$$$function__22__has_openai_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__22__has_openai_credentials);
assert(Py_REFCNT(frame_frame_openai$$$function__22__has_openai_credentials) == 2);

// Framed code:
{
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;

    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__22__has_openai_credentials->m_frame.f_lineno = 281;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_OPENAI_API_KEY_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__22__has_openai_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__22__has_openai_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__22__has_openai_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__22__has_openai_credentials,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__22__has_openai_credentials == cache_frame_frame_openai$$$function__22__has_openai_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__22__has_openai_credentials);
    cache_frame_frame_openai$$$function__22__has_openai_credentials = NULL;
}

assertFrameObject(frame_frame_openai$$$function__22__has_openai_credentials);

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


static PyObject *impl_openai$$$function__23__has_azure_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_openai$$$function__23__has_azure_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__23__has_azure_credentials = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__23__has_azure_credentials)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__23__has_azure_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__23__has_azure_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__23__has_azure_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_abcb5d752f29c3b4d33096adcf246f66, module_openai, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__23__has_azure_credentials->m_type_description == NULL);
frame_frame_openai$$$function__23__has_azure_credentials = cache_frame_frame_openai$$$function__23__has_azure_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__23__has_azure_credentials);
assert(Py_REFCNT(frame_frame_openai$$$function__23__has_azure_credentials) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_cmp_expr_left_1 = module_var_accessor_openai$azure_endpoint(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 285;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__23__has_azure_credentials->m_frame.f_lineno = 285;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 285;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_or_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__23__has_azure_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__23__has_azure_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__23__has_azure_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__23__has_azure_credentials,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__23__has_azure_credentials == cache_frame_frame_openai$$$function__23__has_azure_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__23__has_azure_credentials);
    cache_frame_frame_openai$$$function__23__has_azure_credentials = NULL;
}

assertFrameObject(frame_frame_openai$$$function__23__has_azure_credentials);

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


static PyObject *impl_openai$$$function__24__has_azure_ad_credentials(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_FrameObject *frame_frame_openai$$$function__24__has_azure_ad_credentials;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__24__has_azure_ad_credentials = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$$$function__24__has_azure_ad_credentials)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__24__has_azure_ad_credentials);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__24__has_azure_ad_credentials == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__24__has_azure_ad_credentials = MAKE_FUNCTION_FRAME(tstate, code_objects_5ad5ab64ac911c050fed9ec08452378d, module_openai, 0);
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__24__has_azure_ad_credentials->m_type_description == NULL);
frame_frame_openai$$$function__24__has_azure_ad_credentials = cache_frame_frame_openai$$$function__24__has_azure_ad_credentials;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__24__has_azure_ad_credentials);
assert(Py_REFCNT(frame_frame_openai$$$function__24__has_azure_ad_credentials) == 2);

// Framed code:
{
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__24__has_azure_ad_credentials->m_frame.f_lineno = 290;
tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_or_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
tmp_cmp_expr_left_2 = module_var_accessor_openai$azure_ad_token(tstate);
if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_ad_token);
}

if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 291;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_cmp_expr_left_3 = module_var_accessor_openai$azure_ad_token_provider(tstate);
if (unlikely(tmp_cmp_expr_left_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_ad_token_provider);
}

if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 292;

    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_or_right_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? Py_True : Py_False;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_return_value = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_return_value = tmp_or_left_value_1;
or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__24__has_azure_ad_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__24__has_azure_ad_credentials->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__24__has_azure_ad_credentials, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__24__has_azure_ad_credentials,
    type_description_1
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__24__has_azure_ad_credentials == cache_frame_frame_openai$$$function__24__has_azure_ad_credentials) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__24__has_azure_ad_credentials);
    cache_frame_frame_openai$$$function__24__has_azure_ad_credentials = NULL;
}

assertFrameObject(frame_frame_openai$$$function__24__has_azure_ad_credentials);

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


static PyObject *impl_openai$$$function__25__load_client(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *var_has_openai = NULL;
PyObject *var_has_azure = NULL;
PyObject *var_has_azure_ad = NULL;
struct Nuitka_FrameObject *frame_frame_openai$$$function__25__load_client;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$$$function__25__load_client = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$$$function__25__load_client)) {
    Py_XDECREF(cache_frame_frame_openai$$$function__25__load_client);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$$$function__25__load_client == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$$$function__25__load_client = MAKE_FUNCTION_FRAME(tstate, code_objects_97dfbdce2a4c74e4225685d6f550854b, module_openai, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$$$function__25__load_client->m_type_description == NULL);
frame_frame_openai$$$function__25__load_client = cache_frame_frame_openai$$$function__25__load_client;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$function__25__load_client);
assert(Py_REFCNT(frame_frame_openai$$$function__25__load_client) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = module_var_accessor_openai$_client(tstate);
if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 302;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = module_var_accessor_openai$azure_endpoint(tstate);
if (unlikely(tmp_cmp_expr_left_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
}

if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 305;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
tmp_expression_value_2 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_2 == NULL));
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_environ);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 306;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_endpoint, tmp_assign_source_1);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
tmp_cmp_expr_left_3 = module_var_accessor_openai$azure_ad_token(tstate);
if (unlikely(tmp_cmp_expr_left_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_ad_token);
}

if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 309;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token, tmp_assign_source_2);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = module_var_accessor_openai$api_version(tstate);
if (unlikely(tmp_cmp_expr_left_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_version);
}

if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 312;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_version, tmp_assign_source_3);
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = module_var_accessor_openai$api_type(tstate);
if (unlikely(tmp_cmp_expr_left_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_type);
}

if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 314;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_value_4;
tmp_called_value_4 = module_var_accessor_openai$_has_openai_credentials(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__has_openai_credentials);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 315;
tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_has_openai == NULL);
var_has_openai = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_called_value_5;
tmp_called_value_5 = module_var_accessor_openai$_has_azure_credentials(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__has_azure_credentials);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 316;
tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 316;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_has_azure == NULL);
var_has_azure = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_6;
tmp_called_value_6 = module_var_accessor_openai$_has_azure_ad_credentials(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__has_azure_ad_credentials);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 317;
tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_has_azure_ad == NULL);
var_has_azure_ad = tmp_assign_source_6;
}
{
nuitka_bool tmp_condition_result_6;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
int tmp_truth_name_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
int tmp_truth_name_2;
int tmp_truth_name_3;
CHECK_OBJECT(var_has_openai);
tmp_truth_name_1 = CHECK_IF_TRUE(var_has_openai);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(var_has_azure);
tmp_truth_name_2 = CHECK_IF_TRUE(var_has_azure);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(var_has_azure_ad);
tmp_truth_name_3 = CHECK_IF_TRUE(var_has_azure_ad);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 319;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_and_right_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_and_right_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_condition_result_6 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_6 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_7;
tmp_called_value_7 = module_var_accessor_openai$_AmbiguousModuleClientUsageError(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 320;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 320;
tmp_raise_type_input_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 320;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 320;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
bool tmp_condition_result_7;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
int tmp_or_left_truth_2;
bool tmp_or_left_value_2;
bool tmp_or_right_value_2;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_cmp_expr_left_6 = module_var_accessor_openai$azure_ad_token(tstate);
if (unlikely(tmp_cmp_expr_left_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_ad_token);
}

if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_or_left_value_2 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
tmp_cmp_expr_left_7 = module_var_accessor_openai$azure_ad_token_provider(tstate);
if (unlikely(tmp_cmp_expr_left_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_ad_token_provider);
}

if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_or_right_value_2 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
tmp_and_left_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_and_left_value_2 = tmp_or_left_value_2;
or_end_2:;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_expression_value_8 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_environ);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 322;
tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
tmp_condition_result_7 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_7 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_raise_type_input_2;
PyObject *tmp_called_value_9;
tmp_called_value_9 = module_var_accessor_openai$_AmbiguousModuleClientUsageError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AmbiguousModuleClientUsageError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 325;
tmp_raise_type_input_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
if (tmp_raise_type_input_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_raise_type_2 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_2);
CHECK_OBJECT(tmp_raise_type_input_2);
Py_DECREF(tmp_raise_type_input_2);
if (tmp_raise_type_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 325;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
int tmp_truth_name_4;
int tmp_truth_name_5;
CHECK_OBJECT(var_has_azure);
tmp_truth_name_4 = CHECK_IF_TRUE(var_has_azure);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(var_has_azure_ad);
tmp_truth_name_5 = CHECK_IF_TRUE(var_has_azure_ad);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 327;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_8 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_8 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_str_plain_azure;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_type, tmp_assign_source_7);
}
goto branch_end_8;
branch_no_8:;
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = mod_consts.const_str_plain_openai;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_type, tmp_assign_source_8);
}
branch_end_8:;
branch_no_5:;
{
nuitka_bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
tmp_cmp_expr_left_9 = module_var_accessor_openai$api_type(tstate);
if (unlikely(tmp_cmp_expr_left_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_type);
}

if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = mod_consts.const_str_plain_azure;
tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_10;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_kw_call_value_11_1;
tmp_called_value_10 = module_var_accessor_openai$_AzureModuleClient(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AzureModuleClient);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 333;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_openai$api_version(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_version);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 334;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_1 = module_var_accessor_openai$azure_endpoint(tstate);
if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
}

if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 335;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_1 = module_var_accessor_openai$api_key(tstate);
if (unlikely(tmp_kw_call_value_2_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_key);
}

if (tmp_kw_call_value_2_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 336;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_1 = module_var_accessor_openai$azure_ad_token(tstate);
if (unlikely(tmp_kw_call_value_3_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_ad_token);
}

if (tmp_kw_call_value_3_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 337;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_4_1 = module_var_accessor_openai$azure_ad_token_provider(tstate);
if (unlikely(tmp_kw_call_value_4_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_ad_token_provider);
}

if (tmp_kw_call_value_4_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_5_1 = module_var_accessor_openai$organization(tstate);
if (unlikely(tmp_kw_call_value_5_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_organization);
}

if (tmp_kw_call_value_5_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_6_1 = module_var_accessor_openai$base_url(tstate);
if (unlikely(tmp_kw_call_value_6_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_url);
}

if (tmp_kw_call_value_6_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 340;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_7_1 = module_var_accessor_openai$timeout(tstate);
if (unlikely(tmp_kw_call_value_7_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
}

if (tmp_kw_call_value_7_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 341;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_8_1 = module_var_accessor_openai$max_retries(tstate);
if (unlikely(tmp_kw_call_value_8_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_retries);
}

if (tmp_kw_call_value_8_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 342;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_9_1 = module_var_accessor_openai$default_headers(tstate);
if (unlikely(tmp_kw_call_value_9_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_default_headers);
}

if (tmp_kw_call_value_9_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 343;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_10_1 = module_var_accessor_openai$default_query(tstate);
if (unlikely(tmp_kw_call_value_10_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_default_query);
}

if (tmp_kw_call_value_10_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 344;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_11_1 = module_var_accessor_openai$http_client(tstate);
if (unlikely(tmp_kw_call_value_11_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_kw_call_value_11_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 333;
{
    PyObject *kw_values[12] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1};

    tmp_assign_source_9 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_10, kw_values, mod_consts.const_tuple_8d33f373f5227a8b78b34acb83478926_tuple);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__client, tmp_assign_source_9);
}
tmp_return_value = module_var_accessor_openai$_client(tstate);
assert(!(tmp_return_value == NULL));
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_9:;
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_11;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_kw_call_value_1_2;
PyObject *tmp_kw_call_value_2_2;
PyObject *tmp_kw_call_value_3_2;
PyObject *tmp_kw_call_value_4_2;
PyObject *tmp_kw_call_value_5_2;
PyObject *tmp_kw_call_value_6_2;
PyObject *tmp_kw_call_value_7_2;
PyObject *tmp_kw_call_value_8_2;
PyObject *tmp_kw_call_value_9_2;
tmp_called_value_11 = module_var_accessor_openai$_ModuleClient(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ModuleClient);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_2 = module_var_accessor_openai$api_key(tstate);
if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_key);
}

if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 350;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_1_2 = module_var_accessor_openai$organization(tstate);
if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_organization);
}

if (tmp_kw_call_value_1_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 351;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_2_2 = module_var_accessor_openai$project(tstate);
if (unlikely(tmp_kw_call_value_2_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_project);
}

if (tmp_kw_call_value_2_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_3_2 = module_var_accessor_openai$webhook_secret(tstate);
if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_webhook_secret);
}

if (tmp_kw_call_value_3_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_4_2 = module_var_accessor_openai$base_url(tstate);
if (unlikely(tmp_kw_call_value_4_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_url);
}

if (tmp_kw_call_value_4_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 354;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_5_2 = module_var_accessor_openai$timeout(tstate);
if (unlikely(tmp_kw_call_value_5_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);
}

if (tmp_kw_call_value_5_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 355;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_6_2 = module_var_accessor_openai$max_retries(tstate);
if (unlikely(tmp_kw_call_value_6_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_retries);
}

if (tmp_kw_call_value_6_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_7_2 = module_var_accessor_openai$default_headers(tstate);
if (unlikely(tmp_kw_call_value_7_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_default_headers);
}

if (tmp_kw_call_value_7_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 357;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_8_2 = module_var_accessor_openai$default_query(tstate);
if (unlikely(tmp_kw_call_value_8_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_default_query);
}

if (tmp_kw_call_value_8_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 358;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_9_2 = module_var_accessor_openai$http_client(tstate);
if (unlikely(tmp_kw_call_value_9_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_http_client);
}

if (tmp_kw_call_value_9_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$$$function__25__load_client->m_frame.f_lineno = 349;
{
    PyObject *kw_values[10] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2, tmp_kw_call_value_5_2, tmp_kw_call_value_6_2, tmp_kw_call_value_7_2, tmp_kw_call_value_8_2, tmp_kw_call_value_9_2};

    tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, kw_values, mod_consts.const_tuple_252f4142a9fba8c77bd246cbab159b5d_tuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__client, tmp_assign_source_10);
}
tmp_return_value = module_var_accessor_openai$_client(tstate);
assert(!(tmp_return_value == NULL));
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
tmp_return_value = module_var_accessor_openai$_client(tstate);
if (unlikely(tmp_return_value == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);
}

if (tmp_return_value == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 363;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$function__25__load_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$function__25__load_client->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$function__25__load_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$function__25__load_client,
    type_description_1,
    var_has_openai,
    var_has_azure,
    var_has_azure_ad
);


// Release cached frame if used for exception.
if (frame_frame_openai$$$function__25__load_client == cache_frame_frame_openai$$$function__25__load_client) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$$$function__25__load_client);
    cache_frame_frame_openai$$$function__25__load_client = NULL;
}

assertFrameObject(frame_frame_openai$$$function__25__load_client);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_has_openai);
var_has_openai = NULL;
Py_XDECREF(var_has_azure);
var_has_azure = NULL;
Py_XDECREF(var_has_azure_ad);
var_has_azure_ad = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_has_openai);
var_has_openai = NULL;
Py_XDECREF(var_has_azure);
var_has_azure = NULL;
Py_XDECREF(var_has_azure_ad);
var_has_azure_ad = NULL;
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


static PyObject *impl_openai$$$function__26__reset_client(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *tmp_return_value = NULL;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__client, tmp_assign_source_1);
}
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto function_return_exit;

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



static PyObject *MAKE_FUNCTION_openai$$$function__10_base_url(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__10_base_url,
        mod_consts.const_str_plain_base_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f5fa443d6ef278198291283ba63db93,
#endif
        code_objects_5112131ebb236ea503ddadad86339c38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__11_timeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__11_timeout,
        mod_consts.const_str_plain_timeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128,
#endif
        code_objects_f766dc75865944d2f8aad09ac213e61d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__12_timeout(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__12_timeout,
        mod_consts.const_str_plain_timeout,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9fc79e728fedf5648bbf4ffca9b1d128,
#endif
        code_objects_97836ca38e06c67d3f790077c6e5b925,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__13_max_retries(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__13_max_retries,
        mod_consts.const_str_plain_max_retries,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_843dc5b87b6bbf4c96315acd2300b027,
#endif
        code_objects_5d4f8603fe97d23f19aa68106d5f97e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__14_max_retries(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__14_max_retries,
        mod_consts.const_str_plain_max_retries,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_843dc5b87b6bbf4c96315acd2300b027,
#endif
        code_objects_fdb19896bf69dfd5648a8094c5698e83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__15__custom_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__15__custom_headers,
        mod_consts.const_str_plain__custom_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1094d9f3a0134db2a2702e9309544757,
#endif
        code_objects_aa89e8df0e2f0be8a0c8543d359c348c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__16__custom_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__16__custom_headers,
        mod_consts.const_str_plain__custom_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1094d9f3a0134db2a2702e9309544757,
#endif
        code_objects_98c5a52ff86da95621b81134914808b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__17__custom_query(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__17__custom_query,
        mod_consts.const_str_plain__custom_query,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9,
#endif
        code_objects_ae534a1e430c6b22db865de7d950b6fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__18__custom_query(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__18__custom_query,
        mod_consts.const_str_plain__custom_query,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_b4eecf5f5cbff2e324e614f1f511b2e9,
#endif
        code_objects_6e1baf83b14707066b76660a83f7ca54,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__19__client(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__19__client,
        mod_consts.const_str_plain__client,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93,
#endif
        code_objects_36cc5823f4f73e2915a51bc2c1406dfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__1_api_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__1_api_key,
        mod_consts.const_str_plain_api_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_569527c40b13df229ef1071d2fa4d793,
#endif
        code_objects_b65f69702a58b71b93f37514c604a413,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__20__client(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__20__client,
        mod_consts.const_str_plain__client,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8ded95b135a8afafbfe70a7c1d33fb93,
#endif
        code_objects_e7b6fa62c76ee755d510a757536acba1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__21___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_55aa96f64587af1295f515d69d96c453,
#endif
        code_objects_fe75a0aeda1b4b91513685f7211796b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__22__has_openai_credentials(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__22__has_openai_credentials,
        mod_consts.const_str_plain__has_openai_credentials,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_027efbd2cc4e7b665588f27440db05c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__23__has_azure_credentials(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__23__has_azure_credentials,
        mod_consts.const_str_plain__has_azure_credentials,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_abcb5d752f29c3b4d33096adcf246f66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__24__has_azure_ad_credentials(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__24__has_azure_ad_credentials,
        mod_consts.const_str_plain__has_azure_ad_credentials,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5ad5ab64ac911c050fed9ec08452378d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__25__load_client(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__25__load_client,
        mod_consts.const_str_plain__load_client,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_97dfbdce2a4c74e4225685d6f550854b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__26__reset_client(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__26__reset_client,
        mod_consts.const_str_plain__reset_client,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8c6132dd7060531fa4a82c99e9201641,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__2_api_key(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__2_api_key,
        mod_consts.const_str_plain_api_key,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_569527c40b13df229ef1071d2fa4d793,
#endif
        code_objects_c3845ce81a528476c2a2f265c6d08966,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__3_organization(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__3_organization,
        mod_consts.const_str_plain_organization,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_84ef89a3d76337a33a7b201bd67d3bee,
#endif
        code_objects_84f47a71d07d7fe0cd01368ed011901b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__4_organization(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__4_organization,
        mod_consts.const_str_plain_organization,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_84ef89a3d76337a33a7b201bd67d3bee,
#endif
        code_objects_46b08655d5e3aa3e52043d384e5cb949,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__5_project(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__5_project,
        mod_consts.const_str_plain_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_972af1d215c471afe389022098939f7a,
#endif
        code_objects_0bfb21a77fb49210fee578ac8df0d515,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__6_project(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__6_project,
        mod_consts.const_str_plain_project,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_972af1d215c471afe389022098939f7a,
#endif
        code_objects_7c7aa6e13d4e547cc2c6dd408881ef2d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__7_webhook_secret(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__7_webhook_secret,
        mod_consts.const_str_plain_webhook_secret,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0,
#endif
        code_objects_bc0ed35062b1b8852ad0ce998b0f547c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__8_webhook_secret(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__8_webhook_secret,
        mod_consts.const_str_plain_webhook_secret,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_997658a76b694b1a0a7d1dbba47e8ec0,
#endif
        code_objects_0dc670189c256d7486da3606d0c347cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$$$function__9_base_url(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$$$function__9_base_url,
        mod_consts.const_str_plain_base_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8f5fa443d6ef278198291283ba63db93,
#endif
        code_objects_29199a77224d296184b6cb689e0fdde8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_openai[] = {
impl_openai$$$function__1_api_key,
impl_openai$$$function__2_api_key,
impl_openai$$$function__3_organization,
impl_openai$$$function__4_organization,
impl_openai$$$function__5_project,
impl_openai$$$function__6_project,
impl_openai$$$function__7_webhook_secret,
impl_openai$$$function__8_webhook_secret,
impl_openai$$$function__9_base_url,
impl_openai$$$function__10_base_url,
impl_openai$$$function__11_timeout,
impl_openai$$$function__12_timeout,
impl_openai$$$function__13_max_retries,
impl_openai$$$function__14_max_retries,
impl_openai$$$function__15__custom_headers,
impl_openai$$$function__16__custom_headers,
impl_openai$$$function__17__custom_query,
impl_openai$$$function__18__custom_query,
impl_openai$$$function__19__client,
impl_openai$$$function__20__client,
impl_openai$$$function__21___init__,
impl_openai$$$function__22__has_openai_credentials,
impl_openai$$$function__23__has_azure_credentials,
impl_openai$$$function__24__has_azure_ad_credentials,
impl_openai$$$function__25__load_client,
impl_openai$$$function__26__reset_client,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai);
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
        module_openai,
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
        function_table_openai,
        sizeof(function_table_openai) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai";
#endif

// Internal entry point for module code.
PyObject *module_code_openai(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai");

    // Store the module for future use.
    module_openai = module;

    moduledict_openai = MODULE_DICT(module_openai);

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
        PRINT_STRING("openai: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai);
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

        UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_3__bases = NULL;
PyObject *tmp_class_container$class_creation_3__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__metaclass = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_for_loop_1__for_iterator = NULL;
PyObject *tmp_for_loop_1__iter_value = NULL;
PyObject *tmp_import_from_10__module = NULL;
PyObject *tmp_import_from_11__module = NULL;
PyObject *tmp_import_from_12__module = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
PyObject *tmp_import_from_8__module = NULL;
PyObject *tmp_import_from_9__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionStackItem exception_preserved_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
PyObject *locals_openai$$$class__1__ModuleClient_153 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$$$class__1__ModuleClient_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
PyObject *locals_openai$$$class__2__AzureModuleClient_269 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
PyObject *locals_openai$$$class__3__AmbiguousModuleClientUsageError_273 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_22;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_23;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_24;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai = MAKE_MODULE_FRAME(code_objects_43db927ba0a1f2e2825610f188a1f81e, module_openai);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai);
assert(Py_REFCNT(frame_frame_openai) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai->m_frame.f_lineno = 1;
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
frame_frame_openai->m_frame.f_lineno = 1;
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
frame_frame_openai->m_frame.f_lineno = 1;
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
frame_frame_openai->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_2, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);

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
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_6 == NULL));
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_7 == NULL));
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__os, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
tmp_assign_source_8 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_8 == NULL));
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__t, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_override_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai->m_frame.f_lineno = 7;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_override,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_override);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_override, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = const_str_empty;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_types_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 9;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai,
        const_str_plain_types,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, const_str_plain_types);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_f3f0988927b8a9f6367483ee7375096e_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 10;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
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
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_NOT_GIVEN,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_Omit,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_Omit);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_NoneType,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_NoneType);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_NoneType, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_Transport,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Transport);
}

if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_Transport, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_ProxiesTypes,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ProxiesTypes);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxiesTypes, tmp_assign_source_17);
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
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_file_from_path_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 11;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_file_from_path,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_file_from_path);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_file_from_path, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__client;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_5f8f2fdcb3d88d3da60db9257d68e635_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 12;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_19;
}
// Tried code:
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_Client,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_Client);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_Client, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_11 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_OpenAI,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_OpenAI);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_12 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_Stream,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Stream);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_13 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_Timeout,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Timeout);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_Transport,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Transport);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_Transport, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AsyncClient,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_AsyncClient);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncClient, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_16 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AsyncOpenAI,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_AsyncOpenAI);
}

if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncOpenAI, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_17 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AsyncStream,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_18 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_RequestOptions,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_RequestOptions);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestOptions, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_BaseModel_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 13;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_BaseModel,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_BaseModel);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseModel, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__version;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain___title___str_plain___version___tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 14;
tmp_assign_source_30 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_30;
}
// Tried code:
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_20 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain___title__,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain___title__);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___title__, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_21;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_21 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain___version__);
}

if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_32);
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
PyObject *tmp_assign_source_33;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__response;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_APIResponse_str_plain_AsyncAPIResponse_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 15;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_22 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_APIResponse,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_APIResponse);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_APIResponse, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_23 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AsyncAPIResponse,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_AsyncAPIResponse);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIResponse, tmp_assign_source_35);
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
PyObject *tmp_assign_source_36;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__constants;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_03356056ac4b3125294dce2033b6dda1_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 16;
tmp_assign_source_36 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_36;
}
// Tried code:
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_24 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DEFAULT_TIMEOUT,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_DEFAULT_TIMEOUT);
}

if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_25 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DEFAULT_MAX_RETRIES,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_26 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DEFAULT_CONNECTION_LIMITS,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_DEFAULT_CONNECTION_LIMITS);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_CONNECTION_LIMITS, tmp_assign_source_39);
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
PyObject *tmp_assign_source_40;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_43f460372f3a0aae60b3f6c16860b4ae_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 17;
tmp_assign_source_40 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_40;
}
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_27 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_APIError,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_APIError);
}

if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_APIError, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_28;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_28 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_OpenAIError,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_OpenAIError);
}

if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_29;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_29 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_ConflictError,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ConflictError);
}

if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_ConflictError, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_30;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_30 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_NotFoundError,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_NotFoundError);
}

if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_NotFoundError, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_31;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_31 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_APIStatusError,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_APIStatusError);
}

if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_32;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_32 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_RateLimitError,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_RateLimitError);
}

if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_RateLimitError, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_33;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_33 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_APITimeoutError,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_APITimeoutError);
}

if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_APITimeoutError, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_34;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_34 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_BadRequestError,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_BadRequestError);
}

if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_BadRequestError, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_35;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_35 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_APIConnectionError,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_APIConnectionError);
}

if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_APIConnectionError, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_36;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_36 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AuthenticationError,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_AuthenticationError);
}

if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AuthenticationError, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_37;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_37 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_InternalServerError,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_InternalServerError);
}

if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_InternalServerError, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_38;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_38 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_PermissionDeniedError,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_PermissionDeniedError);
}

if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_PermissionDeniedError, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_39;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_39 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_LengthFinishReasonError,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_LengthFinishReasonError);
}

if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_LengthFinishReasonError, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_40;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_40 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_UnprocessableEntityError,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_UnprocessableEntityError);
}

if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_UnprocessableEntityError, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_41;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_41 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_APIResponseValidationError,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_APIResponseValidationError);
}

if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_APIResponseValidationError, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_42;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_42 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_InvalidWebhookSignatureError,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_InvalidWebhookSignatureError);
}

if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_InvalidWebhookSignatureError, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_43;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_43 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_ContentFilterFinishReasonError,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_ContentFilterFinishReasonError);
}

if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_ContentFilterFinishReasonError, tmp_assign_source_57);
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
PyObject *tmp_assign_source_58;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_9c483bbc929e744a73dc83119c4d47e0_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 36;
tmp_assign_source_58 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_58;
}
// Tried code:
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_44;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_44 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DefaultHttpxClient,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_DefaultHttpxClient);
}

if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultHttpxClient, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_45;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_45 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DefaultAioHttpClient,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_DefaultAioHttpClient);
}

if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultAioHttpClient, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_46;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_46 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DefaultAsyncHttpxClient,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_DefaultAsyncHttpxClient);
}

if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DefaultAsyncHttpxClient, tmp_assign_source_61);
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
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_47;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_digest_b6718596fd79d63bf6c39b860d6c0567;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_setup_logging_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 37;
tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_setup_logging,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_setup_logging);
}

CHECK_OBJECT(tmp_import_name_from_47);
Py_DECREF(tmp_import_name_from_47);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__setup_logging, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain__legacy_response;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_HttpxBinaryResponseContent_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 38;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_HttpxBinaryResponseContent,
        const_int_0
    );
} else {
    tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_HttpxBinaryResponseContent);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_HttpxBinaryResponseContent, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
tmp_assign_source_64 = LIST_COPY(tstate, mod_consts.const_list_2f6fca1c9ad70c4ac2524e1d68566637_list);
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_64);
}
{
PyObject *tmp_assign_source_65;
PyObject *tmp_import_name_from_49;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_e88fc83ef07c0cab5b77808045e314b7;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_resources_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 86;
tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_resources,
        const_int_0
    );
} else {
    tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_resources);
}

CHECK_OBJECT(tmp_import_name_from_49);
Py_DECREF(tmp_import_name_from_49);
if (tmp_assign_source_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_resources, tmp_assign_source_65);
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_lib;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_azure_str_plain_pydantic_function_tool_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 88;
tmp_assign_source_66 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_8__module == NULL);
tmp_import_from_8__module = tmp_assign_source_66;
}
// Tried code:
{
PyObject *tmp_assign_source_67;
PyObject *tmp_import_name_from_50;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_50 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_azure,
        const_int_0
    );
} else {
    tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_azure);
}

if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__azure, tmp_assign_source_67);
}
{
PyObject *tmp_assign_source_68;
PyObject *tmp_import_name_from_51;
CHECK_OBJECT(tmp_import_from_8__module);
tmp_import_name_from_51 = tmp_import_from_8__module;
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_pydantic_function_tool,
        const_int_0
    );
} else {
    tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_pydantic_function_tool);
}

if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto try_except_handler_8;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_pydantic_function_tool, tmp_assign_source_68);
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
PyObject *tmp_assign_source_69;
PyObject *tmp_import_name_from_52;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_version;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_VERSION_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 89;
tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_VERSION,
        const_int_0
    );
} else {
    tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_VERSION);
}

CHECK_OBJECT(tmp_import_name_from_52);
Py_DECREF(tmp_import_name_from_52);
if (tmp_assign_source_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_VERSION, tmp_assign_source_69);
}
{
PyObject *tmp_assign_source_70;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_digest_0bf6c2af2a30f8ae93475762e286ee36;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_AzureOpenAI_str_plain_AsyncAzureOpenAI_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 90;
tmp_assign_source_70 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_9__module == NULL);
tmp_import_from_9__module = tmp_assign_source_70;
}
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_import_name_from_53;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_53 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AzureOpenAI,
        const_int_0
    );
} else {
    tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_AzureOpenAI);
}

if (tmp_assign_source_71 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AzureOpenAI, tmp_assign_source_71);
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_import_name_from_54;
CHECK_OBJECT(tmp_import_from_9__module);
tmp_import_name_from_54 = tmp_import_from_9__module;
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AsyncAzureOpenAI,
        const_int_0
    );
} else {
    tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_plain_AsyncAzureOpenAI);
}

if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto try_except_handler_9;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAzureOpenAI, tmp_assign_source_72);
}
goto try_end_9;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_9__module);
CHECK_OBJECT(tmp_import_from_9__module);
Py_DECREF(tmp_import_from_9__module);
tmp_import_from_9__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_import_from_9__module);
CHECK_OBJECT(tmp_import_from_9__module);
Py_DECREF(tmp_import_from_9__module);
tmp_import_from_9__module = NULL;
{
PyObject *tmp_star_imported_1;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_digest_15ee78bf465376d340665840886b93a5;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_18 = (PyObject *)moduledict_openai;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_chr_42_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 91;
tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_star_imported_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
tmp_result = IMPORT_MODULE_STAR(tstate, module_openai, true, tmp_star_imported_1);
CHECK_OBJECT(tmp_star_imported_1);
Py_DECREF(tmp_star_imported_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_73;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_digest_1da5756fd890233839534c800cd28ffd;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_978998751080f49daf72ff1b3156c0a1_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 92;
tmp_assign_source_73 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_assign_source_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_10__module == NULL);
tmp_import_from_10__module = tmp_assign_source_73;
}
// Tried code:
{
PyObject *tmp_assign_source_74;
PyObject *tmp_import_name_from_55;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_55 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AssistantEventHandler,
        const_int_0
    );
} else {
    tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_plain_AssistantEventHandler);
}

if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AssistantEventHandler, tmp_assign_source_74);
}
{
PyObject *tmp_assign_source_75;
PyObject *tmp_import_name_from_56;
CHECK_OBJECT(tmp_import_from_10__module);
tmp_import_name_from_56 = tmp_import_from_10__module;
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_AsyncAssistantEventHandler,
        const_int_0
    );
} else {
    tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_plain_AsyncAssistantEventHandler);
}

if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;

    goto try_except_handler_10;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAssistantEventHandler, tmp_assign_source_75);
}
goto try_end_10;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_10__module);
CHECK_OBJECT(tmp_import_from_10__module);
Py_DECREF(tmp_import_from_10__module);
tmp_import_from_10__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_import_from_10__module);
CHECK_OBJECT(tmp_import_from_10__module);
Py_DECREF(tmp_import_from_10__module);
tmp_import_from_10__module = NULL;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
tmp_called_value_3 = module_var_accessor_openai$_setup_logging(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__setup_logging);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;

    goto frame_exception_exit_1;
}
frame_frame_openai->m_frame.f_lineno = 97;
tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = (PyObject *)moduledict_openai;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___locals, tmp_assign_source_76);
}
{
PyObject *tmp_assign_source_77;
PyObject *tmp_iter_arg_1;
tmp_iter_arg_1 = module_var_accessor_openai$__all__(tstate);
if (unlikely(tmp_iter_arg_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___all__);
}

if (tmp_iter_arg_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto frame_exception_exit_1;
}
tmp_assign_source_77 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_77 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto frame_exception_exit_1;
}
assert(tmp_for_loop_1__for_iterator == NULL);
tmp_for_loop_1__for_iterator = tmp_assign_source_77;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_78;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
tmp_next_source_1 = tmp_for_loop_1__for_iterator;
tmp_assign_source_78 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_78 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);

exception_lineno = 104;
        goto try_except_handler_11;
    }
}

{
    PyObject *old = tmp_for_loop_1__iter_value;
    tmp_for_loop_1__iter_value = tmp_assign_source_78;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_79;
CHECK_OBJECT(tmp_for_loop_1__iter_value);
tmp_assign_source_79 = tmp_for_loop_1__iter_value;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain___name, tmp_assign_source_79);
}
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_3;
tmp_expression_value_3 = module_var_accessor_openai$__name(tstate);
assert(!(tmp_expression_value_3 == NULL));
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_startswith);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_11;
}
frame_frame_openai->m_frame.f_lineno = 105;
tmp_operand_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain____tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_11;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;

    goto try_except_handler_11;
}
tmp_condition_result_1 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
// Tried code:
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_1;
tmp_assattr_value_4 = mod_consts.const_str_plain_openai;
tmp_expression_value_4 = module_var_accessor_openai$__locals(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___locals);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto try_except_handler_12;
}
tmp_subscript_value_1 = module_var_accessor_openai$__name(tstate);
if (unlikely(tmp_subscript_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___name);
}

if (tmp_subscript_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto try_except_handler_12;
}
tmp_assattr_target_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
if (tmp_assattr_target_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_12;
}
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, const_str_plain___module__, tmp_assattr_value_4);
CHECK_OBJECT(tmp_assattr_target_4);
Py_DECREF(tmp_assattr_target_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 107;

    goto try_except_handler_12;
}
}
goto try_end_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai, exception_keeper_lineno_11);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_11, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_name_11);
// Tried code:
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_tuple_element_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_tuple_element_1 = module_var_accessor_openai$TypeError(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeError);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto try_except_handler_13;
}
tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = module_var_accessor_openai$AttributeError(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AttributeError);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_cmp_expr_right_1);
goto try_except_handler_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_right_1);
Py_DECREF(tmp_cmp_expr_right_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto try_except_handler_13;
}
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
    exception_lineno = 106;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_openai->m_frame)) {
        frame_frame_openai->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_13;
branch_no_2:;
goto try_end_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto try_except_handler_11;
// End of try:
try_end_12:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

goto try_end_11;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_11:;
branch_no_1:;
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 104;

    goto try_except_handler_11;
}
goto loop_start_1;
loop_end_1:;
goto try_end_13;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto frame_exception_exit_1;
// End of try:
try_end_13:;
Py_XDECREF(tmp_for_loop_1__iter_value);
tmp_for_loop_1__iter_value = NULL;
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
CHECK_OBJECT(tmp_for_loop_1__for_iterator);
Py_DECREF(tmp_for_loop_1__for_iterator);
tmp_for_loop_1__for_iterator = NULL;
{
PyObject *tmp_assign_source_80;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = Py_None;
tmp_level_value_20 = const_int_0;
frame_frame_openai->m_frame.f_lineno = 114;
tmp_assign_source_80 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_assign_source_80 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 114;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__te, tmp_assign_source_80);
}
{
PyObject *tmp_assign_source_81;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_21 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = Py_None;
tmp_level_value_21 = const_int_0;
frame_frame_openai->m_frame.f_lineno = 116;
tmp_assign_source_81 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_assign_source_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__httpx, tmp_assign_source_81);
}
{
PyObject *tmp_assign_source_82;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_22 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_DEFAULT_TIMEOUT_str_plain_DEFAULT_MAX_RETRIES_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 118;
tmp_assign_source_82 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_assign_source_82 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_11__module == NULL);
tmp_import_from_11__module = tmp_assign_source_82;
}
// Tried code:
{
PyObject *tmp_assign_source_83;
PyObject *tmp_import_name_from_57;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_57 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DEFAULT_TIMEOUT,
        const_int_0
    );
} else {
    tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_plain_DEFAULT_TIMEOUT);
}

if (tmp_assign_source_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_TIMEOUT, tmp_assign_source_83);
}
{
PyObject *tmp_assign_source_84;
PyObject *tmp_import_name_from_58;
CHECK_OBJECT(tmp_import_from_11__module);
tmp_import_name_from_58 = tmp_import_from_11__module;
if (PyModule_Check(tmp_import_name_from_58)) {
    tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_58,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_DEFAULT_MAX_RETRIES,
        const_int_0
    );
} else {
    tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_assign_source_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;

    goto try_except_handler_14;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES, tmp_assign_source_84);
}
goto try_end_14;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_11__module);
CHECK_OBJECT(tmp_import_from_11__module);
Py_DECREF(tmp_import_from_11__module);
tmp_import_from_11__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto frame_exception_exit_1;
// End of try:
try_end_14:;
CHECK_OBJECT(tmp_import_from_11__module);
CHECK_OBJECT(tmp_import_from_11__module);
Py_DECREF(tmp_import_from_11__module);
tmp_import_from_11__module = NULL;
{
PyObject *tmp_assign_source_85;
tmp_assign_source_85 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_key, tmp_assign_source_85);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_1 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 120;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_api_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 120;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_86;
tmp_assign_source_86 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_organization, tmp_assign_source_86);
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_2 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_organization;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_87;
tmp_assign_source_87 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_project, tmp_assign_source_87);
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_3 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_project;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 124;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_88;
tmp_assign_source_88 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_webhook_secret, tmp_assign_source_88);
}
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_4 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 126;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_webhook_secret;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 126;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_89;
tmp_assign_source_89 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_base_url, tmp_assign_source_89);
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_digest_9244d3adb14c7ab2c7d066d014bb45e0;
tmp_ass_subscribed_5 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 128;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_base_url;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 128;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_90;
tmp_assign_source_90 = module_var_accessor_openai$DEFAULT_TIMEOUT(tstate);
if (unlikely(tmp_assign_source_90 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_TIMEOUT);
}

if (tmp_assign_source_90 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_timeout, tmp_assign_source_90);
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_04ceafc304100bbeb4fe56d0b8f9a6a5;
tmp_ass_subscribed_6 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_timeout;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_91;
tmp_assign_source_91 = module_var_accessor_openai$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_assign_source_91 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_assign_source_91 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_max_retries, tmp_assign_source_91);
}
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = const_str_plain_int;
tmp_ass_subscribed_7 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain_max_retries;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_92;
tmp_assign_source_92 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_headers, tmp_assign_source_92);
}
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_digest_5baa136d01f15538039b6cfcb5254f2e;
tmp_ass_subscribed_8 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 134;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain_default_headers;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_93;
tmp_assign_source_93 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_default_query, tmp_assign_source_93);
}
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_digest_fababbf50cbb10ce74188f7a1416018f;
tmp_ass_subscribed_9 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain_default_query;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_94;
tmp_assign_source_94 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_http_client, tmp_assign_source_94);
}
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_digest_9751605ea7016d178bb7ee6a4daa3c96;
tmp_ass_subscribed_10 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain_http_client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_95;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
tmp_expression_value_6 = module_var_accessor_openai$_te(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__te);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 140;

    goto frame_exception_exit_1;
}
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_Literal);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = mod_consts.const_tuple_str_plain_openai_str_plain_azure_tuple;
tmp_assign_source_95 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_assign_source_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ApiType, tmp_assign_source_95);
}
{
PyObject *tmp_assign_source_96;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
tmp_expression_value_7 = IMPORT_HARD_TYPING();
assert(!(tmp_expression_value_7 == NULL));
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_cast);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_openai$_ApiType(tstate);
assert(!(tmp_args_element_value_2 == NULL));
tmp_expression_value_9 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_9 == NULL));
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_environ);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 142;

    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 142;

    goto frame_exception_exit_1;
}
frame_frame_openai->m_frame.f_lineno = 142;
tmp_args_element_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_plain_OPENAI_API_TYPE_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 142;

    goto frame_exception_exit_1;
}
frame_frame_openai->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_96 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_type, tmp_assign_source_96);
}
{
PyObject *tmp_ass_subvalue_11;
PyObject *tmp_ass_subscribed_11;
PyObject *tmp_ass_subscript_11;
tmp_ass_subvalue_11 = mod_consts.const_str_digest_69d1e40a0d620268d22d9eb6b7a1b308;
tmp_ass_subscribed_11 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 142;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_11 = mod_consts.const_str_plain_api_type;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_97;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
tmp_expression_value_11 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_11 == NULL));
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_environ);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto frame_exception_exit_1;
}
frame_frame_openai->m_frame.f_lineno = 144;
tmp_assign_source_97 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_assign_source_97 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_api_version, tmp_assign_source_97);
}
{
PyObject *tmp_ass_subvalue_12;
PyObject *tmp_ass_subscribed_12;
PyObject *tmp_ass_subscript_12;
tmp_ass_subvalue_12 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_12 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_12 = mod_consts.const_str_plain_api_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_98;
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
tmp_expression_value_13 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_13 == NULL));
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_environ);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto frame_exception_exit_1;
}
frame_frame_openai->m_frame.f_lineno = 146;
tmp_assign_source_98 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_8, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_assign_source_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_endpoint, tmp_assign_source_98);
}
{
PyObject *tmp_ass_subvalue_13;
PyObject *tmp_ass_subscribed_13;
PyObject *tmp_ass_subscript_13;
tmp_ass_subvalue_13 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_13 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_13 = mod_consts.const_str_plain_azure_endpoint;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_99;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
tmp_expression_value_15 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_15 == NULL));
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_environ);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
frame_frame_openai->m_frame.f_lineno = 148;
tmp_assign_source_99 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_9, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);

CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_99 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token, tmp_assign_source_99);
}
{
PyObject *tmp_ass_subvalue_14;
PyObject *tmp_ass_subscribed_14;
PyObject *tmp_ass_subscript_14;
tmp_ass_subvalue_14 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_14 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_14 = mod_consts.const_str_plain_azure_ad_token;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_100;
tmp_assign_source_100 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_azure_ad_token_provider, tmp_assign_source_100);
}
{
PyObject *tmp_ass_subvalue_15;
PyObject *tmp_ass_subscribed_15;
PyObject *tmp_ass_subscript_15;
tmp_ass_subvalue_15 = mod_consts.const_str_digest_50ba79f9e132f763e964968ce8fe6f59;
tmp_ass_subscribed_15 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_15 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_101;
PyObject *tmp_tuple_element_2;
tmp_tuple_element_2 = module_var_accessor_openai$OpenAI(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OpenAI);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 153;

    goto try_except_handler_15;
}
tmp_assign_source_101 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_101, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_101;
}
{
PyObject *tmp_assign_source_102;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_102 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_102;
}
{
PyObject *tmp_assign_source_103;
tmp_assign_source_103 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_103;
}
{
PyObject *tmp_assign_source_104;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_3, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_104 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_104 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_104;
}
{
bool tmp_condition_result_4;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
tmp_condition_result_4 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_105;
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
tmp_tuple_element_3 = mod_consts.const_str_plain__ModuleClient;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai->m_frame.f_lineno = 153;
tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_105 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_105;
}
{
bool tmp_condition_result_5;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
assert(!(tmp_res == -1));
tmp_condition_result_5 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_23;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_23 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_23, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_15;
}
frame_frame_openai->m_frame.f_lineno = 153;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 153;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_15;
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_106;
tmp_assign_source_106 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_106;
}
branch_end_3:;
{
PyObject *tmp_assign_source_107;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$$$class__1__ModuleClient_153 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_openai;
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_str_plain__ModuleClient;
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_17;
}
tmp_dictset_value = mod_consts.const_int_pos_153;
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_17;
}
frame_frame_openai$$$class__1__ModuleClient_2 = MAKE_CLASS_FRAME(tstate, code_objects_01779916796c8a519bbd25c195dd052c, module_openai, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$class__1__ModuleClient_2);
assert(Py_REFCNT(frame_frame_openai$$$class__1__ModuleClient_2) == 2);

// Framed code:
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_1;
tmp_called_value_11 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 157;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_12 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 158;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_5 = MAKE_FUNCTION_openai$$$function__1_api_key(tstate, tmp_annotations_1);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 158;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 158;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 157;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 157;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_api_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_annotations_2;
tmp_called_instance_1 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_api_key);

if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_key);

exception_lineno = 162;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_711b2c1c0e65c48719bb2550c8b83254);

tmp_args_element_value_6 = MAKE_FUNCTION_openai$$$function__2_api_key(tstate, tmp_annotations_2);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 162;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_setter, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 162;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_api_key, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_8;
PyObject *tmp_annotations_3;
tmp_called_value_13 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 168;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_14 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_13);

exception_lineno = 169;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_8 = MAKE_FUNCTION_openai$$$function__3_organization(tstate, tmp_annotations_3);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 169;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_13);

exception_lineno = 169;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 168;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 168;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_organization, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_4;
tmp_called_instance_2 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_organization);

if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_organization);

exception_lineno = 173;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_711b2c1c0e65c48719bb2550c8b83254);

tmp_args_element_value_9 = MAKE_FUNCTION_openai$$$function__4_organization(tstate, tmp_annotations_4);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 173;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_setter, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_organization, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_5;
tmp_called_value_15 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_16 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_16 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_15);

exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_11 = MAKE_FUNCTION_openai$$$function__5_project(tstate, tmp_annotations_5);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 180;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_15);

exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 179;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 179;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 181;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_6;
tmp_called_instance_3 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_project);

if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_project);

exception_lineno = 184;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_711b2c1c0e65c48719bb2550c8b83254);

tmp_args_element_value_12 = MAKE_FUNCTION_openai$$$function__6_project(tstate, tmp_annotations_6);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 184;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts.const_str_plain_setter, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_project, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 185;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_13;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_7;
tmp_called_value_17 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_18 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_17);

exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_args_element_value_14 = MAKE_FUNCTION_openai$$$function__7_webhook_secret(tstate, tmp_annotations_7);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 191;
tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_17);

exception_lineno = 191;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 190;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_webhook_secret, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_8;
tmp_called_instance_4 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_webhook_secret);

if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_webhook_secret);

exception_lineno = 195;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_711b2c1c0e65c48719bb2550c8b83254);

tmp_args_element_value_15 = MAKE_FUNCTION_openai$$$function__8_webhook_secret(tstate, tmp_annotations_8);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 195;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts.const_str_plain_setter, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_instance_4);
Py_DECREF(tmp_called_instance_4);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_webhook_secret, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_9;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_called_value_19 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 201;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_20 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_19);

exception_lineno = 202;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_c9f0ed4735897e2438cd11cb5fb5f9be);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_args_element_value_17 = MAKE_FUNCTION_openai$$$function__9_base_url(tstate, tmp_annotations_9, tmp_closure_1);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 202;
tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_19);

exception_lineno = 202;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 201;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 201;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_base_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_5;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_10;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_called_instance_5 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_base_url);

if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_base_url);

exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_37ad0d3f17cd1a588f8189b61264ea7d);
tmp_closure_2[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_args_element_value_18 = MAKE_FUNCTION_openai$$$function__10_base_url(tstate, tmp_annotations_10, tmp_closure_2);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 209;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts.const_str_plain_setter, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_instance_5);
Py_DECREF(tmp_called_instance_5);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 209;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_base_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 210;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_20;
PyObject *tmp_annotations_11;
tmp_called_value_21 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_22 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_21);

exception_lineno = 214;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_0053fbd20ed52d2518365ef8c320bf22);

tmp_args_element_value_20 = MAKE_FUNCTION_openai$$$function__11_timeout(tstate, tmp_annotations_11);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 214;
tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_21);

exception_lineno = 214;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 213;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_timeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_6;
PyObject *tmp_args_element_value_21;
PyObject *tmp_annotations_12;
tmp_called_instance_6 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_timeout);

if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_timeout);

exception_lineno = 218;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_f541b9d1541888c1a13ac82f094dadae);

tmp_args_element_value_21 = MAKE_FUNCTION_openai$$$function__12_timeout(tstate, tmp_annotations_12);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 218;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts.const_str_plain_setter, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_instance_6);
Py_DECREF(tmp_called_instance_6);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_timeout, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 219;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_22;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_23;
PyObject *tmp_annotations_13;
tmp_called_value_23 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_23 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_24 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_24 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_23);

exception_lineno = 225;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_85b825f4db9c19f334e726fd877a8261);

tmp_args_element_value_23 = MAKE_FUNCTION_openai$$$function__13_max_retries(tstate, tmp_annotations_13);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 225;
tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 225;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 224;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_max_retries, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_7;
PyObject *tmp_args_element_value_24;
PyObject *tmp_annotations_14;
tmp_called_instance_7 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_max_retries);

if (unlikely(tmp_called_instance_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_max_retries);

exception_lineno = 229;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_0a899e084b4d4c69f04f56fc6fc3c923);

tmp_args_element_value_24 = MAKE_FUNCTION_openai$$$function__14_max_retries(tstate, tmp_annotations_14);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 229;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts.const_str_plain_setter, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_instance_7);
Py_DECREF(tmp_called_instance_7);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_max_retries, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_25;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_26;
PyObject *tmp_annotations_15;
tmp_called_value_25 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_25 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_26 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_26 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_25);

exception_lineno = 236;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_a3fdc7e347e070b6759d9cdad3e128ed);

tmp_args_element_value_26 = MAKE_FUNCTION_openai$$$function__15__custom_headers(tstate, tmp_annotations_15);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 236;
tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_args_element_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 236;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 235;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__custom_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_8;
PyObject *tmp_args_element_value_27;
PyObject *tmp_annotations_16;
tmp_called_instance_8 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__custom_headers);

if (unlikely(tmp_called_instance_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__custom_headers);

exception_lineno = 240;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_f58f5b69f8bbd7ac7682ec1ddbc3f3bb);

tmp_args_element_value_27 = MAKE_FUNCTION_openai$$$function__16__custom_headers(tstate, tmp_annotations_16);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 240;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts.const_str_plain_setter, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_instance_8);
Py_DECREF(tmp_called_instance_8);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 240;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__custom_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_annotations_17;
tmp_called_value_27 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_27 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 246;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_28 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_28 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 247;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_501fd4312d9be2928d87226d1f41b406);

tmp_args_element_value_29 = MAKE_FUNCTION_openai$$$function__17__custom_query(tstate, tmp_annotations_17);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 247;
tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_29);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 247;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 246;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 246;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__custom_query, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_9;
PyObject *tmp_args_element_value_30;
PyObject *tmp_annotations_18;
tmp_called_instance_9 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__custom_query);

if (unlikely(tmp_called_instance_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__custom_query);

exception_lineno = 251;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_d1bcd62e474f0c9dfd990c68663b32c7);

tmp_args_element_value_30 = MAKE_FUNCTION_openai$$$function__18__custom_query(tstate, tmp_annotations_18);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 251;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts.const_str_plain_setter, tmp_args_element_value_30);
CHECK_OBJECT(tmp_called_instance_9);
Py_DECREF(tmp_called_instance_9);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__custom_query, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_31;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_32;
PyObject *tmp_annotations_19;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_called_value_29 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_property);

if (tmp_called_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_29 = module_var_accessor_openai$property(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_property);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_30 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain_override);

if (tmp_called_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_30 = module_var_accessor_openai$override(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_29);

exception_lineno = 258;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_cfb573c842ecf456ddcf3c5ad4205464);
tmp_closure_3[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_args_element_value_32 = MAKE_FUNCTION_openai$$$function__19__client(tstate, tmp_annotations_19, tmp_closure_3);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 258;
tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_32);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_29);

exception_lineno = 258;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 257;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_31);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__client, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 259;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_instance_10;
PyObject *tmp_args_element_value_33;
PyObject *tmp_annotations_20;
tmp_called_instance_10 = PyObject_GetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__client);

if (unlikely(tmp_called_instance_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__client);

exception_lineno = 262;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_called_instance_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_77c48e4b375080dfd65dd5baee8ec6e4);

tmp_args_element_value_33 = MAKE_FUNCTION_openai$$$function__20__client(tstate, tmp_annotations_20);

frame_frame_openai$$$class__1__ModuleClient_2->m_frame.f_lineno = 262;
tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_10, mod_consts.const_str_plain_setter, tmp_args_element_value_33);
CHECK_OBJECT(tmp_called_instance_10);
Py_DECREF(tmp_called_instance_10);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain__client, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$class__1__ModuleClient_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$class__1__ModuleClient_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$class__1__ModuleClient_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$class__1__ModuleClient_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$$$class__1__ModuleClient_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_17;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_17;
}
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_1__bases;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_1__bases_orig;
tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_17;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_1__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$$$class__1__ModuleClient_153, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_17;
}
branch_no_5:;
{
PyObject *tmp_assign_source_108;
PyObject *tmp_called_value_31;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_31 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain__ModuleClient;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_openai$$$class__1__ModuleClient_153;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai->m_frame.f_lineno = 153;
tmp_assign_source_108 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_108 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 153;

    goto try_except_handler_17;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_108);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_107 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_107);
goto try_return_handler_17;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
Py_DECREF(locals_openai$$$class__1__ModuleClient_153);
locals_openai$$$class__1__ModuleClient_153 = NULL;
goto try_return_handler_16;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$$$class__1__ModuleClient_153);
locals_openai$$$class__1__ModuleClient_153 = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto try_except_handler_16;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 153;
goto try_except_handler_15;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__ModuleClient, tmp_assign_source_107);
}
goto try_end_15;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
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
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto frame_exception_exit_1;
// End of try:
try_end_15:;
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
PyObject *tmp_assign_source_109;
PyObject *tmp_tuple_element_6;
tmp_tuple_element_6 = module_var_accessor_openai$_ModuleClient(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__ModuleClient);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto try_except_handler_18;
}
tmp_assign_source_109 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_assign_source_109, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_openai$AzureOpenAI(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AzureOpenAI);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_assign_source_109, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_assign_source_109);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_109;
}
{
PyObject *tmp_assign_source_110;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_110 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_110 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_110;
}
{
PyObject *tmp_assign_source_111;
tmp_assign_source_111 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_111;
}
{
PyObject *tmp_assign_source_112;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_7;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_4;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_22 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_4 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_22, tmp_subscript_value_4, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_112 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_112 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_112;
}
{
bool tmp_condition_result_8;
PyObject *tmp_expression_value_23;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_23 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_23, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
tmp_condition_result_8 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_113;
PyObject *tmp_called_value_32;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_7;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_24 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
tmp_tuple_element_7 = mod_consts.const_str_plain__AzureModuleClient;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_7 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai->m_frame.f_lineno = 269;
tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_32);
Py_DECREF(tmp_called_value_32);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_113 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_113;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_25;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_25 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_25, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_9 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
PyObject *tmp_mod_expr_left_2;
PyObject *tmp_mod_expr_right_2;
PyObject *tmp_tuple_element_8;
PyObject *tmp_expression_value_26;
PyObject *tmp_name_value_24;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_24 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_8 = BUILTIN_GETATTR(tstate, tmp_expression_value_26, tmp_name_value_24, tmp_default_value_2);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_27;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_27 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_27 == NULL));
tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_tuple_element_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
}
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_18;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_18;
}
frame_frame_openai->m_frame.f_lineno = 269;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 269;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_18;
}
branch_no_7:;
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_114;
tmp_assign_source_114 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_114;
}
branch_end_6:;
{
PyObject *tmp_assign_source_115;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$$$class__2__AzureModuleClient_269 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_openai;
tmp_res = PyObject_SetItem(locals_openai$$$class__2__AzureModuleClient_269, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_str_plain__AzureModuleClient;
tmp_res = PyObject_SetItem(locals_openai$$$class__2__AzureModuleClient_269, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_20;
}
tmp_dictset_value = mod_consts.const_int_pos_269;
tmp_res = PyObject_SetItem(locals_openai$$$class__2__AzureModuleClient_269, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_20;
}
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$$$class__2__AzureModuleClient_269, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_20;
}
{
nuitka_bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_20;
}
if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$$$class__2__AzureModuleClient_269, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_20;
}
branch_no_8:;
{
PyObject *tmp_assign_source_116;
PyObject *tmp_called_value_33;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_33 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_9 = mod_consts.const_str_plain__AzureModuleClient;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_openai$$$class__2__AzureModuleClient_269;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai->m_frame.f_lineno = 269;
tmp_assign_source_116 = CALL_FUNCTION(tstate, tmp_called_value_33, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto try_except_handler_20;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_116;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_115 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_115);
goto try_return_handler_20;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
Py_DECREF(locals_openai$$$class__2__AzureModuleClient_269);
locals_openai$$$class__2__AzureModuleClient_269 = NULL;
goto try_return_handler_19;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$$$class__2__AzureModuleClient_269);
locals_openai$$$class__2__AzureModuleClient_269 = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto try_except_handler_19;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 269;
goto try_except_handler_18;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AzureModuleClient, tmp_assign_source_115);
}
goto try_end_16;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
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
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto frame_exception_exit_1;
// End of try:
try_end_16:;
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
{
PyObject *tmp_outline_return_value_3;
// Tried code:
{
PyObject *tmp_assign_source_117;
PyObject *tmp_tuple_element_10;
tmp_tuple_element_10 = module_var_accessor_openai$OpenAIError(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OpenAIError);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;

    goto try_except_handler_21;
}
tmp_assign_source_117 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_117, 0, tmp_tuple_element_10);
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_117;
}
{
PyObject *tmp_assign_source_118;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_118 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_118 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_118;
}
{
PyObject *tmp_assign_source_119;
tmp_assign_source_119 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_119;
}
{
PyObject *tmp_assign_source_120;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_11;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_5;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_28 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_5 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_5, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_120 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_120 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_120;
}
{
bool tmp_condition_result_12;
PyObject *tmp_expression_value_29;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
tmp_condition_result_12 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_assign_source_121;
PyObject *tmp_called_value_34;
PyObject *tmp_expression_value_30;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_30 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
tmp_tuple_element_11 = mod_consts.const_str_plain__AmbiguousModuleClientUsageError;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai->m_frame.f_lineno = 273;
tmp_assign_source_121 = CALL_FUNCTION(tstate, tmp_called_value_34, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_34);
Py_DECREF(tmp_called_value_34);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_121 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_121;
}
{
bool tmp_condition_result_13;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_31;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_31 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_13 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_13 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_32;
PyObject *tmp_name_value_25;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_32 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_25 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_12 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_25, tmp_default_value_3);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_33 == NULL));
tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_33);
Py_DECREF(tmp_expression_value_33);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_21;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_21;
}
frame_frame_openai->m_frame.f_lineno = 273;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 273;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_21;
}
branch_no_10:;
goto branch_end_9;
branch_no_9:;
{
PyObject *tmp_assign_source_122;
tmp_assign_source_122 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_122;
}
branch_end_9:;
{
PyObject *tmp_assign_source_123;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$$$class__3__AmbiguousModuleClientUsageError_273 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_plain_openai;
tmp_res = PyObject_SetItem(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_str_plain__AmbiguousModuleClientUsageError;
tmp_res = PyObject_SetItem(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_23;
}
tmp_dictset_value = mod_consts.const_int_pos_273;
tmp_res = PyObject_SetItem(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_23;
}
frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3 = MAKE_CLASS_FRAME(tstate, code_objects_ada936408053cc1521e559897b61adb1, module_openai, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3);
assert(Py_REFCNT(frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3) == 2);

// Framed code:
{
PyObject *tmp_annotations_21;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_4[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_openai$$$function__21___init__(tstate, tmp_annotations_21, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$$$class__3__AmbiguousModuleClientUsageError_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_23;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_23;
}
{
nuitka_bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_23;
}
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_23;
}
branch_no_11:;
{
PyObject *tmp_assign_source_124;
PyObject *tmp_called_value_35;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_13;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_35 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_13 = mod_consts.const_str_plain__AmbiguousModuleClientUsageError;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_13 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
tmp_tuple_element_13 = locals_openai$$$class__3__AmbiguousModuleClientUsageError_273;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai->m_frame.f_lineno = 273;
tmp_assign_source_124 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;

    goto try_except_handler_23;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_124);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_123 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_123);
goto try_return_handler_23;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
Py_DECREF(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273);
locals_openai$$$class__3__AmbiguousModuleClientUsageError_273 = NULL;
goto try_return_handler_22;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$$$class__3__AmbiguousModuleClientUsageError_273);
locals_openai$$$class__3__AmbiguousModuleClientUsageError_273 = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto try_except_handler_22;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_22:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 273;
goto try_except_handler_21;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__AmbiguousModuleClientUsageError, tmp_assign_source_123);
}
goto try_end_17;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
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
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto frame_exception_exit_1;
// End of try:
try_end_17:;
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
tmp_outline_return_value_3 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_3);
goto outline_result_5;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_5:;
CHECK_OBJECT(tmp_outline_return_value_3);
Py_DECREF(tmp_outline_return_value_3);
}
{
PyObject *tmp_assign_source_125;
PyObject *tmp_annotations_22;
tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_125 = MAKE_FUNCTION_openai$$$function__22__has_openai_credentials(tstate, tmp_annotations_22);

UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_openai_credentials, tmp_assign_source_125);
}
{
PyObject *tmp_assign_source_126;
PyObject *tmp_annotations_23;
tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_126 = MAKE_FUNCTION_openai$$$function__23__has_azure_credentials(tstate, tmp_annotations_23);

UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_credentials, tmp_assign_source_126);
}
{
PyObject *tmp_assign_source_127;
PyObject *tmp_annotations_24;
tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_6e59d149b5de9bf1c65a16b0cdfcaef6);

tmp_assign_source_127 = MAKE_FUNCTION_openai$$$function__24__has_azure_ad_credentials(tstate, tmp_annotations_24);

UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__has_azure_ad_credentials, tmp_assign_source_127);
}
{
PyObject *tmp_assign_source_128;
tmp_assign_source_128 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__client, tmp_assign_source_128);
}
{
PyObject *tmp_ass_subvalue_16;
PyObject *tmp_ass_subscribed_16;
PyObject *tmp_ass_subscript_16;
tmp_ass_subvalue_16 = mod_consts.const_str_digest_670974be954bb84ddd7870689b3248dd;
tmp_ass_subscribed_16 = module_var_accessor_openai$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_16 = mod_consts.const_str_plain__client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;

    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_129;
PyObject *tmp_annotations_25;
tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_5f031fe2f466a896cdf63739eeb39fae);

tmp_assign_source_129 = MAKE_FUNCTION_openai$$$function__25__load_client(tstate, tmp_annotations_25);

UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__load_client, tmp_assign_source_129);
}
{
PyObject *tmp_assign_source_130;
PyObject *tmp_annotations_26;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);

tmp_assign_source_130 = MAKE_FUNCTION_openai$$$function__26__reset_client(tstate, tmp_annotations_26);

UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain__reset_client, tmp_assign_source_130);
}
{
PyObject *tmp_assign_source_131;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_26 = mod_consts.const_str_plain__module_client;
tmp_globals_arg_value_23 = (PyObject *)moduledict_openai;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_b2743be265f3fc317cd1684739542a5a_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_openai->m_frame.f_lineno = 372;
tmp_assign_source_131 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_assign_source_131 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_12__module == NULL);
tmp_import_from_12__module = tmp_assign_source_131;
}
// Tried code:
{
PyObject *tmp_assign_source_132;
PyObject *tmp_import_name_from_59;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_59 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_59)) {
    tmp_assign_source_132 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_59,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_beta,
        const_int_0
    );
} else {
    tmp_assign_source_132 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts.const_str_plain_beta);
}

if (tmp_assign_source_132 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_beta, tmp_assign_source_132);
}
{
PyObject *tmp_assign_source_133;
PyObject *tmp_import_name_from_60;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_60 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_60)) {
    tmp_assign_source_133 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_60,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_chat,
        const_int_0
    );
} else {
    tmp_assign_source_133 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts.const_str_plain_chat);
}

if (tmp_assign_source_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_chat, tmp_assign_source_133);
}
{
PyObject *tmp_assign_source_134;
PyObject *tmp_import_name_from_61;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_61 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_61)) {
    tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_61,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_audio,
        const_int_0
    );
} else {
    tmp_assign_source_134 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts.const_str_plain_audio);
}

if (tmp_assign_source_134 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_audio, tmp_assign_source_134);
}
{
PyObject *tmp_assign_source_135;
PyObject *tmp_import_name_from_62;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_62 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_62)) {
    tmp_assign_source_135 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_62,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_evals,
        const_int_0
    );
} else {
    tmp_assign_source_135 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts.const_str_plain_evals);
}

if (tmp_assign_source_135 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_evals, tmp_assign_source_135);
}
{
PyObject *tmp_assign_source_136;
PyObject *tmp_import_name_from_63;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_63 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_63)) {
    tmp_assign_source_136 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_63,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_files,
        const_int_0
    );
} else {
    tmp_assign_source_136 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts.const_str_plain_files);
}

if (tmp_assign_source_136 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_files, tmp_assign_source_136);
}
{
PyObject *tmp_assign_source_137;
PyObject *tmp_import_name_from_64;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_64 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_64)) {
    tmp_assign_source_137 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_64,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_images,
        const_int_0
    );
} else {
    tmp_assign_source_137 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts.const_str_plain_images);
}

if (tmp_assign_source_137 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_images, tmp_assign_source_137);
}
{
PyObject *tmp_assign_source_138;
PyObject *tmp_import_name_from_65;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_65 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_65)) {
    tmp_assign_source_138 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_65,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_models,
        const_int_0
    );
} else {
    tmp_assign_source_138 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts.const_str_plain_models);
}

if (tmp_assign_source_138 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_models, tmp_assign_source_138);
}
{
PyObject *tmp_assign_source_139;
PyObject *tmp_import_name_from_66;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_66 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_66)) {
    tmp_assign_source_139 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_66,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_batches,
        const_int_0
    );
} else {
    tmp_assign_source_139 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts.const_str_plain_batches);
}

if (tmp_assign_source_139 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_batches, tmp_assign_source_139);
}
{
PyObject *tmp_assign_source_140;
PyObject *tmp_import_name_from_67;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_67 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_67)) {
    tmp_assign_source_140 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_67,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_uploads,
        const_int_0
    );
} else {
    tmp_assign_source_140 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts.const_str_plain_uploads);
}

if (tmp_assign_source_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_uploads, tmp_assign_source_140);
}
{
PyObject *tmp_assign_source_141;
PyObject *tmp_import_name_from_68;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_68 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_68)) {
    tmp_assign_source_141 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_68,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_webhooks,
        const_int_0
    );
} else {
    tmp_assign_source_141 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts.const_str_plain_webhooks);
}

if (tmp_assign_source_141 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_webhooks, tmp_assign_source_141);
}
{
PyObject *tmp_assign_source_142;
PyObject *tmp_import_name_from_69;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_69 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_69)) {
    tmp_assign_source_142 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_69,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_responses,
        const_int_0
    );
} else {
    tmp_assign_source_142 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts.const_str_plain_responses);
}

if (tmp_assign_source_142 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_responses, tmp_assign_source_142);
}
{
PyObject *tmp_assign_source_143;
PyObject *tmp_import_name_from_70;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_70 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_70)) {
    tmp_assign_source_143 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_70,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_containers,
        const_int_0
    );
} else {
    tmp_assign_source_143 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts.const_str_plain_containers);
}

if (tmp_assign_source_143 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_containers, tmp_assign_source_143);
}
{
PyObject *tmp_assign_source_144;
PyObject *tmp_import_name_from_71;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_71 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_71)) {
    tmp_assign_source_144 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_71,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_embeddings,
        const_int_0
    );
} else {
    tmp_assign_source_144 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts.const_str_plain_embeddings);
}

if (tmp_assign_source_144 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_embeddings, tmp_assign_source_144);
}
{
PyObject *tmp_assign_source_145;
PyObject *tmp_import_name_from_72;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_72 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_72)) {
    tmp_assign_source_145 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_72,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_completions,
        const_int_0
    );
} else {
    tmp_assign_source_145 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts.const_str_plain_completions);
}

if (tmp_assign_source_145 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_completions, tmp_assign_source_145);
}
{
PyObject *tmp_assign_source_146;
PyObject *tmp_import_name_from_73;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_73 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_73)) {
    tmp_assign_source_146 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_73,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_fine_tuning,
        const_int_0
    );
} else {
    tmp_assign_source_146 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts.const_str_plain_fine_tuning);
}

if (tmp_assign_source_146 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_fine_tuning, tmp_assign_source_146);
}
{
PyObject *tmp_assign_source_147;
PyObject *tmp_import_name_from_74;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_74 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_74)) {
    tmp_assign_source_147 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_74,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_moderations,
        const_int_0
    );
} else {
    tmp_assign_source_147 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts.const_str_plain_moderations);
}

if (tmp_assign_source_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_moderations, tmp_assign_source_147);
}
{
PyObject *tmp_assign_source_148;
PyObject *tmp_import_name_from_75;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_75 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_75)) {
    tmp_assign_source_148 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_75,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_conversations,
        const_int_0
    );
} else {
    tmp_assign_source_148 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts.const_str_plain_conversations);
}

if (tmp_assign_source_148 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_conversations, tmp_assign_source_148);
}
{
PyObject *tmp_assign_source_149;
PyObject *tmp_import_name_from_76;
CHECK_OBJECT(tmp_import_from_12__module);
tmp_import_name_from_76 = tmp_import_from_12__module;
if (PyModule_Check(tmp_import_name_from_76)) {
    tmp_assign_source_149 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_76,
        (PyObject *)moduledict_openai,
        mod_consts.const_str_plain_vector_stores,
        const_int_0
    );
} else {
    tmp_assign_source_149 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts.const_str_plain_vector_stores);
}

if (tmp_assign_source_149 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;

    goto try_except_handler_24;
}
UPDATE_STRING_DICT1(moduledict_openai, (Nuitka_StringObject *)mod_consts.const_str_plain_vector_stores, tmp_assign_source_149);
}
goto try_end_18;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_import_from_12__module);
CHECK_OBJECT(tmp_import_from_12__module);
Py_DECREF(tmp_import_from_12__module);
tmp_import_from_12__module = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_18:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;
CHECK_OBJECT(tmp_import_from_12__module);
CHECK_OBJECT(tmp_import_from_12__module);
Py_DECREF(tmp_import_from_12__module);
tmp_import_from_12__module = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai);
    return module_openai;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

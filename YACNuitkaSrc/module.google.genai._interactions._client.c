/* Generated code for Python module 'google$genai$_interactions$_client'
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



/* The "module_google$genai$_interactions$_client" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$_interactions$_client;
PyDictObject *moduledict_google$genai$_interactions$_client;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_environ;
PyObject *const_tuple_str_plain_GEMINI_API_KEY_tuple;
PyObject *const_str_plain_api_key;
PyObject *const_str_plain_v1beta;
PyObject *const_str_plain_api_version;
PyObject *const_tuple_str_plain_GEMINI_NEXT_GEN_API_BASE_URL_tuple;
PyObject *const_str_digest_d8738c7113687f5d411b68914287e36c;
PyObject *const_str_plain_client_adapter;
PyObject *const_str_plain___version__;
PyObject *const_tuple_5fbbf00de98f97606d73b2624a6f4a81_tuple;
PyObject *const_str_plain_Stream;
PyObject *const_str_plain__default_stream_cls;
PyObject *const_str_digest_9222b97034364ad27026d4077b950e21;
PyObject *const_str_digest_b406842dd81f314403afe91a19758d0f;
PyObject *const_tuple_str_plain_InteractionsResource_tuple;
PyObject *const_str_plain_InteractionsResource;
PyObject *const_str_digest_c970f77b65c708c729b4d8b402fc21b1;
PyObject *const_tuple_str_plain_WebhooksResource_tuple;
PyObject *const_str_plain_WebhooksResource;
PyObject *const_str_digest_bc825560cf1e22681108fac6b4db32c9;
PyObject *const_tuple_str_plain_AgentsResource_tuple;
PyObject *const_str_plain_AgentsResource;
PyObject *const_str_plain_GeminiNextGenAPIClientWithRawResponse;
PyObject *const_str_digest_6682e68720678444be8158c50a0c1265;
PyObject *const_str_plain_Querystring;
PyObject *const_tuple_str_plain_comma_tuple;
PyObject *const_tuple_str_plain_array_format_tuple;
PyObject *const_str_digest_c6253282a563560f233264b6d3f1f87d;
PyObject *const_str_plain_default_headers;
PyObject *const_dict_1a8e4fd3086558993b3dcc7ff7e41004;
PyObject *const_str_plain__custom_headers;
PyObject *const_tuple_str_plain_Authorization_tuple;
PyObject *const_str_plain_Omit;
PyObject *const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple;
PyObject *const_str_digest_c47907662d4ad90861661a0103fb4d89;
PyObject *const_str_plain_is_vertex_ai;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_get_auth_headers;
PyObject *const_str_digest_3f26214ec9ff8a8b5602bd1132c342f6;
PyObject *const_str_digest_c10e02335972e1201099046d6a82ad14;
PyObject *const_str_plain__custom_query;
PyObject *const_str_plain__client;
PyObject *const_str_plain_base_url;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain_max_retries;
PyObject *const_str_plain_is_given;
PyObject *const_str_plain_default_query;
PyObject *const_str_digest_e91ba79863152f4b86dffa9f9d36f308;
PyObject *const_str_plain_status_code;
PyObject *const_int_pos_400;
PyObject *const_str_plain__exceptions;
PyObject *const_str_plain_BadRequestError;
PyObject *const_tuple_str_plain_response_str_plain_body_tuple;
PyObject *const_int_pos_401;
PyObject *const_str_plain_AuthenticationError;
PyObject *const_int_pos_403;
PyObject *const_str_plain_PermissionDeniedError;
PyObject *const_int_pos_404;
PyObject *const_str_plain_NotFoundError;
PyObject *const_int_pos_409;
PyObject *const_str_plain_ConflictError;
PyObject *const_int_pos_422;
PyObject *const_str_plain_UnprocessableEntityError;
PyObject *const_int_pos_429;
PyObject *const_str_plain_RateLimitError;
PyObject *const_int_pos_500;
PyObject *const_str_plain_InternalServerError;
PyObject *const_str_plain_APIStatusError;
PyObject *const_str_plain_AsyncStream;
PyObject *const_str_digest_07df00e0ff0e199b45274616654156ff;
PyObject *const_tuple_str_plain_AsyncInteractionsResource_tuple;
PyObject *const_str_plain_AsyncInteractionsResource;
PyObject *const_tuple_str_plain_AsyncWebhooksResource_tuple;
PyObject *const_str_plain_AsyncWebhooksResource;
PyObject *const_tuple_str_plain_AsyncAgentsResource_tuple;
PyObject *const_str_plain_AsyncAgentsResource;
PyObject *const_str_digest_c4d261ce885084ba11a1c9397e73971e;
PyObject *const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318;
PyObject *const_str_plain_self;
PyObject *const_str_plain_options;
PyObject *const_str_plain_async_get_auth_headers;
PyObject *const_str_plain__prepare_options;
PyObject *const_str_digest_0808f99cf3f9bb776c2337daad38a02f;
PyObject *const_tuple_str_plain_InteractionsResourceWithRawResponse_tuple;
PyObject *const_str_plain_InteractionsResourceWithRawResponse;
PyObject *const_str_plain_interactions;
PyObject *const_tuple_str_plain_WebhooksResourceWithRawResponse_tuple;
PyObject *const_str_plain_WebhooksResourceWithRawResponse;
PyObject *const_str_plain_webhooks;
PyObject *const_tuple_str_plain_AgentsResourceWithRawResponse_tuple;
PyObject *const_str_plain_AgentsResourceWithRawResponse;
PyObject *const_str_plain_agents;
PyObject *const_tuple_str_plain_AsyncInteractionsResourceWithRawResponse_tuple;
PyObject *const_str_plain_AsyncInteractionsResourceWithRawResponse;
PyObject *const_tuple_str_plain_AsyncWebhooksResourceWithRawResponse_tuple;
PyObject *const_str_plain_AsyncWebhooksResourceWithRawResponse;
PyObject *const_tuple_str_plain_AsyncAgentsResourceWithRawResponse_tuple;
PyObject *const_str_plain_AsyncAgentsResourceWithRawResponse;
PyObject *const_tuple_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple;
PyObject *const_str_digest_a185c098286693144d4cdf08c77a8fa7;
PyObject *const_tuple_str_plain_WebhooksResourceWithStreamingResponse_tuple;
PyObject *const_str_plain_WebhooksResourceWithStreamingResponse;
PyObject *const_tuple_str_plain_AgentsResourceWithStreamingResponse_tuple;
PyObject *const_str_plain_AgentsResourceWithStreamingResponse;
PyObject *const_tuple_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple;
PyObject *const_str_digest_038fd969ee338cfac91ce6505dee5adf;
PyObject *const_tuple_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple;
PyObject *const_str_digest_dd7d096cc560734e618f21cab7ae3ae6;
PyObject *const_tuple_str_plain_AsyncAgentsResourceWithStreamingResponse_tuple;
PyObject *const_str_plain_AsyncAgentsResourceWithStreamingResponse;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_TYPE_CHECKING;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Self_str_plain_override_tuple;
PyObject *const_str_plain_Self;
PyObject *const_str_plain_override;
PyObject *const_str_plain_httpx;
PyObject *const_tuple_str_plain__exceptions_tuple;
PyObject *const_str_plain__qs;
PyObject *const_tuple_str_plain_Querystring_tuple;
PyObject *const_str_plain__types;
PyObject *const_tuple_f359164e4b61e896a0f2ba5274008dbf_tuple;
PyObject *const_str_plain_Headers;
PyObject *const_str_plain_Timeout;
PyObject *const_str_plain_Transport;
PyObject *const_str_plain_ProxiesTypes;
PyObject *const_str_plain_RequestOptions;
PyObject *const_str_plain_not_given;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_is_given_tuple;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain_cached_property_tuple;
PyObject *const_str_plain_cached_property;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_FinalRequestOptions_tuple;
PyObject *const_str_plain_FinalRequestOptions;
PyObject *const_str_plain__version;
PyObject *const_tuple_str_plain___version___tuple;
PyObject *const_str_plain__streaming;
PyObject *const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple;
PyObject *const_tuple_str_plain_APIStatusError_tuple;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_a63f61dc891f055185c4b89d128c42ca_tuple;
PyObject *const_str_plain_DEFAULT_MAX_RETRIES;
PyObject *const_str_plain_SyncAPIClient;
PyObject *const_str_plain_AsyncAPIClient;
PyObject *const_str_plain__client_adapter;
PyObject *const_tuple_f5468c7ee1b8f9e0c88342bc2c5fbfdf_tuple;
PyObject *const_str_plain_GeminiNextGenAPIClientAdapter;
PyObject *const_str_plain_AsyncGeminiNextGenAPIClientAdapter;
PyObject *const_list_d7d62d58ccb4f91ee26f9f683fc47df4_list;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_GeminiNextGenAPIClient;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_fc6336a24b5dc80ad57be6f540317242;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_69;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_str_plain_str;
PyObject *const_str_digest_316d0890e12008d670715bd617c4d36d;
PyObject *const_str_plain__strict_response_validation;
PyObject *const_dict_47142eda6ba8431709bed018a3cd0988;
PyObject *const_str_digest_04953f4d23245f1242de9d058d6778b9;
PyObject *const_dict_576db31df12a5f7998fd98de28668f55;
PyObject *const_str_digest_f6895efac6b0be2be9651609afd7fdac;
PyObject *const_dict_7d51e1b8d689233471de5b2a02aa23f4;
PyObject *const_str_digest_599ae04f3abf093df13edf84e3322dc7;
PyObject *const_dict_500f8132164d0a4ba6e13b35495b7758;
PyObject *const_str_digest_3df451ae8873b4feae922d8113a03c92;
PyObject *const_dict_5cfe4c6a08722137002b6f5836d49526;
PyObject *const_str_plain_with_raw_response;
PyObject *const_str_digest_5f52598a10a362047baafea4624b6afc;
PyObject *const_dict_37231dc92b7e95c16ba6568cd4226c8e;
PyObject *const_str_plain_with_streaming_response;
PyObject *const_str_digest_5a28cbc5603c6add1e80b5689785670c;
PyObject *const_str_plain_property;
PyObject *const_dict_9dc797f3380d2376924002b3ffe17c71;
PyObject *const_str_plain_qs;
PyObject *const_str_digest_30dda9916d8c4cdcecde2f2c9fa98355;
PyObject *const_dict_67019800ae9d79763d7dc009d4a85798;
PyObject *const_str_plain_auth_headers;
PyObject *const_str_digest_2e556f19497eebddee844b6fd4787dc3;
PyObject *const_dict_c95067d112ebefb8c51f30ffe6eefc5c;
PyObject *const_str_digest_c43f7bd6d01bcab55a068020168d38ab;
PyObject *const_dict_058acad276deaf7a188567f3c4ed501a;
PyObject *const_str_plain__validate_headers;
PyObject *const_str_digest_c5c16d33b2cc8f66466125b4f1849921;
PyObject *const_dict_004a463e0399a5f4a013ac50ad797d3b;
PyObject *const_str_digest_593f042bf2a8599bdeb4f983ee1ec7cc;
PyObject *const_str_plain_set_default_headers;
PyObject *const_str_plain_set_default_query;
PyObject *const_str_plain__extra_kwargs;
PyObject *const_dict_b517b5063bdeb118dca4009789e927b4;
PyObject *const_str_plain_copy;
PyObject *const_str_digest_0bbcc6d656c34858cbf33dea9cd5e2a0;
PyObject *const_str_plain_with_options;
PyObject *const_dict_e8d16ece775461636da8aedac2f07d6b;
PyObject *const_str_plain__get_api_version_path_param;
PyObject *const_str_digest_9c59ee8c4310451237c80fbfb5760993;
PyObject *const_dict_5c206bca9e1057d1018fcf4d7484ad3a;
PyObject *const_str_plain__make_status_error;
PyObject *const_str_digest_72faadc9c28712f20bd1db5e8abb581a;
PyObject *const_tuple_68be2137857af83c4ef27d1bb44b1559_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_AsyncGeminiNextGenAPIClient;
PyObject *const_int_pos_303;
PyObject *const_str_digest_7099aed6ec96ba9ffb27eb3dee46b188;
PyObject *const_dict_08331712cbc641c0349336d094d050c8;
PyObject *const_str_digest_c7743eea280b4968fa661623734cfb23;
PyObject *const_dict_da607d7d698e5cb145453d953f121b26;
PyObject *const_str_digest_c5f327bdf5c43f499c766a401f104f40;
PyObject *const_dict_998227b1f2a9cd73641ec9f833187048;
PyObject *const_str_digest_241cc4bccdfab736cdf050d27bb87aae;
PyObject *const_dict_6d0f14b81697d88a569f192d32bfb0c7;
PyObject *const_str_digest_358a6aa52480b31b61d53d2349896ced;
PyObject *const_dict_569528ea000890be98bebf5e475f64aa;
PyObject *const_str_digest_66b6ae8d95383342a03f0d85f863e38b;
PyObject *const_dict_cceaa51a2be2c53c4b09a619657435d2;
PyObject *const_str_digest_920fad541468cde4cf93a26e64432f1c;
PyObject *const_str_digest_f54660cfc1b6cfbb3b2a275944afec93;
PyObject *const_str_digest_714959bd931ffdd5c161c5ae46d80737;
PyObject *const_str_digest_fb35f888b362c0ba8eaae793552b639f;
PyObject *const_str_digest_ba6c3bfdb03e81ace30d3ae2798289de;
PyObject *const_dict_ae4e543ad5b4e69659df2129a4d7a4d4;
PyObject *const_str_digest_add0a7ae69ad4bc66492d2473b6a2d44;
PyObject *const_str_digest_56842b225072c42432cbe85d3020d5bf;
PyObject *const_str_digest_ab5ab6891a82fe4e0cf0f73a3e9fe367;
PyObject *const_int_pos_537;
PyObject *const_dict_8e0398144661c96765236d95ef5a2533;
PyObject *const_str_digest_2ffe7454225755226e803fcbac086bd7;
PyObject *const_dict_ed06c93f1ecbb3e3e597e2b00f2ac62e;
PyObject *const_str_digest_a515f31a694b2f9290843ec5eff5bc3a;
PyObject *const_dict_6016c11a88536871ad96592c60eb4b7e;
PyObject *const_str_digest_8b15b7592d60f37dd8a8cb101b0b4b69;
PyObject *const_dict_669d5172f2166b6009939153da8c84de;
PyObject *const_str_digest_354b709699bc64f1a7d7cb0f745b778a;
PyObject *const_tuple_str_plain__client_tuple;
PyObject *const_int_pos_562;
PyObject *const_dict_d35b56aa3276a2d874e2563614455100;
PyObject *const_str_digest_9f1f51e29d6b735c5b84175be6ff4dcc;
PyObject *const_dict_184e6093e0a6c53d8891d29b5533530d;
PyObject *const_str_digest_0b23351a426a2de9cdf336e1df931ab5;
PyObject *const_dict_6cc31389e8f31595cd67e3e7e7f4c302;
PyObject *const_str_digest_7cfb2fbbfd8d4d1c78bfa01be862b011;
PyObject *const_dict_ad32dd521648e9274954dcc4fe88e9bd;
PyObject *const_str_digest_02ad5c0b4eb93c45430874d85ae3f8ea;
PyObject *const_int_pos_587;
PyObject *const_str_digest_ff9c6b4b8d5df8da4d38b16d53d09229;
PyObject *const_dict_540fbe054c7634b05a8565f4617c63e4;
PyObject *const_str_digest_39ce2d80b0e21b8536d4434fa4074ac7;
PyObject *const_dict_717dad6e1c97cdbb9b04121bf42c8c3d;
PyObject *const_str_digest_1e60446723ef1fe32d395ea0df7f7ccd;
PyObject *const_dict_14e1550fab7f8fcdfe3fca0ea6940360;
PyObject *const_str_digest_008f75df0bc5a63aae964ad04f111e17;
PyObject *const_int_pos_612;
PyObject *const_str_digest_56c03b0bef63012b91d0e4b29c187da3;
PyObject *const_dict_03224939feab3e2e7fe8101912802e58;
PyObject *const_str_digest_585491e095bc305238648cc082ad4eb9;
PyObject *const_dict_e9b841b34293a39b61772f5feeeeb033;
PyObject *const_str_digest_3cc39dc1dade66fda816b6c53b20953d;
PyObject *const_dict_deb62b6aed2c90153eab553e737554c5;
PyObject *const_str_digest_4ef5ccde4de19c870d03d51c7ba76668;
PyObject *const_str_plain_Client;
PyObject *const_str_plain_AsyncClient;
PyObject *const_str_digest_e97834ddbb352475c850cf6a8e196946;
PyObject *const_str_digest_d79c6386e12992292030f52f568d7381;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_e7dca2ed6bf6d375dfc2c7b47360b36b_tuple;
PyObject *const_tuple_str_plain_self_str_plain_client_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_ae458caee871fb2ac27089dd668a79af_tuple;
PyObject *const_tuple_67c2c4609a1d7106bd5a71f5317cd9c9_tuple;
PyObject *const_tuple_str_plain_self_str_plain_headers_str_plain_custom_headers_tuple;
PyObject *const_tuple_str_plain_self_str_plain_AsyncAgentsResource_tuple;
PyObject *const_tuple_str_plain_self_str_plain_AsyncAgentsResourceWithRawResponse_tuple;
PyObject *const_tuple_f531c7211feb55ad81bcaffb941d4343_tuple;
PyObject *const_tuple_str_plain_self_str_plain_AgentsResource_tuple;
PyObject *const_tuple_str_plain_self_str_plain_AgentsResourceWithRawResponse_tuple;
PyObject *const_tuple_str_plain_self_str_plain_AgentsResourceWithStreamingResponse_tuple;
PyObject *const_tuple_str_plain_self_str_plain_api_key_tuple;
PyObject *const_tuple_764a80803cf5a032ce66e3c1a0e16c35_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_AsyncInteractionsResource_tuple;
PyObject *const_tuple_3b71ccb3087110d72af515081a03d462_tuple;
PyObject *const_tuple_str_plain_self_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple;
PyObject *const_tuple_str_plain_self_str_plain_InteractionsResource_tuple;
PyObject *const_tuple_str_plain_self_str_plain_InteractionsResourceWithRawResponse_tuple;
PyObject *const_tuple_str_plain_self_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple;
PyObject *const_tuple_str_plain_self_str_plain_AsyncWebhooksResource_tuple;
PyObject *const_tuple_c7c8e8abdd8b71ee48c3bbbd89c156c9_tuple;
PyObject *const_tuple_str_plain_self_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple;
PyObject *const_tuple_str_plain_self_str_plain_WebhooksResource_tuple;
PyObject *const_tuple_str_plain_self_str_plain_WebhooksResourceWithRawResponse_tuple;
PyObject *const_tuple_521bcd9a4ef2ee22e855fc2b3129a360_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[305];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai._interactions._client"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GEMINI_API_KEY_tuple);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_key);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_v1beta);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_version);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GEMINI_NEXT_GEN_API_BASE_URL_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_d8738c7113687f5d411b68914287e36c);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_client_adapter);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain___version__);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_tuple_5fbbf00de98f97606d73b2624a6f4a81_tuple);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_Stream);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__default_stream_cls);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_digest_9222b97034364ad27026d4077b950e21);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InteractionsResource_tuple);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_InteractionsResource);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebhooksResource_tuple);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebhooksResource);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentsResource_tuple);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_AgentsResource);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain_Querystring);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_comma_tuple);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_format_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_digest_c6253282a563560f233264b6d3f1f87d);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_headers);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_dict_1a8e4fd3086558993b3dcc7ff7e41004);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain__custom_headers);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Authorization_tuple);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_Omit);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_c47907662d4ad90861661a0103fb4d89);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_vertex_ai);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_headers);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f26214ec9ff8a8b5602bd1132c342f6);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_c10e02335972e1201099046d6a82ad14);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain__custom_query);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_url);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_query);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_status_code);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_int_pos_400);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_BadRequestError);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_int_pos_401);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationError);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_int_pos_403);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_PermissionDeniedError);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_int_pos_404);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotFoundError);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_int_pos_409);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictError);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_int_pos_422);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_UnprocessableEntityError);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_int_pos_429);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitError);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_int_pos_500);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_InternalServerError);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_07df00e0ff0e199b45274616654156ff);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncInteractionsResource_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncInteractionsResource);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncWebhooksResource_tuple);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncWebhooksResource);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncAgentsResource_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAgentsResource);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_async_get_auth_headers);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_options);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_0808f99cf3f9bb776c2337daad38a02f);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InteractionsResourceWithRawResponse_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_InteractionsResourceWithRawResponse);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_interactions);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebhooksResourceWithRawResponse_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebhooksResourceWithRawResponse);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_webhooks);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentsResourceWithRawResponse_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_AgentsResourceWithRawResponse);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_agents);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncInteractionsResourceWithRawResponse_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncInteractionsResourceWithRawResponse);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncWebhooksResourceWithRawResponse_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncWebhooksResourceWithRawResponse);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithRawResponse_tuple);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAgentsResourceWithRawResponse);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_digest_a185c098286693144d4cdf08c77a8fa7);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebhooksResourceWithStreamingResponse_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_WebhooksResourceWithStreamingResponse);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentsResourceWithStreamingResponse_tuple);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_AgentsResourceWithStreamingResponse);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_038fd969ee338cfac91ce6505dee5adf);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_digest_dd7d096cc560734e618f21cab7ae3ae6);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithStreamingResponse_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAgentsResourceWithStreamingResponse);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Self);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_override);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exceptions_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__qs);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Querystring_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_tuple_f359164e4b61e896a0f2ba5274008dbf_tuple);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_Headers);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_Transport);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_ProxiesTypes);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_RequestOptions);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_not_given);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_given_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_FinalRequestOptions);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain__version);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain__streaming);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIStatusError_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_tuple_a63f61dc891f055185c4b89d128c42ca_tuple);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIClient);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIClient);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain__client_adapter);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_f5468c7ee1b8f9e0c88342bc2c5fbfdf_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeminiNextGenAPIClientAdapter);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClientAdapter);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_list_d7d62d58ccb4f91ee26f9f683fc47df4_list);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_GeminiNextGenAPIClient);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_int_pos_69);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_316d0890e12008d670715bd617c4d36d);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain__strict_response_validation);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_dict_47142eda6ba8431709bed018a3cd0988);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_digest_04953f4d23245f1242de9d058d6778b9);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_dict_576db31df12a5f7998fd98de28668f55);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_f6895efac6b0be2be9651609afd7fdac);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_dict_7d51e1b8d689233471de5b2a02aa23f4);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_digest_599ae04f3abf093df13edf84e3322dc7);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_500f8132164d0a4ba6e13b35495b7758);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_digest_3df451ae8873b4feae922d8113a03c92);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_5cfe4c6a08722137002b6f5836d49526);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_digest_5f52598a10a362047baafea4624b6afc);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_dict_37231dc92b7e95c16ba6568cd4226c8e);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_5a28cbc5603c6add1e80b5689785670c);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_property);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_9dc797f3380d2376924002b3ffe17c71);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_plain_qs);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_digest_30dda9916d8c4cdcecde2f2c9fa98355);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth_headers);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e556f19497eebddee844b6fd4787dc3);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_dict_c95067d112ebefb8c51f30ffe6eefc5c);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_digest_c43f7bd6d01bcab55a068020168d38ab);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_dict_058acad276deaf7a188567f3c4ed501a);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain__validate_headers);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5c16d33b2cc8f66466125b4f1849921);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_digest_593f042bf2a8599bdeb4f983ee1ec7cc);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_headers);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_query);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_plain__extra_kwargs);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_dict_b517b5063bdeb118dca4009789e927b4);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_str_digest_0bbcc6d656c34858cbf33dea9cd5e2a0);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_options);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_version_path_param);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_str_digest_9c59ee8c4310451237c80fbfb5760993);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_dict_5c206bca9e1057d1018fcf4d7484ad3a);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_str_plain__make_status_error);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_str_digest_72faadc9c28712f20bd1db5e8abb581a);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_68be2137857af83c4ef27d1bb44b1559_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_int_pos_303);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_str_digest_7099aed6ec96ba9ffb27eb3dee46b188);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_dict_08331712cbc641c0349336d094d050c8);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_str_digest_c7743eea280b4968fa661623734cfb23);
mod_consts_hash[220] = DEEP_HASH(tstate, mod_consts.const_dict_da607d7d698e5cb145453d953f121b26);
mod_consts_hash[221] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5f327bdf5c43f499c766a401f104f40);
mod_consts_hash[222] = DEEP_HASH(tstate, mod_consts.const_dict_998227b1f2a9cd73641ec9f833187048);
mod_consts_hash[223] = DEEP_HASH(tstate, mod_consts.const_str_digest_241cc4bccdfab736cdf050d27bb87aae);
mod_consts_hash[224] = DEEP_HASH(tstate, mod_consts.const_dict_6d0f14b81697d88a569f192d32bfb0c7);
mod_consts_hash[225] = DEEP_HASH(tstate, mod_consts.const_str_digest_358a6aa52480b31b61d53d2349896ced);
mod_consts_hash[226] = DEEP_HASH(tstate, mod_consts.const_dict_569528ea000890be98bebf5e475f64aa);
mod_consts_hash[227] = DEEP_HASH(tstate, mod_consts.const_str_digest_66b6ae8d95383342a03f0d85f863e38b);
mod_consts_hash[228] = DEEP_HASH(tstate, mod_consts.const_dict_cceaa51a2be2c53c4b09a619657435d2);
mod_consts_hash[229] = DEEP_HASH(tstate, mod_consts.const_str_digest_920fad541468cde4cf93a26e64432f1c);
mod_consts_hash[230] = DEEP_HASH(tstate, mod_consts.const_str_digest_f54660cfc1b6cfbb3b2a275944afec93);
mod_consts_hash[231] = DEEP_HASH(tstate, mod_consts.const_str_digest_714959bd931ffdd5c161c5ae46d80737);
mod_consts_hash[232] = DEEP_HASH(tstate, mod_consts.const_str_digest_fb35f888b362c0ba8eaae793552b639f);
mod_consts_hash[233] = DEEP_HASH(tstate, mod_consts.const_str_digest_ba6c3bfdb03e81ace30d3ae2798289de);
mod_consts_hash[234] = DEEP_HASH(tstate, mod_consts.const_dict_ae4e543ad5b4e69659df2129a4d7a4d4);
mod_consts_hash[235] = DEEP_HASH(tstate, mod_consts.const_str_digest_add0a7ae69ad4bc66492d2473b6a2d44);
mod_consts_hash[236] = DEEP_HASH(tstate, mod_consts.const_str_digest_56842b225072c42432cbe85d3020d5bf);
mod_consts_hash[237] = DEEP_HASH(tstate, mod_consts.const_str_digest_ab5ab6891a82fe4e0cf0f73a3e9fe367);
mod_consts_hash[238] = DEEP_HASH(tstate, mod_consts.const_int_pos_537);
mod_consts_hash[239] = DEEP_HASH(tstate, mod_consts.const_dict_8e0398144661c96765236d95ef5a2533);
mod_consts_hash[240] = DEEP_HASH(tstate, mod_consts.const_str_digest_2ffe7454225755226e803fcbac086bd7);
mod_consts_hash[241] = DEEP_HASH(tstate, mod_consts.const_dict_ed06c93f1ecbb3e3e597e2b00f2ac62e);
mod_consts_hash[242] = DEEP_HASH(tstate, mod_consts.const_str_digest_a515f31a694b2f9290843ec5eff5bc3a);
mod_consts_hash[243] = DEEP_HASH(tstate, mod_consts.const_dict_6016c11a88536871ad96592c60eb4b7e);
mod_consts_hash[244] = DEEP_HASH(tstate, mod_consts.const_str_digest_8b15b7592d60f37dd8a8cb101b0b4b69);
mod_consts_hash[245] = DEEP_HASH(tstate, mod_consts.const_dict_669d5172f2166b6009939153da8c84de);
mod_consts_hash[246] = DEEP_HASH(tstate, mod_consts.const_str_digest_354b709699bc64f1a7d7cb0f745b778a);
mod_consts_hash[247] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple);
mod_consts_hash[248] = DEEP_HASH(tstate, mod_consts.const_int_pos_562);
mod_consts_hash[249] = DEEP_HASH(tstate, mod_consts.const_dict_d35b56aa3276a2d874e2563614455100);
mod_consts_hash[250] = DEEP_HASH(tstate, mod_consts.const_str_digest_9f1f51e29d6b735c5b84175be6ff4dcc);
mod_consts_hash[251] = DEEP_HASH(tstate, mod_consts.const_dict_184e6093e0a6c53d8891d29b5533530d);
mod_consts_hash[252] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b23351a426a2de9cdf336e1df931ab5);
mod_consts_hash[253] = DEEP_HASH(tstate, mod_consts.const_dict_6cc31389e8f31595cd67e3e7e7f4c302);
mod_consts_hash[254] = DEEP_HASH(tstate, mod_consts.const_str_digest_7cfb2fbbfd8d4d1c78bfa01be862b011);
mod_consts_hash[255] = DEEP_HASH(tstate, mod_consts.const_dict_ad32dd521648e9274954dcc4fe88e9bd);
mod_consts_hash[256] = DEEP_HASH(tstate, mod_consts.const_str_digest_02ad5c0b4eb93c45430874d85ae3f8ea);
mod_consts_hash[257] = DEEP_HASH(tstate, mod_consts.const_int_pos_587);
mod_consts_hash[258] = DEEP_HASH(tstate, mod_consts.const_str_digest_ff9c6b4b8d5df8da4d38b16d53d09229);
mod_consts_hash[259] = DEEP_HASH(tstate, mod_consts.const_dict_540fbe054c7634b05a8565f4617c63e4);
mod_consts_hash[260] = DEEP_HASH(tstate, mod_consts.const_str_digest_39ce2d80b0e21b8536d4434fa4074ac7);
mod_consts_hash[261] = DEEP_HASH(tstate, mod_consts.const_dict_717dad6e1c97cdbb9b04121bf42c8c3d);
mod_consts_hash[262] = DEEP_HASH(tstate, mod_consts.const_str_digest_1e60446723ef1fe32d395ea0df7f7ccd);
mod_consts_hash[263] = DEEP_HASH(tstate, mod_consts.const_dict_14e1550fab7f8fcdfe3fca0ea6940360);
mod_consts_hash[264] = DEEP_HASH(tstate, mod_consts.const_str_digest_008f75df0bc5a63aae964ad04f111e17);
mod_consts_hash[265] = DEEP_HASH(tstate, mod_consts.const_int_pos_612);
mod_consts_hash[266] = DEEP_HASH(tstate, mod_consts.const_str_digest_56c03b0bef63012b91d0e4b29c187da3);
mod_consts_hash[267] = DEEP_HASH(tstate, mod_consts.const_dict_03224939feab3e2e7fe8101912802e58);
mod_consts_hash[268] = DEEP_HASH(tstate, mod_consts.const_str_digest_585491e095bc305238648cc082ad4eb9);
mod_consts_hash[269] = DEEP_HASH(tstate, mod_consts.const_dict_e9b841b34293a39b61772f5feeeeb033);
mod_consts_hash[270] = DEEP_HASH(tstate, mod_consts.const_str_digest_3cc39dc1dade66fda816b6c53b20953d);
mod_consts_hash[271] = DEEP_HASH(tstate, mod_consts.const_dict_deb62b6aed2c90153eab553e737554c5);
mod_consts_hash[272] = DEEP_HASH(tstate, mod_consts.const_str_digest_4ef5ccde4de19c870d03d51c7ba76668);
mod_consts_hash[273] = DEEP_HASH(tstate, mod_consts.const_str_plain_Client);
mod_consts_hash[274] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient);
mod_consts_hash[275] = DEEP_HASH(tstate, mod_consts.const_str_digest_e97834ddbb352475c850cf6a8e196946);
mod_consts_hash[276] = DEEP_HASH(tstate, mod_consts.const_str_digest_d79c6386e12992292030f52f568d7381);
mod_consts_hash[277] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[278] = DEEP_HASH(tstate, mod_consts.const_tuple_e7dca2ed6bf6d375dfc2c7b47360b36b_tuple);
mod_consts_hash[279] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_client_tuple);
mod_consts_hash[280] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[281] = DEEP_HASH(tstate, mod_consts.const_tuple_ae458caee871fb2ac27089dd668a79af_tuple);
mod_consts_hash[282] = DEEP_HASH(tstate, mod_consts.const_tuple_67c2c4609a1d7106bd5a71f5317cd9c9_tuple);
mod_consts_hash[283] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_custom_headers_tuple);
mod_consts_hash[284] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResource_tuple);
mod_consts_hash[285] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResourceWithRawResponse_tuple);
mod_consts_hash[286] = DEEP_HASH(tstate, mod_consts.const_tuple_f531c7211feb55ad81bcaffb941d4343_tuple);
mod_consts_hash[287] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResource_tuple);
mod_consts_hash[288] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithRawResponse_tuple);
mod_consts_hash[289] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithStreamingResponse_tuple);
mod_consts_hash[290] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_api_key_tuple);
mod_consts_hash[291] = DEEP_HASH(tstate, mod_consts.const_tuple_764a80803cf5a032ce66e3c1a0e16c35_tuple);
mod_consts_hash[292] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[293] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncInteractionsResource_tuple);
mod_consts_hash[294] = DEEP_HASH(tstate, mod_consts.const_tuple_3b71ccb3087110d72af515081a03d462_tuple);
mod_consts_hash[295] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple);
mod_consts_hash[296] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResource_tuple);
mod_consts_hash[297] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResourceWithRawResponse_tuple);
mod_consts_hash[298] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple);
mod_consts_hash[299] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncWebhooksResource_tuple);
mod_consts_hash[300] = DEEP_HASH(tstate, mod_consts.const_tuple_c7c8e8abdd8b71ee48c3bbbd89c156c9_tuple);
mod_consts_hash[301] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple);
mod_consts_hash[302] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResource_tuple);
mod_consts_hash[303] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResourceWithRawResponse_tuple);
mod_consts_hash[304] = DEEP_HASH(tstate, mod_consts.const_tuple_521bcd9a4ef2ee22e855fc2b3129a360_tuple);
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
void checkModuleConstants_google$genai$_interactions$_client(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GEMINI_API_KEY_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_GEMINI_API_KEY_tuple);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_key);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_v1beta));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_v1beta);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_version);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_GEMINI_NEXT_GEN_API_BASE_URL_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_GEMINI_NEXT_GEN_API_BASE_URL_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_d8738c7113687f5d411b68914287e36c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d8738c7113687f5d411b68914287e36c);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_client_adapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_client_adapter);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain___version__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___version__);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_tuple_5fbbf00de98f97606d73b2624a6f4a81_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_5fbbf00de98f97606d73b2624a6f4a81_tuple);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_Stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Stream);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__default_stream_cls));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__default_stream_cls);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_digest_9222b97034364ad27026d4077b950e21));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9222b97034364ad27026d4077b950e21);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InteractionsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InteractionsResource_tuple);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_InteractionsResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InteractionsResource);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebhooksResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebhooksResource_tuple);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebhooksResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebhooksResource);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AgentsResource_tuple);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_AgentsResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AgentsResource);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain_Querystring));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Querystring);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_comma_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_comma_tuple);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_array_format_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_array_format_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_digest_c6253282a563560f233264b6d3f1f87d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c6253282a563560f233264b6d3f1f87d);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_headers);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_dict_1a8e4fd3086558993b3dcc7ff7e41004));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1a8e4fd3086558993b3dcc7ff7e41004);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain__custom_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__custom_headers);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Authorization_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Authorization_tuple);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_Omit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Omit);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_c47907662d4ad90861661a0103fb4d89));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c47907662d4ad90861661a0103fb4d89);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_vertex_ai));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_vertex_ai);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_auth_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_auth_headers);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f26214ec9ff8a8b5602bd1132c342f6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f26214ec9ff8a8b5602bd1132c342f6);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_c10e02335972e1201099046d6a82ad14));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c10e02335972e1201099046d6a82ad14);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain__custom_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__custom_query);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_url);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_retries);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_query);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_status_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_status_code);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_int_pos_400));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_400);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_BadRequestError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BadRequestError);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_int_pos_401));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_401);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_AuthenticationError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AuthenticationError);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_int_pos_403));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_403);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_PermissionDeniedError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PermissionDeniedError);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_int_pos_404));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_404);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotFoundError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotFoundError);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_int_pos_409));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_409);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConflictError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConflictError);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_int_pos_422));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_422);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_UnprocessableEntityError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_UnprocessableEntityError);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_int_pos_429));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_429);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_RateLimitError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RateLimitError);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_int_pos_500));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_500);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_InternalServerError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InternalServerError);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIStatusError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIStatusError);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncStream);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_07df00e0ff0e199b45274616654156ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07df00e0ff0e199b45274616654156ff);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncInteractionsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncInteractionsResource_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncInteractionsResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncInteractionsResource);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncWebhooksResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncWebhooksResource_tuple);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncWebhooksResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncWebhooksResource);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncAgentsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncAgentsResource_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAgentsResource));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAgentsResource);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_async_get_auth_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_async_get_auth_headers);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prepare_options);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_0808f99cf3f9bb776c2337daad38a02f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0808f99cf3f9bb776c2337daad38a02f);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_InteractionsResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_InteractionsResourceWithRawResponse_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_InteractionsResourceWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_InteractionsResourceWithRawResponse);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_interactions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_interactions);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebhooksResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebhooksResourceWithRawResponse_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebhooksResourceWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebhooksResourceWithRawResponse);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_webhooks));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_webhooks);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentsResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AgentsResourceWithRawResponse_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_AgentsResourceWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AgentsResourceWithRawResponse);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_agents));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_agents);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncInteractionsResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncInteractionsResourceWithRawResponse_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncInteractionsResourceWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncInteractionsResourceWithRawResponse);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncWebhooksResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncWebhooksResourceWithRawResponse_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncWebhooksResourceWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncWebhooksResourceWithRawResponse);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithRawResponse_tuple);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAgentsResourceWithRawResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAgentsResourceWithRawResponse);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_digest_a185c098286693144d4cdf08c77a8fa7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a185c098286693144d4cdf08c77a8fa7);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_WebhooksResourceWithStreamingResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_WebhooksResourceWithStreamingResponse_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_WebhooksResourceWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WebhooksResourceWithStreamingResponse);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AgentsResourceWithStreamingResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AgentsResourceWithStreamingResponse_tuple);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_AgentsResourceWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AgentsResourceWithStreamingResponse);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_038fd969ee338cfac91ce6505dee5adf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_038fd969ee338cfac91ce6505dee5adf);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_digest_dd7d096cc560734e618f21cab7ae3ae6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_dd7d096cc560734e618f21cab7ae3ae6);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithStreamingResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithStreamingResponse_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAgentsResourceWithStreamingResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAgentsResourceWithStreamingResponse);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_TYPE_CHECKING));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TYPE_CHECKING);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Self);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_override);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__exceptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__exceptions_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__qs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__qs);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Querystring_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Querystring_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_tuple_f359164e4b61e896a0f2ba5274008dbf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f359164e4b61e896a0f2ba5274008dbf_tuple);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_Headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Headers);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_Transport));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Transport);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_ProxiesTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ProxiesTypes);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_RequestOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RequestOptions);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_not_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_not_given);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_given_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_given_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_cached_property_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_cached_property_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_cached_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cached_property);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_FinalRequestOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FinalRequestOptions);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain__version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__version);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___version___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___version___tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain__streaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__streaming);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_APIStatusError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_APIStatusError_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_tuple_a63f61dc891f055185c4b89d128c42ca_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a63f61dc891f055185c4b89d128c42ca_tuple);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_SyncAPIClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_SyncAPIClient);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAPIClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAPIClient);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain__client_adapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client_adapter);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_f5468c7ee1b8f9e0c88342bc2c5fbfdf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f5468c7ee1b8f9e0c88342bc2c5fbfdf_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeminiNextGenAPIClientAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GeminiNextGenAPIClientAdapter);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClientAdapter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncGeminiNextGenAPIClientAdapter);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_list_d7d62d58ccb4f91ee26f9f683fc47df4_list));
CHECK_OBJECT_DEEP(mod_consts.const_list_d7d62d58ccb4f91ee26f9f683fc47df4_list);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_GeminiNextGenAPIClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_GeminiNextGenAPIClient);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_int_pos_69));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_69);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_316d0890e12008d670715bd617c4d36d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_316d0890e12008d670715bd617c4d36d);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain__strict_response_validation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__strict_response_validation);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_dict_47142eda6ba8431709bed018a3cd0988));
CHECK_OBJECT_DEEP(mod_consts.const_dict_47142eda6ba8431709bed018a3cd0988);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_digest_04953f4d23245f1242de9d058d6778b9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_04953f4d23245f1242de9d058d6778b9);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_dict_576db31df12a5f7998fd98de28668f55));
CHECK_OBJECT_DEEP(mod_consts.const_dict_576db31df12a5f7998fd98de28668f55);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_f6895efac6b0be2be9651609afd7fdac));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f6895efac6b0be2be9651609afd7fdac);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_dict_7d51e1b8d689233471de5b2a02aa23f4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_7d51e1b8d689233471de5b2a02aa23f4);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_digest_599ae04f3abf093df13edf84e3322dc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_599ae04f3abf093df13edf84e3322dc7);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_500f8132164d0a4ba6e13b35495b7758));
CHECK_OBJECT_DEEP(mod_consts.const_dict_500f8132164d0a4ba6e13b35495b7758);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_digest_3df451ae8873b4feae922d8113a03c92));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3df451ae8873b4feae922d8113a03c92);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_5cfe4c6a08722137002b6f5836d49526));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5cfe4c6a08722137002b6f5836d49526);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_raw_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_raw_response);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_digest_5f52598a10a362047baafea4624b6afc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5f52598a10a362047baafea4624b6afc);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_dict_37231dc92b7e95c16ba6568cd4226c8e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_37231dc92b7e95c16ba6568cd4226c8e);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_streaming_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_streaming_response);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_5a28cbc5603c6add1e80b5689785670c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5a28cbc5603c6add1e80b5689785670c);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_property));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_property);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_9dc797f3380d2376924002b3ffe17c71));
CHECK_OBJECT_DEEP(mod_consts.const_dict_9dc797f3380d2376924002b3ffe17c71);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_plain_qs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_qs);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_digest_30dda9916d8c4cdcecde2f2c9fa98355));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30dda9916d8c4cdcecde2f2c9fa98355);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798));
CHECK_OBJECT_DEEP(mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth_headers);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e556f19497eebddee844b6fd4787dc3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e556f19497eebddee844b6fd4787dc3);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_dict_c95067d112ebefb8c51f30ffe6eefc5c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_c95067d112ebefb8c51f30ffe6eefc5c);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_digest_c43f7bd6d01bcab55a068020168d38ab));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c43f7bd6d01bcab55a068020168d38ab);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_dict_058acad276deaf7a188567f3c4ed501a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_058acad276deaf7a188567f3c4ed501a);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain__validate_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__validate_headers);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5c16d33b2cc8f66466125b4f1849921));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5c16d33b2cc8f66466125b4f1849921);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_digest_593f042bf2a8599bdeb4f983ee1ec7cc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_593f042bf2a8599bdeb4f983ee1ec7cc);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_default_headers);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_default_query);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_plain__extra_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extra_kwargs);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_dict_b517b5063bdeb118dca4009789e927b4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b517b5063bdeb118dca4009789e927b4);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_str_digest_0bbcc6d656c34858cbf33dea9cd5e2a0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0bbcc6d656c34858cbf33dea9cd5e2a0);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_options);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_api_version_path_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_api_version_path_param);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_str_digest_9c59ee8c4310451237c80fbfb5760993));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9c59ee8c4310451237c80fbfb5760993);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_dict_5c206bca9e1057d1018fcf4d7484ad3a));
CHECK_OBJECT_DEEP(mod_consts.const_dict_5c206bca9e1057d1018fcf4d7484ad3a);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_str_plain__make_status_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__make_status_error);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_str_digest_72faadc9c28712f20bd1db5e8abb581a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_72faadc9c28712f20bd1db5e8abb581a);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_68be2137857af83c4ef27d1bb44b1559_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_68be2137857af83c4ef27d1bb44b1559_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_int_pos_303));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_303);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_str_digest_7099aed6ec96ba9ffb27eb3dee46b188));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7099aed6ec96ba9ffb27eb3dee46b188);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_dict_08331712cbc641c0349336d094d050c8));
CHECK_OBJECT_DEEP(mod_consts.const_dict_08331712cbc641c0349336d094d050c8);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_str_digest_c7743eea280b4968fa661623734cfb23));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c7743eea280b4968fa661623734cfb23);
assert(mod_consts_hash[220] == DEEP_HASH(tstate, mod_consts.const_dict_da607d7d698e5cb145453d953f121b26));
CHECK_OBJECT_DEEP(mod_consts.const_dict_da607d7d698e5cb145453d953f121b26);
assert(mod_consts_hash[221] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5f327bdf5c43f499c766a401f104f40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5f327bdf5c43f499c766a401f104f40);
assert(mod_consts_hash[222] == DEEP_HASH(tstate, mod_consts.const_dict_998227b1f2a9cd73641ec9f833187048));
CHECK_OBJECT_DEEP(mod_consts.const_dict_998227b1f2a9cd73641ec9f833187048);
assert(mod_consts_hash[223] == DEEP_HASH(tstate, mod_consts.const_str_digest_241cc4bccdfab736cdf050d27bb87aae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_241cc4bccdfab736cdf050d27bb87aae);
assert(mod_consts_hash[224] == DEEP_HASH(tstate, mod_consts.const_dict_6d0f14b81697d88a569f192d32bfb0c7));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6d0f14b81697d88a569f192d32bfb0c7);
assert(mod_consts_hash[225] == DEEP_HASH(tstate, mod_consts.const_str_digest_358a6aa52480b31b61d53d2349896ced));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_358a6aa52480b31b61d53d2349896ced);
assert(mod_consts_hash[226] == DEEP_HASH(tstate, mod_consts.const_dict_569528ea000890be98bebf5e475f64aa));
CHECK_OBJECT_DEEP(mod_consts.const_dict_569528ea000890be98bebf5e475f64aa);
assert(mod_consts_hash[227] == DEEP_HASH(tstate, mod_consts.const_str_digest_66b6ae8d95383342a03f0d85f863e38b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_66b6ae8d95383342a03f0d85f863e38b);
assert(mod_consts_hash[228] == DEEP_HASH(tstate, mod_consts.const_dict_cceaa51a2be2c53c4b09a619657435d2));
CHECK_OBJECT_DEEP(mod_consts.const_dict_cceaa51a2be2c53c4b09a619657435d2);
assert(mod_consts_hash[229] == DEEP_HASH(tstate, mod_consts.const_str_digest_920fad541468cde4cf93a26e64432f1c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_920fad541468cde4cf93a26e64432f1c);
assert(mod_consts_hash[230] == DEEP_HASH(tstate, mod_consts.const_str_digest_f54660cfc1b6cfbb3b2a275944afec93));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f54660cfc1b6cfbb3b2a275944afec93);
assert(mod_consts_hash[231] == DEEP_HASH(tstate, mod_consts.const_str_digest_714959bd931ffdd5c161c5ae46d80737));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_714959bd931ffdd5c161c5ae46d80737);
assert(mod_consts_hash[232] == DEEP_HASH(tstate, mod_consts.const_str_digest_fb35f888b362c0ba8eaae793552b639f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fb35f888b362c0ba8eaae793552b639f);
assert(mod_consts_hash[233] == DEEP_HASH(tstate, mod_consts.const_str_digest_ba6c3bfdb03e81ace30d3ae2798289de));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ba6c3bfdb03e81ace30d3ae2798289de);
assert(mod_consts_hash[234] == DEEP_HASH(tstate, mod_consts.const_dict_ae4e543ad5b4e69659df2129a4d7a4d4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ae4e543ad5b4e69659df2129a4d7a4d4);
assert(mod_consts_hash[235] == DEEP_HASH(tstate, mod_consts.const_str_digest_add0a7ae69ad4bc66492d2473b6a2d44));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_add0a7ae69ad4bc66492d2473b6a2d44);
assert(mod_consts_hash[236] == DEEP_HASH(tstate, mod_consts.const_str_digest_56842b225072c42432cbe85d3020d5bf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56842b225072c42432cbe85d3020d5bf);
assert(mod_consts_hash[237] == DEEP_HASH(tstate, mod_consts.const_str_digest_ab5ab6891a82fe4e0cf0f73a3e9fe367));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ab5ab6891a82fe4e0cf0f73a3e9fe367);
assert(mod_consts_hash[238] == DEEP_HASH(tstate, mod_consts.const_int_pos_537));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_537);
assert(mod_consts_hash[239] == DEEP_HASH(tstate, mod_consts.const_dict_8e0398144661c96765236d95ef5a2533));
CHECK_OBJECT_DEEP(mod_consts.const_dict_8e0398144661c96765236d95ef5a2533);
assert(mod_consts_hash[240] == DEEP_HASH(tstate, mod_consts.const_str_digest_2ffe7454225755226e803fcbac086bd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2ffe7454225755226e803fcbac086bd7);
assert(mod_consts_hash[241] == DEEP_HASH(tstate, mod_consts.const_dict_ed06c93f1ecbb3e3e597e2b00f2ac62e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ed06c93f1ecbb3e3e597e2b00f2ac62e);
assert(mod_consts_hash[242] == DEEP_HASH(tstate, mod_consts.const_str_digest_a515f31a694b2f9290843ec5eff5bc3a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a515f31a694b2f9290843ec5eff5bc3a);
assert(mod_consts_hash[243] == DEEP_HASH(tstate, mod_consts.const_dict_6016c11a88536871ad96592c60eb4b7e));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6016c11a88536871ad96592c60eb4b7e);
assert(mod_consts_hash[244] == DEEP_HASH(tstate, mod_consts.const_str_digest_8b15b7592d60f37dd8a8cb101b0b4b69));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8b15b7592d60f37dd8a8cb101b0b4b69);
assert(mod_consts_hash[245] == DEEP_HASH(tstate, mod_consts.const_dict_669d5172f2166b6009939153da8c84de));
CHECK_OBJECT_DEEP(mod_consts.const_dict_669d5172f2166b6009939153da8c84de);
assert(mod_consts_hash[246] == DEEP_HASH(tstate, mod_consts.const_str_digest_354b709699bc64f1a7d7cb0f745b778a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_354b709699bc64f1a7d7cb0f745b778a);
assert(mod_consts_hash[247] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__client_tuple);
assert(mod_consts_hash[248] == DEEP_HASH(tstate, mod_consts.const_int_pos_562));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_562);
assert(mod_consts_hash[249] == DEEP_HASH(tstate, mod_consts.const_dict_d35b56aa3276a2d874e2563614455100));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d35b56aa3276a2d874e2563614455100);
assert(mod_consts_hash[250] == DEEP_HASH(tstate, mod_consts.const_str_digest_9f1f51e29d6b735c5b84175be6ff4dcc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9f1f51e29d6b735c5b84175be6ff4dcc);
assert(mod_consts_hash[251] == DEEP_HASH(tstate, mod_consts.const_dict_184e6093e0a6c53d8891d29b5533530d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_184e6093e0a6c53d8891d29b5533530d);
assert(mod_consts_hash[252] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b23351a426a2de9cdf336e1df931ab5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b23351a426a2de9cdf336e1df931ab5);
assert(mod_consts_hash[253] == DEEP_HASH(tstate, mod_consts.const_dict_6cc31389e8f31595cd67e3e7e7f4c302));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6cc31389e8f31595cd67e3e7e7f4c302);
assert(mod_consts_hash[254] == DEEP_HASH(tstate, mod_consts.const_str_digest_7cfb2fbbfd8d4d1c78bfa01be862b011));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7cfb2fbbfd8d4d1c78bfa01be862b011);
assert(mod_consts_hash[255] == DEEP_HASH(tstate, mod_consts.const_dict_ad32dd521648e9274954dcc4fe88e9bd));
CHECK_OBJECT_DEEP(mod_consts.const_dict_ad32dd521648e9274954dcc4fe88e9bd);
assert(mod_consts_hash[256] == DEEP_HASH(tstate, mod_consts.const_str_digest_02ad5c0b4eb93c45430874d85ae3f8ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_02ad5c0b4eb93c45430874d85ae3f8ea);
assert(mod_consts_hash[257] == DEEP_HASH(tstate, mod_consts.const_int_pos_587));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_587);
assert(mod_consts_hash[258] == DEEP_HASH(tstate, mod_consts.const_str_digest_ff9c6b4b8d5df8da4d38b16d53d09229));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ff9c6b4b8d5df8da4d38b16d53d09229);
assert(mod_consts_hash[259] == DEEP_HASH(tstate, mod_consts.const_dict_540fbe054c7634b05a8565f4617c63e4));
CHECK_OBJECT_DEEP(mod_consts.const_dict_540fbe054c7634b05a8565f4617c63e4);
assert(mod_consts_hash[260] == DEEP_HASH(tstate, mod_consts.const_str_digest_39ce2d80b0e21b8536d4434fa4074ac7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_39ce2d80b0e21b8536d4434fa4074ac7);
assert(mod_consts_hash[261] == DEEP_HASH(tstate, mod_consts.const_dict_717dad6e1c97cdbb9b04121bf42c8c3d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_717dad6e1c97cdbb9b04121bf42c8c3d);
assert(mod_consts_hash[262] == DEEP_HASH(tstate, mod_consts.const_str_digest_1e60446723ef1fe32d395ea0df7f7ccd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1e60446723ef1fe32d395ea0df7f7ccd);
assert(mod_consts_hash[263] == DEEP_HASH(tstate, mod_consts.const_dict_14e1550fab7f8fcdfe3fca0ea6940360));
CHECK_OBJECT_DEEP(mod_consts.const_dict_14e1550fab7f8fcdfe3fca0ea6940360);
assert(mod_consts_hash[264] == DEEP_HASH(tstate, mod_consts.const_str_digest_008f75df0bc5a63aae964ad04f111e17));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_008f75df0bc5a63aae964ad04f111e17);
assert(mod_consts_hash[265] == DEEP_HASH(tstate, mod_consts.const_int_pos_612));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_612);
assert(mod_consts_hash[266] == DEEP_HASH(tstate, mod_consts.const_str_digest_56c03b0bef63012b91d0e4b29c187da3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56c03b0bef63012b91d0e4b29c187da3);
assert(mod_consts_hash[267] == DEEP_HASH(tstate, mod_consts.const_dict_03224939feab3e2e7fe8101912802e58));
CHECK_OBJECT_DEEP(mod_consts.const_dict_03224939feab3e2e7fe8101912802e58);
assert(mod_consts_hash[268] == DEEP_HASH(tstate, mod_consts.const_str_digest_585491e095bc305238648cc082ad4eb9));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_585491e095bc305238648cc082ad4eb9);
assert(mod_consts_hash[269] == DEEP_HASH(tstate, mod_consts.const_dict_e9b841b34293a39b61772f5feeeeb033));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e9b841b34293a39b61772f5feeeeb033);
assert(mod_consts_hash[270] == DEEP_HASH(tstate, mod_consts.const_str_digest_3cc39dc1dade66fda816b6c53b20953d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3cc39dc1dade66fda816b6c53b20953d);
assert(mod_consts_hash[271] == DEEP_HASH(tstate, mod_consts.const_dict_deb62b6aed2c90153eab553e737554c5));
CHECK_OBJECT_DEEP(mod_consts.const_dict_deb62b6aed2c90153eab553e737554c5);
assert(mod_consts_hash[272] == DEEP_HASH(tstate, mod_consts.const_str_digest_4ef5ccde4de19c870d03d51c7ba76668));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4ef5ccde4de19c870d03d51c7ba76668);
assert(mod_consts_hash[273] == DEEP_HASH(tstate, mod_consts.const_str_plain_Client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Client);
assert(mod_consts_hash[274] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncClient);
assert(mod_consts_hash[275] == DEEP_HASH(tstate, mod_consts.const_str_digest_e97834ddbb352475c850cf6a8e196946));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e97834ddbb352475c850cf6a8e196946);
assert(mod_consts_hash[276] == DEEP_HASH(tstate, mod_consts.const_str_digest_d79c6386e12992292030f52f568d7381));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d79c6386e12992292030f52f568d7381);
assert(mod_consts_hash[277] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[278] == DEEP_HASH(tstate, mod_consts.const_tuple_e7dca2ed6bf6d375dfc2c7b47360b36b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e7dca2ed6bf6d375dfc2c7b47360b36b_tuple);
assert(mod_consts_hash[279] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_client_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_client_tuple);
assert(mod_consts_hash[280] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[281] == DEEP_HASH(tstate, mod_consts.const_tuple_ae458caee871fb2ac27089dd668a79af_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ae458caee871fb2ac27089dd668a79af_tuple);
assert(mod_consts_hash[282] == DEEP_HASH(tstate, mod_consts.const_tuple_67c2c4609a1d7106bd5a71f5317cd9c9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_67c2c4609a1d7106bd5a71f5317cd9c9_tuple);
assert(mod_consts_hash[283] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_custom_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_custom_headers_tuple);
assert(mod_consts_hash[284] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResource_tuple);
assert(mod_consts_hash[285] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResourceWithRawResponse_tuple);
assert(mod_consts_hash[286] == DEEP_HASH(tstate, mod_consts.const_tuple_f531c7211feb55ad81bcaffb941d4343_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f531c7211feb55ad81bcaffb941d4343_tuple);
assert(mod_consts_hash[287] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_AgentsResource_tuple);
assert(mod_consts_hash[288] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithRawResponse_tuple);
assert(mod_consts_hash[289] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithStreamingResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithStreamingResponse_tuple);
assert(mod_consts_hash[290] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_api_key_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_api_key_tuple);
assert(mod_consts_hash[291] == DEEP_HASH(tstate, mod_consts.const_tuple_764a80803cf5a032ce66e3c1a0e16c35_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_764a80803cf5a032ce66e3c1a0e16c35_tuple);
assert(mod_consts_hash[292] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[293] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncInteractionsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_AsyncInteractionsResource_tuple);
assert(mod_consts_hash[294] == DEEP_HASH(tstate, mod_consts.const_tuple_3b71ccb3087110d72af515081a03d462_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_3b71ccb3087110d72af515081a03d462_tuple);
assert(mod_consts_hash[295] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple);
assert(mod_consts_hash[296] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResource_tuple);
assert(mod_consts_hash[297] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResourceWithRawResponse_tuple);
assert(mod_consts_hash[298] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple);
assert(mod_consts_hash[299] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_AsyncWebhooksResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_AsyncWebhooksResource_tuple);
assert(mod_consts_hash[300] == DEEP_HASH(tstate, mod_consts.const_tuple_c7c8e8abdd8b71ee48c3bbbd89c156c9_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c7c8e8abdd8b71ee48c3bbbd89c156c9_tuple);
assert(mod_consts_hash[301] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple);
assert(mod_consts_hash[302] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResource_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResource_tuple);
assert(mod_consts_hash[303] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResourceWithRawResponse_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResourceWithRawResponse_tuple);
assert(mod_consts_hash[304] == DEEP_HASH(tstate, mod_consts.const_tuple_521bcd9a4ef2ee22e855fc2b3129a360_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_521bcd9a4ef2ee22e855fc2b3129a360_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 22
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
static PyObject *module_var_accessor_google$genai$_interactions$_client$APIStatusError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIStatusError);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIStatusError, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_APIStatusError);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_APIStatusError, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$AsyncAPIClient(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncAPIClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncAPIClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncAPIClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncAPIClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIClient);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$AsyncGeminiNextGenAPIClient(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$AsyncGeminiNextGenAPIClientWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$AsyncGeminiNextGenAPIClientWithStreamedResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$AsyncStream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncStream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncStream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncStream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncStream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$DEFAULT_MAX_RETRIES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$GeminiNextGenAPIClient(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeminiNextGenAPIClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeminiNextGenAPIClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeminiNextGenAPIClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeminiNextGenAPIClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClient);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$GeminiNextGenAPIClientWithRawResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$GeminiNextGenAPIClientWithStreamedResponse(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$NotGiven(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotGiven);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotGiven, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NotGiven);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NotGiven, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$Omit(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Omit);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Omit, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Omit);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Omit, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$Querystring(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Querystring);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Querystring);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Querystring, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Querystring);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Querystring, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Querystring);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Querystring);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Querystring);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$Stream(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Stream);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Stream, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Stream);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Stream, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$SyncAPIClient(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncAPIClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncAPIClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_SyncAPIClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_SyncAPIClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIClient);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$__version__(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___version__);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___version__, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain___version__);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain___version__, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain___version__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$_exceptions(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exceptions);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__exceptions);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__exceptions, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__exceptions);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__exceptions, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exceptions);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exceptions);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__exceptions);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$cached_property(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$is_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_given);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_given, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_given);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_given, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$not_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_not_given);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_not_given, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_not_given);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_not_given, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_interactions$_client$override(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_interactions$_client->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_interactions$_client->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_interactions$_client->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_471889a57a00195433eaa7acb924ad01;
static PyCodeObject *code_objects_c3f07c17862efe711600ad737c7d2aef;
static PyCodeObject *code_objects_d5510b34d65d1f7ad16c625b40801ab9;
static PyCodeObject *code_objects_a41841b180be4eec9eb3a59aab6e770d;
static PyCodeObject *code_objects_cb1db4ba5c863d2731b3b0502247c14a;
static PyCodeObject *code_objects_e9617dd6e7182894c993c73ab5208920;
static PyCodeObject *code_objects_378b245353c686c8232ad45b7cf5928a;
static PyCodeObject *code_objects_0bada8403ec6aadf3f4b15e02ddd6219;
static PyCodeObject *code_objects_fdd11ec129248ccc111aab65c411356e;
static PyCodeObject *code_objects_c7e93d2dd074c139ee3ef1978ee458d1;
static PyCodeObject *code_objects_c9332dbecd9fb70b64cd3b51a3c9137b;
static PyCodeObject *code_objects_bb641fe502317f6aa3e1c141a612fe3c;
static PyCodeObject *code_objects_f6f068e534838ff9fb1a4d22777b77df;
static PyCodeObject *code_objects_fe42625759ca9335af6b5b3c4b2ab349;
static PyCodeObject *code_objects_72f6818894d2ce2e703ca61d4337da33;
static PyCodeObject *code_objects_55d940672c7c4c708909215bc1a8438a;
static PyCodeObject *code_objects_834d4399a907214632de1965e2412e3e;
static PyCodeObject *code_objects_b3ff1cd98c9080e6e81ecc35dfaf5264;
static PyCodeObject *code_objects_906e2586cf0c451bf65149226a0d48e4;
static PyCodeObject *code_objects_0636a1aa34edfd845af610992ec246fd;
static PyCodeObject *code_objects_3a6f6a57d0f39a5c2f26d0d36a9c99c3;
static PyCodeObject *code_objects_ece07d8ad7d12b356f1260c44dbb291f;
static PyCodeObject *code_objects_0fc820c00c1245e74b0d920f9022bc6a;
static PyCodeObject *code_objects_9c1f862ff15de301edea303bbe865783;
static PyCodeObject *code_objects_2731449b536f761ab00687f08afd5e19;
static PyCodeObject *code_objects_7abe42ebd3b6c1e486db2ee822bf6709;
static PyCodeObject *code_objects_ad8031f71d9becd9f6295df75ff14403;
static PyCodeObject *code_objects_d4ac87a4557fbe77e17d8d3dcb952133;
static PyCodeObject *code_objects_aaacb0e7de2b8516fd4f09457ff1244e;
static PyCodeObject *code_objects_cc05708c9da7d96bc39ca3735dcb3bcc;
static PyCodeObject *code_objects_ec4410a9c36abdcedf28c68659ba2b07;
static PyCodeObject *code_objects_672801351de7d53ee4c701d05d338bbd;
static PyCodeObject *code_objects_e1321f6192957495d6ef95a5169b91c8;
static PyCodeObject *code_objects_f62875a5bca44700b4ae3629b1f855b6;
static PyCodeObject *code_objects_237e5c0c8b5d8423c5c573b2921dfc70;
static PyCodeObject *code_objects_210de795f66ab2bb469bfb8821065d71;
static PyCodeObject *code_objects_2e81de58183c182c1f1227df55e08d27;
static PyCodeObject *code_objects_b34c47cd79f65a2a5a0ed00931c50c9d;
static PyCodeObject *code_objects_4d49e147ac82b52d63ba8f0440a1aba0;
static PyCodeObject *code_objects_81f06a307bdf318c0fad7dbf4cf2d100;
static PyCodeObject *code_objects_66dc1e83b9570a570e39d6b8c35213ae;
static PyCodeObject *code_objects_350a80d9190e628df96faa9c4d61fc4d;
static PyCodeObject *code_objects_4d5a4ee4a4a64eeb32c30b51bb55931b;
static PyCodeObject *code_objects_38926446f3120a3de859c8f9d9abd843;
static PyCodeObject *code_objects_8758546bb13bae763f0999fa8a6e5e96;
static PyCodeObject *code_objects_f8b12979de64dfa34f6f21ce7468d823;
static PyCodeObject *code_objects_2f44b029192cccc002f40996f2a3f375;
static PyCodeObject *code_objects_8ffe38ac8771b2ff82034f8eaa064df1;
static PyCodeObject *code_objects_02ba327c19da16e5ed55482a32a15316;
static PyCodeObject *code_objects_ef602bd17ef770f6bd295c8c975379e3;
static PyCodeObject *code_objects_b7bc0ae77f1a42e3ec567a9c59925243;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_e97834ddbb352475c850cf6a8e196946); CHECK_OBJECT(module_filename_obj);
code_objects_471889a57a00195433eaa7acb924ad01 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_d79c6386e12992292030f52f568d7381, mod_consts.const_str_digest_d79c6386e12992292030f52f568d7381, NULL, NULL, 0, 0, 0);
code_objects_c3f07c17862efe711600ad737c7d2aef = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_d5510b34d65d1f7ad16c625b40801ab9 = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e, mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_a41841b180be4eec9eb3a59aab6e770d = MAKE_CODE_OBJECT(module_filename_obj, 612, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318, mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_cb1db4ba5c863d2731b3b0502247c14a = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_GeminiNextGenAPIClient, mod_consts.const_str_plain_GeminiNextGenAPIClient, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e9617dd6e7182894c993c73ab5208920 = MAKE_CODE_OBJECT(module_filename_obj, 537, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse, mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_378b245353c686c8232ad45b7cf5928a = MAKE_CODE_OBJECT(module_filename_obj, 587, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265, mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_0bada8403ec6aadf3f4b15e02ddd6219 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_c7743eea280b4968fa661623734cfb23, mod_consts.const_tuple_e7dca2ed6bf6d375dfc2c7b47360b36b_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 10, 0);
code_objects_fdd11ec129248ccc111aab65c411356e = MAKE_CODE_OBJECT(module_filename_obj, 565, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_9f1f51e29d6b735c5b84175be6ff4dcc, mod_consts.const_tuple_str_plain_self_str_plain_client_tuple, NULL, 2, 0, 0);
code_objects_c7e93d2dd074c139ee3ef1978ee458d1 = MAKE_CODE_OBJECT(module_filename_obj, 615, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_56c03b0bef63012b91d0e4b29c187da3, mod_consts.const_tuple_str_plain_self_str_plain_client_tuple, NULL, 2, 0, 0);
code_objects_c9332dbecd9fb70b64cd3b51a3c9137b = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_04953f4d23245f1242de9d058d6778b9, mod_consts.const_tuple_e7dca2ed6bf6d375dfc2c7b47360b36b_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 10, 0);
code_objects_bb641fe502317f6aa3e1c141a612fe3c = MAKE_CODE_OBJECT(module_filename_obj, 540, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_2ffe7454225755226e803fcbac086bd7, mod_consts.const_tuple_str_plain_self_str_plain_client_tuple, NULL, 2, 0, 0);
code_objects_f6f068e534838ff9fb1a4d22777b77df = MAKE_CODE_OBJECT(module_filename_obj, 590, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_ff9c6b4b8d5df8da4d38b16d53d09229, mod_consts.const_tuple_str_plain_self_str_plain_client_tuple, NULL, 2, 0, 0);
code_objects_fe42625759ca9335af6b5b3c4b2ab349 = MAKE_CODE_OBJECT(module_filename_obj, 500, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_api_version_path_param, mod_consts.const_str_digest_56842b225072c42432cbe85d3020d5bf, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_72f6818894d2ce2e703ca61d4337da33 = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_api_version_path_param, mod_consts.const_str_digest_9c59ee8c4310451237c80fbfb5760993, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_55d940672c7c4c708909215bc1a8438a = MAKE_CODE_OBJECT(module_filename_obj, 504, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__make_status_error, mod_consts.const_str_digest_ab5ab6891a82fe4e0cf0f73a3e9fe367, mod_consts.const_tuple_ae458caee871fb2ac27089dd668a79af_tuple, NULL, 2, 2, 0);
code_objects_834d4399a907214632de1965e2412e3e = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__make_status_error, mod_consts.const_str_digest_72faadc9c28712f20bd1db5e8abb581a, mod_consts.const_tuple_ae458caee871fb2ac27089dd668a79af_tuple, NULL, 2, 2, 0);
code_objects_b3ff1cd98c9080e6e81ecc35dfaf5264 = MAKE_CODE_OBJECT(module_filename_obj, 428, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__prepare_options, mod_consts.const_str_digest_0808f99cf3f9bb776c2337daad38a02f, mod_consts.const_tuple_67c2c4609a1d7106bd5a71f5317cd9c9_tuple, NULL, 2, 0, 0);
code_objects_906e2586cf0c451bf65149226a0d48e4 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__prepare_options, mod_consts.const_str_digest_593f042bf2a8599bdeb4f983ee1ec7cc, mod_consts.const_tuple_67c2c4609a1d7106bd5a71f5317cd9c9_tuple, NULL, 2, 0, 0);
code_objects_0636a1aa34edfd845af610992ec246fd = MAKE_CODE_OBJECT(module_filename_obj, 415, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_headers, mod_consts.const_str_digest_ba6c3bfdb03e81ace30d3ae2798289de, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_custom_headers_tuple, NULL, 3, 0, 0);
code_objects_3a6f6a57d0f39a5c2f26d0d36a9c99c3 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__validate_headers, mod_consts.const_str_digest_c5c16d33b2cc8f66466125b4f1849921, mod_consts.const_tuple_str_plain_self_str_plain_headers_str_plain_custom_headers_tuple, NULL, 3, 0, 0);
code_objects_ece07d8ad7d12b356f1260c44dbb291f = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_agents, mod_consts.const_str_digest_358a6aa52480b31b61d53d2349896ced, mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResource_tuple, NULL, 1, 0, 0);
code_objects_0fc820c00c1245e74b0d920f9022bc6a = MAKE_CODE_OBJECT(module_filename_obj, 581, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_agents, mod_consts.const_str_digest_02ad5c0b4eb93c45430874d85ae3f8ea, mod_consts.const_tuple_str_plain_self_str_plain_AsyncAgentsResourceWithRawResponse_tuple, NULL, 1, 0, 0);
code_objects_9c1f862ff15de301edea303bbe865783 = MAKE_CODE_OBJECT(module_filename_obj, 631, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_agents, mod_consts.const_str_digest_4ef5ccde4de19c870d03d51c7ba76668, mod_consts.const_tuple_f531c7211feb55ad81bcaffb941d4343_tuple, NULL, 1, 0, 0);
code_objects_2731449b536f761ab00687f08afd5e19 = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_agents, mod_consts.const_str_digest_3df451ae8873b4feae922d8113a03c92, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResource_tuple, NULL, 1, 0, 0);
code_objects_7abe42ebd3b6c1e486db2ee822bf6709 = MAKE_CODE_OBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_agents, mod_consts.const_str_digest_354b709699bc64f1a7d7cb0f745b778a, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithRawResponse_tuple, NULL, 1, 0, 0);
code_objects_ad8031f71d9becd9f6295df75ff14403 = MAKE_CODE_OBJECT(module_filename_obj, 606, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_agents, mod_consts.const_str_digest_008f75df0bc5a63aae964ad04f111e17, mod_consts.const_tuple_str_plain_self_str_plain_AgentsResourceWithStreamingResponse_tuple, NULL, 1, 0, 0);
code_objects_d4ac87a4557fbe77e17d8d3dcb952133 = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_auth_headers, mod_consts.const_str_digest_714959bd931ffdd5c161c5ae46d80737, mod_consts.const_tuple_str_plain_self_str_plain_api_key_tuple, NULL, 1, 0, 0);
code_objects_aaacb0e7de2b8516fd4f09457ff1244e = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_auth_headers, mod_consts.const_str_digest_2e556f19497eebddee844b6fd4787dc3, mod_consts.const_tuple_str_plain_self_str_plain_api_key_tuple, NULL, 1, 0, 0);
code_objects_cc05708c9da7d96bc39ca3735dcb3bcc = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_add0a7ae69ad4bc66492d2473b6a2d44, mod_consts.const_tuple_764a80803cf5a032ce66e3c1a0e16c35_tuple, NULL, 1, 12, 0);
code_objects_ec4410a9c36abdcedf28c68659ba2b07 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_0bbcc6d656c34858cbf33dea9cd5e2a0, mod_consts.const_tuple_764a80803cf5a032ce66e3c1a0e16c35_tuple, NULL, 1, 12, 0);
code_objects_672801351de7d53ee4c701d05d338bbd = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_default_headers, mod_consts.const_str_digest_fb35f888b362c0ba8eaae793552b639f, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_e1321f6192957495d6ef95a5169b91c8 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_default_headers, mod_consts.const_str_digest_c43f7bd6d01bcab55a068020168d38ab, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_f62875a5bca44700b4ae3629b1f855b6 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_interactions, mod_consts.const_str_digest_c5f327bdf5c43f499c766a401f104f40, mod_consts.const_tuple_str_plain_self_str_plain_AsyncInteractionsResource_tuple, NULL, 1, 0, 0);
code_objects_237e5c0c8b5d8423c5c573b2921dfc70 = MAKE_CODE_OBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_interactions, mod_consts.const_str_digest_0b23351a426a2de9cdf336e1df931ab5, mod_consts.const_tuple_3b71ccb3087110d72af515081a03d462_tuple, NULL, 1, 0, 0);
code_objects_210de795f66ab2bb469bfb8821065d71 = MAKE_CODE_OBJECT(module_filename_obj, 619, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_interactions, mod_consts.const_str_digest_585491e095bc305238648cc082ad4eb9, mod_consts.const_tuple_str_plain_self_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple, NULL, 1, 0, 0);
code_objects_2e81de58183c182c1f1227df55e08d27 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_interactions, mod_consts.const_str_digest_f6895efac6b0be2be9651609afd7fdac, mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResource_tuple, NULL, 1, 0, 0);
code_objects_b34c47cd79f65a2a5a0ed00931c50c9d = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_interactions, mod_consts.const_str_digest_a515f31a694b2f9290843ec5eff5bc3a, mod_consts.const_tuple_str_plain_self_str_plain_InteractionsResourceWithRawResponse_tuple, NULL, 1, 0, 0);
code_objects_4d49e147ac82b52d63ba8f0440a1aba0 = MAKE_CODE_OBJECT(module_filename_obj, 594, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_interactions, mod_consts.const_str_digest_39ce2d80b0e21b8536d4434fa4074ac7, mod_consts.const_tuple_str_plain_self_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple, NULL, 1, 0, 0);
code_objects_81f06a307bdf318c0fad7dbf4cf2d100 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_qs, mod_consts.const_str_digest_f54660cfc1b6cfbb3b2a275944afec93, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_66dc1e83b9570a570e39d6b8c35213ae = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_qs, mod_consts.const_str_digest_30dda9916d8c4cdcecde2f2c9fa98355, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_350a80d9190e628df96faa9c4d61fc4d = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhooks, mod_consts.const_str_digest_241cc4bccdfab736cdf050d27bb87aae, mod_consts.const_tuple_str_plain_self_str_plain_AsyncWebhooksResource_tuple, NULL, 1, 0, 0);
code_objects_4d5a4ee4a4a64eeb32c30b51bb55931b = MAKE_CODE_OBJECT(module_filename_obj, 575, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhooks, mod_consts.const_str_digest_7cfb2fbbfd8d4d1c78bfa01be862b011, mod_consts.const_tuple_c7c8e8abdd8b71ee48c3bbbd89c156c9_tuple, NULL, 1, 0, 0);
code_objects_38926446f3120a3de859c8f9d9abd843 = MAKE_CODE_OBJECT(module_filename_obj, 625, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhooks, mod_consts.const_str_digest_3cc39dc1dade66fda816b6c53b20953d, mod_consts.const_tuple_str_plain_self_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple, NULL, 1, 0, 0);
code_objects_8758546bb13bae763f0999fa8a6e5e96 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhooks, mod_consts.const_str_digest_599ae04f3abf093df13edf84e3322dc7, mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResource_tuple, NULL, 1, 0, 0);
code_objects_f8b12979de64dfa34f6f21ce7468d823 = MAKE_CODE_OBJECT(module_filename_obj, 550, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhooks, mod_consts.const_str_digest_8b15b7592d60f37dd8a8cb101b0b4b69, mod_consts.const_tuple_str_plain_self_str_plain_WebhooksResourceWithRawResponse_tuple, NULL, 1, 0, 0);
code_objects_2f44b029192cccc002f40996f2a3f375 = MAKE_CODE_OBJECT(module_filename_obj, 600, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_webhooks, mod_consts.const_str_digest_1e60446723ef1fe32d395ea0df7f7ccd, mod_consts.const_tuple_521bcd9a4ef2ee22e855fc2b3129a360_tuple, NULL, 1, 0, 0);
code_objects_8ffe38ac8771b2ff82034f8eaa064df1 = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_66b6ae8d95383342a03f0d85f863e38b, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_02ba327c19da16e5ed55482a32a15316 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_raw_response, mod_consts.const_str_digest_5f52598a10a362047baafea4624b6afc, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_ef602bd17ef770f6bd295c8c975379e3 = MAKE_CODE_OBJECT(module_filename_obj, 389, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_920fad541468cde4cf93a26e64432f1c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_b7bc0ae77f1a42e3ec567a9c59925243 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_with_streaming_response, mod_consts.const_str_digest_5a28cbc5603c6add1e80b5689785670c, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__10__validate_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__11__prepare_options(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__12_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__13__get_api_version_path_param(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__14__make_status_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__15___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__16_interactions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__17_webhooks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__18_agents(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__19_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__20_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__21_qs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__22_auth_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__23_default_headers(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__24__validate_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__25__prepare_options(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__26_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__27__get_api_version_path_param(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__28__make_status_error(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__29___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__2_interactions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__30_interactions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__31_webhooks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__32_agents(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__33___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__34_interactions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__35_webhooks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__36_agents(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__37___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__38_interactions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__39_webhooks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__3_webhooks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__40_agents(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__41___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__42_interactions(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__43_webhooks(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__44_agents(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__4_agents(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__5_with_raw_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__6_with_streaming_response(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__7_qs(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__8_auth_headers(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__9_default_headers(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_google$genai$_interactions$_client$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_key = python_pars[1];
PyObject *par_api_version = python_pars[2];
PyObject *par_base_url = python_pars[3];
PyObject *par_timeout = python_pars[4];
PyObject *par_max_retries = python_pars[5];
PyObject *par_default_headers = python_pars[6];
PyObject *par_default_query = python_pars[7];
PyObject *par_http_client = python_pars[8];
PyObject *par_client_adapter = python_pars[9];
PyObject *par__strict_response_validation = python_pars[10];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c9332dbecd9fb70b64cd3b51a3c9137b, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__1___init__ = cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__1___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_1 = par_api_key;
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


exception_lineno = 105;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__1___init__->m_frame.f_lineno = 105;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_GEMINI_API_KEY_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 105;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_api_key;
    assert(old != NULL);
    par_api_key = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_api_key);
tmp_assattr_value_1 = par_api_key;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_api_key, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 106;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_api_version);
tmp_cmp_expr_left_2 = par_api_version;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_str_plain_v1beta;
{
    PyObject *old = par_api_version;
    assert(old != NULL);
    par_api_version = tmp_assign_source_2;
    Py_INCREF(par_api_version);
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_api_version);
tmp_assattr_value_2 = par_api_version;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_api_version, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_base_url);
tmp_cmp_expr_left_3 = par_base_url;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__1___init__->m_frame.f_lineno = 113;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_GEMINI_NEXT_GEN_API_BASE_URL_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_base_url);
tmp_cmp_expr_left_4 = par_base_url;
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_str_digest_d8738c7113687f5d411b68914287e36c;
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_4;
    Py_INCREF(par_base_url);
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_client_adapter);
tmp_assattr_value_3 = par_client_adapter;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_client_adapter, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 119;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_5 = BUILTIN_SUPER0(tstate, moduledict_google$genai$_interactions$_client, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_google$genai$_interactions$_client$__version__(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___version__);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 120;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_base_url);
tmp_kw_call_value_1_1 = par_base_url;
CHECK_OBJECT(par_max_retries);
tmp_kw_call_value_2_1 = par_max_retries;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
CHECK_OBJECT(par_http_client);
tmp_kw_call_value_4_1 = par_http_client;
CHECK_OBJECT(par_default_headers);
tmp_kw_call_value_5_1 = par_default_headers;
CHECK_OBJECT(par_default_query);
tmp_kw_call_value_6_1 = par_default_query;
CHECK_OBJECT(par__strict_response_validation);
tmp_kw_call_value_7_1 = par__strict_response_validation;
frame_frame_google$genai$_interactions$_client$$$function__1___init__->m_frame.f_lineno = 119;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_5fbbf00de98f97606d73b2624a6f4a81_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = module_var_accessor_google$genai$_interactions$_client$Stream(tstate);
if (unlikely(tmp_assattr_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Stream);
}

if (tmp_assattr_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__default_stream_cls, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;
type_description_1 = "oooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__1___init__,
    type_description_1,
    par_self,
    par_api_key,
    par_api_version,
    par_base_url,
    par_timeout,
    par_max_retries,
    par_default_headers,
    par_default_query,
    par_http_client,
    par_client_adapter,
    par__strict_response_validation,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__1___init__ == cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__);
    cache_frame_frame_google$genai$_interactions$_client$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__1___init__);

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
CHECK_OBJECT(par_api_key);
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
par_api_key = NULL;
CHECK_OBJECT(par_api_version);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
par_api_version = NULL;
CHECK_OBJECT(par_base_url);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
par_base_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_api_key);
par_api_key = NULL;
Py_XDECREF(par_api_version);
par_api_version = NULL;
Py_XDECREF(par_base_url);
par_base_url = NULL;
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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__2_interactions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_InteractionsResource = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__2_interactions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions = MAKE_FUNCTION_FRAME(tstate, code_objects_2e81de58183c182c1f1227df55e08d27, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__2_interactions = cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__2_interactions);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__2_interactions) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_InteractionsResource_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__2_interactions->m_frame.f_lineno = 134;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_InteractionsResource,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_InteractionsResource);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 134;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_InteractionsResource == NULL);
var_InteractionsResource = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_InteractionsResource);
tmp_called_value_1 = var_InteractionsResource;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__2_interactions->m_frame.f_lineno = 136;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__2_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__2_interactions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__2_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__2_interactions,
    type_description_1,
    par_self,
    var_InteractionsResource
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__2_interactions == cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions);
    cache_frame_frame_google$genai$_interactions$_client$$$function__2_interactions = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__2_interactions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_InteractionsResource);
CHECK_OBJECT(var_InteractionsResource);
Py_DECREF(var_InteractionsResource);
var_InteractionsResource = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_InteractionsResource);
var_InteractionsResource = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__3_webhooks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_WebhooksResource = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__3_webhooks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks = MAKE_FUNCTION_FRAME(tstate, code_objects_8758546bb13bae763f0999fa8a6e5e96, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__3_webhooks = cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__3_webhooks);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__3_webhooks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_WebhooksResource_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__3_webhooks->m_frame.f_lineno = 140;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_WebhooksResource,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_WebhooksResource);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 140;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_WebhooksResource == NULL);
var_WebhooksResource = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_WebhooksResource);
tmp_called_value_1 = var_WebhooksResource;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__3_webhooks->m_frame.f_lineno = 142;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__3_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__3_webhooks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__3_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__3_webhooks,
    type_description_1,
    par_self,
    var_WebhooksResource
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__3_webhooks == cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks);
    cache_frame_frame_google$genai$_interactions$_client$$$function__3_webhooks = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__3_webhooks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_WebhooksResource);
CHECK_OBJECT(var_WebhooksResource);
Py_DECREF(var_WebhooksResource);
var_WebhooksResource = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_WebhooksResource);
var_WebhooksResource = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__4_agents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AgentsResource = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__4_agents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents = MAKE_FUNCTION_FRAME(tstate, code_objects_2731449b536f761ab00687f08afd5e19, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__4_agents = cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__4_agents);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__4_agents) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AgentsResource_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__4_agents->m_frame.f_lineno = 146;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AgentsResource,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AgentsResource);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AgentsResource == NULL);
var_AgentsResource = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_AgentsResource);
tmp_called_value_1 = var_AgentsResource;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__4_agents->m_frame.f_lineno = 148;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__4_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__4_agents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__4_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__4_agents,
    type_description_1,
    par_self,
    var_AgentsResource
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__4_agents == cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents);
    cache_frame_frame_google$genai$_interactions$_client$$$function__4_agents = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__4_agents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AgentsResource);
CHECK_OBJECT(var_AgentsResource);
Py_DECREF(var_AgentsResource);
var_AgentsResource = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AgentsResource);
var_AgentsResource = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__5_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_02ba327c19da16e5ed55482a32a15316, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response = cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$GeminiNextGenAPIClientWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 152;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response->m_frame.f_lineno = 152;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 152;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response == cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response);
    cache_frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__5_with_raw_response);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__6_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_b7bc0ae77f1a42e3ec567a9c59925243, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response = cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$GeminiNextGenAPIClientWithStreamedResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 156;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response->m_frame.f_lineno = 156;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response == cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response);
    cache_frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__6_with_streaming_response);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__7_qs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__7_qs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs = MAKE_FUNCTION_FRAME(tstate, code_objects_66dc1e83b9570a570e39d6b8c35213ae, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__7_qs = cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__7_qs);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__7_qs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$Querystring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Querystring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 161;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__7_qs->m_frame.f_lineno = 161;
tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_comma_tuple, 0), mod_consts.const_tuple_str_plain_array_format_tuple);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 161;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__7_qs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__7_qs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__7_qs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__7_qs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__7_qs == cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs);
    cache_frame_frame_google$genai$_interactions$_client$$$function__7_qs = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__7_qs);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__8_auth_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_api_key = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_aaacb0e7de2b8516fd4f09457ff1244e, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers = cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_api_key);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_api_key == NULL);
var_api_key = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers,
    type_description_1,
    par_self,
    var_api_key
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers == cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers);
    cache_frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__8_auth_headers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_api_key);
tmp_cmp_expr_left_1 = var_api_key;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = MAKE_DICT_EMPTY(tstate);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_c6253282a563560f233264b6d3f1f87d;
CHECK_OBJECT(var_api_key);
tmp_dict_value_1 = var_api_key;
tmp_return_value = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_api_key);
CHECK_OBJECT(var_api_key);
Py_DECREF(var_api_key);
var_api_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__9_default_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__9_default_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_e1321f6192957495d6ef95a5169b91c8, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__9_default_headers = cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__9_default_headers);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__9_default_headers) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 175;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_google$genai$_interactions$_client, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_default_headers);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = DICT_COPY(tstate, mod_consts.const_dict_1a8e4fd3086558993b3dcc7ff7e41004);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__custom_headers);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 177;
type_description_1 = "oc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_return_value = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__9_default_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__9_default_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__9_default_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__9_default_headers,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__9_default_headers == cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers);
    cache_frame_frame_google$genai$_interactions$_client$$$function__9_default_headers = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__9_default_headers);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__10__validate_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par_custom_headers = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_3a6f6a57d0f39a5c2f26d0d36a9c99c3, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers = cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_headers);
tmp_expression_value_1 = par_headers;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame.f_lineno = 182;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_2 = par_custom_headers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame.f_lineno = 182;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_3 = par_custom_headers;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame.f_lineno = 182;
tmp_isinstance_inst_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_google$genai$_interactions$_client$Omit(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Omit);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 182;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
int tmp_truth_name_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_api_key);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_headers);
tmp_expression_value_5 = par_headers;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame.f_lineno = 184;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 184;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_4;
int tmp_truth_name_5;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_6 = par_custom_headers;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame.f_lineno = 186;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_7 = par_custom_headers;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame.f_lineno = 186;
tmp_isinstance_inst_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = module_var_accessor_google$genai$_interactions$_client$Omit(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Omit);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 186;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_3 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_c47907662d4ad90861661a0103fb4d89;
frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame.f_lineno = 189;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 189;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers,
    type_description_1,
    par_self,
    par_headers,
    par_custom_headers
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers == cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers);
    cache_frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__10__validate_headers);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_custom_headers);
Py_DECREF(par_custom_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_custom_headers);
Py_DECREF(par_custom_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__11__prepare_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_options = python_pars[1];
PyObject *var_headers = NULL;
PyObject *var_has_auth = NULL;
PyObject *var_adapted_headers = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options = MAKE_FUNCTION_FRAME(tstate, code_objects_906e2586cf0c451bf65149226a0d48e4, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options = cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options) == 2);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_client_adapter);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_client_adapter);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options->m_frame.f_lineno = 195;
tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_vertex_ai);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 195;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
CHECK_OBJECT(par_options);
tmp_return_value = par_options;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_options);
tmp_expression_value_3 = par_options;
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_headers);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 198;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_2);

exception_lineno = 198;
type_description_1 = "ooooo";
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
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_1 = tmp_or_left_value_2;
or_end_2:;
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_headers);
tmp_expression_value_4 = var_headers;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options->m_frame.f_lineno = 199;
tmp_or_left_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_3);

exception_lineno = 199;
type_description_1 = "ooooo";
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
CHECK_OBJECT(var_headers);
tmp_expression_value_5 = var_headers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options->m_frame.f_lineno = 199;
tmp_or_right_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_assign_source_2 = tmp_or_left_value_3;
or_end_3:;
assert(var_has_auth == NULL);
var_has_auth = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_has_auth);
tmp_truth_name_1 = CHECK_IF_TRUE(var_has_auth);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 200;
type_description_1 = "ooooo";
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
CHECK_OBJECT(par_options);
tmp_return_value = par_options;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_client_adapter);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options->m_frame.f_lineno = 203;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_get_auth_headers);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
assert(var_adapted_headers == NULL);
var_adapted_headers = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(var_adapted_headers);
tmp_truth_name_2 = CHECK_IF_TRUE(var_adapted_headers);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_adapted_headers);
tmp_tuple_element_1 = var_adapted_headers;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_headers);
tmp_tuple_element_1 = var_headers;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assattr_value_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_assattr_target_1 = par_options;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_headers, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 205;
type_description_1 = "ooooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;


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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options,
    type_description_1,
    par_self,
    par_options,
    var_headers,
    var_has_auth,
    var_adapted_headers
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options == cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options);
    cache_frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__11__prepare_options);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(par_options);
tmp_return_value = par_options;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_has_auth);
var_has_auth = NULL;
Py_XDECREF(var_adapted_headers);
var_adapted_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_has_auth);
var_has_auth = NULL;
Py_XDECREF(var_adapted_headers);
var_adapted_headers = NULL;
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
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__12_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_key = python_pars[1];
PyObject *par_api_version = python_pars[2];
PyObject *par_base_url = python_pars[3];
PyObject *par_timeout = python_pars[4];
PyObject *par_http_client = python_pars[5];
PyObject *par_max_retries = python_pars[6];
PyObject *par_default_headers = python_pars[7];
PyObject *par_set_default_headers = python_pars[8];
PyObject *par_default_query = python_pars[9];
PyObject *par_set_default_query = python_pars[10];
PyObject *par_client_adapter = python_pars[11];
PyObject *par__extra_kwargs = python_pars[12];
PyObject *var_headers = NULL;
PyObject *var_params = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__12_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_ec4410a9c36abdcedf28c68659ba2b07, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__12_copy = cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__12_copy);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__12_copy) == 2);

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
CHECK_OBJECT(par_default_headers);
tmp_cmp_expr_left_1 = par_default_headers;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_set_default_headers);
tmp_cmp_expr_left_2 = par_set_default_headers;
tmp_cmp_expr_right_2 = Py_None;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3f26214ec9ff8a8b5602bd1132c342f6;
frame_frame_google$genai$_interactions$_client$$$function__12_copy->m_frame.f_lineno = 231;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 231;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_default_query);
tmp_cmp_expr_left_3 = par_default_query;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_set_default_query);
tmp_cmp_expr_left_4 = par_set_default_query;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_c10e02335972e1201099046d6a82ad14;
frame_frame_google$genai$_interactions$_client$$$function__12_copy->m_frame.f_lineno = 234;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 234;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__custom_headers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 236;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_default_headers);
tmp_cmp_expr_left_5 = par_default_headers;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_headers);
tmp_tuple_element_1 = var_headers;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_default_headers);
tmp_tuple_element_1 = par_default_headers;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 238;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_set_default_headers);
tmp_cmp_expr_left_6 = par_set_default_headers;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_set_default_headers);
tmp_assign_source_3 = par_set_default_headers;
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_3;
    Py_INCREF(var_headers);
    Py_DECREF(old);
}

}
branch_no_4:;
branch_end_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__custom_query);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 242;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_params == NULL);
var_params = tmp_assign_source_4;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_default_query);
tmp_cmp_expr_left_7 = par_default_query;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_params);
tmp_tuple_element_2 = var_params;
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_default_query);
tmp_tuple_element_2 = par_default_query;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_2, 1, tmp_tuple_element_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_5 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 244;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_params;
    assert(old != NULL);
    var_params = tmp_assign_source_5;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_set_default_query);
tmp_cmp_expr_left_8 = par_set_default_query;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(par_set_default_query);
tmp_assign_source_6 = par_set_default_query;
{
    PyObject *old = var_params;
    assert(old != NULL);
    var_params = tmp_assign_source_6;
    Py_INCREF(var_params);
    Py_DECREF(old);
}

}
branch_no_6:;
branch_end_5:;
{
PyObject *tmp_assign_source_7;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_http_client);
tmp_or_left_value_1 = par_http_client;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__client);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 248;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_7 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_http_client;
    assert(old != NULL);
    par_http_client = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_api_key;
CHECK_OBJECT(par_api_key);
tmp_or_left_value_2 = par_api_key;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);

exception_lineno = 250;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_api_key);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);

exception_lineno = 250;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_dict_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 9 );
{
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_6;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_expression_value_7;
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_8;
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_9;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
PyObject *tmp_expression_value_10;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_api_version;
CHECK_OBJECT(par_api_version);
tmp_or_left_value_3 = par_api_version;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_or_right_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_api_version);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_dict_value_1 = tmp_or_left_value_3;
or_end_3:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_base_url;
CHECK_OBJECT(par_base_url);
tmp_or_left_value_4 = par_base_url;
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_or_right_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_base_url);
if (tmp_or_right_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
Py_INCREF(tmp_or_left_value_4);
tmp_dict_value_1 = tmp_or_left_value_4;
or_end_4:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(par_timeout);
tmp_isinstance_inst_1 = par_timeout;
tmp_isinstance_cls_1 = module_var_accessor_google$genai$_interactions$_client$NotGiven(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NotGiven);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_timeout);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_timeout);
tmp_dict_value_1 = par_timeout;
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_http_client;
CHECK_OBJECT(par_http_client);
tmp_dict_value_1 = par_http_client;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_retries;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(par_max_retries);
tmp_args_element_value_1 = par_max_retries;
frame_frame_google$genai$_interactions$_client$$$function__12_copy->m_frame.f_lineno = 255;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 255;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(par_max_retries);
tmp_dict_value_1 = par_max_retries;
Py_INCREF(tmp_dict_value_1);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_max_retries);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
condexpr_end_2:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_headers;
CHECK_OBJECT(var_headers);
tmp_dict_value_1 = var_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_query;
CHECK_OBJECT(var_params);
tmp_dict_value_1 = var_params;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client_adapter;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_or_left_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_client_adapter);
if (tmp_or_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_5);

exception_lineno = 258;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(tmp_or_left_value_5);
Py_DECREF(tmp_or_left_value_5);
CHECK_OBJECT(par_client_adapter);
tmp_or_right_value_5 = par_client_adapter;
Py_INCREF(tmp_or_right_value_5);
tmp_dict_value_1 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_dict_value_1 = tmp_or_left_value_5;
or_end_5:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_3);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par__extra_kwargs);
tmp_direct_call_arg3_1 = par__extra_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 249;
type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__12_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__12_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__12_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__12_copy,
    type_description_1,
    par_self,
    par_api_key,
    par_api_version,
    par_base_url,
    par_timeout,
    par_http_client,
    par_max_retries,
    par_default_headers,
    par_set_default_headers,
    par_default_query,
    par_set_default_query,
    par_client_adapter,
    par__extra_kwargs,
    var_headers,
    var_params
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__12_copy == cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy);
    cache_frame_frame_google$genai$_interactions$_client$$$function__12_copy = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__12_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_http_client);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
par_http_client = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_http_client);
par_http_client = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_params);
var_params = NULL;
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
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_set_default_headers);
Py_DECREF(par_set_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_set_default_query);
Py_DECREF(par_set_default_query);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__extra_kwargs);
Py_DECREF(par__extra_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_set_default_headers);
Py_DECREF(par_set_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_set_default_query);
Py_DECREF(par_set_default_query);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__extra_kwargs);
Py_DECREF(par__extra_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__13__get_api_version_path_param(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param = MAKE_FUNCTION_FRAME(tstate, code_objects_72f6818894d2ce2e703ca61d4337da33, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param = cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_api_version);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 267;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param == cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param);
    cache_frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__13__get_api_version_path_param);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__14__make_status_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_err_msg = python_pars[1];
PyObject *par_body = python_pars[2];
PyObject *par_response = python_pars[3];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error = MAKE_FUNCTION_FRAME(tstate, code_objects_834d4399a907214632de1965e2412e3e, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error = cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_400;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 277;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_2 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 278;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_BadRequestError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_1 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_1 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_1 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 278;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 278;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_response);
tmp_expression_value_3 = par_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_401;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 280;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
tmp_expression_value_4 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 281;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AuthenticationError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_2 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_2 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_2 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 281;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 281;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_response);
tmp_expression_value_5 = par_response;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_403;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 283;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
tmp_expression_value_6 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 284;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_PermissionDeniedError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_3 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_3 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_3 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 284;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 284;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_response);
tmp_expression_value_7 = par_response;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_404;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 286;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_4;
tmp_expression_value_8 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_NotFoundError);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_4 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_4 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_4 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 287;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 287;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_response);
tmp_expression_value_9 = par_response;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_409;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_kw_call_dict_value_1_5;
tmp_expression_value_10 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 290;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ConflictError);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_5 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_5 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_5 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 290;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 290;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_response);
tmp_expression_value_11 = par_response;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_422;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 292;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_kw_call_dict_value_0_6;
PyObject *tmp_kw_call_dict_value_1_6;
tmp_expression_value_12 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 293;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_UnprocessableEntityError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_6 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_6 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_6 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 293;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 293;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_response);
tmp_expression_value_13 = par_response;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_429;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 295;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_dict_value_0_7;
PyObject *tmp_kw_call_dict_value_1_7;
tmp_expression_value_14 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 296;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_RateLimitError);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_7 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_7 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_7 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 296;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 296;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_response);
tmp_expression_value_15 = par_response;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_500;
tmp_condition_result_8 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_0_8;
PyObject *tmp_kw_call_dict_value_0_8;
PyObject *tmp_kw_call_dict_value_1_8;
tmp_expression_value_16 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_InternalServerError);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_8 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_8 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_8 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 299;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_8};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_arg_value_0_9;
PyObject *tmp_kw_call_dict_value_0_9;
PyObject *tmp_kw_call_dict_value_1_9;
tmp_called_value_9 = module_var_accessor_google$genai$_interactions$_client$APIStatusError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIStatusError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_9 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_9 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_9 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame.f_lineno = 300;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_9};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_9, tmp_kw_call_dict_value_1_9};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error,
    type_description_1,
    par_self,
    par_err_msg,
    par_body,
    par_response
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error == cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error);
    cache_frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__14__make_status_error);

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
CHECK_OBJECT(par_err_msg);
Py_DECREF(par_err_msg);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_err_msg);
Py_DECREF(par_err_msg);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_key = python_pars[1];
PyObject *par_api_version = python_pars[2];
PyObject *par_base_url = python_pars[3];
PyObject *par_timeout = python_pars[4];
PyObject *par_max_retries = python_pars[5];
PyObject *par_default_headers = python_pars[6];
PyObject *par_default_query = python_pars[7];
PyObject *par_http_client = python_pars[8];
PyObject *par_client_adapter = python_pars[9];
PyObject *par__strict_response_validation = python_pars[10];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_0bada8403ec6aadf3f4b15e02ddd6219, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__15___init__ = cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__15___init__);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__15___init__) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_1 = par_api_key;
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


exception_lineno = 339;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__15___init__->m_frame.f_lineno = 339;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_GEMINI_API_KEY_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_api_key;
    assert(old != NULL);
    par_api_key = tmp_assign_source_1;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_api_key);
tmp_assattr_value_1 = par_api_key;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_api_key, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 340;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_api_version);
tmp_cmp_expr_left_2 = par_api_version;
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
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = mod_consts.const_str_plain_v1beta;
{
    PyObject *old = par_api_version;
    assert(old != NULL);
    par_api_version = tmp_assign_source_2;
    Py_INCREF(par_api_version);
    Py_DECREF(old);
}

}
branch_no_2:;
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_api_version);
tmp_assattr_value_2 = par_api_version;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain_api_version, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 344;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(par_base_url);
tmp_cmp_expr_left_3 = par_base_url;
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
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__15___init__->m_frame.f_lineno = 347;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_GEMINI_NEXT_GEN_API_BASE_URL_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 347;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_base_url);
tmp_cmp_expr_left_4 = par_base_url;
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
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = mod_consts.const_str_digest_d8738c7113687f5d411b68914287e36c;
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_4;
    Py_INCREF(par_base_url);
    Py_DECREF(old);
}

}
branch_no_4:;
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_client_adapter);
tmp_assattr_value_3 = par_client_adapter;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain_client_adapter, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_kw_call_value_2_1;
PyObject *tmp_kw_call_value_3_1;
PyObject *tmp_kw_call_value_4_1;
PyObject *tmp_kw_call_value_5_1;
PyObject *tmp_kw_call_value_6_1;
PyObject *tmp_kw_call_value_7_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 353;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_5 = BUILTIN_SUPER0(tstate, moduledict_google$genai$_interactions$_client, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
tmp_kw_call_value_0_1 = module_var_accessor_google$genai$_interactions$_client$__version__(tstate);
if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain___version__);
}

if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 354;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_base_url);
tmp_kw_call_value_1_1 = par_base_url;
CHECK_OBJECT(par_max_retries);
tmp_kw_call_value_2_1 = par_max_retries;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_3_1 = par_timeout;
CHECK_OBJECT(par_http_client);
tmp_kw_call_value_4_1 = par_http_client;
CHECK_OBJECT(par_default_headers);
tmp_kw_call_value_5_1 = par_default_headers;
CHECK_OBJECT(par_default_query);
tmp_kw_call_value_6_1 = par_default_query;
CHECK_OBJECT(par__strict_response_validation);
tmp_kw_call_value_7_1 = par__strict_response_validation;
frame_frame_google$genai$_interactions$_client$$$function__15___init__->m_frame.f_lineno = 353;
{
    PyObject *kw_values[8] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_5fbbf00de98f97606d73b2624a6f4a81_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_4;
PyObject *tmp_assattr_target_4;
tmp_assattr_value_4 = module_var_accessor_google$genai$_interactions$_client$AsyncStream(tstate);
if (unlikely(tmp_assattr_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_assattr_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 364;
type_description_1 = "oooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__default_stream_cls, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 364;
type_description_1 = "oooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__15___init__,
    type_description_1,
    par_self,
    par_api_key,
    par_api_version,
    par_base_url,
    par_timeout,
    par_max_retries,
    par_default_headers,
    par_default_query,
    par_http_client,
    par_client_adapter,
    par__strict_response_validation,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__15___init__ == cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__);
    cache_frame_frame_google$genai$_interactions$_client$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__15___init__);

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
CHECK_OBJECT(par_api_key);
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
par_api_key = NULL;
CHECK_OBJECT(par_api_version);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
par_api_version = NULL;
CHECK_OBJECT(par_base_url);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
par_base_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_api_key);
par_api_key = NULL;
Py_XDECREF(par_api_version);
par_api_version = NULL;
Py_XDECREF(par_base_url);
par_base_url = NULL;
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
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__16_interactions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncInteractionsResource = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__16_interactions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions = MAKE_FUNCTION_FRAME(tstate, code_objects_f62875a5bca44700b4ae3629b1f855b6, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__16_interactions = cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__16_interactions);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__16_interactions) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncInteractionsResource_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__16_interactions->m_frame.f_lineno = 368;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncInteractionsResource,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncInteractionsResource);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncInteractionsResource == NULL);
var_AsyncInteractionsResource = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_AsyncInteractionsResource);
tmp_called_value_1 = var_AsyncInteractionsResource;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__16_interactions->m_frame.f_lineno = 370;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 370;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__16_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__16_interactions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__16_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__16_interactions,
    type_description_1,
    par_self,
    var_AsyncInteractionsResource
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__16_interactions == cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions);
    cache_frame_frame_google$genai$_interactions$_client$$$function__16_interactions = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__16_interactions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncInteractionsResource);
CHECK_OBJECT(var_AsyncInteractionsResource);
Py_DECREF(var_AsyncInteractionsResource);
var_AsyncInteractionsResource = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncInteractionsResource);
var_AsyncInteractionsResource = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__17_webhooks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncWebhooksResource = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__17_webhooks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks = MAKE_FUNCTION_FRAME(tstate, code_objects_350a80d9190e628df96faa9c4d61fc4d, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__17_webhooks = cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__17_webhooks);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__17_webhooks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncWebhooksResource_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__17_webhooks->m_frame.f_lineno = 374;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncWebhooksResource,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncWebhooksResource);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncWebhooksResource == NULL);
var_AsyncWebhooksResource = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_AsyncWebhooksResource);
tmp_called_value_1 = var_AsyncWebhooksResource;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__17_webhooks->m_frame.f_lineno = 376;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 376;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__17_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__17_webhooks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__17_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__17_webhooks,
    type_description_1,
    par_self,
    var_AsyncWebhooksResource
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__17_webhooks == cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks);
    cache_frame_frame_google$genai$_interactions$_client$$$function__17_webhooks = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__17_webhooks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncWebhooksResource);
CHECK_OBJECT(var_AsyncWebhooksResource);
Py_DECREF(var_AsyncWebhooksResource);
var_AsyncWebhooksResource = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncWebhooksResource);
var_AsyncWebhooksResource = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__18_agents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncAgentsResource = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__18_agents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents = MAKE_FUNCTION_FRAME(tstate, code_objects_ece07d8ad7d12b356f1260c44dbb291f, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__18_agents = cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__18_agents);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__18_agents) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncAgentsResource_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__18_agents->m_frame.f_lineno = 380;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncAgentsResource,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncAgentsResource);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncAgentsResource == NULL);
var_AsyncAgentsResource = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
CHECK_OBJECT(var_AsyncAgentsResource);
tmp_called_value_1 = var_AsyncAgentsResource;
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__18_agents->m_frame.f_lineno = 382;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 382;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__18_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__18_agents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__18_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__18_agents,
    type_description_1,
    par_self,
    var_AsyncAgentsResource
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__18_agents == cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents);
    cache_frame_frame_google$genai$_interactions$_client$$$function__18_agents = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__18_agents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncAgentsResource);
CHECK_OBJECT(var_AsyncAgentsResource);
Py_DECREF(var_AsyncAgentsResource);
var_AsyncAgentsResource = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncAgentsResource);
var_AsyncAgentsResource = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__19_with_raw_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response = MAKE_FUNCTION_FRAME(tstate, code_objects_8ffe38ac8771b2ff82034f8eaa064df1, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response = cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$AsyncGeminiNextGenAPIClientWithRawResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 386;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response->m_frame.f_lineno = 386;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 386;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response == cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response);
    cache_frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__19_with_raw_response);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__20_with_streaming_response(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response = MAKE_FUNCTION_FRAME(tstate, code_objects_ef602bd17ef770f6bd295c8c975379e3, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response = cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$AsyncGeminiNextGenAPIClientWithStreamedResponse(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_args_element_value_1 = par_self;
frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response->m_frame.f_lineno = 390;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response == cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response);
    cache_frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__20_with_streaming_response);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__21_qs(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__21_qs;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs = MAKE_FUNCTION_FRAME(tstate, code_objects_81f06a307bdf318c0fad7dbf4cf2d100, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__21_qs = cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__21_qs);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__21_qs) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$Querystring(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Querystring);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 395;
type_description_1 = "o";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__21_qs->m_frame.f_lineno = 395;
tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_comma_tuple, 0), mod_consts.const_tuple_str_plain_array_format_tuple);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__21_qs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__21_qs->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__21_qs, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__21_qs,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__21_qs == cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs);
    cache_frame_frame_google$genai$_interactions$_client$$$function__21_qs = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__21_qs);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__22_auth_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_api_key = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers = NULL;
PyObject *tmp_return_value = NULL;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_d4ac87a4557fbe77e17d8d3dcb952133, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers = cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_api_key);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_api_key == NULL);
var_api_key = tmp_assign_source_1;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers,
    type_description_1,
    par_self,
    var_api_key
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers == cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers);
    cache_frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__22_auth_headers);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_api_key);
tmp_cmp_expr_left_1 = var_api_key;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
tmp_return_value = MAKE_DICT_EMPTY(tstate);
goto try_return_handler_1;
branch_no_1:;
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_c6253282a563560f233264b6d3f1f87d;
CHECK_OBJECT(var_api_key);
tmp_dict_value_1 = var_api_key;
tmp_return_value = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_api_key);
CHECK_OBJECT(var_api_key);
Py_DECREF(var_api_key);
var_api_key = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__23_default_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__23_default_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_672801351de7d53ee4c701d05d338bbd, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__23_default_headers = cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__23_default_headers);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__23_default_headers) == 2);

// Framed code:
{
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 409;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_google$genai$_interactions$_client, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_default_headers);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = DICT_COPY(tstate, mod_consts.const_dict_1a8e4fd3086558993b3dcc7ff7e41004);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__custom_headers);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_1 = "oc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_return_value = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__23_default_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__23_default_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__23_default_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__23_default_headers,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__23_default_headers == cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers);
    cache_frame_frame_google$genai$_interactions$_client$$$function__23_default_headers = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__23_default_headers);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__24__validate_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_headers = python_pars[1];
PyObject *par_custom_headers = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers = MAKE_FUNCTION_FRAME(tstate, code_objects_0636a1aa34edfd845af610992ec246fd, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers = cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_or_left_truth_1;
nuitka_bool tmp_or_left_value_1;
nuitka_bool tmp_or_right_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_call_result_1;
int tmp_truth_name_1;
int tmp_or_left_truth_2;
nuitka_bool tmp_or_left_value_2;
nuitka_bool tmp_or_right_value_2;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_call_result_2;
int tmp_truth_name_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_headers);
tmp_expression_value_1 = par_headers;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame.f_lineno = 416;
tmp_call_result_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_2 = par_custom_headers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame.f_lineno = 416;
tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_2);

exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_3 = par_custom_headers;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame.f_lineno = 416;
tmp_isinstance_inst_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = module_var_accessor_google$genai$_interactions$_client$Omit(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Omit);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_1);

exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 416;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_or_right_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_or_right_value_1 = tmp_or_left_value_2;
or_end_2:;
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_call_result_3;
int tmp_truth_name_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_api_key);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_headers);
tmp_expression_value_5 = par_headers;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame.f_lineno = 418;
tmp_call_result_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_call_result_3);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_3);

exception_lineno = 418;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
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
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
int tmp_or_left_truth_3;
nuitka_bool tmp_or_left_value_3;
nuitka_bool tmp_or_right_value_3;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_call_result_4;
int tmp_truth_name_5;
PyObject *tmp_isinstance_inst_2;
PyObject *tmp_isinstance_cls_2;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_6 = par_custom_headers;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame.f_lineno = 420;
tmp_call_result_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_5 = CHECK_IF_TRUE(tmp_call_result_4);
if (tmp_truth_name_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_4);

exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_custom_headers);
tmp_expression_value_7 = par_custom_headers;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame.f_lineno = 420;
tmp_isinstance_inst_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_isinstance_inst_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_2 = module_var_accessor_google$genai$_interactions$_client$Omit(tstate);
if (unlikely(tmp_isinstance_cls_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Omit);
}

if (tmp_isinstance_cls_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_isinstance_inst_2);

exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
CHECK_OBJECT(tmp_isinstance_inst_2);
Py_DECREF(tmp_isinstance_inst_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 420;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_condition_result_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_condition_result_3 = tmp_or_left_value_3;
or_end_3:;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(tmp_return_value);
goto frame_return_exit_1;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_c47907662d4ad90861661a0103fb4d89;
frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame.f_lineno = 423;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 423;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers,
    type_description_1,
    par_self,
    par_headers,
    par_custom_headers
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers == cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers);
    cache_frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__24__validate_headers);

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
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_custom_headers);
Py_DECREF(par_custom_headers);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_headers);
Py_DECREF(par_headers);
CHECK_OBJECT(par_custom_headers);
Py_DECREF(par_custom_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__25__prepare_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_options = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_options;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_options);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
par_options = NULL;
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
struct google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options_locals {
PyObject *var_headers;
PyObject *var_has_auth;
PyObject *var_adapted_headers;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
PyObject *tmp_return_value;
char yield_tmps[1024];
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options_locals *coroutine_heap = (struct google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_headers = NULL;
coroutine_heap->var_has_auth = NULL;
coroutine_heap->var_adapted_headers = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_b3ff1cd98c9080e6e81ecc35dfaf5264, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
coroutine->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

assert(coroutine->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
assert(Py_REFCNT(coroutine->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_COROUTINE_EXCEPTION(tstate, coroutine);

// Framed code:
{
bool tmp_condition_result_1;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 429;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_client_adapter);
if (tmp_operand_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 429;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 429;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_or_left_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 429;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_client_adapter);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 429;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 429;
tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_is_vertex_ai);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_operand_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 429;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 429;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
tmp_condition_result_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_1 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 430;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 432;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_headers);
if (tmp_or_left_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 432;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_or_left_value_2);

coroutine_heap->exception_lineno = 432;
coroutine_heap->type_description_1 = "ccooo";
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
tmp_or_right_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_assign_source_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
tmp_assign_source_1 = tmp_or_left_value_2;
or_end_2:;
assert(coroutine_heap->var_headers == NULL);
coroutine_heap->var_headers = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_expression_value_4 = coroutine_heap->var_headers;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, const_str_plain_get);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 433;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 433;
tmp_or_left_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_or_left_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 433;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_or_left_value_3);

coroutine_heap->exception_lineno = 433;
coroutine_heap->type_description_1 = "ccooo";
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
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_expression_value_5 = coroutine_heap->var_headers;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 433;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 433;
tmp_or_right_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_digest_c6253282a563560f233264b6d3f1f87d_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 433;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
tmp_assign_source_2 = tmp_or_left_value_3;
or_end_3:;
assert(coroutine_heap->var_has_auth == NULL);
coroutine_heap->var_has_auth = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(coroutine_heap->var_has_auth);
tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_has_auth);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 434;
coroutine_heap->type_description_1 = "ccooo";
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
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 435;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;
branch_no_2:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_8;
coroutine->m_frame->m_frame.f_lineno = 437;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 437;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_client_adapter);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 437;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 437;
tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_async_get_auth_headers);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 437;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_normal);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 437;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_6;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 437;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = yield_return_value;
assert(coroutine_heap->var_adapted_headers == NULL);
coroutine_heap->var_adapted_headers = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_3;
int tmp_truth_name_2;
CHECK_OBJECT(coroutine_heap->var_adapted_headers);
tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_adapted_headers);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 438;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(coroutine_heap->var_adapted_headers);
tmp_tuple_element_1 = coroutine_heap->var_adapted_headers;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_tuple_element_1 = coroutine_heap->var_headers;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assattr_value_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assattr_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 439;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_assattr_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 439;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_headers, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 439;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}
}
branch_no_3:;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 443;
coroutine_heap->type_description_1 = "ccooo";
    goto frame_exception_exit_1;
}

coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(coroutine_heap->tmp_return_value);
goto frame_return_exit_1;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

goto try_return_handler_1;

frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &coroutine_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    } else if ((coroutine_heap->exception_lineno != 0) && (exception_tb->tb_frame != &coroutine->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    coroutine->m_frame,
    coroutine_heap->type_description_1,
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_headers,
    coroutine_heap->var_has_auth,
    coroutine_heap->var_adapted_headers
);


    // Release cached frame if used for exception.
    if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(coroutine->m_frame);
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
Py_XDECREF(coroutine_heap->var_has_auth);
coroutine_heap->var_has_auth = NULL;
Py_XDECREF(coroutine_heap->var_adapted_headers);
coroutine_heap->var_adapted_headers = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
Py_XDECREF(coroutine_heap->var_has_auth);
coroutine_heap->var_has_auth = NULL;
Py_XDECREF(coroutine_heap->var_adapted_headers);
coroutine_heap->var_adapted_headers = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options_context,
        module_google$genai$_interactions$_client,
        mod_consts.const_str_plain__prepare_options,
        mod_consts.const_str_digest_0808f99cf3f9bb776c2337daad38a02f,
        code_objects_b3ff1cd98c9080e6e81ecc35dfaf5264,
        closure,
        2,
#if 1
        sizeof(struct google$genai$_interactions$_client$$$function__25__prepare_options$$$coroutine__1__prepare_options_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$_interactions$_client$$$function__26_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_key = python_pars[1];
PyObject *par_api_version = python_pars[2];
PyObject *par_base_url = python_pars[3];
PyObject *par_timeout = python_pars[4];
PyObject *par_http_client = python_pars[5];
PyObject *par_max_retries = python_pars[6];
PyObject *par_default_headers = python_pars[7];
PyObject *par_set_default_headers = python_pars[8];
PyObject *par_default_query = python_pars[9];
PyObject *par_set_default_query = python_pars[10];
PyObject *par_client_adapter = python_pars[11];
PyObject *par__extra_kwargs = python_pars[12];
PyObject *var_headers = NULL;
PyObject *var_params = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__26_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_cc05708c9da7d96bc39ca3735dcb3bcc, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__26_copy = cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__26_copy);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__26_copy) == 2);

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
CHECK_OBJECT(par_default_headers);
tmp_cmp_expr_left_1 = par_default_headers;
tmp_cmp_expr_right_1 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_set_default_headers);
tmp_cmp_expr_left_2 = par_set_default_headers;
tmp_cmp_expr_right_2 = Py_None;
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
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_3f26214ec9ff8a8b5602bd1132c342f6;
frame_frame_google$genai$_interactions$_client$$$function__26_copy->m_frame.f_lineno = 465;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 465;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(par_default_query);
tmp_cmp_expr_left_3 = par_default_query;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_set_default_query);
tmp_cmp_expr_left_4 = par_set_default_query;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
tmp_condition_result_2 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_condition_result_2 = tmp_and_left_value_2;
and_end_2:;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_c10e02335972e1201099046d6a82ad14;
frame_frame_google$genai$_interactions$_client$$$function__26_copy->m_frame.f_lineno = 468;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 468;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__custom_headers);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 470;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_default_headers);
tmp_cmp_expr_left_5 = par_default_headers;
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(var_headers);
tmp_tuple_element_1 = var_headers;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(par_default_headers);
tmp_tuple_element_1 = par_default_headers;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_2;
    Py_DECREF(old);
}

}
goto branch_end_3;
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_set_default_headers);
tmp_cmp_expr_left_6 = par_set_default_headers;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
CHECK_OBJECT(par_set_default_headers);
tmp_assign_source_3 = par_set_default_headers;
{
    PyObject *old = var_headers;
    assert(old != NULL);
    var_headers = tmp_assign_source_3;
    Py_INCREF(var_headers);
    Py_DECREF(old);
}

}
branch_no_4:;
branch_end_3:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__custom_query);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 476;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
assert(var_params == NULL);
var_params = tmp_assign_source_4;
}
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_default_query);
tmp_cmp_expr_left_7 = par_default_query;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_2;
CHECK_OBJECT(var_params);
tmp_tuple_element_2 = var_params;
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_2, 0, tmp_tuple_element_2);
CHECK_OBJECT(par_default_query);
tmp_tuple_element_2 = par_default_query;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_2, 1, tmp_tuple_element_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_5 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = var_params;
    assert(old != NULL);
    var_params = tmp_assign_source_5;
    Py_DECREF(old);
}

}
goto branch_end_5;
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_set_default_query);
tmp_cmp_expr_left_8 = par_set_default_query;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_6;
CHECK_OBJECT(par_set_default_query);
tmp_assign_source_6 = par_set_default_query;
{
    PyObject *old = var_params;
    assert(old != NULL);
    var_params = tmp_assign_source_6;
    Py_INCREF(var_params);
    Py_DECREF(old);
}

}
branch_no_6:;
branch_end_5:;
{
PyObject *tmp_assign_source_7;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_http_client);
tmp_or_left_value_1 = par_http_client;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__client);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 482;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_assign_source_7 = tmp_or_left_value_1;
or_end_1:;
{
    PyObject *old = par_http_client;
    assert(old != NULL);
    par_http_client = tmp_assign_source_7;
    Py_DECREF(old);
}

}
{
PyObject *tmp_direct_call_arg1_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_direct_call_arg2_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_direct_call_arg3_1;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_direct_call_arg1_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_4);
if (tmp_direct_call_arg1_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_api_key;
CHECK_OBJECT(par_api_key);
tmp_or_left_value_2 = par_api_key;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);

exception_lineno = 484;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_api_key);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_direct_call_arg1_3);

exception_lineno = 484;
type_description_1 = "ooooooooooooooo";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_dict_value_1 = tmp_or_left_value_2;
or_end_2:;
tmp_direct_call_arg2_1 = _PyDict_NewPresized( 9 );
{
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_6;
int tmp_or_left_truth_4;
PyObject *tmp_or_left_value_4;
PyObject *tmp_or_right_value_4;
PyObject *tmp_expression_value_7;
nuitka_bool tmp_condition_result_7;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_expression_value_8;
nuitka_bool tmp_condition_result_8;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
PyObject *tmp_expression_value_9;
int tmp_or_left_truth_5;
PyObject *tmp_or_left_value_5;
PyObject *tmp_or_right_value_5;
PyObject *tmp_expression_value_10;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_api_version;
CHECK_OBJECT(par_api_version);
tmp_or_left_value_3 = par_api_version;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_or_right_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_api_version);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_dict_value_1 = tmp_or_left_value_3;
or_end_3:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_base_url;
CHECK_OBJECT(par_base_url);
tmp_or_left_value_4 = par_base_url;
tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
if (tmp_or_left_truth_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_4 == 1) {
    goto or_left_4;
} else {
    goto or_right_4;
}
or_right_4:;
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_or_right_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_base_url);
if (tmp_or_right_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 486;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_dict_value_1 = tmp_or_right_value_4;
goto or_end_4;
or_left_4:;
Py_INCREF(tmp_or_left_value_4);
tmp_dict_value_1 = tmp_or_left_value_4;
or_end_4:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
CHECK_OBJECT(par_timeout);
tmp_isinstance_inst_1 = par_timeout;
tmp_isinstance_cls_1 = module_var_accessor_google$genai$_interactions$_client$NotGiven(tstate);
if (unlikely(tmp_isinstance_cls_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NotGiven);
}

if (tmp_isinstance_cls_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 487;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_8 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_timeout);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 487;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
goto condexpr_end_1;
condexpr_false_1:;
CHECK_OBJECT(par_timeout);
tmp_dict_value_1 = par_timeout;
Py_INCREF(tmp_dict_value_1);
condexpr_end_1:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_http_client;
CHECK_OBJECT(par_http_client);
tmp_dict_value_1 = par_http_client;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_retries;
tmp_called_value_1 = module_var_accessor_google$genai$_interactions$_client$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 489;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
CHECK_OBJECT(par_max_retries);
tmp_args_element_value_1 = par_max_retries;
frame_frame_google$genai$_interactions$_client$$$function__26_copy->m_frame.f_lineno = 489;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 489;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(par_max_retries);
tmp_dict_value_1 = par_max_retries;
Py_INCREF(tmp_dict_value_1);
goto condexpr_end_2;
condexpr_false_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_9 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_max_retries);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
condexpr_end_2:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_headers;
CHECK_OBJECT(var_headers);
tmp_dict_value_1 = var_headers;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_query;
CHECK_OBJECT(var_params);
tmp_dict_value_1 = var_params;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client_adapter;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_or_left_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_client_adapter);
if (tmp_or_left_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 492;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
if (tmp_or_left_truth_5 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_5);

exception_lineno = 492;
type_description_1 = "ooooooooooooooo";
    goto dict_build_exception_1;
}
if (tmp_or_left_truth_5 == 1) {
    goto or_left_5;
} else {
    goto or_right_5;
}
or_right_5:;
CHECK_OBJECT(tmp_or_left_value_5);
Py_DECREF(tmp_or_left_value_5);
CHECK_OBJECT(par_client_adapter);
tmp_or_right_value_5 = par_client_adapter;
Py_INCREF(tmp_or_right_value_5);
tmp_dict_value_1 = tmp_or_right_value_5;
goto or_end_5;
or_left_5:;
tmp_dict_value_1 = tmp_or_left_value_5;
or_end_5:;
tmp_res = PyDict_SetItem(tmp_direct_call_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_direct_call_arg1_3);
Py_DECREF(tmp_direct_call_arg2_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
CHECK_OBJECT(par__extra_kwargs);
tmp_direct_call_arg3_1 = par__extra_kwargs;
Py_INCREF(tmp_direct_call_arg3_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3, tmp_direct_call_arg2_1, tmp_direct_call_arg3_1};
    tmp_return_value = impl___main__$$$helper_function_complex_call_helper_keywords_star_dict(tstate, dir_call_args);
}
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 483;
type_description_1 = "ooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__26_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__26_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__26_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__26_copy,
    type_description_1,
    par_self,
    par_api_key,
    par_api_version,
    par_base_url,
    par_timeout,
    par_http_client,
    par_max_retries,
    par_default_headers,
    par_set_default_headers,
    par_default_query,
    par_set_default_query,
    par_client_adapter,
    par__extra_kwargs,
    var_headers,
    var_params
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__26_copy == cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy);
    cache_frame_frame_google$genai$_interactions$_client$$$function__26_copy = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__26_copy);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(par_http_client);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
par_http_client = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_params);
CHECK_OBJECT(var_params);
Py_DECREF(var_params);
var_params = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_http_client);
par_http_client = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_params);
var_params = NULL;
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
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_set_default_headers);
Py_DECREF(par_set_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_set_default_query);
Py_DECREF(par_set_default_query);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__extra_kwargs);
Py_DECREF(par__extra_kwargs);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_set_default_headers);
Py_DECREF(par_set_default_headers);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
CHECK_OBJECT(par_set_default_query);
Py_DECREF(par_set_default_query);
CHECK_OBJECT(par_client_adapter);
Py_DECREF(par_client_adapter);
CHECK_OBJECT(par__extra_kwargs);
Py_DECREF(par__extra_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__27__get_api_version_path_param(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param = MAKE_FUNCTION_FRAME(tstate, code_objects_fe42625759ca9335af6b5b3c4b2ab349, module_google$genai$_interactions$_client, sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param = cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param) == 2);

// Framed code:
{
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_api_version);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param,
    type_description_1,
    par_self
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param == cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param);
    cache_frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__27__get_api_version_path_param);

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


static PyObject *impl_google$genai$_interactions$_client$$$function__28__make_status_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_err_msg = python_pars[1];
PyObject *par_body = python_pars[2];
PyObject *par_response = python_pars[3];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error = MAKE_FUNCTION_FRAME(tstate, code_objects_55d940672c7c4c708909215bc1a8438a, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error = cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_response);
tmp_expression_value_1 = par_response;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_int_pos_400;
tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 511;
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
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
PyObject *tmp_kw_call_dict_value_1_1;
tmp_expression_value_2 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 512;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_BadRequestError);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_1 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_1 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_1 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 512;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 512;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_response);
tmp_expression_value_3 = par_response;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = mod_consts.const_int_pos_401;
tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_4;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
PyObject *tmp_kw_call_dict_value_1_2;
tmp_expression_value_4 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 515;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_AuthenticationError);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_2 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_2 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_2 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 515;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_response);
tmp_expression_value_5 = par_response;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = mod_consts.const_int_pos_403;
tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
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
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_6;
PyObject *tmp_kw_call_arg_value_0_3;
PyObject *tmp_kw_call_dict_value_0_3;
PyObject *tmp_kw_call_dict_value_1_3;
tmp_expression_value_6 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 518;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_PermissionDeniedError);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_3 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_3 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_3 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 518;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_3};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_3:;
{
nuitka_bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(par_response);
tmp_expression_value_7 = par_response;
tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = mod_consts.const_int_pos_404;
tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 520;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_8;
PyObject *tmp_kw_call_arg_value_0_4;
PyObject *tmp_kw_call_dict_value_0_4;
PyObject *tmp_kw_call_dict_value_1_4;
tmp_expression_value_8 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 521;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_NotFoundError);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_4 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_4 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_4 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 521;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_4};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 521;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_4:;
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(par_response);
tmp_expression_value_9 = par_response;
tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = mod_consts.const_int_pos_409;
tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_arg_value_0_5;
PyObject *tmp_kw_call_dict_value_0_5;
PyObject *tmp_kw_call_dict_value_1_5;
tmp_expression_value_10 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 524;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_ConflictError);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_5 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_5 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_5 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 524;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_5};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 524;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_5:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(par_response);
tmp_expression_value_11 = par_response;
tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = mod_consts.const_int_pos_422;
tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 526;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_arg_value_0_6;
PyObject *tmp_kw_call_dict_value_0_6;
PyObject *tmp_kw_call_dict_value_1_6;
tmp_expression_value_12 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 527;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_UnprocessableEntityError);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_6 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_6 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_6 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 527;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_6};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_6, tmp_kw_call_dict_value_1_6};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_6, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 527;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_6:;
{
nuitka_bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(par_response);
tmp_expression_value_13 = par_response;
tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = mod_consts.const_int_pos_429;
tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_arg_value_0_7;
PyObject *tmp_kw_call_dict_value_0_7;
PyObject *tmp_kw_call_dict_value_1_7;
tmp_expression_value_14 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 530;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_RateLimitError);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_7 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_7 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_7 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 530;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_7};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_7};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_7:;
{
nuitka_bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_expression_value_15;
CHECK_OBJECT(par_response);
tmp_expression_value_15 = par_response;
tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_status_code);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = mod_consts.const_int_pos_500;
tmp_condition_result_8 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_arg_value_0_8;
PyObject *tmp_kw_call_dict_value_0_8;
PyObject *tmp_kw_call_dict_value_1_8;
tmp_expression_value_16 = module_var_accessor_google$genai$_interactions$_client$_exceptions(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__exceptions);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 533;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_InternalServerError);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_8 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_8 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_8 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 533;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_8};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_8, tmp_kw_call_dict_value_1_8};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_8:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_kw_call_arg_value_0_9;
PyObject *tmp_kw_call_dict_value_0_9;
PyObject *tmp_kw_call_dict_value_1_9;
tmp_called_value_9 = module_var_accessor_google$genai$_interactions$_client$APIStatusError(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_APIStatusError);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 534;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_err_msg);
tmp_kw_call_arg_value_0_9 = par_err_msg;
CHECK_OBJECT(par_response);
tmp_kw_call_dict_value_0_9 = par_response;
CHECK_OBJECT(par_body);
tmp_kw_call_dict_value_1_9 = par_body;
frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame.f_lineno = 534;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_9};
    PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_9, tmp_kw_call_dict_value_1_9};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_body_tuple);
}

if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error,
    type_description_1,
    par_self,
    par_err_msg,
    par_body,
    par_response
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error == cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error);
    cache_frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__28__make_status_error);

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
CHECK_OBJECT(par_err_msg);
Py_DECREF(par_err_msg);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_err_msg);
Py_DECREF(par_err_msg);
CHECK_OBJECT(par_body);
Py_DECREF(par_body);
CHECK_OBJECT(par_response);
Py_DECREF(par_response);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__29___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_client = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__29___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_bb641fe502317f6aa3e1c141a612fe3c, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__29___init__ = cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__29___init__);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__29___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_client);
tmp_assattr_value_1 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__client, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 541;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__29___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__29___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__29___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__29___init__,
    type_description_1,
    par_self,
    par_client
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__29___init__ == cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__);
    cache_frame_frame_google$genai$_interactions$_client$$$function__29___init__ = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__29___init__);

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
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__30_interactions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_InteractionsResourceWithRawResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__30_interactions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions = MAKE_FUNCTION_FRAME(tstate, code_objects_b34c47cd79f65a2a5a0ed00931c50c9d, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__30_interactions = cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__30_interactions);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__30_interactions) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_InteractionsResourceWithRawResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__30_interactions->m_frame.f_lineno = 545;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_InteractionsResourceWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_InteractionsResourceWithRawResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 545;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_InteractionsResourceWithRawResponse == NULL);
var_InteractionsResourceWithRawResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_InteractionsResourceWithRawResponse);
tmp_called_value_1 = var_InteractionsResourceWithRawResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_interactions);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__30_interactions->m_frame.f_lineno = 547;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__30_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__30_interactions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__30_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__30_interactions,
    type_description_1,
    par_self,
    var_InteractionsResourceWithRawResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__30_interactions == cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions);
    cache_frame_frame_google$genai$_interactions$_client$$$function__30_interactions = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__30_interactions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_InteractionsResourceWithRawResponse);
CHECK_OBJECT(var_InteractionsResourceWithRawResponse);
Py_DECREF(var_InteractionsResourceWithRawResponse);
var_InteractionsResourceWithRawResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_InteractionsResourceWithRawResponse);
var_InteractionsResourceWithRawResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__31_webhooks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_WebhooksResourceWithRawResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__31_webhooks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks = MAKE_FUNCTION_FRAME(tstate, code_objects_f8b12979de64dfa34f6f21ce7468d823, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__31_webhooks = cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__31_webhooks);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__31_webhooks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_WebhooksResourceWithRawResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__31_webhooks->m_frame.f_lineno = 551;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_WebhooksResourceWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_WebhooksResourceWithRawResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 551;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_WebhooksResourceWithRawResponse == NULL);
var_WebhooksResourceWithRawResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_WebhooksResourceWithRawResponse);
tmp_called_value_1 = var_WebhooksResourceWithRawResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_webhooks);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__31_webhooks->m_frame.f_lineno = 553;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__31_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__31_webhooks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__31_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__31_webhooks,
    type_description_1,
    par_self,
    var_WebhooksResourceWithRawResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__31_webhooks == cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks);
    cache_frame_frame_google$genai$_interactions$_client$$$function__31_webhooks = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__31_webhooks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_WebhooksResourceWithRawResponse);
CHECK_OBJECT(var_WebhooksResourceWithRawResponse);
Py_DECREF(var_WebhooksResourceWithRawResponse);
var_WebhooksResourceWithRawResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_WebhooksResourceWithRawResponse);
var_WebhooksResourceWithRawResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__32_agents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AgentsResourceWithRawResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__32_agents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents = MAKE_FUNCTION_FRAME(tstate, code_objects_7abe42ebd3b6c1e486db2ee822bf6709, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__32_agents = cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__32_agents);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__32_agents) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AgentsResourceWithRawResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__32_agents->m_frame.f_lineno = 557;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AgentsResourceWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AgentsResourceWithRawResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 557;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AgentsResourceWithRawResponse == NULL);
var_AgentsResourceWithRawResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AgentsResourceWithRawResponse);
tmp_called_value_1 = var_AgentsResourceWithRawResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_agents);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__32_agents->m_frame.f_lineno = 559;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 559;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__32_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__32_agents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__32_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__32_agents,
    type_description_1,
    par_self,
    var_AgentsResourceWithRawResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__32_agents == cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents);
    cache_frame_frame_google$genai$_interactions$_client$$$function__32_agents = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__32_agents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AgentsResourceWithRawResponse);
CHECK_OBJECT(var_AgentsResourceWithRawResponse);
Py_DECREF(var_AgentsResourceWithRawResponse);
var_AgentsResourceWithRawResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AgentsResourceWithRawResponse);
var_AgentsResourceWithRawResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__33___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_client = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__33___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_fdd11ec129248ccc111aab65c411356e, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__33___init__ = cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__33___init__);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__33___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_client);
tmp_assattr_value_1 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__client, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__33___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__33___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__33___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__33___init__,
    type_description_1,
    par_self,
    par_client
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__33___init__ == cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__);
    cache_frame_frame_google$genai$_interactions$_client$$$function__33___init__ = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__33___init__);

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
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__34_interactions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncInteractionsResourceWithRawResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__34_interactions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions = MAKE_FUNCTION_FRAME(tstate, code_objects_237e5c0c8b5d8423c5c573b2921dfc70, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__34_interactions = cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__34_interactions);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__34_interactions) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncInteractionsResourceWithRawResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__34_interactions->m_frame.f_lineno = 570;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncInteractionsResourceWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncInteractionsResourceWithRawResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 570;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncInteractionsResourceWithRawResponse == NULL);
var_AsyncInteractionsResourceWithRawResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AsyncInteractionsResourceWithRawResponse);
tmp_called_value_1 = var_AsyncInteractionsResourceWithRawResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_interactions);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__34_interactions->m_frame.f_lineno = 572;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 572;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__34_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__34_interactions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__34_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__34_interactions,
    type_description_1,
    par_self,
    var_AsyncInteractionsResourceWithRawResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__34_interactions == cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions);
    cache_frame_frame_google$genai$_interactions$_client$$$function__34_interactions = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__34_interactions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncInteractionsResourceWithRawResponse);
CHECK_OBJECT(var_AsyncInteractionsResourceWithRawResponse);
Py_DECREF(var_AsyncInteractionsResourceWithRawResponse);
var_AsyncInteractionsResourceWithRawResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncInteractionsResourceWithRawResponse);
var_AsyncInteractionsResourceWithRawResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__35_webhooks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncWebhooksResourceWithRawResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__35_webhooks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks = MAKE_FUNCTION_FRAME(tstate, code_objects_4d5a4ee4a4a64eeb32c30b51bb55931b, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__35_webhooks = cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__35_webhooks);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__35_webhooks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncWebhooksResourceWithRawResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__35_webhooks->m_frame.f_lineno = 576;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncWebhooksResourceWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncWebhooksResourceWithRawResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncWebhooksResourceWithRawResponse == NULL);
var_AsyncWebhooksResourceWithRawResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AsyncWebhooksResourceWithRawResponse);
tmp_called_value_1 = var_AsyncWebhooksResourceWithRawResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_webhooks);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__35_webhooks->m_frame.f_lineno = 578;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 578;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__35_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__35_webhooks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__35_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__35_webhooks,
    type_description_1,
    par_self,
    var_AsyncWebhooksResourceWithRawResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__35_webhooks == cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks);
    cache_frame_frame_google$genai$_interactions$_client$$$function__35_webhooks = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__35_webhooks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncWebhooksResourceWithRawResponse);
CHECK_OBJECT(var_AsyncWebhooksResourceWithRawResponse);
Py_DECREF(var_AsyncWebhooksResourceWithRawResponse);
var_AsyncWebhooksResourceWithRawResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncWebhooksResourceWithRawResponse);
var_AsyncWebhooksResourceWithRawResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__36_agents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncAgentsResourceWithRawResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__36_agents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents = MAKE_FUNCTION_FRAME(tstate, code_objects_0fc820c00c1245e74b0d920f9022bc6a, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__36_agents = cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__36_agents);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__36_agents) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithRawResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__36_agents->m_frame.f_lineno = 582;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncAgentsResourceWithRawResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncAgentsResourceWithRawResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncAgentsResourceWithRawResponse == NULL);
var_AsyncAgentsResourceWithRawResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AsyncAgentsResourceWithRawResponse);
tmp_called_value_1 = var_AsyncAgentsResourceWithRawResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_agents);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__36_agents->m_frame.f_lineno = 584;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 584;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__36_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__36_agents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__36_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__36_agents,
    type_description_1,
    par_self,
    var_AsyncAgentsResourceWithRawResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__36_agents == cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents);
    cache_frame_frame_google$genai$_interactions$_client$$$function__36_agents = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__36_agents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncAgentsResourceWithRawResponse);
CHECK_OBJECT(var_AsyncAgentsResourceWithRawResponse);
Py_DECREF(var_AsyncAgentsResourceWithRawResponse);
var_AsyncAgentsResourceWithRawResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncAgentsResourceWithRawResponse);
var_AsyncAgentsResourceWithRawResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__37___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_client = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__37___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_f6f068e534838ff9fb1a4d22777b77df, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__37___init__ = cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__37___init__);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__37___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_client);
tmp_assattr_value_1 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__client, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__37___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__37___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__37___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__37___init__,
    type_description_1,
    par_self,
    par_client
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__37___init__ == cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__);
    cache_frame_frame_google$genai$_interactions$_client$$$function__37___init__ = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__37___init__);

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
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__38_interactions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_InteractionsResourceWithStreamingResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__38_interactions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions = MAKE_FUNCTION_FRAME(tstate, code_objects_4d49e147ac82b52d63ba8f0440a1aba0, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__38_interactions = cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__38_interactions);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__38_interactions) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_digest_a185c098286693144d4cdf08c77a8fa7_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__38_interactions->m_frame.f_lineno = 595;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 595;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_digest_a185c098286693144d4cdf08c77a8fa7,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_digest_a185c098286693144d4cdf08c77a8fa7);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 595;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_InteractionsResourceWithStreamingResponse == NULL);
var_InteractionsResourceWithStreamingResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_InteractionsResourceWithStreamingResponse);
tmp_called_value_1 = var_InteractionsResourceWithStreamingResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_interactions);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__38_interactions->m_frame.f_lineno = 597;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 597;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__38_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__38_interactions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__38_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__38_interactions,
    type_description_1,
    par_self,
    var_InteractionsResourceWithStreamingResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__38_interactions == cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions);
    cache_frame_frame_google$genai$_interactions$_client$$$function__38_interactions = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__38_interactions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_InteractionsResourceWithStreamingResponse);
CHECK_OBJECT(var_InteractionsResourceWithStreamingResponse);
Py_DECREF(var_InteractionsResourceWithStreamingResponse);
var_InteractionsResourceWithStreamingResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_InteractionsResourceWithStreamingResponse);
var_InteractionsResourceWithStreamingResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__39_webhooks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_WebhooksResourceWithStreamingResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__39_webhooks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks = MAKE_FUNCTION_FRAME(tstate, code_objects_2f44b029192cccc002f40996f2a3f375, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__39_webhooks = cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__39_webhooks);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__39_webhooks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_WebhooksResourceWithStreamingResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__39_webhooks->m_frame.f_lineno = 601;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_WebhooksResourceWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_WebhooksResourceWithStreamingResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 601;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_WebhooksResourceWithStreamingResponse == NULL);
var_WebhooksResourceWithStreamingResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_WebhooksResourceWithStreamingResponse);
tmp_called_value_1 = var_WebhooksResourceWithStreamingResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_webhooks);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__39_webhooks->m_frame.f_lineno = 603;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__39_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__39_webhooks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__39_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__39_webhooks,
    type_description_1,
    par_self,
    var_WebhooksResourceWithStreamingResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__39_webhooks == cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks);
    cache_frame_frame_google$genai$_interactions$_client$$$function__39_webhooks = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__39_webhooks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_WebhooksResourceWithStreamingResponse);
CHECK_OBJECT(var_WebhooksResourceWithStreamingResponse);
Py_DECREF(var_WebhooksResourceWithStreamingResponse);
var_WebhooksResourceWithStreamingResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_WebhooksResourceWithStreamingResponse);
var_WebhooksResourceWithStreamingResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__40_agents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AgentsResourceWithStreamingResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__40_agents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents = MAKE_FUNCTION_FRAME(tstate, code_objects_ad8031f71d9becd9f6295df75ff14403, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__40_agents = cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__40_agents);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__40_agents) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AgentsResourceWithStreamingResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__40_agents->m_frame.f_lineno = 607;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AgentsResourceWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AgentsResourceWithStreamingResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 607;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AgentsResourceWithStreamingResponse == NULL);
var_AgentsResourceWithStreamingResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AgentsResourceWithStreamingResponse);
tmp_called_value_1 = var_AgentsResourceWithStreamingResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_agents);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__40_agents->m_frame.f_lineno = 609;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__40_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__40_agents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__40_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__40_agents,
    type_description_1,
    par_self,
    var_AgentsResourceWithStreamingResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__40_agents == cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents);
    cache_frame_frame_google$genai$_interactions$_client$$$function__40_agents = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__40_agents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AgentsResourceWithStreamingResponse);
CHECK_OBJECT(var_AgentsResourceWithStreamingResponse);
Py_DECREF(var_AgentsResourceWithStreamingResponse);
var_AgentsResourceWithStreamingResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AgentsResourceWithStreamingResponse);
var_AgentsResourceWithStreamingResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__41___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_client = python_pars[1];
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__41___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_c7e93d2dd074c139ee3ef1978ee458d1, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__41___init__ = cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__41___init__);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__41___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_client);
tmp_assattr_value_1 = par_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__client, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__41___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__41___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__41___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__41___init__,
    type_description_1,
    par_self,
    par_client
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__41___init__ == cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__);
    cache_frame_frame_google$genai$_interactions$_client$$$function__41___init__ = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__41___init__);

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
CHECK_OBJECT(par_client);
Py_DECREF(par_client);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_client);
Py_DECREF(par_client);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_interactions$_client$$$function__42_interactions(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncInteractionsResourceWithStreamingResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__42_interactions;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions = MAKE_FUNCTION_FRAME(tstate, code_objects_210de795f66ab2bb469bfb8821065d71, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__42_interactions = cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__42_interactions);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__42_interactions) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_b406842dd81f314403afe91a19758d0f;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_digest_038fd969ee338cfac91ce6505dee5adf_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__42_interactions->m_frame.f_lineno = 620;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_digest_038fd969ee338cfac91ce6505dee5adf,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_digest_038fd969ee338cfac91ce6505dee5adf);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 620;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncInteractionsResourceWithStreamingResponse == NULL);
var_AsyncInteractionsResourceWithStreamingResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AsyncInteractionsResourceWithStreamingResponse);
tmp_called_value_1 = var_AsyncInteractionsResourceWithStreamingResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_interactions);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__42_interactions->m_frame.f_lineno = 622;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 622;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__42_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__42_interactions->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__42_interactions, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__42_interactions,
    type_description_1,
    par_self,
    var_AsyncInteractionsResourceWithStreamingResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__42_interactions == cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions);
    cache_frame_frame_google$genai$_interactions$_client$$$function__42_interactions = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__42_interactions);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncInteractionsResourceWithStreamingResponse);
CHECK_OBJECT(var_AsyncInteractionsResourceWithStreamingResponse);
Py_DECREF(var_AsyncInteractionsResourceWithStreamingResponse);
var_AsyncInteractionsResourceWithStreamingResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncInteractionsResourceWithStreamingResponse);
var_AsyncInteractionsResourceWithStreamingResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__43_webhooks(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncWebhooksResourceWithStreamingResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__43_webhooks;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks = MAKE_FUNCTION_FRAME(tstate, code_objects_38926446f3120a3de859c8f9d9abd843, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__43_webhooks = cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__43_webhooks);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__43_webhooks) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_c970f77b65c708c729b4d8b402fc21b1;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_digest_dd7d096cc560734e618f21cab7ae3ae6_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__43_webhooks->m_frame.f_lineno = 626;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_digest_dd7d096cc560734e618f21cab7ae3ae6,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_digest_dd7d096cc560734e618f21cab7ae3ae6);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncWebhooksResourceWithStreamingResponse == NULL);
var_AsyncWebhooksResourceWithStreamingResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AsyncWebhooksResourceWithStreamingResponse);
tmp_called_value_1 = var_AsyncWebhooksResourceWithStreamingResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_webhooks);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__43_webhooks->m_frame.f_lineno = 628;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__43_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__43_webhooks->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__43_webhooks, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__43_webhooks,
    type_description_1,
    par_self,
    var_AsyncWebhooksResourceWithStreamingResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__43_webhooks == cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks);
    cache_frame_frame_google$genai$_interactions$_client$$$function__43_webhooks = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__43_webhooks);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncWebhooksResourceWithStreamingResponse);
CHECK_OBJECT(var_AsyncWebhooksResourceWithStreamingResponse);
Py_DECREF(var_AsyncWebhooksResourceWithStreamingResponse);
var_AsyncWebhooksResourceWithStreamingResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncWebhooksResourceWithStreamingResponse);
var_AsyncWebhooksResourceWithStreamingResponse = NULL;
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


static PyObject *impl_google$genai$_interactions$_client$$$function__44_agents(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_AsyncAgentsResourceWithStreamingResponse = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$function__44_agents;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents)) {
    Py_XDECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents = MAKE_FUNCTION_FRAME(tstate, code_objects_9c1f862ff15de301edea303bbe865783, module_google$genai$_interactions$_client, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents->m_type_description == NULL);
frame_frame_google$genai$_interactions$_client$$$function__44_agents = cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$function__44_agents);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$function__44_agents) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_digest_bc825560cf1e22681108fac6b4db32c9;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_AsyncAgentsResourceWithStreamingResponse_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client$$$function__44_agents->m_frame.f_lineno = 632;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncAgentsResourceWithStreamingResponse,
        const_int_0
    );
} else {
    tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncAgentsResourceWithStreamingResponse);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 632;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
assert(var_AsyncAgentsResourceWithStreamingResponse == NULL);
var_AsyncAgentsResourceWithStreamingResponse = tmp_assign_source_1;
}
{
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
CHECK_OBJECT(var_AsyncAgentsResourceWithStreamingResponse);
tmp_called_value_1 = var_AsyncAgentsResourceWithStreamingResponse;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_agents);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
type_description_1 = "oo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_interactions$_client$$$function__44_agents->m_frame.f_lineno = 634;
tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 634;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$function__44_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$function__44_agents->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$function__44_agents, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$function__44_agents,
    type_description_1,
    par_self,
    var_AsyncAgentsResourceWithStreamingResponse
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_interactions$_client$$$function__44_agents == cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents);
    cache_frame_frame_google$genai$_interactions$_client$$$function__44_agents = NULL;
}

assertFrameObject(frame_frame_google$genai$_interactions$_client$$$function__44_agents);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_AsyncAgentsResourceWithStreamingResponse);
CHECK_OBJECT(var_AsyncAgentsResourceWithStreamingResponse);
Py_DECREF(var_AsyncAgentsResourceWithStreamingResponse);
var_AsyncAgentsResourceWithStreamingResponse = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_AsyncAgentsResourceWithStreamingResponse);
var_AsyncAgentsResourceWithStreamingResponse = NULL;
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



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__10__validate_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__10__validate_headers,
        mod_consts.const_str_plain__validate_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5c16d33b2cc8f66466125b4f1849921,
#endif
        code_objects_3a6f6a57d0f39a5c2f26d0d36a9c99c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__11__prepare_options(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__11__prepare_options,
        mod_consts.const_str_plain__prepare_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_593f042bf2a8599bdeb4f983ee1ec7cc,
#endif
        code_objects_906e2586cf0c451bf65149226a0d48e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__12_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__12_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0bbcc6d656c34858cbf33dea9cd5e2a0,
#endif
        code_objects_ec4410a9c36abdcedf28c68659ba2b07,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__13__get_api_version_path_param(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__13__get_api_version_path_param,
        mod_consts.const_str_plain__get_api_version_path_param,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9c59ee8c4310451237c80fbfb5760993,
#endif
        code_objects_72f6818894d2ce2e703ca61d4337da33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__14__make_status_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__14__make_status_error,
        mod_consts.const_str_plain__make_status_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_72faadc9c28712f20bd1db5e8abb581a,
#endif
        code_objects_834d4399a907214632de1965e2412e3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__15___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c7743eea280b4968fa661623734cfb23,
#endif
        code_objects_0bada8403ec6aadf3f4b15e02ddd6219,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        mod_consts.const_str_digest_07df00e0ff0e199b45274616654156ff,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__16_interactions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__16_interactions,
        mod_consts.const_str_plain_interactions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c5f327bdf5c43f499c766a401f104f40,
#endif
        code_objects_f62875a5bca44700b4ae3629b1f855b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__17_webhooks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__17_webhooks,
        mod_consts.const_str_plain_webhooks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_241cc4bccdfab736cdf050d27bb87aae,
#endif
        code_objects_350a80d9190e628df96faa9c4d61fc4d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__18_agents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__18_agents,
        mod_consts.const_str_plain_agents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_358a6aa52480b31b61d53d2349896ced,
#endif
        code_objects_ece07d8ad7d12b356f1260c44dbb291f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__19_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__19_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_66b6ae8d95383342a03f0d85f863e38b,
#endif
        code_objects_8ffe38ac8771b2ff82034f8eaa064df1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__1___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_04953f4d23245f1242de9d058d6778b9,
#endif
        code_objects_c9332dbecd9fb70b64cd3b51a3c9137b,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        mod_consts.const_str_digest_9222b97034364ad27026d4077b950e21,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__20_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__20_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_920fad541468cde4cf93a26e64432f1c,
#endif
        code_objects_ef602bd17ef770f6bd295c8c975379e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__21_qs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__21_qs,
        mod_consts.const_str_plain_qs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f54660cfc1b6cfbb3b2a275944afec93,
#endif
        code_objects_81f06a307bdf318c0fad7dbf4cf2d100,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__22_auth_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__22_auth_headers,
        mod_consts.const_str_plain_auth_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_714959bd931ffdd5c161c5ae46d80737,
#endif
        code_objects_d4ac87a4557fbe77e17d8d3dcb952133,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__23_default_headers(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__23_default_headers,
        mod_consts.const_str_plain_default_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_fb35f888b362c0ba8eaae793552b639f,
#endif
        code_objects_672801351de7d53ee4c701d05d338bbd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__24__validate_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__24__validate_headers,
        mod_consts.const_str_plain__validate_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ba6c3bfdb03e81ace30d3ae2798289de,
#endif
        code_objects_0636a1aa34edfd845af610992ec246fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__25__prepare_options(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__25__prepare_options,
        mod_consts.const_str_plain__prepare_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0808f99cf3f9bb776c2337daad38a02f,
#endif
        code_objects_b3ff1cd98c9080e6e81ecc35dfaf5264,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__26_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__26_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_add0a7ae69ad4bc66492d2473b6a2d44,
#endif
        code_objects_cc05708c9da7d96bc39ca3735dcb3bcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__27__get_api_version_path_param(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__27__get_api_version_path_param,
        mod_consts.const_str_plain__get_api_version_path_param,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_56842b225072c42432cbe85d3020d5bf,
#endif
        code_objects_fe42625759ca9335af6b5b3c4b2ab349,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__28__make_status_error(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__28__make_status_error,
        mod_consts.const_str_plain__make_status_error,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ab5ab6891a82fe4e0cf0f73a3e9fe367,
#endif
        code_objects_55d940672c7c4c708909215bc1a8438a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__29___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__29___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2ffe7454225755226e803fcbac086bd7,
#endif
        code_objects_bb641fe502317f6aa3e1c141a612fe3c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__2_interactions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__2_interactions,
        mod_consts.const_str_plain_interactions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_f6895efac6b0be2be9651609afd7fdac,
#endif
        code_objects_2e81de58183c182c1f1227df55e08d27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__30_interactions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__30_interactions,
        mod_consts.const_str_plain_interactions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a515f31a694b2f9290843ec5eff5bc3a,
#endif
        code_objects_b34c47cd79f65a2a5a0ed00931c50c9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__31_webhooks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__31_webhooks,
        mod_consts.const_str_plain_webhooks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8b15b7592d60f37dd8a8cb101b0b4b69,
#endif
        code_objects_f8b12979de64dfa34f6f21ce7468d823,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__32_agents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__32_agents,
        mod_consts.const_str_plain_agents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_354b709699bc64f1a7d7cb0f745b778a,
#endif
        code_objects_7abe42ebd3b6c1e486db2ee822bf6709,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__33___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__33___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9f1f51e29d6b735c5b84175be6ff4dcc,
#endif
        code_objects_fdd11ec129248ccc111aab65c411356e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__34_interactions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__34_interactions,
        mod_consts.const_str_plain_interactions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0b23351a426a2de9cdf336e1df931ab5,
#endif
        code_objects_237e5c0c8b5d8423c5c573b2921dfc70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__35_webhooks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__35_webhooks,
        mod_consts.const_str_plain_webhooks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7cfb2fbbfd8d4d1c78bfa01be862b011,
#endif
        code_objects_4d5a4ee4a4a64eeb32c30b51bb55931b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__36_agents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__36_agents,
        mod_consts.const_str_plain_agents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_02ad5c0b4eb93c45430874d85ae3f8ea,
#endif
        code_objects_0fc820c00c1245e74b0d920f9022bc6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__37___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__37___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ff9c6b4b8d5df8da4d38b16d53d09229,
#endif
        code_objects_f6f068e534838ff9fb1a4d22777b77df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__38_interactions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__38_interactions,
        mod_consts.const_str_plain_interactions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_39ce2d80b0e21b8536d4434fa4074ac7,
#endif
        code_objects_4d49e147ac82b52d63ba8f0440a1aba0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__39_webhooks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__39_webhooks,
        mod_consts.const_str_plain_webhooks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_1e60446723ef1fe32d395ea0df7f7ccd,
#endif
        code_objects_2f44b029192cccc002f40996f2a3f375,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__3_webhooks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__3_webhooks,
        mod_consts.const_str_plain_webhooks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_599ae04f3abf093df13edf84e3322dc7,
#endif
        code_objects_8758546bb13bae763f0999fa8a6e5e96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__40_agents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__40_agents,
        mod_consts.const_str_plain_agents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_008f75df0bc5a63aae964ad04f111e17,
#endif
        code_objects_ad8031f71d9becd9f6295df75ff14403,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__41___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__41___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_56c03b0bef63012b91d0e4b29c187da3,
#endif
        code_objects_c7e93d2dd074c139ee3ef1978ee458d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__42_interactions(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__42_interactions,
        mod_consts.const_str_plain_interactions,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_585491e095bc305238648cc082ad4eb9,
#endif
        code_objects_210de795f66ab2bb469bfb8821065d71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__43_webhooks(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__43_webhooks,
        mod_consts.const_str_plain_webhooks,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3cc39dc1dade66fda816b6c53b20953d,
#endif
        code_objects_38926446f3120a3de859c8f9d9abd843,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__44_agents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__44_agents,
        mod_consts.const_str_plain_agents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_4ef5ccde4de19c870d03d51c7ba76668,
#endif
        code_objects_9c1f862ff15de301edea303bbe865783,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__4_agents(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__4_agents,
        mod_consts.const_str_plain_agents,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3df451ae8873b4feae922d8113a03c92,
#endif
        code_objects_2731449b536f761ab00687f08afd5e19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__5_with_raw_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__5_with_raw_response,
        mod_consts.const_str_plain_with_raw_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5f52598a10a362047baafea4624b6afc,
#endif
        code_objects_02ba327c19da16e5ed55482a32a15316,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__6_with_streaming_response(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__6_with_streaming_response,
        mod_consts.const_str_plain_with_streaming_response,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5a28cbc5603c6add1e80b5689785670c,
#endif
        code_objects_b7bc0ae77f1a42e3ec567a9c59925243,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__7_qs(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__7_qs,
        mod_consts.const_str_plain_qs,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_30dda9916d8c4cdcecde2f2c9fa98355,
#endif
        code_objects_66dc1e83b9570a570e39d6b8c35213ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__8_auth_headers(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__8_auth_headers,
        mod_consts.const_str_plain_auth_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_2e556f19497eebddee844b6fd4787dc3,
#endif
        code_objects_aaacb0e7de2b8516fd4f09457ff1244e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_interactions$_client$$$function__9_default_headers(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_interactions$_client$$$function__9_default_headers,
        mod_consts.const_str_plain_default_headers,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_c43f7bd6d01bcab55a068020168d38ab,
#endif
        code_objects_e1321f6192957495d6ef95a5169b91c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_interactions$_client,
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

static function_impl_code const function_table_google$genai$_interactions$_client[] = {
impl_google$genai$_interactions$_client$$$function__1___init__,
impl_google$genai$_interactions$_client$$$function__2_interactions,
impl_google$genai$_interactions$_client$$$function__3_webhooks,
impl_google$genai$_interactions$_client$$$function__4_agents,
impl_google$genai$_interactions$_client$$$function__5_with_raw_response,
impl_google$genai$_interactions$_client$$$function__6_with_streaming_response,
impl_google$genai$_interactions$_client$$$function__7_qs,
impl_google$genai$_interactions$_client$$$function__8_auth_headers,
impl_google$genai$_interactions$_client$$$function__9_default_headers,
impl_google$genai$_interactions$_client$$$function__10__validate_headers,
impl_google$genai$_interactions$_client$$$function__11__prepare_options,
impl_google$genai$_interactions$_client$$$function__12_copy,
impl_google$genai$_interactions$_client$$$function__13__get_api_version_path_param,
impl_google$genai$_interactions$_client$$$function__14__make_status_error,
impl_google$genai$_interactions$_client$$$function__15___init__,
impl_google$genai$_interactions$_client$$$function__16_interactions,
impl_google$genai$_interactions$_client$$$function__17_webhooks,
impl_google$genai$_interactions$_client$$$function__18_agents,
impl_google$genai$_interactions$_client$$$function__19_with_raw_response,
impl_google$genai$_interactions$_client$$$function__20_with_streaming_response,
impl_google$genai$_interactions$_client$$$function__21_qs,
impl_google$genai$_interactions$_client$$$function__22_auth_headers,
impl_google$genai$_interactions$_client$$$function__23_default_headers,
impl_google$genai$_interactions$_client$$$function__24__validate_headers,
impl_google$genai$_interactions$_client$$$function__25__prepare_options,
impl_google$genai$_interactions$_client$$$function__26_copy,
impl_google$genai$_interactions$_client$$$function__27__get_api_version_path_param,
impl_google$genai$_interactions$_client$$$function__28__make_status_error,
impl_google$genai$_interactions$_client$$$function__29___init__,
impl_google$genai$_interactions$_client$$$function__30_interactions,
impl_google$genai$_interactions$_client$$$function__31_webhooks,
impl_google$genai$_interactions$_client$$$function__32_agents,
impl_google$genai$_interactions$_client$$$function__33___init__,
impl_google$genai$_interactions$_client$$$function__34_interactions,
impl_google$genai$_interactions$_client$$$function__35_webhooks,
impl_google$genai$_interactions$_client$$$function__36_agents,
impl_google$genai$_interactions$_client$$$function__37___init__,
impl_google$genai$_interactions$_client$$$function__38_interactions,
impl_google$genai$_interactions$_client$$$function__39_webhooks,
impl_google$genai$_interactions$_client$$$function__40_agents,
impl_google$genai$_interactions$_client$$$function__41___init__,
impl_google$genai$_interactions$_client$$$function__42_interactions,
impl_google$genai$_interactions$_client$$$function__43_webhooks,
impl_google$genai$_interactions$_client$$$function__44_agents,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$_interactions$_client);
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
        module_google$genai$_interactions$_client,
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
        function_table_google$genai$_interactions$_client,
        sizeof(function_table_google$genai$_interactions$_client) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai._interactions._client";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$_interactions$_client(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$_interactions$_client");

    // Store the module for future use.
    module_google$genai$_interactions$_client = module;

    moduledict_google$genai$_interactions$_client = MODULE_DICT(module_google$genai$_interactions$_client);

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
        PRINT_STRING("google$genai$_interactions$_client: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$_interactions$_client: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$_interactions$_client: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._interactions._client" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$_interactions$_client\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$_interactions$_client,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$_interactions$_client,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$_interactions$_client,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_interactions$_client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_interactions$_client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$_interactions$_client);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$_interactions$_client);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
PyObject *outline_2_var___class__ = NULL;
PyObject *outline_3_var___class__ = NULL;
PyObject *outline_4_var___class__ = NULL;
PyObject *outline_5_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_3__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_3__prepared = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_class_container$class_creation_5__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_5__prepared = NULL;
PyObject *tmp_class_container$class_creation_6__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_6__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
PyObject *locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
PyObject *locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
PyObject *locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
PyObject *locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6;
NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_20;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_21;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
PyObject *locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7;
NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$_interactions$_client = MAKE_MODULE_FRAME(code_objects_471889a57a00195433eaa7acb924ad01, module_google$genai$_interactions$_client);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$_interactions$_client$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$_interactions$_client$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
tmp_assign_source_6 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_6 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_6);
tmp_import_from_1__module = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = Py_False;
UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_TYPE_CHECKING, tmp_assign_source_7);
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
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
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
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_9);
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
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 22;
tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_10;
}
// Tried code:
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_3 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Self,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Self);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Self, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_4 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_override,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_override);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_override, tmp_assign_source_12);
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
PyObject *tmp_assign_source_13;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 24;
tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = const_str_empty;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain__exceptions_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 26;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain__exceptions,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__exceptions);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain__exceptions, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__qs;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_Querystring_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 27;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Querystring,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Querystring);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Querystring, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_f359164e4b61e896a0f2ba5274008dbf_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 28;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_7 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Omit,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_Omit);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_8 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Headers,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_Headers);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Headers, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_9 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Timeout,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Timeout);
}

if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_10 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Transport,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_Transport);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Transport, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_12;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_12 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_ProxiesTypes,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ProxiesTypes);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_ProxiesTypes, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_13;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_13 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_RequestOptions,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_RequestOptions);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_RequestOptions, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_14 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_not_given,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_not_given);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_not_given, tmp_assign_source_24);
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
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_is_given_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 38;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_is_given);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_cached_property_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 39;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_cached_property,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_cached_property);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_cached_property, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 40;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_FinalRequestOptions,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_FinalRequestOptions);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_FinalRequestOptions, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__version;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain___version___tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 41;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain___version__,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain___version__);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain___version__, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__streaming;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 42;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_19 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_Stream,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_Stream);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_20;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_20 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncStream,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream, tmp_assign_source_31);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_APIStatusError_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 43;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_APIStatusError,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_APIStatusError);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_APIStatusError, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_a63f61dc891f055185c4b89d128c42ca_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 44;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_22 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_DEFAULT_MAX_RETRIES,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_23 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_SyncAPIClient,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_SyncAPIClient);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_SyncAPIClient, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_24;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_24 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncAPIClient,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_AsyncAPIClient);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAPIClient, tmp_assign_source_36);
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
PyObject *tmp_assign_source_37;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain__client_adapter;
tmp_globals_arg_value_13 = (PyObject *)moduledict_google$genai$_interactions$_client;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_f5468c7ee1b8f9e0c88342bc2c5fbfdf_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 49;
tmp_assign_source_37 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_37;
}
// Tried code:
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_25 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_GeminiNextGenAPIClientAdapter,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_GeminiNextGenAPIClientAdapter);
}

if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClientAdapter, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_26 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_google$genai$_interactions$_client,
        mod_consts.const_str_plain_AsyncGeminiNextGenAPIClientAdapter,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClientAdapter);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGeminiNextGenAPIClientAdapter, tmp_assign_source_39);
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
PyObject *tmp_assign_source_40;
tmp_assign_source_40 = MAKE_LIST8(tstate, mod_consts.const_list_d7d62d58ccb4f91ee26f9f683fc47df4_list);
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_40);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_41;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = module_var_accessor_google$genai$_interactions$_client$SyncAPIClient(tstate);
if (unlikely(tmp_tuple_element_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_SyncAPIClient);
}

if (tmp_tuple_element_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto try_except_handler_7;
}
tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_1);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_41;
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_42;
}
{
PyObject *tmp_assign_source_43;
tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_43;
}
{
PyObject *tmp_assign_source_44;
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


exception_lineno = 69;

    goto try_except_handler_7;
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


exception_lineno = 69;

    goto try_except_handler_7;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_7;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_44;
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


exception_lineno = 69;

    goto try_except_handler_7;
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
PyObject *tmp_assign_source_45;
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


exception_lineno = 69;

    goto try_except_handler_7;
}
tmp_tuple_element_2 = mod_consts.const_str_plain_GeminiNextGenAPIClient;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_2 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 69;
tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_7;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_45;
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


exception_lineno = 69;

    goto try_except_handler_7;
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
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_5 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_14, tmp_default_value_1);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_7;
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


exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_7;
}
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 69;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 69;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_7;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_46;
}
branch_end_1:;
{
PyObject *tmp_assign_source_47;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_str_plain_GeminiNextGenAPIClient;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_dictset_value = mod_consts.const_int_pos_69;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2 = MAKE_CLASS_FRAME(tstate, code_objects_cb1db4ba5c863d2731b3b0502247c14a, module_google$genai$_interactions$_client, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 71;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_api_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 72;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain_api_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_ass_subvalue_3;
PyObject *tmp_ass_subscribed_3;
PyObject *tmp_ass_subscript_3;
tmp_ass_subvalue_3 = mod_consts.const_str_digest_316d0890e12008d670715bd617c4d36d;
tmp_ass_subscribed_3 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 73;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_ass_subscribed_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_ass_subscript_3 = mod_consts.const_str_plain_client_adapter;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
CHECK_OBJECT(tmp_ass_subscribed_3);
Py_DECREF(tmp_ass_subscribed_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_dict_key_1 = mod_consts.const_str_plain_api_key;
tmp_dict_value_1 = Py_None;
tmp_kw_defaults_1 = _PyDict_NewPresized( 10 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_api_version;
tmp_dict_value_1 = mod_consts.const_str_plain_v1beta;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_base_url;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
tmp_dict_value_1 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_google$genai$_interactions$_client$not_given(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_1 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_google$genai$_interactions$_client$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_query;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_http_client;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_client_adapter;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_kw_defaults_1);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_47142eda6ba8431709bed018a3cd0988);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__1___init__(tstate, tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 75;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_annotations_2;
tmp_called_value_2 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_2 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_576db31df12a5f7998fd98de28668f55);

tmp_args_element_value_1 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__2_interactions(tstate, tmp_annotations_2);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 132;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_interactions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 133;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
tmp_called_value_3 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_3 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_7d51e1b8d689233471de5b2a02aa23f4);

tmp_args_element_value_2 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__3_webhooks(tstate, tmp_annotations_3);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 138;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_webhooks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_3;
PyObject *tmp_annotations_4;
tmp_called_value_4 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_4 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_500f8132164d0a4ba6e13b35495b7758);

tmp_args_element_value_3 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__4_agents(tstate, tmp_annotations_4);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 144;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 144;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_agents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_4;
PyObject *tmp_annotations_5;
tmp_called_value_5 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_5 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 150;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_5cfe4c6a08722137002b6f5836d49526);

tmp_args_element_value_4 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__5_with_raw_response(tstate, tmp_annotations_5);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 150;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 150;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_5;
PyObject *tmp_annotations_6;
tmp_called_value_6 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 154;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_37231dc92b7e95c16ba6568cd4226c8e);

tmp_args_element_value_5 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__6_with_streaming_response(tstate, tmp_annotations_6);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 154;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 154;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 155;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_7;
tmp_called_value_7 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_property);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_8 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_override);

if (tmp_called_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_8 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_7);

exception_lineno = 159;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_9dc797f3380d2376924002b3ffe17c71);

tmp_args_element_value_7 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__7_qs(tstate, tmp_annotations_7);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 159;
tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_7);

exception_lineno = 159;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 158;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 158;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_qs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_8;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_9;
PyObject *tmp_annotations_8;
tmp_called_value_9 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_property);

if (tmp_called_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_9 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_10 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_override);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_9);

exception_lineno = 164;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);

tmp_args_element_value_9 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__8_auth_headers(tstate, tmp_annotations_8);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 164;
tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_9);

exception_lineno = 164;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 163;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 163;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_auth_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 165;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_10;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_11;
PyObject *tmp_annotations_9;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_called_value_11 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_property);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_called_value_12 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_override);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_11);

exception_lineno = 172;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_c95067d112ebefb8c51f30ffe6eefc5c);
tmp_closure_2[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_args_element_value_11 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__9_default_headers(tstate, tmp_annotations_9, tmp_closure_2);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 172;
tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_args_element_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_11);

exception_lineno = 172;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 171;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_default_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_10;
tmp_called_value_13 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_override);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_058acad276deaf7a188567f3c4ed501a);

tmp_args_element_value_12 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__10__validate_headers(tstate, tmp_annotations_10);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 180;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 180;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain__validate_headers, tmp_dictset_value);
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
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_13;
PyObject *tmp_annotations_11;
tmp_called_value_14 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_override);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 193;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);

tmp_args_element_value_13 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__11__prepare_options(tstate, tmp_annotations_11);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 193;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_13);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain__prepare_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 194;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_12;
tmp_dict_key_2 = mod_consts.const_str_plain_api_key;
tmp_dict_value_2 = Py_None;
tmp_kw_defaults_2 = _PyDict_NewPresized( 12 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_api_version;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_base_url;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
tmp_dict_value_2 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_google$genai$_interactions$_client$not_given(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 217;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_http_client;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_2 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_google$genai$_interactions$_client$not_given(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 219;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_set_default_headers;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_default_query;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_set_default_query;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_client_adapter;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain__extra_kwargs;
tmp_dict_value_2 = MAKE_DICT_EMPTY(tstate);
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_b517b5063bdeb118dca4009789e927b4);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__12_copy(tstate, tmp_kw_defaults_2, tmp_annotations_12);

tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 211;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
tmp_dictset_value = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_copy);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);

exception_lineno = 264;
type_description_2 = "c";
    goto frame_exception_exit_2;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_with_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 264;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
{
PyObject *tmp_annotations_13;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__13__get_api_version_path_param(tstate, tmp_annotations_13);

tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain__get_api_version_path_param, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 266;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_14;
PyObject *tmp_annotations_14;
tmp_called_value_15 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain_override);

if (tmp_called_value_15 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_15 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
        Py_INCREF(tmp_called_value_15);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_2;
    }
}

tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_5c206bca9e1057d1018fcf4d7484ad3a);

tmp_args_element_value_14 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__14__make_status_error(tstate, tmp_annotations_14);

frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame.f_lineno = 269;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_15);
Py_DECREF(tmp_called_value_15);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;
type_description_2 = "c";
    goto frame_exception_exit_2;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain__make_status_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_9;
skip_nested_handling_1:;
tmp_dictset_value = mod_consts.const_tuple_68be2137857af83c4ef27d1bb44b1559_tuple;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
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

    goto try_except_handler_9;
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
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
branch_no_3:;
{
PyObject *tmp_assign_source_48;
PyObject *tmp_called_value_16;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_16 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_4 = mod_consts.const_str_plain_GeminiNextGenAPIClient;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
tmp_tuple_element_4 = locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 69;
tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;

    goto try_except_handler_9;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_48);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_47 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_47);
goto try_return_handler_9;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
Py_DECREF(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69);
locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69 = NULL;
goto try_return_handler_8;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_7 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_7 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69);
locals_google$genai$_interactions$_client$$$class__1_GeminiNextGenAPIClient_69 = NULL;
// Re-raise.
exception_state = exception_keeper_name_7;
exception_lineno = exception_keeper_lineno_7;

goto try_except_handler_8;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 69;
goto try_except_handler_7;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClient, tmp_assign_source_47);
}
goto try_end_7;
// Exception handler code:
try_except_handler_7:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
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
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto frame_exception_exit_1;
// End of try:
try_end_7:;
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
PyObject *tmp_assign_source_49;
PyObject *tmp_tuple_element_5;
tmp_tuple_element_5 = module_var_accessor_google$genai$_interactions$_client$AsyncAPIClient(tstate);
if (unlikely(tmp_tuple_element_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncAPIClient);
}

if (tmp_tuple_element_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;

    goto try_except_handler_10;
}
tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_5);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_50;
}
{
PyObject *tmp_assign_source_51;
tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_51;
}
{
PyObject *tmp_assign_source_52;
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


exception_lineno = 303;

    goto try_except_handler_10;
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


exception_lineno = 303;

    goto try_except_handler_10;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_10;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_52;
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


exception_lineno = 303;

    goto try_except_handler_10;
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
PyObject *tmp_assign_source_53;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_9;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_9 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_10;
}
tmp_tuple_element_6 = mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 303;
tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_10;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_53;
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


exception_lineno = 303;

    goto try_except_handler_10;
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
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_15, tmp_default_value_2);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_10;
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


exception_lineno = 303;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_10;
}
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 303;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 303;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_10;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_54;
tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_54;
}
branch_end_4:;
{
PyObject *tmp_assign_source_55;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_12;
}
tmp_dictset_value = mod_consts.const_int_pos_303;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_12;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_12;
}
frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3 = MAKE_CLASS_FRAME(tstate, code_objects_c3f07c17862efe711600ad737c7d2aef, module_google$genai$_interactions$_client, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_4;
PyObject *tmp_ass_subscribed_4;
PyObject *tmp_ass_subscript_4;
tmp_ass_subvalue_4 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_4 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 305;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_4 = mod_consts.const_str_plain_api_key;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
CHECK_OBJECT(tmp_ass_subscribed_4);
Py_DECREF(tmp_ass_subscribed_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 305;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_5;
PyObject *tmp_ass_subscribed_5;
PyObject *tmp_ass_subscript_5;
tmp_ass_subvalue_5 = mod_consts.const_str_plain_str;
tmp_ass_subscribed_5 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 306;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_5 = mod_consts.const_str_plain_api_version;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
CHECK_OBJECT(tmp_ass_subscribed_5);
Py_DECREF(tmp_ass_subscribed_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_6;
PyObject *tmp_ass_subscribed_6;
PyObject *tmp_ass_subscript_6;
tmp_ass_subvalue_6 = mod_consts.const_str_digest_7099aed6ec96ba9ffb27eb3dee46b188;
tmp_ass_subscribed_6 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 307;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_6 = mod_consts.const_str_plain_client_adapter;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
CHECK_OBJECT(tmp_ass_subscribed_6);
Py_DECREF(tmp_ass_subscribed_6);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_15;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_dict_key_3 = mod_consts.const_str_plain_api_key;
tmp_dict_value_3 = Py_None;
tmp_kw_defaults_3 = _PyDict_NewPresized( 10 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_api_version;
tmp_dict_value_3 = mod_consts.const_str_plain_v1beta;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_base_url;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_timeout;
tmp_dict_value_3 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_google$genai$_interactions$_client$not_given(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 315;
type_description_2 = "c";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_3 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_google$genai$_interactions$_client$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 316;
type_description_2 = "c";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_default_query;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_http_client;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_client_adapter;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_3 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_08331712cbc641c0349336d094d050c8);
tmp_closure_3[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__15___init__(tstate, tmp_kw_defaults_3, tmp_annotations_15, tmp_closure_3);

tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 309;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_15;
PyObject *tmp_annotations_16;
tmp_called_value_18 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_da607d7d698e5cb145453d953f121b26);

tmp_args_element_value_15 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__16_interactions(tstate, tmp_annotations_16);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 366;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_15);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_interactions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_16;
PyObject *tmp_annotations_17;
tmp_called_value_19 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 372;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_998227b1f2a9cd73641ec9f833187048);

tmp_args_element_value_16 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__17_webhooks(tstate, tmp_annotations_17);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 372;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 372;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_webhooks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_17;
PyObject *tmp_annotations_18;
tmp_called_value_20 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 378;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_6d0f14b81697d88a569f192d32bfb0c7);

tmp_args_element_value_17 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__18_agents(tstate, tmp_annotations_18);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 378;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 378;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_agents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 379;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_18;
PyObject *tmp_annotations_19;
tmp_called_value_21 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 384;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_569528ea000890be98bebf5e475f64aa);

tmp_args_element_value_18 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__19_with_raw_response(tstate, tmp_annotations_19);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 384;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 384;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_with_raw_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 385;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_19;
PyObject *tmp_annotations_20;
tmp_called_value_22 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_cached_property);

if (tmp_called_value_22 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_22 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 388;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_22);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_20 = DICT_COPY(tstate, mod_consts.const_dict_cceaa51a2be2c53c4b09a619657435d2);

tmp_args_element_value_19 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__20_with_streaming_response(tstate, tmp_annotations_20);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 388;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_19);
CHECK_OBJECT(tmp_called_value_22);
Py_DECREF(tmp_called_value_22);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 388;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_with_streaming_response, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_20;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_21;
PyObject *tmp_annotations_21;
tmp_called_value_23 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_property);

if (tmp_called_value_23 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_23 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_23);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_24 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_override);

if (tmp_called_value_24 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_24 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_23);

exception_lineno = 393;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_24);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_21 = DICT_COPY(tstate, mod_consts.const_dict_9dc797f3380d2376924002b3ffe17c71);

tmp_args_element_value_21 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__21_qs(tstate, tmp_annotations_21);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 393;
tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_21);
CHECK_OBJECT(tmp_called_value_24);
Py_DECREF(tmp_called_value_24);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_args_element_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_23);

exception_lineno = 393;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 392;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_20);
CHECK_OBJECT(tmp_called_value_23);
Py_DECREF(tmp_called_value_23);
CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 392;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_qs, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_22;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_23;
PyObject *tmp_annotations_22;
tmp_called_value_25 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_property);

if (tmp_called_value_25 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_25 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_25);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_26 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_override);

if (tmp_called_value_26 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_26 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_25);

exception_lineno = 398;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_26);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_22 = DICT_COPY(tstate, mod_consts.const_dict_67019800ae9d79763d7dc009d4a85798);

tmp_args_element_value_23 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__22_auth_headers(tstate, tmp_annotations_22);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 398;
tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_23);
CHECK_OBJECT(tmp_called_value_26);
Py_DECREF(tmp_called_value_26);
CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_25);

exception_lineno = 398;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 397;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_22);
CHECK_OBJECT(tmp_called_value_25);
Py_DECREF(tmp_called_value_25);
CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 397;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_auth_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_24;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_25;
PyObject *tmp_annotations_23;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_called_value_27 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_property);

if (tmp_called_value_27 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_27 = (PyObject *)&PyProperty_Type;
        Py_INCREF(tmp_called_value_27);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_28 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_override);

if (tmp_called_value_28 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_28 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_27);

exception_lineno = 406;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_28);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_23 = DICT_COPY(tstate, mod_consts.const_dict_c95067d112ebefb8c51f30ffe6eefc5c);
tmp_closure_4[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_args_element_value_25 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__23_default_headers(tstate, tmp_annotations_23, tmp_closure_4);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 406;
tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_25);
CHECK_OBJECT(tmp_called_value_28);
Py_DECREF(tmp_called_value_28);
CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_args_element_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_27);

exception_lineno = 406;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 405;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_24);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 405;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_default_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 407;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_26;
PyObject *tmp_annotations_24;
tmp_called_value_29 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_override);

if (tmp_called_value_29 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_29 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 414;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_29);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_24 = DICT_COPY(tstate, mod_consts.const_dict_058acad276deaf7a188567f3c4ed501a);

tmp_args_element_value_26 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__24__validate_headers(tstate, tmp_annotations_24);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 414;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_26);
CHECK_OBJECT(tmp_called_value_29);
Py_DECREF(tmp_called_value_29);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 414;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain__validate_headers, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 415;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_27;
PyObject *tmp_annotations_25;
tmp_called_value_30 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_override);

if (tmp_called_value_30 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_30 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 427;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_30);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_25 = DICT_COPY(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);

tmp_args_element_value_27 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__25__prepare_options(tstate, tmp_annotations_25);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 427;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_27);
CHECK_OBJECT(tmp_called_value_30);
Py_DECREF(tmp_called_value_30);
CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain__prepare_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 428;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_26;
tmp_dict_key_4 = mod_consts.const_str_plain_api_key;
tmp_dict_value_4 = Py_None;
tmp_kw_defaults_4 = _PyDict_NewPresized( 12 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_api_version;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_base_url;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_timeout;
tmp_dict_value_4 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_google$genai$_interactions$_client$not_given(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 451;
type_description_2 = "c";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_http_client;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_4 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_not_given);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_google$genai$_interactions$_client$not_given(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_not_given);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 453;
type_description_2 = "c";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_set_default_headers;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_default_query;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_set_default_query;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_client_adapter;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain__extra_kwargs;
tmp_dict_value_4 = MAKE_DICT_EMPTY(tstate);
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_kw_defaults_4);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_annotations_26 = DICT_COPY(tstate, mod_consts.const_dict_ae4e543ad5b4e69659df2129a4d7a4d4);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__26_copy(tstate, tmp_kw_defaults_4, tmp_annotations_26);

tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 445;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
tmp_dictset_value = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_copy);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);

exception_lineno = 498;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_with_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 498;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
{
PyObject *tmp_annotations_27;
tmp_annotations_27 = DICT_COPY(tstate, mod_consts.const_dict_e8d16ece775461636da8aedac2f07d6b);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__27__get_api_version_path_param(tstate, tmp_annotations_27);

tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain__get_api_version_path_param, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_28;
PyObject *tmp_annotations_28;
tmp_called_value_31 = PyObject_GetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain_override);

if (tmp_called_value_31 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_31 = module_var_accessor_google$genai$_interactions$_client$override(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 503;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_31);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_28 = DICT_COPY(tstate, mod_consts.const_dict_5c206bca9e1057d1018fcf4d7484ad3a);

tmp_args_element_value_28 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__28__make_status_error(tstate, tmp_annotations_28);

frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame.f_lineno = 503;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_31, tmp_args_element_value_28);
CHECK_OBJECT(tmp_called_value_31);
Py_DECREF(tmp_called_value_31);
CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 503;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain__make_status_error, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 504;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_12;
skip_nested_handling_2:;
tmp_dictset_value = mod_consts.const_tuple_68be2137857af83c4ef27d1bb44b1559_tuple;
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_12;
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


exception_lineno = 303;

    goto try_except_handler_12;
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
tmp_res = PyObject_SetItem(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_12;
}
branch_no_6:;
{
PyObject *tmp_assign_source_56;
PyObject *tmp_called_value_32;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_8;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_32 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_8 = mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_8 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
tmp_tuple_element_8 = locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 303;
tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;

    goto try_except_handler_12;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_56);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_55 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_55);
goto try_return_handler_12;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
Py_DECREF(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303);
locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303 = NULL;
goto try_return_handler_11;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303);
locals_google$genai$_interactions$_client$$$class__2_AsyncGeminiNextGenAPIClient_303 = NULL;
// Re-raise.
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto try_except_handler_11;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_11:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 303;
goto try_except_handler_10;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient, tmp_assign_source_55);
}
goto try_end_8;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
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
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_58;
}
// Tried code:
{
PyObject *tmp_assign_source_59;
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
tmp_dictset_value = mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_537;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4 = MAKE_CLASS_FRAME(tstate, code_objects_e9617dd6e7182894c993c73ab5208920, module_google$genai$_interactions$_client, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_7;
PyObject *tmp_ass_subscribed_7;
PyObject *tmp_ass_subscript_7;
tmp_ass_subvalue_7 = mod_consts.const_str_plain_GeminiNextGenAPIClient;
tmp_ass_subscribed_7 = DICT_GET_ITEM0(tstate, locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 538;
type_description_2 = "o";
    goto frame_exception_exit_4;
}

if (tmp_ass_subscribed_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_ass_subscript_7 = mod_consts.const_str_plain__client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_29;
tmp_annotations_29 = DICT_COPY(tstate, mod_consts.const_dict_8e0398144661c96765236d95ef5a2533);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__29___init__(tstate, tmp_annotations_29);

tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_29;
PyObject *tmp_annotations_30;
tmp_called_value_33 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 543;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_30 = DICT_COPY(tstate, mod_consts.const_dict_ed06c93f1ecbb3e3e597e2b00f2ac62e);

tmp_args_element_value_29 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__30_interactions(tstate, tmp_annotations_30);

frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4->m_frame.f_lineno = 543;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_29);
CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 543;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, mod_consts.const_str_plain_interactions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 544;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_30;
PyObject *tmp_annotations_31;
tmp_called_value_34 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 549;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_31 = DICT_COPY(tstate, mod_consts.const_dict_6016c11a88536871ad96592c60eb4b7e);

tmp_args_element_value_30 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__31_webhooks(tstate, tmp_annotations_31);

frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4->m_frame.f_lineno = 549;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_30);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 549;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, mod_consts.const_str_plain_webhooks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 550;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_31;
PyObject *tmp_annotations_32;
tmp_called_value_35 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 555;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_annotations_32 = DICT_COPY(tstate, mod_consts.const_dict_669d5172f2166b6009939153da8c84de);

tmp_args_element_value_31 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__32_agents(tstate, tmp_annotations_32);

frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4->m_frame.f_lineno = 555;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_35, tmp_args_element_value_31);
CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 555;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, mod_consts.const_str_plain_agents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 556;
type_description_2 = "o";
    goto frame_exception_exit_4;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_3;
frame_exception_exit_4:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_15;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__client_tuple;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_60;
PyObject *tmp_called_value_36;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_5;
tmp_called_value_36 = (PyObject *)&PyType_Type;
tmp_tuple_element_9 = mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
tmp_tuple_element_9 = locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537;
PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 537;
tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 537;

    goto try_except_handler_15;
}
assert(outline_2_var___class__ == NULL);
outline_2_var___class__ = tmp_assign_source_60;
}
CHECK_OBJECT(outline_2_var___class__);
tmp_assign_source_59 = outline_2_var___class__;
Py_INCREF(tmp_assign_source_59);
goto try_return_handler_15;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
Py_DECREF(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537);
locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537 = NULL;
goto try_return_handler_14;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537);
locals_google$genai$_interactions$_client$$$class__3_GeminiNextGenAPIClientWithRawResponse_537 = NULL;
// Re-raise.
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

goto try_except_handler_14;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_14:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 537;
goto try_except_handler_13;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_GeminiNextGenAPIClientWithRawResponse, tmp_assign_source_59);
}
goto try_end_9;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
Py_DECREF(tmp_class_container$class_creation_3__prepared);
tmp_class_container$class_creation_3__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto frame_exception_exit_1;
// End of try:
try_end_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_3__class_decl_dict);
tmp_class_container$class_creation_3__class_decl_dict = NULL;
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
PyObject *tmp_outline_return_value_4;
{
PyObject *tmp_assign_source_61;
tmp_assign_source_61 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_61;
}
{
PyObject *tmp_assign_source_62;
tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_62;
}
// Tried code:
{
PyObject *tmp_assign_source_63;
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
tmp_dictset_value = mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_562;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5 = MAKE_CLASS_FRAME(tstate, code_objects_d5510b34d65d1f7ad16c625b40801ab9, module_google$genai$_interactions$_client, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_8;
PyObject *tmp_ass_subscribed_8;
PyObject *tmp_ass_subscript_8;
tmp_ass_subvalue_8 = mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient;
tmp_ass_subscribed_8 = DICT_GET_ITEM0(tstate, locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 563;
type_description_2 = "o";
    goto frame_exception_exit_5;
}

if (tmp_ass_subscribed_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_ass_subscript_8 = mod_consts.const_str_plain__client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_33;
tmp_annotations_33 = DICT_COPY(tstate, mod_consts.const_dict_d35b56aa3276a2d874e2563614455100);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__33___init__(tstate, tmp_annotations_33);

tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_32;
PyObject *tmp_annotations_34;
tmp_called_value_37 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 568;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_annotations_34 = DICT_COPY(tstate, mod_consts.const_dict_184e6093e0a6c53d8891d29b5533530d);

tmp_args_element_value_32 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__34_interactions(tstate, tmp_annotations_34);

frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5->m_frame.f_lineno = 568;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_32);
CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 568;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, mod_consts.const_str_plain_interactions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 569;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_38;
PyObject *tmp_args_element_value_33;
PyObject *tmp_annotations_35;
tmp_called_value_38 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 574;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_annotations_35 = DICT_COPY(tstate, mod_consts.const_dict_6cc31389e8f31595cd67e3e7e7f4c302);

tmp_args_element_value_33 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__35_webhooks(tstate, tmp_annotations_35);

frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5->m_frame.f_lineno = 574;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_33);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, mod_consts.const_str_plain_webhooks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 575;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_39;
PyObject *tmp_args_element_value_34;
PyObject *tmp_annotations_36;
tmp_called_value_39 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 580;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_annotations_36 = DICT_COPY(tstate, mod_consts.const_dict_ad32dd521648e9274954dcc4fe88e9bd);

tmp_args_element_value_34 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__36_agents(tstate, tmp_annotations_36);

frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5->m_frame.f_lineno = 580;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_34);
CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, mod_consts.const_str_plain_agents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 581;
type_description_2 = "o";
    goto frame_exception_exit_5;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_4;
frame_exception_exit_5:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_18;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__client_tuple;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_64;
PyObject *tmp_called_value_40;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_10;
PyObject *tmp_kwargs_value_6;
tmp_called_value_40 = (PyObject *)&PyType_Type;
tmp_tuple_element_10 = mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
tmp_tuple_element_10 = locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 562;
tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 562;

    goto try_except_handler_18;
}
assert(outline_3_var___class__ == NULL);
outline_3_var___class__ = tmp_assign_source_64;
}
CHECK_OBJECT(outline_3_var___class__);
tmp_assign_source_63 = outline_3_var___class__;
Py_INCREF(tmp_assign_source_63);
goto try_return_handler_18;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
Py_DECREF(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562);
locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562 = NULL;
goto try_return_handler_17;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562);
locals_google$genai$_interactions$_client$$$class__4_AsyncGeminiNextGenAPIClientWithRawResponse_562 = NULL;
// Re-raise.
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

goto try_except_handler_17;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_17:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 562;
goto try_except_handler_16;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_c4d261ce885084ba11a1c9397e73971e, tmp_assign_source_63);
}
goto try_end_10;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
Py_DECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
tmp_outline_return_value_4 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_4);
goto outline_result_7;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_7:;
CHECK_OBJECT(tmp_outline_return_value_4);
Py_DECREF(tmp_outline_return_value_4);
}
{
PyObject *tmp_outline_return_value_5;
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__class_decl_dict == NULL);
tmp_class_container$class_creation_5__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_5__prepared == NULL);
tmp_class_container$class_creation_5__prepared = tmp_assign_source_66;
}
// Tried code:
{
PyObject *tmp_assign_source_67;
{
PyObject *tmp_set_locals_5;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
tmp_set_locals_5 = tmp_class_container$class_creation_5__prepared;
locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587 = tmp_set_locals_5;
Py_INCREF(tmp_set_locals_5);
}
tmp_dictset_value = mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_587;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6 = MAKE_CLASS_FRAME(tstate, code_objects_378b245353c686c8232ad45b7cf5928a, module_google$genai$_interactions$_client, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_9;
PyObject *tmp_ass_subscribed_9;
PyObject *tmp_ass_subscript_9;
tmp_ass_subvalue_9 = mod_consts.const_str_plain_GeminiNextGenAPIClient;
tmp_ass_subscribed_9 = DICT_GET_ITEM0(tstate, locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 588;
type_description_2 = "o";
    goto frame_exception_exit_6;
}

if (tmp_ass_subscribed_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_ass_subscript_9 = mod_consts.const_str_plain__client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 588;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_annotations_37;
tmp_annotations_37 = DICT_COPY(tstate, mod_consts.const_dict_8e0398144661c96765236d95ef5a2533);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__37___init__(tstate, tmp_annotations_37);

tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_41;
PyObject *tmp_args_element_value_35;
PyObject *tmp_annotations_38;
tmp_called_value_41 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 593;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_annotations_38 = DICT_COPY(tstate, mod_consts.const_dict_540fbe054c7634b05a8565f4617c63e4);

tmp_args_element_value_35 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__38_interactions(tstate, tmp_annotations_38);

frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6->m_frame.f_lineno = 593;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_35);
CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, mod_consts.const_str_plain_interactions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_value_42;
PyObject *tmp_args_element_value_36;
PyObject *tmp_annotations_39;
tmp_called_value_42 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 599;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_annotations_39 = DICT_COPY(tstate, mod_consts.const_dict_717dad6e1c97cdbb9b04121bf42c8c3d);

tmp_args_element_value_36 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__39_webhooks(tstate, tmp_annotations_39);

frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6->m_frame.f_lineno = 599;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_36);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 599;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, mod_consts.const_str_plain_webhooks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 600;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}
{
PyObject *tmp_called_value_43;
PyObject *tmp_args_element_value_37;
PyObject *tmp_annotations_40;
tmp_called_value_43 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 605;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_annotations_40 = DICT_COPY(tstate, mod_consts.const_dict_14e1550fab7f8fcdfe3fca0ea6940360);

tmp_args_element_value_37 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__40_agents(tstate, tmp_annotations_40);

frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6->m_frame.f_lineno = 605;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_43, tmp_args_element_value_37);
CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, mod_consts.const_str_plain_agents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 606;
type_description_2 = "o";
    goto frame_exception_exit_6;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_6:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6,
    type_description_2,
    outline_4_var___class__
);



assertFrameObject(frame_frame_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_6);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_5;
frame_no_exception_5:;
goto skip_nested_handling_5;
nested_frame_exit_5:;

goto try_except_handler_21;
skip_nested_handling_5:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__client_tuple;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_68;
PyObject *tmp_called_value_44;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_7;
tmp_called_value_44 = (PyObject *)&PyType_Type;
tmp_tuple_element_11 = mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587;
PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_5__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 587;
tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;

    goto try_except_handler_21;
}
assert(outline_4_var___class__ == NULL);
outline_4_var___class__ = tmp_assign_source_68;
}
CHECK_OBJECT(outline_4_var___class__);
tmp_assign_source_67 = outline_4_var___class__;
Py_INCREF(tmp_assign_source_67);
goto try_return_handler_21;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_21:;
Py_DECREF(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587);
locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587 = NULL;
goto try_return_handler_20;
// Exception handler code:
try_except_handler_21:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587);
locals_google$genai$_interactions$_client$$$class__5_GeminiNextGenAPIClientWithStreamedResponse_587 = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto try_except_handler_20;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_20:;
CHECK_OBJECT(outline_4_var___class__);
CHECK_OBJECT(outline_4_var___class__);
Py_DECREF(outline_4_var___class__);
outline_4_var___class__ = NULL;
goto outline_result_10;
// Exception handler code:
try_except_handler_20:;
exception_keeper_lineno_20 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_20 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_20;
exception_lineno = exception_keeper_lineno_20;

goto outline_exception_5;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_5:;
exception_lineno = 587;
goto try_except_handler_19;
outline_result_10:;
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_6682e68720678444be8158c50a0c1265, tmp_assign_source_67);
}
goto try_end_11;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_21 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_21 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_21;
exception_lineno = exception_keeper_lineno_21;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_5__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_5__class_decl_dict);
tmp_class_container$class_creation_5__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_5__prepared);
Py_DECREF(tmp_class_container$class_creation_5__prepared);
tmp_class_container$class_creation_5__prepared = NULL;
tmp_outline_return_value_5 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_5);
goto outline_result_9;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_9:;
CHECK_OBJECT(tmp_outline_return_value_5);
Py_DECREF(tmp_outline_return_value_5);
}
{
PyObject *tmp_outline_return_value_6;
{
PyObject *tmp_assign_source_69;
tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__class_decl_dict == NULL);
tmp_class_container$class_creation_6__class_decl_dict = tmp_assign_source_69;
}
{
PyObject *tmp_assign_source_70;
tmp_assign_source_70 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_6__prepared == NULL);
tmp_class_container$class_creation_6__prepared = tmp_assign_source_70;
}
// Tried code:
{
PyObject *tmp_assign_source_71;
{
PyObject *tmp_set_locals_6;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
tmp_set_locals_6 = tmp_class_container$class_creation_6__prepared;
locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612 = tmp_set_locals_6;
Py_INCREF(tmp_set_locals_6);
}
tmp_dictset_value = mod_consts.const_str_digest_fc6336a24b5dc80ad57be6f540317242;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_612;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7 = MAKE_CLASS_FRAME(tstate, code_objects_a41841b180be4eec9eb3a59aab6e770d, module_google$genai$_interactions$_client, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7);
assert(Py_REFCNT(frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_10;
PyObject *tmp_ass_subscribed_10;
PyObject *tmp_ass_subscript_10;
tmp_ass_subvalue_10 = mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient;
tmp_ass_subscribed_10 = DICT_GET_ITEM0(tstate, locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 613;
type_description_2 = "o";
    goto frame_exception_exit_7;
}

if (tmp_ass_subscribed_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_ass_subscript_10 = mod_consts.const_str_plain__client;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_annotations_41;
tmp_annotations_41 = DICT_COPY(tstate, mod_consts.const_dict_d35b56aa3276a2d874e2563614455100);

tmp_dictset_value = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__41___init__(tstate, tmp_annotations_41);

tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_called_value_45;
PyObject *tmp_args_element_value_38;
PyObject *tmp_annotations_42;
tmp_called_value_45 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 618;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_annotations_42 = DICT_COPY(tstate, mod_consts.const_dict_03224939feab3e2e7fe8101912802e58);

tmp_args_element_value_38 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__42_interactions(tstate, tmp_annotations_42);

frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7->m_frame.f_lineno = 618;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_38);
CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 618;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, mod_consts.const_str_plain_interactions, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 619;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_called_value_46;
PyObject *tmp_args_element_value_39;
PyObject *tmp_annotations_43;
tmp_called_value_46 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 624;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_annotations_43 = DICT_COPY(tstate, mod_consts.const_dict_e9b841b34293a39b61772f5feeeeb033);

tmp_args_element_value_39 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__43_webhooks(tstate, tmp_annotations_43);

frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7->m_frame.f_lineno = 624;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_39);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, mod_consts.const_str_plain_webhooks, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 625;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}
{
PyObject *tmp_called_value_47;
PyObject *tmp_args_element_value_40;
PyObject *tmp_annotations_44;
tmp_called_value_47 = module_var_accessor_google$genai$_interactions$_client$cached_property(tstate);
if (unlikely(tmp_called_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_cached_property);
}

if (tmp_called_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 630;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_annotations_44 = DICT_COPY(tstate, mod_consts.const_dict_deb62b6aed2c90153eab553e737554c5);

tmp_args_element_value_40 = MAKE_FUNCTION_google$genai$_interactions$_client$$$function__44_agents(tstate, tmp_annotations_44);

frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7->m_frame.f_lineno = 630;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_40);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, mod_consts.const_str_plain_agents, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 631;
type_description_2 = "o";
    goto frame_exception_exit_7;
}
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_6;
frame_exception_exit_7:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7,
    type_description_2,
    outline_5_var___class__
);



assertFrameObject(frame_frame_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_7);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_6;
frame_no_exception_6:;
goto skip_nested_handling_6;
nested_frame_exit_6:;

goto try_except_handler_24;
skip_nested_handling_6:;
tmp_dictset_value = mod_consts.const_tuple_str_plain__client_tuple;
tmp_result = DICT_SET_ITEM(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_72;
PyObject *tmp_called_value_48;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_12;
PyObject *tmp_kwargs_value_8;
tmp_called_value_48 = (PyObject *)&PyType_Type;
tmp_tuple_element_12 = mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
tmp_tuple_element_12 = locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_6__class_decl_dict;
frame_frame_google$genai$_interactions$_client->m_frame.f_lineno = 612;
tmp_assign_source_72 = CALL_FUNCTION(tstate, tmp_called_value_48, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 612;

    goto try_except_handler_24;
}
assert(outline_5_var___class__ == NULL);
outline_5_var___class__ = tmp_assign_source_72;
}
CHECK_OBJECT(outline_5_var___class__);
tmp_assign_source_71 = outline_5_var___class__;
Py_INCREF(tmp_assign_source_71);
goto try_return_handler_24;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_24:;
Py_DECREF(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612);
locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612 = NULL;
goto try_return_handler_23;
// Exception handler code:
try_except_handler_24:;
exception_keeper_lineno_22 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_22 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612);
locals_google$genai$_interactions$_client$$$class__6_AsyncGeminiNextGenAPIClientWithStreamedResponse_612 = NULL;
// Re-raise.
exception_state = exception_keeper_name_22;
exception_lineno = exception_keeper_lineno_22;

goto try_except_handler_23;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_23:;
CHECK_OBJECT(outline_5_var___class__);
CHECK_OBJECT(outline_5_var___class__);
Py_DECREF(outline_5_var___class__);
outline_5_var___class__ = NULL;
goto outline_result_12;
// Exception handler code:
try_except_handler_23:;
exception_keeper_lineno_23 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_23 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_23;
exception_lineno = exception_keeper_lineno_23;

goto outline_exception_6;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_6:;
exception_lineno = 612;
goto try_except_handler_22;
outline_result_12:;
UPDATE_STRING_DICT1(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_digest_26a1b71f7a61da9cfc82f635a4f4c318, tmp_assign_source_71);
}
goto try_end_12;
// Exception handler code:
try_except_handler_22:;
exception_keeper_lineno_24 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_24 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_24;
exception_lineno = exception_keeper_lineno_24;

goto frame_exception_exit_1;
// End of try:
try_end_12:;
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_6__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_6__class_decl_dict);
tmp_class_container$class_creation_6__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_6__prepared);
Py_DECREF(tmp_class_container$class_creation_6__prepared);
tmp_class_container$class_creation_6__prepared = NULL;
tmp_outline_return_value_6 = Py_None;
Py_INCREF_IMMORTAL(tmp_outline_return_value_6);
goto outline_result_11;
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_11:;
CHECK_OBJECT(tmp_outline_return_value_6);
Py_DECREF(tmp_outline_return_value_6);
}
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = module_var_accessor_google$genai$_interactions$_client$GeminiNextGenAPIClient(tstate);
if (unlikely(tmp_assign_source_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_GeminiNextGenAPIClient);
}

if (tmp_assign_source_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_Client, tmp_assign_source_73);
}
{
PyObject *tmp_assign_source_74;
tmp_assign_source_74 = module_var_accessor_google$genai$_interactions$_client$AsyncGeminiNextGenAPIClient(tstate);
if (unlikely(tmp_assign_source_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncGeminiNextGenAPIClient);
}

if (tmp_assign_source_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 639;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT0(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncClient, tmp_assign_source_74);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_7;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_interactions$_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_interactions$_client->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_interactions$_client, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$_interactions$_client);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_7:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$_interactions$_client", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._interactions._client" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$_interactions$_client);
    return module_google$genai$_interactions$_client;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_interactions$_client, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$_interactions$_client", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

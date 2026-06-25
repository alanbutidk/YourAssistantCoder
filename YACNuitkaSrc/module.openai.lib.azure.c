/* Generated code for Python module 'openai$lib$azure'
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



/* The "module_openai$lib$azure" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$lib$azure;
PyDictObject *moduledict_openai$lib$azure;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_tuple_str_digest_6ec8a3cdbf5a97e9feaa4921308b39b6_tuple;
PyObject *const_str_plain_url;
PyObject *const_str_plain__deployments_endpoints;
PyObject *const_str_plain_is_mapping;
PyObject *const_str_plain_json_data;
PyObject *const_tuple_str_plain_model_tuple;
PyObject *const_str_digest_bf8c1158fc33faa53e3240bb53e7cb91;
PyObject *const_str_plain_base_url;
PyObject *const_str_digest_016557e0350d89b46ffd5a2ba304c6e2;
PyObject *const_str_plain__build_request;
PyObject *const_tuple_str_plain_retries_taken_tuple;
PyObject *const_str_plain__azure_deployment;
PyObject *const_str_plain__azure_endpoint;
PyObject *const_str_plain_httpx;
PyObject *const_str_plain_URL;
PyObject *const_str_plain_is_relative_url;
PyObject *const_str_plain_raw_path;
PyObject *const_str_plain_rstrip;
PyObject *const_tuple_bytes_chr_47_tuple;
PyObject *const_bytes_digest_f581096641aeb0830e0eecc5ce4a8c4d;
PyObject *const_str_plain_lstrip;
PyObject *const_str_plain_copy_with;
PyObject *const_tuple_str_plain_raw_path_tuple;
PyObject *const_str_plain__prepare_url;
PyObject *const_str_digest_07c0f3cf4d870e538496417ff5dba3dc;
PyObject *const_str_plain_environ;
PyObject *const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple;
PyObject *const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple;
PyObject *const_str_plain_OpenAIError;
PyObject *const_tuple_str_digest_3b15816a1f2ed4ff14460af183ea0c89_tuple;
PyObject *const_tuple_str_plain_OPENAI_API_VERSION_tuple;
PyObject *const_str_digest_08fd66ab815ec677715c0e865bbef550;
PyObject *const_str_digest_87d755b9a38521987bdeae1dc13474c1;
PyObject *const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple;
PyObject *const_str_digest_e1081a28e5a0ac754d76d8b20511ca63;
PyObject *const_tuple_str_slash_tuple;
PyObject *const_str_digest_4a5e57921d01c728e77d65d74827c4fb;
PyObject *const_str_digest_ad0562d952f1bedd50216ee5fa1b04b0;
PyObject *const_str_digest_48f3d0047b8840d290277d6900163a1b;
PyObject *const_str_plain_API_KEY_SENTINEL;
PyObject *const_tuple_ef46ee16f62e0e1399f5646ee312e6a7_tuple;
PyObject *const_str_plain__api_version;
PyObject *const_str_plain__azure_ad_token;
PyObject *const_str_plain__azure_ad_token_provider;
PyObject *const_str_plain_azure_endpoint;
PyObject *const_str_digest_a2a5cd265dd49b8b122f256818ac0c40;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_api_version;
PyObject *const_str_plain_azure_ad_token;
PyObject *const_str_plain_azure_ad_token_provider;
PyObject *const_tuple_fb7b8314154c0fe6bbebe5432253bb8c_tuple;
PyObject *const_str_digest_e91ba79863152f4b86dffa9f9d36f308;
PyObject *const_str_digest_f9d421dc110bd4a36ec13feea385f595;
PyObject *const_str_plain_is_given;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_model_copy;
PyObject *const_str_plain__get_azure_ad_token;
PyObject *const_tuple_str_plain_Authorization_tuple;
PyObject *const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
PyObject *const_str_plain_Authorization;
PyObject *const_str_plain_api_key;
PyObject *const_tuple_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6_tuple;
PyObject *const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6;
PyObject *const_str_digest_25e4683691d58a2727570af4b6617784;
PyObject *const_str_plain_deployment;
PyObject *const_str_digest_fee73283744c7235c0adf6386d48d405;
PyObject *const_str_plain_websocket_base_url;
PyObject *const_bytes_digest_1da00ea90187aad24dc7e3140f838aae;
PyObject *const_tuple_str_digest_c29f32f4c31fff7938185e18b4a3427e_tuple;
PyObject *const_tuple_str_plain_wss_tuple;
PyObject *const_tuple_str_plain_scheme_tuple;
PyObject *const_tuple_str_plain_params_tuple;
PyObject *const_str_digest_f4234d09c08c0d10b7ce27e6835887a2;
PyObject *const_str_plain_self;
PyObject *const_str_plain_isawaitable;
PyObject *const_str_plain_token;
PyObject *const_str_plain_cast;
PyObject *const_str_plain_Any;
PyObject *const_str_digest_a98e1303d4a50eedae12334e02f37fc7;
PyObject *const_str_plain_options;
PyObject *const_str_plain__prepare_options;
PyObject *const_str_digest_498afff08040f7a3dda7b9d03c6efaec;
PyObject *const_str_plain_extra_query;
PyObject *const_str_plain_model;
PyObject *const_str_plain__configure_realtime;
PyObject *const_str_digest_af40ff0f937d12c3806f7e8b44a709b7;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_os;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_Mapping;
PyObject *const_str_plain_TypeVar;
PyObject *const_str_plain_Callable;
PyObject *const_str_plain_Awaitable;
PyObject *const_str_plain_overload;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Self_str_plain_override_tuple;
PyObject *const_str_plain_Self;
PyObject *const_str_plain_override;
PyObject *const_str_plain__types;
PyObject *const_tuple_b70797f6fa98dbd9794f2ccbe3fd0bda_tuple;
PyObject *const_int_pos_2;
PyObject *const_str_plain_NOT_GIVEN;
PyObject *const_str_plain_Omit;
PyObject *const_str_plain_Query;
PyObject *const_str_plain_Timeout;
PyObject *const_str_plain_NotGiven;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_is_given_str_plain_is_mapping_tuple;
PyObject *const_str_plain__client;
PyObject *const_tuple_str_plain_OpenAI_str_plain_AsyncOpenAI_tuple;
PyObject *const_str_plain_OpenAI;
PyObject *const_str_plain_AsyncOpenAI;
PyObject *const_str_plain__compat;
PyObject *const_tuple_str_plain_model_copy_tuple;
PyObject *const_str_plain__models;
PyObject *const_tuple_str_plain_FinalRequestOptions_tuple;
PyObject *const_str_plain_FinalRequestOptions;
PyObject *const_str_plain__streaming;
PyObject *const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple;
PyObject *const_str_plain_Stream;
PyObject *const_str_plain_AsyncStream;
PyObject *const_str_plain__exceptions;
PyObject *const_tuple_str_plain_OpenAIError_tuple;
PyObject *const_str_plain__base_client;
PyObject *const_tuple_str_plain_DEFAULT_MAX_RETRIES_str_plain_BaseClient_tuple;
PyObject *const_str_plain_DEFAULT_MAX_RETRIES;
PyObject *const_str_plain_BaseClient;
PyObject *const_set_f5431430c18095449d86486c6cd4f3e9;
PyObject *const_tuple_list_empty_type_str_tuple;
PyObject *const_str_plain_AzureADTokenProvider;
PyObject *const_tuple_list_empty_str_digest_39d25ac4f8253d414486c4b563472eea_tuple;
PyObject *const_str_plain_AsyncAzureADTokenProvider;
PyObject *const_str_plain_Client;
PyObject *const_str_plain_AsyncClient;
PyObject *const_tuple_str_plain__HttpxClientT_tuple;
PyObject *const_tuple_str_plain_bound_tuple;
PyObject *const_str_plain__HttpxClientT;
PyObject *const_tuple_str_plain__DefaultStreamT_tuple;
PyObject *const_str_plain__DefaultStreamT;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_MutuallyExclusiveAuthError;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_62a8641e984c5e01e59a699b4db09ecf;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_dict_0d0b762981190d019d09fa21f156f3fb;
PyObject *const_str_digest_bf7f4e418b6d2bb5e2dde036e5d740af;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_BaseAzureClient;
PyObject *const_int_pos_52;
PyObject *const_str_digest_16aca04e29283f30f2957559a1c1c09f;
PyObject *const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
PyObject *const_dict_6148aac6132080f83b2250a58d97a427;
PyObject *const_dict_e213b10c01f475a9a6005474ca14c505;
PyObject *const_str_digest_15ce696214a297e2e95590b075afd25c;
PyObject *const_dict_f37444b69cdae34d169b3cad9323433d;
PyObject *const_str_digest_5484f2382a2beeeca06037d7f2a84609;
PyObject *const_str_plain_AzureOpenAI;
PyObject *const_int_pos_89;
PyObject *const_str_plain_azure_deployment;
PyObject *const_str_plain_organization;
PyObject *const_str_plain_webhook_secret;
PyObject *const_str_plain_timeout;
PyObject *const_str_plain_max_retries;
PyObject *const_str_plain_default_headers;
PyObject *const_str_plain_default_query;
PyObject *const_str_plain_http_client;
PyObject *const_str_plain__strict_response_validation;
PyObject *const_dict_b1f376b13e138979dc0d82676cdea7ad;
PyObject *const_str_digest_543bb74c1ba8344b0bdff19028c2c36a;
PyObject *const_dict_48a22c5315e62bd3a4b582c73fd02716;
PyObject *const_dict_1b123c3939f969a704afde1c3f21425c;
PyObject *const_str_plain_project;
PyObject *const_dict_2005541976b3992d412d75c9beb61a28;
PyObject *const_str_plain_set_default_headers;
PyObject *const_str_plain_set_default_query;
PyObject *const_str_plain__extra_kwargs;
PyObject *const_dict_a65531a9e2f88be5831bd411e9d2a08f;
PyObject *const_str_digest_baa5896ed825b7146f6a498af97e0b8c;
PyObject *const_str_plain_with_options;
PyObject *const_dict_fb2aef63cbe899ae3db5a90391a96071;
PyObject *const_str_digest_7d833677a2b662988ccaba64074a7a47;
PyObject *const_dict_004a463e0399a5f4a013ac50ad797d3b;
PyObject *const_str_digest_3b86cd3c40546a37db8ca64cc53d02a7;
PyObject *const_dict_d626076dfbdd93e8cc71d5be9471760f;
PyObject *const_str_digest_6419d16b36b33d058791ee526aef6f2a;
PyObject *const_tuple_4aa80aea1adedd8506ebea2580561738_tuple;
PyObject *const_str_plain_AsyncAzureOpenAI;
PyObject *const_int_pos_367;
PyObject *const_dict_a5a578ea1f8958882c40c14dec587ad1;
PyObject *const_str_digest_cb721cb745463184f3c8a6a98cf41077;
PyObject *const_dict_6486ed57dc7d26fa9abb8b1f0dc060c6;
PyObject *const_dict_74f2bf8accd8565a250df813c82d5a97;
PyObject *const_dict_d7788023d83b6658411359bc3386f16d;
PyObject *const_dict_a41970f62793bf0a46147d5f20fbe35d;
PyObject *const_str_digest_47f3bb8e2741afebb2957219e2c39c82;
PyObject *const_str_digest_c5c7e49451d07ef9e4cca08b38886ca5;
PyObject *const_str_digest_37dad5317521942678b45a8334c0fe3f;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_969f509307e83a3ecbb7dd4a3dd27f2f_tuple;
PyObject *const_tuple_4de19060699d556486fe3b689dc218e3_tuple;
PyObject *const_tuple_a76059d6bdaf6ebf3320cdfb5ad608f1_tuple;
PyObject *const_tuple_a0d4916ec9e378c65b9fefe7d92ffdc6_tuple;
PyObject *const_tuple_4ee6066626799602cfbeb77e7eed3de1_tuple;
PyObject *const_tuple_d6f14a96351ac9df0c76aab07812306f_tuple;
PyObject *const_tuple_13a6e7496f98a14c8d5bfa4bcb8e2cad_tuple;
PyObject *const_tuple_e51e12358cbe1d3cd1a02e75f286b339_tuple;
PyObject *const_tuple_str_plain_self_str_plain___class___tuple;
PyObject *const_tuple_ac2b31101592b4c033fffc3b22b0f641_tuple;
PyObject *const_tuple_db4ca2d02fe08ffa051cb73c4e920a25_tuple;
PyObject *const_tuple_str_plain_self_str_plain_provider_str_plain_token_tuple;
PyObject *const_tuple_8b96e1f803b5d55b3e174bc021a2a87e_tuple;
PyObject *const_tuple_9f479911b0518fb46b0e28bde3f438e6_tuple;
PyObject *const_tuple_338a6db14eab3e981976a34e5cee6af3_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[220];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.lib.azure"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6ec8a3cdbf5a97e9feaa4921308b39b6_tuple);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_url);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain__deployments_endpoints);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_json_data);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_tuple);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf8c1158fc33faa53e3240bb53e7cb91);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_base_url);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_digest_016557e0350d89b46ffd5a2ba304c6e2);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain__build_request);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retries_taken_tuple);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain__azure_deployment);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain__azure_endpoint);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_httpx);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_URL);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_relative_url);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_47_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_f581096641aeb0830e0eecc5ce4a8c4d);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy_with);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_raw_path_tuple);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_url);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_07c0f3cf4d870e538496417ff5dba3dc);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAIError);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3b15816a1f2ed4ff14460af183ea0c89_tuple);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_digest_08fd66ab815ec677715c0e865bbef550);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_digest_e1081a28e5a0ac754d76d8b20511ca63);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_4a5e57921d01c728e77d65d74827c4fb);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_ad0562d952f1bedd50216ee5fa1b04b0);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_digest_48f3d0047b8840d290277d6900163a1b);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_API_KEY_SENTINEL);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_tuple_ef46ee16f62e0e1399f5646ee312e6a7_tuple);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain__api_version);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__azure_ad_token);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain__azure_ad_token_provider);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure_endpoint);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2a5cd265dd49b8b122f256818ac0c40);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_copy);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_version);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token_provider);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_tuple_fb7b8314154c0fe6bbebe5432253bb8c_tuple);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9d421dc110bd4a36ec13feea385f595);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_is_given);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_copy);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain__get_azure_ad_token);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Authorization_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_key);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6_tuple);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_digest_25e4683691d58a2727570af4b6617784);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_deployment);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_fee73283744c7235c0adf6386d48d405);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_websocket_base_url);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_bytes_digest_1da00ea90187aad24dc7e3140f838aae);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c29f32f4c31fff7938185e18b4a3427e_tuple);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wss_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scheme_tuple);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_params_tuple);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_f4234d09c08c0d10b7ce27e6835887a2);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_isawaitable);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_token);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_cast);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_digest_a98e1303d4a50eedae12334e02f37fc7);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_options);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_options);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_digest_498afff08040f7a3dda7b9d03c6efaec);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain__configure_realtime);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_digest_af40ff0f937d12c3806f7e8b44a709b7);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_os);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_Callable);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_overload);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_Self);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_override);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain__types);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_b70797f6fa98dbd9794f2ccbe3fd0bda_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_int_pos_2);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_Omit);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_Query);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_given_str_plain_is_mapping_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain__client);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenAI_str_plain_AsyncOpenAI_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAI);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncOpenAI);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__compat);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_copy_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__models);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_FinalRequestOptions);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain__streaming);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_Stream);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenAIError_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__base_client);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_MAX_RETRIES_str_plain_BaseClient_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseClient);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_set_f5431430c18095449d86486c6cd4f3e9);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_type_str_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_AzureADTokenProvider);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_str_digest_39d25ac4f8253d414486c4b563472eea_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAzureADTokenProvider);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_Client);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__HttpxClientT_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain__HttpxClientT);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__DefaultStreamT_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain__DefaultStreamT);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_MutuallyExclusiveAuthError);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_62a8641e984c5e01e59a699b4db09ecf);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_digest_bf7f4e418b6d2bb5e2dde036e5d740af);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseAzureClient);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_int_pos_52);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_16aca04e29283f30f2957559a1c1c09f);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_dict_6148aac6132080f83b2250a58d97a427);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_dict_e213b10c01f475a9a6005474ca14c505);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_15ce696214a297e2e95590b075afd25c);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_dict_f37444b69cdae34d169b3cad9323433d);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_5484f2382a2beeeca06037d7f2a84609);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_AzureOpenAI);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_int_pos_89);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_azure_deployment);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_organization);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_webhook_secret);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeout);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_headers);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_default_query);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_client);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain__strict_response_validation);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_dict_b1f376b13e138979dc0d82676cdea7ad);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_dict_48a22c5315e62bd3a4b582c73fd02716);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_dict_1b123c3939f969a704afde1c3f21425c);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_project);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_dict_2005541976b3992d412d75c9beb61a28);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_headers);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_query);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain__extra_kwargs);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_dict_a65531a9e2f88be5831bd411e9d2a08f);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_str_digest_baa5896ed825b7146f6a498af97e0b8c);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain_with_options);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_str_digest_7d833677a2b662988ccaba64074a7a47);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_digest_3b86cd3c40546a37db8ca64cc53d02a7);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_dict_d626076dfbdd93e8cc71d5be9471760f);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_digest_6419d16b36b33d058791ee526aef6f2a);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_4aa80aea1adedd8506ebea2580561738_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAzureOpenAI);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_int_pos_367);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_dict_a5a578ea1f8958882c40c14dec587ad1);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_dict_6486ed57dc7d26fa9abb8b1f0dc060c6);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_dict_74f2bf8accd8565a250df813c82d5a97);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_dict_d7788023d83b6658411359bc3386f16d);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_dict_a41970f62793bf0a46147d5f20fbe35d);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_47f3bb8e2741afebb2957219e2c39c82);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_str_digest_c5c7e49451d07ef9e4cca08b38886ca5);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_str_digest_37dad5317521942678b45a8334c0fe3f);
mod_consts_hash[204] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[205] = DEEP_HASH(tstate, mod_consts.const_tuple_969f509307e83a3ecbb7dd4a3dd27f2f_tuple);
mod_consts_hash[206] = DEEP_HASH(tstate, mod_consts.const_tuple_4de19060699d556486fe3b689dc218e3_tuple);
mod_consts_hash[207] = DEEP_HASH(tstate, mod_consts.const_tuple_a76059d6bdaf6ebf3320cdfb5ad608f1_tuple);
mod_consts_hash[208] = DEEP_HASH(tstate, mod_consts.const_tuple_a0d4916ec9e378c65b9fefe7d92ffdc6_tuple);
mod_consts_hash[209] = DEEP_HASH(tstate, mod_consts.const_tuple_4ee6066626799602cfbeb77e7eed3de1_tuple);
mod_consts_hash[210] = DEEP_HASH(tstate, mod_consts.const_tuple_d6f14a96351ac9df0c76aab07812306f_tuple);
mod_consts_hash[211] = DEEP_HASH(tstate, mod_consts.const_tuple_13a6e7496f98a14c8d5bfa4bcb8e2cad_tuple);
mod_consts_hash[212] = DEEP_HASH(tstate, mod_consts.const_tuple_e51e12358cbe1d3cd1a02e75f286b339_tuple);
mod_consts_hash[213] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
mod_consts_hash[214] = DEEP_HASH(tstate, mod_consts.const_tuple_ac2b31101592b4c033fffc3b22b0f641_tuple);
mod_consts_hash[215] = DEEP_HASH(tstate, mod_consts.const_tuple_db4ca2d02fe08ffa051cb73c4e920a25_tuple);
mod_consts_hash[216] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_provider_str_plain_token_tuple);
mod_consts_hash[217] = DEEP_HASH(tstate, mod_consts.const_tuple_8b96e1f803b5d55b3e174bc021a2a87e_tuple);
mod_consts_hash[218] = DEEP_HASH(tstate, mod_consts.const_tuple_9f479911b0518fb46b0e28bde3f438e6_tuple);
mod_consts_hash[219] = DEEP_HASH(tstate, mod_consts.const_tuple_338a6db14eab3e981976a34e5cee6af3_tuple);
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
void checkModuleConstants_openai$lib$azure(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_6ec8a3cdbf5a97e9feaa4921308b39b6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_6ec8a3cdbf5a97e9feaa4921308b39b6_tuple);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain__deployments_endpoints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__deployments_endpoints);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_mapping);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_json_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json_data);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_tuple);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf8c1158fc33faa53e3240bb53e7cb91));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf8c1158fc33faa53e3240bb53e7cb91);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_base_url);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_digest_016557e0350d89b46ffd5a2ba304c6e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_016557e0350d89b46ffd5a2ba304c6e2);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain__build_request));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__build_request);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_retries_taken_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_retries_taken_tuple);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain__azure_deployment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__azure_deployment);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain__azure_endpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__azure_endpoint);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_httpx));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_httpx);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_URL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_URL);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_relative_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_relative_url);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_path);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_rstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rstrip);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_bytes_chr_47_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_bytes_chr_47_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_f581096641aeb0830e0eecc5ce4a8c4d));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_f581096641aeb0830e0eecc5ce4a8c4d);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_lstrip));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lstrip);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy_with));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy_with);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_raw_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_raw_path_tuple);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prepare_url);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_07c0f3cf4d870e538496417ff5dba3dc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_07c0f3cf4d870e538496417ff5dba3dc);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenAIError);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_3b15816a1f2ed4ff14460af183ea0c89_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_3b15816a1f2ed4ff14460af183ea0c89_tuple);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_digest_08fd66ab815ec677715c0e865bbef550));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_08fd66ab815ec677715c0e865bbef550);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_digest_e1081a28e5a0ac754d76d8b20511ca63));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e1081a28e5a0ac754d76d8b20511ca63);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_slash_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_slash_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_4a5e57921d01c728e77d65d74827c4fb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4a5e57921d01c728e77d65d74827c4fb);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_ad0562d952f1bedd50216ee5fa1b04b0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ad0562d952f1bedd50216ee5fa1b04b0);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_digest_48f3d0047b8840d290277d6900163a1b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48f3d0047b8840d290277d6900163a1b);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_API_KEY_SENTINEL));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_API_KEY_SENTINEL);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_tuple_ef46ee16f62e0e1399f5646ee312e6a7_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ef46ee16f62e0e1399f5646ee312e6a7_tuple);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain__api_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api_version);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__azure_ad_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__azure_ad_token);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain__azure_ad_token_provider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__azure_ad_token_provider);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure_endpoint));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure_endpoint);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2a5cd265dd49b8b122f256818ac0c40));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2a5cd265dd49b8b122f256818ac0c40);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_copy);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_version);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure_ad_token);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure_ad_token_provider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure_ad_token_provider);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_tuple_fb7b8314154c0fe6bbebe5432253bb8c_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_fb7b8314154c0fe6bbebe5432253bb8c_tuple);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9d421dc110bd4a36ec13feea385f595));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9d421dc110bd4a36ec13feea385f595);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_is_given));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_is_given);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_copy));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_copy);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain__get_azure_ad_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__get_azure_ad_token);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Authorization_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Authorization_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_Authorization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Authorization);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_key);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6_tuple);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_digest_25e4683691d58a2727570af4b6617784));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_25e4683691d58a2727570af4b6617784);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_deployment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_deployment);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_fee73283744c7235c0adf6386d48d405));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fee73283744c7235c0adf6386d48d405);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_websocket_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_websocket_base_url);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_bytes_digest_1da00ea90187aad24dc7e3140f838aae));
CHECK_OBJECT_DEEP(mod_consts.const_bytes_digest_1da00ea90187aad24dc7e3140f838aae);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c29f32f4c31fff7938185e18b4a3427e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c29f32f4c31fff7938185e18b4a3427e_tuple);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_wss_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_wss_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_scheme_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_scheme_tuple);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_params_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_params_tuple);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_f4234d09c08c0d10b7ce27e6835887a2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f4234d09c08c0d10b7ce27e6835887a2);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_isawaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_isawaitable);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_token));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_token);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_cast));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_cast);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_digest_a98e1303d4a50eedae12334e02f37fc7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a98e1303d4a50eedae12334e02f37fc7);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_options);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain__prepare_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__prepare_options);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_digest_498afff08040f7a3dda7b9d03c6efaec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_498afff08040f7a3dda7b9d03c6efaec);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_extra_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_extra_query);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain__configure_realtime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__configure_realtime);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_digest_af40ff0f937d12c3806f7e8b44a709b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_af40ff0f937d12c3806f7e8b44a709b7);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_os));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_os);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_Mapping));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Mapping);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeVar));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeVar);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_Callable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Callable);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_Awaitable));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Awaitable);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_overload));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_overload);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_Self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Self);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_override));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_override);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain__types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__types);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_b70797f6fa98dbd9794f2ccbe3fd0bda_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b70797f6fa98dbd9794f2ccbe3fd0bda_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_int_pos_2));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_2);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_NOT_GIVEN));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NOT_GIVEN);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_Omit));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Omit);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_Query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Query);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_Timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Timeout);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_NotGiven));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_NotGiven);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_is_given_str_plain_is_mapping_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_is_given_str_plain_is_mapping_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain__client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__client);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenAI_str_plain_AsyncOpenAI_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OpenAI_str_plain_AsyncOpenAI_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_OpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_OpenAI);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncOpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncOpenAI);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__compat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__compat);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_copy_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_copy_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__models));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__models);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_FinalRequestOptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_FinalRequestOptions);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain__streaming));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__streaming);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_Stream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Stream);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncStream));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncStream);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain__exceptions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__exceptions);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_OpenAIError_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_OpenAIError_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__base_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__base_client);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_DEFAULT_MAX_RETRIES_str_plain_BaseClient_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_DEFAULT_MAX_RETRIES_str_plain_BaseClient_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseClient);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_set_f5431430c18095449d86486c6cd4f3e9));
CHECK_OBJECT_DEEP(mod_consts.const_set_f5431430c18095449d86486c6cd4f3e9);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_type_str_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_type_str_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_AzureADTokenProvider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AzureADTokenProvider);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_list_empty_str_digest_39d25ac4f8253d414486c4b563472eea_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_list_empty_str_digest_39d25ac4f8253d414486c4b563472eea_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAzureADTokenProvider));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAzureADTokenProvider);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_Client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Client);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncClient);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__HttpxClientT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__HttpxClientT_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_bound_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_bound_tuple);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain__HttpxClientT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__HttpxClientT);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__DefaultStreamT_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__DefaultStreamT_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain__DefaultStreamT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__DefaultStreamT);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_MutuallyExclusiveAuthError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_MutuallyExclusiveAuthError);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_62a8641e984c5e01e59a699b4db09ecf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62a8641e984c5e01e59a699b4db09ecf);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_digest_bf7f4e418b6d2bb5e2dde036e5d740af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bf7f4e418b6d2bb5e2dde036e5d740af);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseAzureClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseAzureClient);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_int_pos_52));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_52);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_16aca04e29283f30f2957559a1c1c09f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_16aca04e29283f30f2957559a1c1c09f);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_dict_6148aac6132080f83b2250a58d97a427));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6148aac6132080f83b2250a58d97a427);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_dict_e213b10c01f475a9a6005474ca14c505));
CHECK_OBJECT_DEEP(mod_consts.const_dict_e213b10c01f475a9a6005474ca14c505);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_15ce696214a297e2e95590b075afd25c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_15ce696214a297e2e95590b075afd25c);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_dict_f37444b69cdae34d169b3cad9323433d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_f37444b69cdae34d169b3cad9323433d);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_5484f2382a2beeeca06037d7f2a84609));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5484f2382a2beeeca06037d7f2a84609);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_AzureOpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AzureOpenAI);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_int_pos_89));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_89);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_azure_deployment));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_azure_deployment);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_organization));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_organization);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_webhook_secret));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_webhook_secret);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeout));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeout);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_retries));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_retries);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_headers);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_default_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_default_query);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_client);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain__strict_response_validation));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__strict_response_validation);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_dict_b1f376b13e138979dc0d82676cdea7ad));
CHECK_OBJECT_DEEP(mod_consts.const_dict_b1f376b13e138979dc0d82676cdea7ad);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_dict_48a22c5315e62bd3a4b582c73fd02716));
CHECK_OBJECT_DEEP(mod_consts.const_dict_48a22c5315e62bd3a4b582c73fd02716);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_dict_1b123c3939f969a704afde1c3f21425c));
CHECK_OBJECT_DEEP(mod_consts.const_dict_1b123c3939f969a704afde1c3f21425c);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_project));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_project);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_dict_2005541976b3992d412d75c9beb61a28));
CHECK_OBJECT_DEEP(mod_consts.const_dict_2005541976b3992d412d75c9beb61a28);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_default_headers);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_default_query));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_default_query);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain__extra_kwargs));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__extra_kwargs);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_dict_a65531a9e2f88be5831bd411e9d2a08f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a65531a9e2f88be5831bd411e9d2a08f);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_str_digest_baa5896ed825b7146f6a498af97e0b8c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_baa5896ed825b7146f6a498af97e0b8c);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain_with_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_with_options);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071));
CHECK_OBJECT_DEEP(mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_str_digest_7d833677a2b662988ccaba64074a7a47));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7d833677a2b662988ccaba64074a7a47);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b));
CHECK_OBJECT_DEEP(mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_digest_3b86cd3c40546a37db8ca64cc53d02a7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3b86cd3c40546a37db8ca64cc53d02a7);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_dict_d626076dfbdd93e8cc71d5be9471760f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d626076dfbdd93e8cc71d5be9471760f);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_digest_6419d16b36b33d058791ee526aef6f2a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6419d16b36b33d058791ee526aef6f2a);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_4aa80aea1adedd8506ebea2580561738_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4aa80aea1adedd8506ebea2580561738_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncAzureOpenAI));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncAzureOpenAI);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_int_pos_367));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_367);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_dict_a5a578ea1f8958882c40c14dec587ad1));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a5a578ea1f8958882c40c14dec587ad1);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_dict_6486ed57dc7d26fa9abb8b1f0dc060c6));
CHECK_OBJECT_DEEP(mod_consts.const_dict_6486ed57dc7d26fa9abb8b1f0dc060c6);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_dict_74f2bf8accd8565a250df813c82d5a97));
CHECK_OBJECT_DEEP(mod_consts.const_dict_74f2bf8accd8565a250df813c82d5a97);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_dict_d7788023d83b6658411359bc3386f16d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_d7788023d83b6658411359bc3386f16d);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_dict_a41970f62793bf0a46147d5f20fbe35d));
CHECK_OBJECT_DEEP(mod_consts.const_dict_a41970f62793bf0a46147d5f20fbe35d);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_47f3bb8e2741afebb2957219e2c39c82));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_47f3bb8e2741afebb2957219e2c39c82);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_str_digest_c5c7e49451d07ef9e4cca08b38886ca5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c5c7e49451d07ef9e4cca08b38886ca5);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_str_digest_37dad5317521942678b45a8334c0fe3f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37dad5317521942678b45a8334c0fe3f);
assert(mod_consts_hash[204] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[205] == DEEP_HASH(tstate, mod_consts.const_tuple_969f509307e83a3ecbb7dd4a3dd27f2f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_969f509307e83a3ecbb7dd4a3dd27f2f_tuple);
assert(mod_consts_hash[206] == DEEP_HASH(tstate, mod_consts.const_tuple_4de19060699d556486fe3b689dc218e3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4de19060699d556486fe3b689dc218e3_tuple);
assert(mod_consts_hash[207] == DEEP_HASH(tstate, mod_consts.const_tuple_a76059d6bdaf6ebf3320cdfb5ad608f1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a76059d6bdaf6ebf3320cdfb5ad608f1_tuple);
assert(mod_consts_hash[208] == DEEP_HASH(tstate, mod_consts.const_tuple_a0d4916ec9e378c65b9fefe7d92ffdc6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_a0d4916ec9e378c65b9fefe7d92ffdc6_tuple);
assert(mod_consts_hash[209] == DEEP_HASH(tstate, mod_consts.const_tuple_4ee6066626799602cfbeb77e7eed3de1_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4ee6066626799602cfbeb77e7eed3de1_tuple);
assert(mod_consts_hash[210] == DEEP_HASH(tstate, mod_consts.const_tuple_d6f14a96351ac9df0c76aab07812306f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d6f14a96351ac9df0c76aab07812306f_tuple);
assert(mod_consts_hash[211] == DEEP_HASH(tstate, mod_consts.const_tuple_13a6e7496f98a14c8d5bfa4bcb8e2cad_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_13a6e7496f98a14c8d5bfa4bcb8e2cad_tuple);
assert(mod_consts_hash[212] == DEEP_HASH(tstate, mod_consts.const_tuple_e51e12358cbe1d3cd1a02e75f286b339_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_e51e12358cbe1d3cd1a02e75f286b339_tuple);
assert(mod_consts_hash[213] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain___class___tuple);
assert(mod_consts_hash[214] == DEEP_HASH(tstate, mod_consts.const_tuple_ac2b31101592b4c033fffc3b22b0f641_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_ac2b31101592b4c033fffc3b22b0f641_tuple);
assert(mod_consts_hash[215] == DEEP_HASH(tstate, mod_consts.const_tuple_db4ca2d02fe08ffa051cb73c4e920a25_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_db4ca2d02fe08ffa051cb73c4e920a25_tuple);
assert(mod_consts_hash[216] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_provider_str_plain_token_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_provider_str_plain_token_tuple);
assert(mod_consts_hash[217] == DEEP_HASH(tstate, mod_consts.const_tuple_8b96e1f803b5d55b3e174bc021a2a87e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_8b96e1f803b5d55b3e174bc021a2a87e_tuple);
assert(mod_consts_hash[218] == DEEP_HASH(tstate, mod_consts.const_tuple_9f479911b0518fb46b0e28bde3f438e6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9f479911b0518fb46b0e28bde3f438e6_tuple);
assert(mod_consts_hash[219] == DEEP_HASH(tstate, mod_consts.const_tuple_338a6db14eab3e981976a34e5cee6af3_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_338a6db14eab3e981976a34e5cee6af3_tuple);
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
static PyObject *module_var_accessor_openai$lib$azure$API_KEY_SENTINEL(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_API_KEY_SENTINEL);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_API_KEY_SENTINEL);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_API_KEY_SENTINEL, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_API_KEY_SENTINEL);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_API_KEY_SENTINEL, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_API_KEY_SENTINEL);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_API_KEY_SENTINEL);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_API_KEY_SENTINEL);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$Any(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$AsyncOpenAI(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncOpenAI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncOpenAI);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncOpenAI, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncOpenAI);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncOpenAI, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncOpenAI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncOpenAI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncOpenAI);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$AsyncStream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$BaseAzureClient(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAzureClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseAzureClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseAzureClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseAzureClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseAzureClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAzureClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAzureClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAzureClient);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$BaseClient(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseClient);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$Callable(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Callable);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Callable, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$NOT_GIVEN(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_NOT_GIVEN);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_NOT_GIVEN, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$OpenAI(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$OpenAIError(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$Stream(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$TypeVar(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$_DefaultStreamT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultStreamT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DefaultStreamT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DefaultStreamT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__DefaultStreamT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__DefaultStreamT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultStreamT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultStreamT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultStreamT);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$_HttpxClientT(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__HttpxClientT);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HttpxClientT);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HttpxClientT, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__HttpxClientT);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__HttpxClientT, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__HttpxClientT);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__HttpxClientT);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__HttpxClientT);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$_deployments_endpoints(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__deployments_endpoints);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__deployments_endpoints);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__deployments_endpoints, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__deployments_endpoints);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__deployments_endpoints, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__deployments_endpoints);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__deployments_endpoints);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__deployments_endpoints);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$cast(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_cast);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$httpx(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_httpx);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_httpx, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$inspect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain_inspect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain_inspect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain_inspect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$is_given(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$is_mapping(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_mapping);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_mapping, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_is_mapping);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_is_mapping, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$model_copy(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_model_copy);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_model_copy);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_model_copy, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_model_copy);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_model_copy, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_model_copy);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_model_copy);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_model_copy);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$overload(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_overload);
    }

    return result;
}

static PyObject *module_var_accessor_openai$lib$azure$override(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$lib$azure->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$lib$azure->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$lib$azure->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_override);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_e0258bfbe3b3fde5d937b979836573fe;
static PyCodeObject *code_objects_961f17271edec9b965bc4101b3648458;
static PyCodeObject *code_objects_e01812c01f40b986f1275f037bbf4ea4;
static PyCodeObject *code_objects_332bacbf8f358039862a1a060962a653;
static PyCodeObject *code_objects_b187b1695565acb1c78b88b2da5d3030;
static PyCodeObject *code_objects_6fd101857e93caa6ad155759e1b8cf21;
static PyCodeObject *code_objects_1c932a30003bf1f4000d2715db000b56;
static PyCodeObject *code_objects_ad1339d32658413fd86762772bfe6ae8;
static PyCodeObject *code_objects_d719dea3b29937e1758eb77eb1d59830;
static PyCodeObject *code_objects_a563e0405e3995907b36c1fd5ef2e3b0;
static PyCodeObject *code_objects_14331d37246f8b334a6677819b4f4f2f;
static PyCodeObject *code_objects_cd503852d367d0e8533d6c9f9c35eff2;
static PyCodeObject *code_objects_526f49b774eebae160c7b86fd6ef7c0f;
static PyCodeObject *code_objects_28241cffbed7731034f6582960848cc9;
static PyCodeObject *code_objects_cc0349444ec3ee4bec8ceb7583ec4167;
static PyCodeObject *code_objects_9d81833fa088f573a2bb5b28e09c3c60;
static PyCodeObject *code_objects_99672e6ff1f80d78a64df0b431d6bd5f;
static PyCodeObject *code_objects_cad984d3b3132ca30098c496abf2d119;
static PyCodeObject *code_objects_8e40e722c343b434dae2bf04e9faed37;
static PyCodeObject *code_objects_80700edbf064038a99a91c8f138cbd4c;
static PyCodeObject *code_objects_b7a21c71fc6917f4718c0fd9da79910d;
static PyCodeObject *code_objects_891ae3610fe809dc2a5cbf6adf96d928;
static PyCodeObject *code_objects_3e818545cf3775deec1ac75d1cb838e4;
static PyCodeObject *code_objects_af599b54532c744fc6d059c655e61416;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_c5c7e49451d07ef9e4cca08b38886ca5); CHECK_OBJECT(module_filename_obj);
code_objects_e0258bfbe3b3fde5d937b979836573fe = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_37dad5317521942678b45a8334c0fe3f, mod_consts.const_str_digest_37dad5317521942678b45a8334c0fe3f, NULL, NULL, 0, 0, 0);
code_objects_961f17271edec9b965bc4101b3648458 = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AsyncAzureOpenAI, mod_consts.const_str_plain_AsyncAzureOpenAI, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_e01812c01f40b986f1275f037bbf4ea4 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_AzureOpenAI, mod_consts.const_str_plain_AzureOpenAI, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_332bacbf8f358039862a1a060962a653 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_BaseAzureClient, mod_consts.const_str_plain_BaseAzureClient, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_b187b1695565acb1c78b88b2da5d3030 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_MutuallyExclusiveAuthError, mod_consts.const_str_plain_MutuallyExclusiveAuthError, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_6fd101857e93caa6ad155759e1b8cf21 = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077, mod_consts.const_tuple_969f509307e83a3ecbb7dd4a3dd27f2f_tuple, NULL, 1, 15, 0);
code_objects_1c932a30003bf1f4000d2715db000b56 = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077, mod_consts.const_tuple_4de19060699d556486fe3b689dc218e3_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 17, 0);
code_objects_ad1339d32658413fd86762772bfe6ae8 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077, mod_consts.const_tuple_a76059d6bdaf6ebf3320cdfb5ad608f1_tuple, NULL, 1, 16, 0);
code_objects_d719dea3b29937e1758eb77eb1d59830 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077, mod_consts.const_tuple_a0d4916ec9e378c65b9fefe7d92ffdc6_tuple, NULL, 1, 15, 0);
code_objects_a563e0405e3995907b36c1fd5ef2e3b0 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a, mod_consts.const_tuple_4ee6066626799602cfbeb77e7eed3de1_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 17, 0);
code_objects_14331d37246f8b334a6677819b4f4f2f = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a, mod_consts.const_tuple_d6f14a96351ac9df0c76aab07812306f_tuple, NULL, 1, 14, 0);
code_objects_cd503852d367d0e8533d6c9f9c35eff2 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a, mod_consts.const_tuple_13a6e7496f98a14c8d5bfa4bcb8e2cad_tuple, NULL, 1, 15, 0);
code_objects_526f49b774eebae160c7b86fd6ef7c0f = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a, mod_consts.const_tuple_e51e12358cbe1d3cd1a02e75f286b339_tuple, NULL, 1, 14, 0);
code_objects_28241cffbed7731034f6582960848cc9 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, const_str_plain___init__, mod_consts.const_str_digest_bf7f4e418b6d2bb5e2dde036e5d740af, mod_consts.const_tuple_str_plain_self_str_plain___class___tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 0, 0);
code_objects_cc0349444ec3ee4bec8ceb7583ec4167 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__build_request, mod_consts.const_str_digest_15ce696214a297e2e95590b075afd25c, mod_consts.const_tuple_ac2b31101592b4c033fffc3b22b0f641_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 1, 0);
code_objects_9d81833fa088f573a2bb5b28e09c3c60 = MAKE_CODE_OBJECT(module_filename_obj, 624, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__configure_realtime, mod_consts.const_str_digest_af40ff0f937d12c3806f7e8b44a709b7, mod_consts.const_tuple_db4ca2d02fe08ffa051cb73c4e920a25_tuple, NULL, 3, 0, 0);
code_objects_99672e6ff1f80d78a64df0b431d6bd5f = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__configure_realtime, mod_consts.const_str_digest_6419d16b36b33d058791ee526aef6f2a, mod_consts.const_tuple_db4ca2d02fe08ffa051cb73c4e920a25_tuple, NULL, 3, 0, 0);
code_objects_cad984d3b3132ca30098c496abf2d119 = MAKE_CODE_OBJECT(module_filename_obj, 587, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_azure_ad_token, mod_consts.const_str_digest_a98e1303d4a50eedae12334e02f37fc7, mod_consts.const_tuple_str_plain_self_str_plain_provider_str_plain_token_tuple, NULL, 1, 0, 0);
code_objects_8e40e722c343b434dae2bf04e9faed37 = MAKE_CODE_OBJECT(module_filename_obj, 306, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__get_azure_ad_token, mod_consts.const_str_digest_7d833677a2b662988ccaba64074a7a47, mod_consts.const_tuple_str_plain_self_str_plain_provider_str_plain_token_tuple, NULL, 1, 0, 0);
code_objects_80700edbf064038a99a91c8f138cbd4c = MAKE_CODE_OBJECT(module_filename_obj, 605, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__prepare_options, mod_consts.const_str_digest_498afff08040f7a3dda7b9d03c6efaec, mod_consts.const_tuple_8b96e1f803b5d55b3e174bc021a2a87e_tuple, NULL, 2, 0, 0);
code_objects_b7a21c71fc6917f4718c0fd9da79910d = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__prepare_options, mod_consts.const_str_digest_3b86cd3c40546a37db8ca64cc53d02a7, mod_consts.const_tuple_8b96e1f803b5d55b3e174bc021a2a87e_tuple, NULL, 2, 0, 0);
code_objects_891ae3610fe809dc2a5cbf6adf96d928 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain__prepare_url, mod_consts.const_str_digest_5484f2382a2beeeca06037d7f2a84609, mod_consts.const_tuple_9f479911b0518fb46b0e28bde3f438e6_tuple, mod_consts.const_tuple_str_plain___class___tuple, 2, 0, 0);
code_objects_3e818545cf3775deec1ac75d1cb838e4 = MAKE_CODE_OBJECT(module_filename_obj, 539, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_47f3bb8e2741afebb2957219e2c39c82, mod_consts.const_tuple_338a6db14eab3e981976a34e5cee6af3_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 17, 0);
code_objects_af599b54532c744fc6d059c655e61416 = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts.const_str_plain_copy, mod_consts.const_str_digest_baa5896ed825b7146f6a498af97e0b8c, mod_consts.const_tuple_338a6db14eab3e981976a34e5cee6af3_tuple, mod_consts.const_tuple_str_plain___class___tuple, 1, 17, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__10__prepare_options(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__11__configure_realtime(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__12___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__13___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__14___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__15___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__16_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__17__get_azure_ad_token(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__18__prepare_options(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__19__configure_realtime(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__2__build_request(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__3__prepare_url(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__4___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__6___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__7___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__8_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__9__get_azure_ad_token(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_openai$lib$azure$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_28241cffbed7731034f6582960848cc9, module_openai$lib$azure, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__1___init__->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__1___init__ = cache_frame_frame_openai$lib$azure$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__1___init__);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_called_instance_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_call_result_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 47;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$azure, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
type_description_1 = "oc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__1___init__->m_frame.f_lineno = 47;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    const_str_plain___init__,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_6ec8a3cdbf5a97e9feaa4921308b39b6_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__1___init__,
    type_description_1,
    par_self,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__1___init__ == cache_frame_frame_openai$lib$azure$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__1___init__);
    cache_frame_frame_openai$lib$azure$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__1___init__);

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


static PyObject *impl_openai$lib$azure$$$function__2__build_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_options = python_pars[1];
PyObject *par_retries_taken = python_pars[2];
PyObject *var_model = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__2__build_request;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
bool tmp_result;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__2__build_request = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__2__build_request)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__2__build_request);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__2__build_request == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__2__build_request = MAKE_FUNCTION_FRAME(tstate, code_objects_cc0349444ec3ee4bec8ceb7583ec4167, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__2__build_request->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__2__build_request = cache_frame_frame_openai$lib$azure$$$function__2__build_request;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__2__build_request);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__2__build_request) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_2;
int tmp_truth_name_1;
CHECK_OBJECT(par_options);
tmp_expression_value_1 = par_options;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_url);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = module_var_accessor_openai$lib$azure$_deployments_endpoints(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__deployments_endpoints);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_1);

exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
tmp_called_value_1 = module_var_accessor_openai$lib$azure$is_mapping(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_mapping);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_expression_value_2 = par_options;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_json_data);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__2__build_request->m_frame.f_lineno = 63;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 63;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_options);
tmp_expression_value_4 = par_options;
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_json_data);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__2__build_request->m_frame.f_lineno = 64;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_model_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_model == NULL);
var_model = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_unicode_arg_1;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
CHECK_OBJECT(var_model);
tmp_cmp_expr_left_2 = var_model;
tmp_cmp_expr_right_2 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
tmp_cmp_expr_left_3 = mod_consts.const_str_digest_bf8c1158fc33faa53e3240bb53e7cb91;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_base_url);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_path);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_unicode_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
CHECK_OBJECT(tmp_unicode_arg_1);
Py_DECREF(tmp_unicode_arg_1);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 65;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
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
PyObject *tmp_assattr_value_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_assattr_target_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_016557e0350d89b46ffd5a2ba304c6e2;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyObject *tmp_format_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_model);
tmp_format_value_1 = var_model;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(par_options);
tmp_expression_value_7 = par_options;
tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_url);
if (tmp_format_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooc";
    goto tuple_build_exception_1;
}
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
CHECK_OBJECT(tmp_format_value_2);
Py_DECREF(tmp_format_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_assattr_value_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assattr_value_1 == NULL));
CHECK_OBJECT(par_options);
tmp_assattr_target_1 = par_options;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_url, tmp_assattr_value_1);
CHECK_OBJECT(tmp_assattr_value_1);
Py_DECREF(tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
branch_no_1:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 68;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_8 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$azure, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__build_request);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_kw_call_arg_value_0_1 = par_options;
CHECK_OBJECT(par_retries_taken);
tmp_kw_call_dict_value_0_1 = par_retries_taken;
frame_frame_openai$lib$azure$$$function__2__build_request->m_frame.f_lineno = 68;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts.const_tuple_str_plain_retries_taken_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 68;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__2__build_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__2__build_request->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__2__build_request, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__2__build_request,
    type_description_1,
    par_self,
    par_options,
    par_retries_taken,
    var_model,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__2__build_request == cache_frame_frame_openai$lib$azure$$$function__2__build_request) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__2__build_request);
    cache_frame_frame_openai$lib$azure$$$function__2__build_request = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__2__build_request);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_model);
var_model = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_model);
var_model = NULL;
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
CHECK_OBJECT(par_retries_taken);
Py_DECREF(par_retries_taken);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
CHECK_OBJECT(par_retries_taken);
Py_DECREF(par_retries_taken);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$azure$$$function__3__prepare_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_url = python_pars[1];
PyObject *var_merge_url = NULL;
PyObject *var_merge_raw_path = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__3__prepare_url;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__3__prepare_url = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__3__prepare_url)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__3__prepare_url);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__3__prepare_url == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__3__prepare_url = MAKE_FUNCTION_FRAME(tstate, code_objects_891ae3610fe809dc2a5cbf6adf96d928, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__3__prepare_url->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__3__prepare_url = cache_frame_frame_openai$lib$azure$$$function__3__prepare_url;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__3__prepare_url);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__3__prepare_url) == 2);

// Framed code:
{
nuitka_bool tmp_condition_result_1;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
int tmp_and_left_truth_2;
nuitka_bool tmp_and_left_value_2;
nuitka_bool tmp_and_right_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__azure_deployment);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_1);

exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__azure_endpoint);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_2);

exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_2);
Py_DECREF(tmp_attribute_value_2);
tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_url);
tmp_cmp_expr_left_1 = par_url;
tmp_cmp_expr_right_1 = module_var_accessor_openai$lib$azure$_deployments_endpoints(tstate);
if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__deployments_endpoints);
}

if (tmp_cmp_expr_right_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_1;
tmp_called_instance_1 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_1 = par_url;
frame_frame_openai$lib$azure$$$function__3__prepare_url->m_frame.f_lineno = 77;
tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_URL, tmp_args_element_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 77;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_merge_url == NULL);
var_merge_url = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_attribute_value_3;
int tmp_truth_name_3;
CHECK_OBJECT(var_merge_url);
tmp_expression_value_3 = var_merge_url;
tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_is_relative_url);
if (tmp_attribute_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_attribute_value_3);

exception_lineno = 78;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_3);
Py_DECREF(tmp_attribute_value_3);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_2;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_add_expr_left_2;
PyObject *tmp_add_expr_right_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__azure_endpoint);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_raw_path);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__3__prepare_url->m_frame.f_lineno = 80;
tmp_add_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_bytes_chr_47_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_add_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_2 = mod_consts.const_bytes_digest_f581096641aeb0830e0eecc5ce4a8c4d;
tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_2, tmp_add_expr_right_2);
CHECK_OBJECT(tmp_add_expr_left_2);
Py_DECREF(tmp_add_expr_left_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_merge_url);
tmp_expression_value_8 = var_merge_url;
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_raw_path);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_lstrip);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__3__prepare_url->m_frame.f_lineno = 80;
tmp_add_expr_right_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_bytes_chr_47_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_add_expr_right_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_add_expr_left_1);

exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
CHECK_OBJECT(tmp_add_expr_right_1);
Py_DECREF(tmp_add_expr_right_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
assert(var_merge_raw_path == NULL);
var_merge_raw_path = tmp_assign_source_2;
}
{
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(par_self);
tmp_expression_value_10 = par_self;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__azure_endpoint);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_copy_with);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_merge_raw_path);
tmp_kw_call_value_0_1 = var_merge_raw_path;
frame_frame_openai$lib$azure$$$function__3__prepare_url->m_frame.f_lineno = 82;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_raw_path_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;
CHECK_OBJECT(var_merge_url);
tmp_return_value = var_merge_url;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
branch_no_1:;
{
PyObject *tmp_called_instance_2;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
PyObject *tmp_args_element_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 86;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$azure, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_url);
tmp_args_element_value_2 = par_url;
frame_frame_openai$lib$azure$$$function__3__prepare_url->m_frame.f_lineno = 86;
tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain__prepare_url, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 86;
type_description_1 = "ooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__3__prepare_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__3__prepare_url->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__3__prepare_url, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__3__prepare_url,
    type_description_1,
    par_self,
    par_url,
    var_merge_url,
    var_merge_raw_path,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__3__prepare_url == cache_frame_frame_openai$lib$azure$$$function__3__prepare_url) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__3__prepare_url);
    cache_frame_frame_openai$lib$azure$$$function__3__prepare_url = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__3__prepare_url);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_merge_url);
var_merge_url = NULL;
Py_XDECREF(var_merge_raw_path);
var_merge_raw_path = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_merge_url);
var_merge_url = NULL;
Py_XDECREF(var_merge_raw_path);
var_merge_raw_path = NULL;
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


static PyObject *impl_openai$lib$azure$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_version = python_pars[1];
PyObject *par_azure_endpoint = python_pars[2];
PyObject *par_azure_deployment = python_pars[3];
PyObject *par_api_key = python_pars[4];
PyObject *par_azure_ad_token = python_pars[5];
PyObject *par_azure_ad_token_provider = python_pars[6];
PyObject *par_organization = python_pars[7];
PyObject *par_project = python_pars[8];
PyObject *par_webhook_secret = python_pars[9];
PyObject *par_websocket_base_url = python_pars[10];
PyObject *par_base_url = python_pars[11];
PyObject *par_timeout = python_pars[12];
PyObject *par_max_retries = python_pars[13];
PyObject *par_default_headers = python_pars[14];
PyObject *par_default_query = python_pars[15];
PyObject *par_http_client = python_pars[16];
PyObject *par__strict_response_validation = python_pars[17];
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__7___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__7___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__7___init__)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__7___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__7___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__7___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_a563e0405e3995907b36c1fd5ef2e3b0, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__7___init__->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__7___init__ = cache_frame_frame_openai$lib$azure$$$function__7___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__7___init__);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__7___init__) == 2);

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


exception_lineno = 193;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 193;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 193;
type_description_1 = "ooooooooooooooooooc";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_azure_ad_token);
tmp_cmp_expr_left_2 = par_azure_ad_token;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 196;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 196;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_azure_ad_token;
    assert(old != NULL);
    par_azure_ad_token = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_3 = par_api_key;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_azure_ad_token);
tmp_cmp_expr_left_4 = par_azure_ad_token;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_azure_ad_token_provider);
tmp_cmp_expr_left_5 = par_azure_ad_token_provider;
tmp_cmp_expr_right_5 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_openai$lib$azure$OpenAIError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OpenAIError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 199;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 199;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_3b15816a1f2ed4ff14460af183ea0c89_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 199;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 199;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_api_version);
tmp_cmp_expr_left_6 = par_api_version;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 204;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_api_version;
    assert(old != NULL);
    par_api_version = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_api_version);
tmp_cmp_expr_left_7 = par_api_version;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_08fd66ab815ec677715c0e865bbef550;
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 207;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 207;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_default_query);
tmp_cmp_expr_left_8 = par_default_query;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1;
CHECK_OBJECT(par_api_version);
tmp_dict_value_1 = par_api_version;
tmp_assign_source_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = par_default_query;
    assert(old != NULL);
    par_default_query = tmp_assign_source_4;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_default_query);
tmp_tuple_element_1 = par_default_query;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_2 = mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1;
CHECK_OBJECT(par_api_version);
tmp_dict_value_2 = par_api_version;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_5 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 214;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_default_query;
    assert(old != NULL);
    par_default_query = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_end_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(par_base_url);
tmp_cmp_expr_left_9 = par_base_url;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(par_azure_endpoint);
tmp_cmp_expr_left_10 = par_azure_endpoint;
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_environ);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 218;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 218;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_azure_endpoint;
    assert(old != NULL);
    par_azure_endpoint = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(par_azure_endpoint);
tmp_cmp_expr_left_11 = par_azure_endpoint;
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_e1081a28e5a0ac754d76d8b20511ca63;
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 221;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 221;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(par_azure_deployment);
tmp_cmp_expr_left_12 = par_azure_deployment;
tmp_cmp_expr_right_12 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_azure_endpoint);
tmp_expression_value_9 = par_azure_endpoint;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_rstrip);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 226;
tmp_format_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_4a5e57921d01c728e77d65d74827c4fb;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_azure_deployment);
tmp_format_value_2 = par_azure_deployment;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
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
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_7;
    Py_DECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_3;
CHECK_OBJECT(par_azure_endpoint);
tmp_expression_value_10 = par_azure_endpoint;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_rstrip);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 228;
tmp_format_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 228;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_ad0562d952f1bedd50216ee5fa1b04b0;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_assign_source_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_8 == NULL));
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_end_10:;
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(par_azure_endpoint);
tmp_cmp_expr_left_13 = par_azure_endpoint;
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_48f3d0047b8840d290277d6900163a1b;
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 231;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 231;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_11:;
branch_end_7:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_14 = par_api_key;
tmp_cmp_expr_right_14 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = module_var_accessor_openai$lib$azure$API_KEY_SENTINEL(tstate);
if (unlikely(tmp_assign_source_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_API_KEY_SENTINEL);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_api_key;
    assert(old != NULL);
    par_api_key = tmp_assign_source_9;
    Py_INCREF(par_api_key);
    Py_DECREF(old);
}

}
branch_no_12:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_11;
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
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_kw_call_value_11_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 237;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_11 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$azure, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_key);
tmp_kw_call_value_0_1 = par_api_key;
CHECK_OBJECT(par_organization);
tmp_kw_call_value_1_1 = par_organization;
CHECK_OBJECT(par_project);
tmp_kw_call_value_2_1 = par_project;
CHECK_OBJECT(par_webhook_secret);
tmp_kw_call_value_3_1 = par_webhook_secret;
CHECK_OBJECT(par_base_url);
tmp_kw_call_value_4_1 = par_base_url;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_5_1 = par_timeout;
CHECK_OBJECT(par_max_retries);
tmp_kw_call_value_6_1 = par_max_retries;
CHECK_OBJECT(par_default_headers);
tmp_kw_call_value_7_1 = par_default_headers;
CHECK_OBJECT(par_default_query);
tmp_kw_call_value_8_1 = par_default_query;
CHECK_OBJECT(par_http_client);
tmp_kw_call_value_9_1 = par_http_client;
CHECK_OBJECT(par_websocket_base_url);
tmp_kw_call_value_10_1 = par_websocket_base_url;
CHECK_OBJECT(par__strict_response_validation);
tmp_kw_call_value_11_1 = par__strict_response_validation;
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 237;
{
    PyObject *kw_values[12] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_ef46ee16f62e0e1399f5646ee312e6a7_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 237;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_api_version);
tmp_assattr_value_1 = par_api_version;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__api_version, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_azure_ad_token);
tmp_assattr_value_2 = par_azure_ad_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__azure_ad_token, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_azure_ad_token_provider);
tmp_assattr_value_3 = par_azure_ad_token_provider;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__azure_ad_token_provider, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_1;
PyObject *tmp_assattr_target_4;
if (par_azure_endpoint == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 254;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(par_azure_endpoint);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_azure_deployment);
tmp_assattr_value_4 = par_azure_deployment;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assattr_value_4 = Py_None;
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__azure_deployment, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 254;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_2;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_5;
if (par_azure_endpoint == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(par_azure_endpoint);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_expression_value_12 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_URL);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
if (par_azure_endpoint == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 255;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = par_azure_endpoint;
frame_frame_openai$lib$azure$$$function__7___init__->m_frame.f_lineno = 255;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assattr_value_5 = Py_None;
Py_INCREF(tmp_assattr_value_5);
condexpr_end_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__azure_endpoint, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
type_description_1 = "ooooooooooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__7___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__7___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__7___init__,
    type_description_1,
    par_self,
    par_api_version,
    par_azure_endpoint,
    par_azure_deployment,
    par_api_key,
    par_azure_ad_token,
    par_azure_ad_token_provider,
    par_organization,
    par_project,
    par_webhook_secret,
    par_websocket_base_url,
    par_base_url,
    par_timeout,
    par_max_retries,
    par_default_headers,
    par_default_query,
    par_http_client,
    par__strict_response_validation,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__7___init__ == cache_frame_frame_openai$lib$azure$$$function__7___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__7___init__);
    cache_frame_frame_openai$lib$azure$$$function__7___init__ = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__7___init__);

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
CHECK_OBJECT(par_api_version);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
par_api_version = NULL;
Py_XDECREF(par_azure_endpoint);
par_azure_endpoint = NULL;
CHECK_OBJECT(par_api_key);
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
par_api_key = NULL;
CHECK_OBJECT(par_azure_ad_token);
CHECK_OBJECT(par_azure_ad_token);
Py_DECREF(par_azure_ad_token);
par_azure_ad_token = NULL;
CHECK_OBJECT(par_base_url);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
par_base_url = NULL;
CHECK_OBJECT(par_default_query);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
par_default_query = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_api_version);
par_api_version = NULL;
Py_XDECREF(par_azure_endpoint);
par_azure_endpoint = NULL;
Py_XDECREF(par_api_key);
par_api_key = NULL;
Py_XDECREF(par_azure_ad_token);
par_azure_ad_token = NULL;
Py_XDECREF(par_base_url);
par_base_url = NULL;
Py_XDECREF(par_default_query);
par_default_query = NULL;
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
CHECK_OBJECT(par_azure_deployment);
Py_DECREF(par_azure_deployment);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_azure_deployment);
Py_DECREF(par_azure_deployment);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$azure$$$function__8_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_key = python_pars[1];
PyObject *par_organization = python_pars[2];
PyObject *par_project = python_pars[3];
PyObject *par_webhook_secret = python_pars[4];
PyObject *par_websocket_base_url = python_pars[5];
PyObject *par_api_version = python_pars[6];
PyObject *par_azure_ad_token = python_pars[7];
PyObject *par_azure_ad_token_provider = python_pars[8];
PyObject *par_base_url = python_pars[9];
PyObject *par_timeout = python_pars[10];
PyObject *par_http_client = python_pars[11];
PyObject *par_max_retries = python_pars[12];
PyObject *par_default_headers = python_pars[13];
PyObject *par_set_default_headers = python_pars[14];
PyObject *par_default_query = python_pars[15];
PyObject *par_set_default_query = python_pars[16];
PyObject *par__extra_kwargs = python_pars[17];
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__8_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__8_copy = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__8_copy)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__8_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__8_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__8_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_af599b54532c744fc6d059c655e61416, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__8_copy->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__8_copy = cache_frame_frame_openai$lib$azure$$$function__8_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__8_copy);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__8_copy) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
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
PyObject *tmp_kw_call_value_12_1;
PyObject *tmp_kw_call_value_13_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 282;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$azure, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_key);
tmp_kw_call_value_0_1 = par_api_key;
CHECK_OBJECT(par_organization);
tmp_kw_call_value_1_1 = par_organization;
CHECK_OBJECT(par_project);
tmp_kw_call_value_2_1 = par_project;
CHECK_OBJECT(par_webhook_secret);
tmp_kw_call_value_3_1 = par_webhook_secret;
CHECK_OBJECT(par_websocket_base_url);
tmp_kw_call_value_4_1 = par_websocket_base_url;
CHECK_OBJECT(par_base_url);
tmp_kw_call_value_5_1 = par_base_url;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_6_1 = par_timeout;
CHECK_OBJECT(par_http_client);
tmp_kw_call_value_7_1 = par_http_client;
CHECK_OBJECT(par_max_retries);
tmp_kw_call_value_8_1 = par_max_retries;
CHECK_OBJECT(par_default_headers);
tmp_kw_call_value_9_1 = par_default_headers;
CHECK_OBJECT(par_set_default_headers);
tmp_kw_call_value_10_1 = par_set_default_headers;
CHECK_OBJECT(par_default_query);
tmp_kw_call_value_11_1 = par_default_query;
CHECK_OBJECT(par_set_default_query);
tmp_kw_call_value_12_1 = par_set_default_query;
tmp_dict_key_1 = mod_consts.const_str_plain_api_version;
CHECK_OBJECT(par_api_version);
tmp_or_left_value_1 = par_api_version;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 297;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__api_version);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 297;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_dict_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_2 = mod_consts.const_str_plain_azure_ad_token;
CHECK_OBJECT(par_azure_ad_token);
tmp_or_left_value_2 = par_azure_ad_token;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__azure_ad_token);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
tmp_dict_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_dict_value_2 = tmp_or_left_value_2;
or_end_2:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
tmp_dict_key_3 = mod_consts.const_str_plain_azure_ad_token_provider;
CHECK_OBJECT(par_azure_ad_token_provider);
tmp_or_left_value_3 = par_azure_ad_token_provider;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_or_right_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__azure_ad_token_provider);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
tmp_dict_value_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_dict_value_3 = tmp_or_left_value_3;
or_end_3:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par__extra_kwargs);
tmp_tuple_element_1 = par__extra_kwargs;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_kw_call_value_13_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_13_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 296;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__8_copy->m_frame.f_lineno = 282;
{
    PyObject *kw_values[14] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_fb7b8314154c0fe6bbebe5432253bb8c_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_13_1);
Py_DECREF(tmp_kw_call_value_13_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooooooooooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__8_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__8_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__8_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__8_copy,
    type_description_1,
    par_self,
    par_api_key,
    par_organization,
    par_project,
    par_webhook_secret,
    par_websocket_base_url,
    par_api_version,
    par_azure_ad_token,
    par_azure_ad_token_provider,
    par_base_url,
    par_timeout,
    par_http_client,
    par_max_retries,
    par_default_headers,
    par_set_default_headers,
    par_default_query,
    par_set_default_query,
    par__extra_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__8_copy == cache_frame_frame_openai$lib$azure$$$function__8_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__8_copy);
    cache_frame_frame_openai$lib$azure$$$function__8_copy = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__8_copy);

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
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_azure_ad_token);
Py_DECREF(par_azure_ad_token);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
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
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_azure_ad_token);
Py_DECREF(par_azure_ad_token);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
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
CHECK_OBJECT(par__extra_kwargs);
Py_DECREF(par__extra_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$azure$$$function__9__get_azure_ad_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *var_provider = NULL;
PyObject *var_token = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
PyObject *tmp_return_value = NULL;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token = MAKE_FUNCTION_FRAME(tstate, code_objects_8e40e722c343b434dae2bf04e9faed37, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token = cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__azure_ad_token);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 307;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_2;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__azure_ad_token);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 308;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__azure_ad_token_provider);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_provider == NULL);
var_provider = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(var_provider);
tmp_cmp_expr_left_2 = var_provider;
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
PyObject *tmp_called_value_1;
CHECK_OBJECT(var_provider);
tmp_called_value_1 = var_provider;
frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token->m_frame.f_lineno = 312;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 312;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_2;
}
{
bool tmp_condition_result_3;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(var_token);
tmp_operand_value_1 = var_token;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooo";
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
CHECK_OBJECT(var_token);
tmp_isinstance_inst_1 = var_token;
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 313;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
tmp_condition_result_3 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_3 = tmp_or_left_value_1;
or_end_1:;
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
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_f9d421dc110bd4a36ec13feea385f595;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
CHECK_OBJECT(var_token);
tmp_format_value_1 = var_token;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 315;
type_description_1 = "ooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
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
frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token->m_frame.f_lineno = 314;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 314;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
CHECK_OBJECT(var_token);
tmp_return_value = var_token;
Py_INCREF(tmp_return_value);
goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token,
    type_description_1,
    par_self,
    var_provider,
    var_token
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token == cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token);
    cache_frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__9__get_azure_ad_token);

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
Py_XDECREF(var_provider);
var_provider = NULL;
Py_XDECREF(var_token);
var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_provider);
var_provider = NULL;
Py_XDECREF(var_token);
var_token = NULL;
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


static PyObject *impl_openai$lib$azure$$$function__10__prepare_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_options = python_pars[1];
PyObject *var_headers = NULL;
PyObject *var_azure_ad_token = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__10__prepare_options;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__10__prepare_options = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__10__prepare_options)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__10__prepare_options);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__10__prepare_options == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__10__prepare_options = MAKE_FUNCTION_FRAME(tstate, code_objects_b7a21c71fc6917f4718c0fd9da79910d, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__10__prepare_options->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__10__prepare_options = cache_frame_frame_openai$lib$azure$$$function__10__prepare_options;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__10__prepare_options);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__10__prepare_options) == 2);

// Framed code:
{
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
int tmp_truth_name_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$lib$azure$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_expression_value_1 = par_options;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__10__prepare_options->m_frame.f_lineno = 323;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_call_result_1);

exception_lineno = 323;
type_description_1 = "oooo";
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
CHECK_OBJECT(par_options);
tmp_expression_value_2 = par_options;
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 323;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
condexpr_end_1:;
assert(var_headers == NULL);
var_headers = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_openai$lib$azure$model_copy(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_model_copy);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_options);
tmp_args_element_value_2 = par_options;
frame_frame_openai$lib$azure$$$function__10__prepare_options->m_frame.f_lineno = 325;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_options;
    assert(old != NULL);
    par_options = tmp_assign_source_2;
    Py_DECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(var_headers);
tmp_assattr_value_1 = var_headers;
CHECK_OBJECT(par_options);
tmp_assattr_target_1 = par_options;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_headers, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 326;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_openai$lib$azure$$$function__10__prepare_options->m_frame.f_lineno = 328;
tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_azure_ad_token);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 328;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
assert(var_azure_ad_token == NULL);
var_azure_ad_token = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(var_azure_ad_token);
tmp_cmp_expr_left_1 = var_azure_ad_token;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(var_headers);
tmp_expression_value_3 = var_headers;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__10__prepare_options->m_frame.f_lineno = 330;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 330;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_tuple_element_2 = mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_azure_ad_token);
tmp_format_value_1 = var_azure_ad_token;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_ass_subvalue_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_ass_subvalue_1 == NULL));
CHECK_OBJECT(var_headers);
tmp_ass_subscribed_1 = var_headers;
tmp_ass_subscript_1 = mod_consts.const_str_plain_Authorization;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_4;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_api_key);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_openai$lib$azure$API_KEY_SENTINEL(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_API_KEY_SENTINEL);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(var_headers);
tmp_expression_value_5 = var_headers;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__10__prepare_options->m_frame.f_lineno = 333;
tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 333;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
CHECK_OBJECT(par_self);
tmp_expression_value_6 = par_self;
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_api_key);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_headers);
tmp_ass_subscribed_2 = var_headers;
tmp_ass_subscript_2 = mod_consts.const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 334;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_25e4683691d58a2727570af4b6617784;
frame_frame_openai$lib$azure$$$function__10__prepare_options->m_frame.f_lineno = 337;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 337;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__10__prepare_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__10__prepare_options->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__10__prepare_options, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__10__prepare_options,
    type_description_1,
    par_self,
    par_options,
    var_headers,
    var_azure_ad_token
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__10__prepare_options == cache_frame_frame_openai$lib$azure$$$function__10__prepare_options) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__10__prepare_options);
    cache_frame_frame_openai$lib$azure$$$function__10__prepare_options = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__10__prepare_options);

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
CHECK_OBJECT(par_options);
CHECK_OBJECT(par_options);
Py_DECREF(par_options);
par_options = NULL;
CHECK_OBJECT(var_headers);
CHECK_OBJECT(var_headers);
Py_DECREF(var_headers);
var_headers = NULL;
CHECK_OBJECT(var_azure_ad_token);
CHECK_OBJECT(var_azure_ad_token);
Py_DECREF(var_azure_ad_token);
var_azure_ad_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_options);
par_options = NULL;
Py_XDECREF(var_headers);
var_headers = NULL;
Py_XDECREF(var_azure_ad_token);
var_azure_ad_token = NULL;
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


static PyObject *impl_openai$lib$azure$$$function__11__configure_realtime(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_model = python_pars[1];
PyObject *par_extra_query = python_pars[2];
PyObject *var_auth_headers = NULL;
PyObject *var_query = NULL;
PyObject *var_token = NULL;
PyObject *var_base_url = NULL;
PyObject *var_merge_raw_path = NULL;
PyObject *var_realtime_url = NULL;
PyObject *var_url = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__11__configure_realtime;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_auth_headers == NULL);
var_auth_headers = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime = MAKE_FUNCTION_FRAME(tstate, code_objects_99672e6ff1f80d78a64df0b431d6bd5f, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__11__configure_realtime = cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__11__configure_realtime);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__11__configure_realtime) == 2);

// Framed code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_extra_query);
tmp_tuple_element_1 = par_extra_query;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1;
CHECK_OBJECT(par_self);
tmp_expression_value_1 = par_self;
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__api_version);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
tmp_dict_key_2 = mod_consts.const_str_plain_deployment;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__azure_deployment);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_or_left_value_1);

exception_lineno = 346;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
CHECK_OBJECT(par_model);
tmp_or_right_value_1 = par_model;
Py_INCREF(tmp_or_right_value_1);
tmp_dict_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_dict_value_2 = tmp_or_left_value_1;
or_end_1:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
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
    tmp_assign_source_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 343;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_query == NULL);
var_query = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_api_key);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_fee73283744c7235c0adf6386d48d405;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 348;
type_description_1 = "oooooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_4;
tmp_dict_key_3 = mod_consts.const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_api_key);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 349;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
{
    PyObject *old = var_auth_headers;
    assert(old != NULL);
    var_auth_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_called_instance_1;
CHECK_OBJECT(par_self);
tmp_called_instance_1 = par_self;
frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame.f_lineno = 351;
tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_azure_ad_token);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 351;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_token == NULL);
var_token = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(var_token);
tmp_truth_name_1 = CHECK_IF_TRUE(var_token);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooooooooo";
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
{
PyObject *tmp_assign_source_5;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_dict_key_4 = mod_consts.const_str_plain_Authorization;
tmp_tuple_element_2 = mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(var_token);
tmp_format_value_1 = var_token;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_dict_value_4 == NULL));
tmp_assign_source_5 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
{
    PyObject *old = var_auth_headers;
    assert(old != NULL);
    var_auth_headers = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(par_self);
tmp_expression_value_5 = par_self;
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_websocket_base_url);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 355;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_7;
tmp_expression_value_6 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 356;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_URL);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_self);
tmp_expression_value_7 = par_self;
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_websocket_base_url);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 356;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame.f_lineno = 356;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 356;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_base_url == NULL);
var_base_url = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_expression_value_9;
CHECK_OBJECT(var_base_url);
tmp_expression_value_9 = var_base_url;
tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_raw_path);
if (tmp_expression_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_8);
Py_DECREF(tmp_expression_value_8);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame.f_lineno = 357;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_bytes_chr_47_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_bytes_digest_1da00ea90187aad24dc7e3140f838aae;
tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 357;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_merge_raw_path == NULL);
var_merge_raw_path = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_10;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(var_base_url);
tmp_expression_value_10 = var_base_url;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_copy_with);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_merge_raw_path);
tmp_kw_call_value_0_1 = var_merge_raw_path;
frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame.f_lineno = 358;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_raw_path_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 358;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_realtime_url == NULL);
var_realtime_url = tmp_assign_source_8;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
CHECK_OBJECT(par_self);
tmp_called_instance_2 = par_self;
frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame.f_lineno = 360;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain__prepare_url,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c29f32f4c31fff7938185e18b4a3427e_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_base_url == NULL);
var_base_url = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(var_base_url);
tmp_expression_value_11 = var_base_url;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_copy_with);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame.f_lineno = 361;
tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_wss_tuple, 0), mod_consts.const_tuple_str_plain_scheme_tuple);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 361;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_realtime_url == NULL);
var_realtime_url = tmp_assign_source_10;
}
branch_end_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(var_realtime_url);
tmp_expression_value_12 = var_realtime_url;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_copy_with);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_query);
tmp_tuple_element_3 = var_query;
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_2, 0, tmp_tuple_element_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_kw_call_value_0_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_5);

exception_lineno = 363;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame.f_lineno = 363;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_params_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 363;
type_description_1 = "oooooooooo";
    goto frame_exception_exit_1;
}
assert(var_url == NULL);
var_url = tmp_assign_source_11;
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__11__configure_realtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__11__configure_realtime->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__11__configure_realtime, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__11__configure_realtime,
    type_description_1,
    par_self,
    par_model,
    par_extra_query,
    var_auth_headers,
    var_query,
    var_token,
    var_base_url,
    var_merge_raw_path,
    var_realtime_url,
    var_url
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__11__configure_realtime == cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime);
    cache_frame_frame_openai$lib$azure$$$function__11__configure_realtime = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__11__configure_realtime);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
{
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(var_url);
tmp_tuple_element_4 = var_url;
tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_4);
CHECK_OBJECT(var_auth_headers);
tmp_tuple_element_4 = var_auth_headers;
PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_4);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_auth_headers);
CHECK_OBJECT(var_auth_headers);
Py_DECREF(var_auth_headers);
var_auth_headers = NULL;
CHECK_OBJECT(var_query);
CHECK_OBJECT(var_query);
Py_DECREF(var_query);
var_query = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_base_url);
var_base_url = NULL;
Py_XDECREF(var_merge_raw_path);
var_merge_raw_path = NULL;
CHECK_OBJECT(var_realtime_url);
CHECK_OBJECT(var_realtime_url);
Py_DECREF(var_realtime_url);
var_realtime_url = NULL;
CHECK_OBJECT(var_url);
CHECK_OBJECT(var_url);
Py_DECREF(var_url);
var_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_auth_headers);
CHECK_OBJECT(var_auth_headers);
Py_DECREF(var_auth_headers);
var_auth_headers = NULL;
Py_XDECREF(var_query);
var_query = NULL;
Py_XDECREF(var_token);
var_token = NULL;
Py_XDECREF(var_base_url);
var_base_url = NULL;
Py_XDECREF(var_merge_raw_path);
var_merge_raw_path = NULL;
Py_XDECREF(var_realtime_url);
var_realtime_url = NULL;
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
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$azure$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_azure_endpoint = python_pars[1];
PyObject *par_azure_deployment = python_pars[2];
PyObject *par_api_version = python_pars[3];
PyObject *par_api_key = python_pars[4];
PyObject *par_azure_ad_token = python_pars[5];
PyObject *par_azure_ad_token_provider = python_pars[6];
PyObject *par_organization = python_pars[7];
PyObject *par_project = python_pars[8];
PyObject *par_webhook_secret = python_pars[9];
PyObject *par_base_url = python_pars[10];
PyObject *par_websocket_base_url = python_pars[11];
PyObject *par_timeout = python_pars[12];
PyObject *par_max_retries = python_pars[13];
PyObject *par_default_headers = python_pars[14];
PyObject *par_default_query = python_pars[15];
PyObject *par_http_client = python_pars[16];
PyObject *par__strict_response_validation = python_pars[17];
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__15___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__15___init__ = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
// Tried code:
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__15___init__)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__15___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__15___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__15___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_1c932a30003bf1f4000d2715db000b56, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__15___init__->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__15___init__ = cache_frame_frame_openai$lib$azure$$$function__15___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__15___init__);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__15___init__) == 2);

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


exception_lineno = 474;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 474;
tmp_assign_source_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain_AZURE_OPENAI_API_KEY_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 474;
type_description_1 = "ooooooooooooooooooc";
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
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(par_azure_ad_token);
tmp_cmp_expr_left_2 = par_azure_ad_token;
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
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
tmp_expression_value_4 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_4 == NULL));
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_environ);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 477;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain_AZURE_OPENAI_AD_TOKEN_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_azure_ad_token;
    assert(old != NULL);
    par_azure_ad_token = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_2:;
{
bool tmp_condition_result_3;
int tmp_and_left_truth_1;
bool tmp_and_left_value_1;
bool tmp_and_right_value_1;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
int tmp_and_left_truth_2;
bool tmp_and_left_value_2;
bool tmp_and_right_value_2;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_3 = par_api_key;
tmp_cmp_expr_right_3 = Py_None;
tmp_and_left_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(par_azure_ad_token);
tmp_cmp_expr_left_4 = par_azure_ad_token;
tmp_cmp_expr_right_4 = Py_None;
tmp_and_left_value_2 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
if (tmp_and_left_truth_2 == 1) {
    goto and_right_2;
} else {
    goto and_left_2;
}
and_right_2:;
CHECK_OBJECT(par_azure_ad_token_provider);
tmp_cmp_expr_left_5 = par_azure_ad_token_provider;
tmp_cmp_expr_right_5 = Py_None;
tmp_and_right_value_2 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
tmp_and_right_value_1 = tmp_and_right_value_2;
goto and_end_2;
and_left_2:;
tmp_and_right_value_1 = tmp_and_left_value_2;
and_end_2:;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_raise_type_input_1;
PyObject *tmp_called_value_3;
tmp_called_value_3 = module_var_accessor_openai$lib$azure$OpenAIError(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OpenAIError);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 480;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 480;
tmp_raise_type_input_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_digest_3b15816a1f2ed4ff14460af183ea0c89_tuple);

if (tmp_raise_type_input_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_raise_type_1 = NORMALIZE_EXCEPTION_VALUE_FOR_RAISE(tstate, tmp_raise_type_input_1);
CHECK_OBJECT(tmp_raise_type_input_1);
Py_DECREF(tmp_raise_type_input_1);
if (tmp_raise_type_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 480;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 480;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
CHECK_OBJECT(par_api_version);
tmp_cmp_expr_left_6 = par_api_version;
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
tmp_expression_value_6 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_6 == NULL));
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_environ);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 485;
tmp_assign_source_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_plain_OPENAI_API_VERSION_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 485;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_api_version;
    assert(old != NULL);
    par_api_version = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
CHECK_OBJECT(par_api_version);
tmp_cmp_expr_left_7 = par_api_version;
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_08fd66ab815ec677715c0e865bbef550;
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 488;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 488;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
CHECK_OBJECT(par_default_query);
tmp_cmp_expr_left_8 = par_default_query;
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1;
CHECK_OBJECT(par_api_version);
tmp_dict_value_1 = par_api_version;
tmp_assign_source_4 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
{
    PyObject *old = par_default_query;
    assert(old != NULL);
    par_default_query = tmp_assign_source_4;
    Py_DECREF(old);
}

}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
CHECK_OBJECT(par_default_query);
tmp_tuple_element_1 = par_default_query;
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_2 = mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1;
CHECK_OBJECT(par_api_version);
tmp_dict_value_2 = par_api_version;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
}

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_5 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 495;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_default_query;
    assert(old != NULL);
    par_default_query = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_end_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
CHECK_OBJECT(par_base_url);
tmp_cmp_expr_left_9 = par_base_url;
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
CHECK_OBJECT(par_azure_endpoint);
tmp_cmp_expr_left_10 = par_azure_endpoint;
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
tmp_expression_value_8 = IMPORT_HARD_OS();
assert(!(tmp_expression_value_8 == NULL));
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_environ);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 499;
tmp_assign_source_6 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_AZURE_OPENAI_ENDPOINT_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 499;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_azure_endpoint;
    assert(old != NULL);
    par_azure_endpoint = tmp_assign_source_6;
    Py_DECREF(old);
}

}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
CHECK_OBJECT(par_azure_endpoint);
tmp_cmp_expr_left_11 = par_azure_endpoint;
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_e1081a28e5a0ac754d76d8b20511ca63;
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 502;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 502;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
CHECK_OBJECT(par_azure_deployment);
tmp_cmp_expr_left_12 = par_azure_deployment;
tmp_cmp_expr_right_12 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_7;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_format_value_1;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_9;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(par_azure_endpoint);
tmp_expression_value_9 = par_azure_endpoint;
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_rstrip);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 507;
tmp_format_value_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_6, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = mod_consts.const_str_digest_4a5e57921d01c728e77d65d74827c4fb;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
CHECK_OBJECT(par_azure_deployment);
tmp_format_value_2 = par_azure_deployment;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 507;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
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
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_7;
    Py_DECREF(old);
}

}
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_8;
PyObject *tmp_string_concat_values_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_format_value_3;
PyObject *tmp_called_value_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_format_spec_3;
CHECK_OBJECT(par_azure_endpoint);
tmp_expression_value_10 = par_azure_endpoint;
tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_rstrip);
if (tmp_called_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 509;
tmp_format_value_3 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_7, mod_consts.const_tuple_str_slash_tuple);

CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
if (tmp_format_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
CHECK_OBJECT(tmp_format_value_3);
Py_DECREF(tmp_format_value_3);
if (tmp_tuple_element_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 509;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = mod_consts.const_str_digest_ad0562d952f1bedd50216ee5fa1b04b0;
PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
tmp_assign_source_8 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_2);
CHECK_OBJECT(tmp_string_concat_values_2);
Py_DECREF(tmp_string_concat_values_2);
assert(!(tmp_assign_source_8 == NULL));
{
    PyObject *old = par_base_url;
    assert(old != NULL);
    par_base_url = tmp_assign_source_8;
    Py_DECREF(old);
}

}
branch_end_10:;
goto branch_end_7;
branch_no_7:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
CHECK_OBJECT(par_azure_endpoint);
tmp_cmp_expr_left_13 = par_azure_endpoint;
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_48f3d0047b8840d290277d6900163a1b;
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 512;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 512;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooooooooooooooooooc";
goto frame_exception_exit_1;
}
branch_no_11:;
branch_end_7:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
CHECK_OBJECT(par_api_key);
tmp_cmp_expr_left_14 = par_api_key;
tmp_cmp_expr_right_14 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_assign_source_9;
tmp_assign_source_9 = module_var_accessor_openai$lib$azure$API_KEY_SENTINEL(tstate);
if (unlikely(tmp_assign_source_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_API_KEY_SENTINEL);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 516;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
{
    PyObject *old = par_api_key;
    assert(old != NULL);
    par_api_key = tmp_assign_source_9;
    Py_INCREF(par_api_key);
    Py_DECREF(old);
}

}
branch_no_12:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_expression_value_11;
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
PyObject *tmp_kw_call_value_8_1;
PyObject *tmp_kw_call_value_9_1;
PyObject *tmp_kw_call_value_10_1;
PyObject *tmp_kw_call_value_11_1;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 518;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_11 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$azure, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, const_str_plain___init__);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_called_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_key);
tmp_kw_call_value_0_1 = par_api_key;
CHECK_OBJECT(par_organization);
tmp_kw_call_value_1_1 = par_organization;
CHECK_OBJECT(par_project);
tmp_kw_call_value_2_1 = par_project;
CHECK_OBJECT(par_webhook_secret);
tmp_kw_call_value_3_1 = par_webhook_secret;
CHECK_OBJECT(par_base_url);
tmp_kw_call_value_4_1 = par_base_url;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_5_1 = par_timeout;
CHECK_OBJECT(par_max_retries);
tmp_kw_call_value_6_1 = par_max_retries;
CHECK_OBJECT(par_default_headers);
tmp_kw_call_value_7_1 = par_default_headers;
CHECK_OBJECT(par_default_query);
tmp_kw_call_value_8_1 = par_default_query;
CHECK_OBJECT(par_http_client);
tmp_kw_call_value_9_1 = par_http_client;
CHECK_OBJECT(par_websocket_base_url);
tmp_kw_call_value_10_1 = par_websocket_base_url;
CHECK_OBJECT(par__strict_response_validation);
tmp_kw_call_value_11_1 = par__strict_response_validation;
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 518;
{
    PyObject *kw_values[12] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1};

    tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_8, kw_values, mod_consts.const_tuple_ef46ee16f62e0e1399f5646ee312e6a7_tuple);
}

CHECK_OBJECT(tmp_called_value_8);
Py_DECREF(tmp_called_value_8);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_api_version);
tmp_assattr_value_1 = par_api_version;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__api_version, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_azure_ad_token);
tmp_assattr_value_2 = par_azure_ad_token;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__azure_ad_token, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_3;
PyObject *tmp_assattr_target_3;
CHECK_OBJECT(par_azure_ad_token_provider);
tmp_assattr_value_3 = par_azure_ad_token_provider;
CHECK_OBJECT(par_self);
tmp_assattr_target_3 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts.const_str_plain__azure_ad_token_provider, tmp_assattr_value_3);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 534;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_1;
PyObject *tmp_assattr_target_4;
if (par_azure_endpoint == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 535;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_truth_name_1 = CHECK_IF_TRUE(par_azure_endpoint);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(par_azure_deployment);
tmp_assattr_value_4 = par_azure_deployment;
goto condexpr_end_1;
condexpr_false_1:;
tmp_assattr_value_4 = Py_None;
condexpr_end_1:;
CHECK_OBJECT(par_self);
tmp_assattr_target_4 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts.const_str_plain__azure_deployment, tmp_assattr_value_4);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 535;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_5;
nuitka_bool tmp_condition_result_14;
int tmp_truth_name_2;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_element_value_1;
PyObject *tmp_assattr_target_5;
if (par_azure_endpoint == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 536;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(par_azure_endpoint);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_condition_result_14 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
tmp_expression_value_12 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 536;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_URL);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
if (par_azure_endpoint == NULL) {
Py_DECREF(tmp_called_value_9);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_azure_endpoint);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 536;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_args_element_value_1 = par_azure_endpoint;
frame_frame_openai$lib$azure$$$function__15___init__->m_frame.f_lineno = 536;
tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assattr_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_assattr_value_5 = Py_None;
Py_INCREF(tmp_assattr_value_5);
condexpr_end_2:;
CHECK_OBJECT(par_self);
tmp_assattr_target_5 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts.const_str_plain__azure_endpoint, tmp_assattr_value_5);
CHECK_OBJECT(tmp_assattr_value_5);
Py_DECREF(tmp_assattr_value_5);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 536;
type_description_1 = "ooooooooooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__15___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__15___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__15___init__,
    type_description_1,
    par_self,
    par_azure_endpoint,
    par_azure_deployment,
    par_api_version,
    par_api_key,
    par_azure_ad_token,
    par_azure_ad_token_provider,
    par_organization,
    par_project,
    par_webhook_secret,
    par_base_url,
    par_websocket_base_url,
    par_timeout,
    par_max_retries,
    par_default_headers,
    par_default_query,
    par_http_client,
    par__strict_response_validation,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__15___init__ == cache_frame_frame_openai$lib$azure$$$function__15___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__15___init__);
    cache_frame_frame_openai$lib$azure$$$function__15___init__ = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__15___init__);

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
Py_XDECREF(par_azure_endpoint);
par_azure_endpoint = NULL;
CHECK_OBJECT(par_api_version);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
par_api_version = NULL;
CHECK_OBJECT(par_api_key);
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
par_api_key = NULL;
CHECK_OBJECT(par_azure_ad_token);
CHECK_OBJECT(par_azure_ad_token);
Py_DECREF(par_azure_ad_token);
par_azure_ad_token = NULL;
CHECK_OBJECT(par_base_url);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
par_base_url = NULL;
CHECK_OBJECT(par_default_query);
CHECK_OBJECT(par_default_query);
Py_DECREF(par_default_query);
par_default_query = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(par_azure_endpoint);
par_azure_endpoint = NULL;
Py_XDECREF(par_api_version);
par_api_version = NULL;
Py_XDECREF(par_api_key);
par_api_key = NULL;
Py_XDECREF(par_azure_ad_token);
par_azure_ad_token = NULL;
Py_XDECREF(par_base_url);
par_base_url = NULL;
Py_XDECREF(par_default_query);
par_default_query = NULL;
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
CHECK_OBJECT(par_azure_deployment);
Py_DECREF(par_azure_deployment);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_azure_deployment);
Py_DECREF(par_azure_deployment);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_max_retries);
Py_DECREF(par_max_retries);
CHECK_OBJECT(par_default_headers);
Py_DECREF(par_default_headers);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
CHECK_OBJECT(par__strict_response_validation);
Py_DECREF(par__strict_response_validation);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$azure$$$function__16_copy(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_key = python_pars[1];
PyObject *par_organization = python_pars[2];
PyObject *par_project = python_pars[3];
PyObject *par_webhook_secret = python_pars[4];
PyObject *par_websocket_base_url = python_pars[5];
PyObject *par_api_version = python_pars[6];
PyObject *par_azure_ad_token = python_pars[7];
PyObject *par_azure_ad_token_provider = python_pars[8];
PyObject *par_base_url = python_pars[9];
PyObject *par_timeout = python_pars[10];
PyObject *par_http_client = python_pars[11];
PyObject *par_max_retries = python_pars[12];
PyObject *par_default_headers = python_pars[13];
PyObject *par_set_default_headers = python_pars[14];
PyObject *par_default_query = python_pars[15];
PyObject *par_set_default_query = python_pars[16];
PyObject *par__extra_kwargs = python_pars[17];
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$function__16_copy;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
int tmp_res;
static struct Nuitka_FrameObject *cache_frame_frame_openai$lib$azure$$$function__16_copy = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_openai$lib$azure$$$function__16_copy)) {
    Py_XDECREF(cache_frame_frame_openai$lib$azure$$$function__16_copy);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_openai$lib$azure$$$function__16_copy == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_openai$lib$azure$$$function__16_copy = MAKE_FUNCTION_FRAME(tstate, code_objects_3e818545cf3775deec1ac75d1cb838e4, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_openai$lib$azure$$$function__16_copy->m_type_description == NULL);
frame_frame_openai$lib$azure$$$function__16_copy = cache_frame_frame_openai$lib$azure$$$function__16_copy;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$function__16_copy);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$function__16_copy) == 2);

// Framed code:
{
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_type_arg_value_1;
PyObject *tmp_object_arg_value_1;
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
PyObject *tmp_kw_call_value_12_1;
PyObject *tmp_kw_call_value_13_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, const_str_plain___class__);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 563;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}

tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
CHECK_OBJECT(par_self);
tmp_object_arg_value_1 = par_self;
tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_openai$lib$azure, tmp_type_arg_value_1, tmp_object_arg_value_1);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_copy);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_key);
tmp_kw_call_value_0_1 = par_api_key;
CHECK_OBJECT(par_organization);
tmp_kw_call_value_1_1 = par_organization;
CHECK_OBJECT(par_project);
tmp_kw_call_value_2_1 = par_project;
CHECK_OBJECT(par_webhook_secret);
tmp_kw_call_value_3_1 = par_webhook_secret;
CHECK_OBJECT(par_websocket_base_url);
tmp_kw_call_value_4_1 = par_websocket_base_url;
CHECK_OBJECT(par_base_url);
tmp_kw_call_value_5_1 = par_base_url;
CHECK_OBJECT(par_timeout);
tmp_kw_call_value_6_1 = par_timeout;
CHECK_OBJECT(par_http_client);
tmp_kw_call_value_7_1 = par_http_client;
CHECK_OBJECT(par_max_retries);
tmp_kw_call_value_8_1 = par_max_retries;
CHECK_OBJECT(par_default_headers);
tmp_kw_call_value_9_1 = par_default_headers;
CHECK_OBJECT(par_set_default_headers);
tmp_kw_call_value_10_1 = par_set_default_headers;
CHECK_OBJECT(par_default_query);
tmp_kw_call_value_11_1 = par_default_query;
CHECK_OBJECT(par_set_default_query);
tmp_kw_call_value_12_1 = par_set_default_query;
tmp_dict_key_1 = mod_consts.const_str_plain_api_version;
CHECK_OBJECT(par_api_version);
tmp_or_left_value_1 = par_api_version;
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 578;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(par_self);
tmp_expression_value_2 = par_self;
tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__api_version);
if (tmp_or_right_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 578;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
tmp_dict_value_1 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
Py_INCREF(tmp_or_left_value_1);
tmp_dict_value_1 = tmp_or_left_value_1;
or_end_1:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 4);
{
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
int tmp_or_left_truth_2;
PyObject *tmp_or_left_value_2;
PyObject *tmp_or_right_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
int tmp_or_left_truth_3;
PyObject *tmp_or_left_value_3;
PyObject *tmp_or_right_value_3;
PyObject *tmp_expression_value_4;
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_2 = mod_consts.const_str_plain_azure_ad_token;
CHECK_OBJECT(par_azure_ad_token);
tmp_or_left_value_2 = par_azure_ad_token;
tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
if (tmp_or_left_truth_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_2 == 1) {
    goto or_left_2;
} else {
    goto or_right_2;
}
or_right_2:;
CHECK_OBJECT(par_self);
tmp_expression_value_3 = par_self;
tmp_or_right_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__azure_ad_token);
if (tmp_or_right_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
tmp_dict_value_2 = tmp_or_right_value_2;
goto or_end_2;
or_left_2:;
Py_INCREF(tmp_or_left_value_2);
tmp_dict_value_2 = tmp_or_left_value_2;
or_end_2:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
tmp_dict_key_3 = mod_consts.const_str_plain_azure_ad_token_provider;
CHECK_OBJECT(par_azure_ad_token_provider);
tmp_or_left_value_3 = par_azure_ad_token_provider;
tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
if (tmp_or_left_truth_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_3 == 1) {
    goto or_left_3;
} else {
    goto or_right_3;
}
or_right_3:;
CHECK_OBJECT(par_self);
tmp_expression_value_4 = par_self;
tmp_or_right_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__azure_ad_token_provider);
if (tmp_or_right_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "ooooooooooooooooooc";
    goto tuple_build_exception_1;
}
tmp_dict_value_3 = tmp_or_right_value_3;
goto or_end_3;
or_left_3:;
Py_INCREF(tmp_or_left_value_3);
tmp_dict_value_3 = tmp_or_left_value_3;
or_end_3:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(par__extra_kwargs);
tmp_tuple_element_1 = par__extra_kwargs;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 3, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_called_value_1);
Py_DECREF(tmp_direct_call_arg1_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_kw_call_value_13_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_13_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_1);

exception_lineno = 577;
type_description_1 = "ooooooooooooooooooc";
    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure$$$function__16_copy->m_frame.f_lineno = 563;
{
    PyObject *kw_values[14] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1, tmp_kw_call_value_6_1, tmp_kw_call_value_7_1, tmp_kw_call_value_8_1, tmp_kw_call_value_9_1, tmp_kw_call_value_10_1, tmp_kw_call_value_11_1, tmp_kw_call_value_12_1, tmp_kw_call_value_13_1};

    tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, kw_values, mod_consts.const_tuple_fb7b8314154c0fe6bbebe5432253bb8c_tuple);
}

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_kw_call_value_13_1);
Py_DECREF(tmp_kw_call_value_13_1);
if (tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooooooooooooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$function__16_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$function__16_copy->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$function__16_copy, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$function__16_copy,
    type_description_1,
    par_self,
    par_api_key,
    par_organization,
    par_project,
    par_webhook_secret,
    par_websocket_base_url,
    par_api_version,
    par_azure_ad_token,
    par_azure_ad_token_provider,
    par_base_url,
    par_timeout,
    par_http_client,
    par_max_retries,
    par_default_headers,
    par_set_default_headers,
    par_default_query,
    par_set_default_query,
    par__extra_kwargs,
    self->m_closure[0]
);


// Release cached frame if used for exception.
if (frame_frame_openai$lib$azure$$$function__16_copy == cache_frame_frame_openai$lib$azure$$$function__16_copy) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_openai$lib$azure$$$function__16_copy);
    cache_frame_frame_openai$lib$azure$$$function__16_copy = NULL;
}

assertFrameObject(frame_frame_openai$lib$azure$$$function__16_copy);

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
CHECK_OBJECT(par_api_key);
Py_DECREF(par_api_key);
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_azure_ad_token);
Py_DECREF(par_azure_ad_token);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
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
CHECK_OBJECT(par_organization);
Py_DECREF(par_organization);
CHECK_OBJECT(par_project);
Py_DECREF(par_project);
CHECK_OBJECT(par_webhook_secret);
Py_DECREF(par_webhook_secret);
CHECK_OBJECT(par_websocket_base_url);
Py_DECREF(par_websocket_base_url);
CHECK_OBJECT(par_api_version);
Py_DECREF(par_api_version);
CHECK_OBJECT(par_azure_ad_token);
Py_DECREF(par_azure_ad_token);
CHECK_OBJECT(par_azure_ad_token_provider);
Py_DECREF(par_azure_ad_token_provider);
CHECK_OBJECT(par_base_url);
Py_DECREF(par_base_url);
CHECK_OBJECT(par_timeout);
Py_DECREF(par_timeout);
CHECK_OBJECT(par_http_client);
Py_DECREF(par_http_client);
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
CHECK_OBJECT(par__extra_kwargs);
Py_DECREF(par__extra_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_openai$lib$azure$$$function__17__get_azure_ad_token(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_closure_1[0] = par_self;
Py_INCREF(tmp_closure_1[0]);
tmp_return_value = MAKE_COROUTINE_openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token(tstate, tmp_closure_1);

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
struct openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token_locals {
PyObject *var_provider;
PyObject *var_token;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
PyObject *tmp_return_value;
char yield_tmps[1024];
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token_locals *coroutine_heap = (struct openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_provider = NULL;
coroutine_heap->var_token = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_cad984d3b3132ca30098c496abf2d119, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 588;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__azure_ad_token);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 588;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_expression_value_2;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 589;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__azure_ad_token);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 589;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__azure_ad_token_provider);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 591;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_provider == NULL);
coroutine_heap->var_provider = tmp_assign_source_1;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(coroutine_heap->var_provider);
tmp_cmp_expr_left_2 = coroutine_heap->var_provider;
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
PyObject *tmp_called_value_1;
CHECK_OBJECT(coroutine_heap->var_provider);
tmp_called_value_1 = coroutine_heap->var_provider;
coroutine->m_frame->m_frame.f_lineno = 593;
tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 593;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_token == NULL);
coroutine_heap->var_token = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_called_instance_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
int tmp_truth_name_1;
tmp_called_instance_1 = module_var_accessor_openai$lib$azure$inspect(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_inspect);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 594;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_token);
tmp_args_element_value_1 = coroutine_heap->var_token;
coroutine->m_frame->m_frame.f_lineno = 594;
tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_isawaitable, tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 594;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 594;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
coroutine->m_frame->m_frame.f_lineno = 595;
CHECK_OBJECT(coroutine_heap->var_token);
tmp_expression_value_5 = coroutine_heap->var_token;
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 595;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 595;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = yield_return_value;
{
    PyObject *old = coroutine_heap->var_token;
    assert(old != NULL);
    coroutine_heap->var_token = tmp_assign_source_3;
    Py_DECREF(old);
}

}
branch_no_3:;
{
bool tmp_condition_result_4;
int tmp_or_left_truth_1;
bool tmp_or_left_value_1;
bool tmp_or_right_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_operand_value_2;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_args_element_value_3;
if (coroutine_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_operand_value_1 = coroutine_heap->var_token;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
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
tmp_called_value_2 = module_var_accessor_openai$lib$azure$cast(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_cast);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_args_element_value_2 = module_var_accessor_openai$lib$azure$Any(tstate);
if (unlikely(tmp_args_element_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_args_element_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
if (coroutine_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_3 = coroutine_heap->var_token;
coroutine->m_frame->m_frame.f_lineno = 596;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_isinstance_inst_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

if (tmp_isinstance_inst_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
CHECK_OBJECT(tmp_isinstance_inst_1);
Py_DECREF(tmp_isinstance_inst_1);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_operand_value_2 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 596;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
tmp_or_right_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
tmp_condition_result_4 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_condition_result_4 = tmp_or_left_value_1;
or_end_1:;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_f9d421dc110bd4a36ec13feea385f595;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (coroutine_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 598;
coroutine_heap->type_description_1 = "coo";
    goto tuple_build_exception_1;
}

tmp_format_value_1 = coroutine_heap->var_token;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 598;
coroutine_heap->type_description_1 = "coo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
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
coroutine->m_frame->m_frame.f_lineno = 597;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 597;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "coo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
PyObject *tmp_unicode_arg_1;
if (coroutine_heap->var_token == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_token);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 600;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}

tmp_unicode_arg_1 = coroutine_heap->var_token;
coroutine_heap->tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 600;
coroutine_heap->type_description_1 = "coo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}
branch_no_2:;

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
    coroutine->m_closure[0],
    coroutine_heap->var_provider,
    coroutine_heap->var_token
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
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF_IMMORTAL(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(coroutine_heap->var_provider);
coroutine_heap->var_provider = NULL;
Py_XDECREF(coroutine_heap->var_token);
coroutine_heap->var_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_provider);
coroutine_heap->var_provider = NULL;
Py_XDECREF(coroutine_heap->var_token);
coroutine_heap->var_token = NULL;
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

static PyObject *MAKE_COROUTINE_openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token_context,
        module_openai$lib$azure,
        mod_consts.const_str_plain__get_azure_ad_token,
        mod_consts.const_str_digest_a98e1303d4a50eedae12334e02f37fc7,
        code_objects_cad984d3b3132ca30098c496abf2d119,
        closure,
        1,
#if 1
        sizeof(struct openai$lib$azure$$$function__17__get_azure_ad_token$$$coroutine__1__get_azure_ad_token_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$lib$azure$$$function__18__prepare_options(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options(tstate, tmp_closure_1);

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
struct openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options_locals {
PyObject *var_headers;
PyObject *var_azure_ad_token;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options_locals *coroutine_heap = (struct openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_headers = NULL;
coroutine_heap->var_azure_ad_token = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_80700edbf064038a99a91c8f138cbd4c, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_1;
nuitka_bool tmp_condition_result_1;
PyObject *tmp_called_value_1;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_1;
int tmp_truth_name_1;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
tmp_called_value_1 = module_var_accessor_openai$lib$azure$is_given(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_is_given);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_headers);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 606;
tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_call_result_1);

coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
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
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_headers);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_1 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 606;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
condexpr_end_1:;
assert(coroutine_heap->var_headers == NULL);
coroutine_heap->var_headers = tmp_assign_source_1;
}
{
PyObject *tmp_assign_source_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_2;
tmp_called_value_2 = module_var_accessor_openai$lib$azure$model_copy(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_model_copy);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 608;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_options);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 608;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine->m_frame->m_frame.f_lineno = 608;
tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 608;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[0]);
    Nuitka_Cell_SET(coroutine->m_closure[0], tmp_assign_source_2);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_assattr_value_1 = coroutine_heap->var_headers;
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[0]));
tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain_headers, tmp_assattr_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 609;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_called_instance_1;
coroutine->m_frame->m_frame.f_lineno = 611;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 611;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
coroutine->m_frame->m_frame.f_lineno = 611;
tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_azure_ad_token);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 611;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 611;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_3;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 611;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = yield_return_value;
assert(coroutine_heap->var_azure_ad_token == NULL);
coroutine_heap->var_azure_ad_token = tmp_assign_source_3;
}
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
CHECK_OBJECT(coroutine_heap->var_azure_ad_token);
tmp_cmp_expr_left_1 = coroutine_heap->var_azure_ad_token;
tmp_cmp_expr_right_1 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_5;
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_expression_value_5 = coroutine_heap->var_headers;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 613;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 613;
tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_3, mod_consts.const_tuple_str_plain_Authorization_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 613;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_tuple_element_2 = mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(coroutine_heap->var_azure_ad_token);
tmp_format_value_1 = coroutine_heap->var_azure_ad_token;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 614;
coroutine_heap->type_description_1 = "ccoo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_ass_subvalue_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_ass_subvalue_1 == NULL));
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_ass_subscribed_1 = coroutine_heap->var_headers;
tmp_ass_subscript_1 = mod_consts.const_str_plain_Authorization;
coroutine_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subvalue_1);
Py_DECREF(tmp_ass_subvalue_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 614;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_6;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 615;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain_api_key);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 615;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = module_var_accessor_openai$lib$azure$API_KEY_SENTINEL(tstate);
if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_API_KEY_SENTINEL);
}

if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_cmp_expr_left_3);

coroutine_heap->exception_lineno = 615;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_7;
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_expression_value_7 = coroutine_heap->var_headers;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, const_str_plain_get);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 616;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 616;
tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_4, mod_consts.const_tuple_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6_tuple);

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 616;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_5 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_expression_value_8;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 617;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_api_key);
if (tmp_ass_subvalue_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 617;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_headers);
tmp_ass_subscribed_2 = coroutine_heap->var_headers;
tmp_ass_subscript_2 = mod_consts.const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6;
coroutine_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subvalue_2);
Py_DECREF(tmp_ass_subvalue_2);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 617;
coroutine_heap->type_description_1 = "ccoo";
    goto frame_exception_exit_1;
}
}
branch_no_4:;
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_25e4683691d58a2727570af4b6617784;
coroutine->m_frame->m_frame.f_lineno = 620;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 620;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "ccoo";
goto frame_exception_exit_1;
}
branch_end_3:;
branch_end_1:;

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
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
    coroutine_heap->var_azure_ad_token
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
CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[0]));
coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine->m_closure[0]);
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_headers);
CHECK_OBJECT(coroutine_heap->var_headers);
Py_DECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
CHECK_OBJECT(coroutine_heap->var_azure_ad_token);
CHECK_OBJECT(coroutine_heap->var_azure_ad_token);
Py_DECREF(coroutine_heap->var_azure_ad_token);
coroutine_heap->var_azure_ad_token = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_headers);
coroutine_heap->var_headers = NULL;
Py_XDECREF(coroutine_heap->var_azure_ad_token);
coroutine_heap->var_azure_ad_token = NULL;
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

static PyObject *MAKE_COROUTINE_openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options_context,
        module_openai$lib$azure,
        mod_consts.const_str_plain__prepare_options,
        mod_consts.const_str_digest_498afff08040f7a3dda7b9d03c6efaec,
        code_objects_80700edbf064038a99a91c8f138cbd4c,
        closure,
        2,
#if 1
        sizeof(struct openai$lib$azure$$$function__18__prepare_options$$$coroutine__1__prepare_options_locals)
#else
        0
#endif
    );
}


static PyObject *impl_openai$lib$azure$$$function__19__configure_realtime(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_model = Nuitka_Cell_New1(python_pars[1]);
struct Nuitka_CellObject *par_extra_query = Nuitka_Cell_New1(python_pars[2]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[3];
tmp_closure_1[0] = par_extra_query;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_model;
Py_INCREF(tmp_closure_1[1]);
tmp_closure_1[2] = par_self;
Py_INCREF(tmp_closure_1[2]);
tmp_return_value = MAKE_COROUTINE_openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_model);
CHECK_OBJECT(par_model);
Py_DECREF(par_model);
par_model = NULL;
CHECK_OBJECT(par_extra_query);
CHECK_OBJECT(par_extra_query);
Py_DECREF(par_extra_query);
par_extra_query = NULL;
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
struct openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime_locals {
PyObject *var_auth_headers;
PyObject *var_query;
PyObject *var_token;
PyObject *var_base_url;
PyObject *var_merge_raw_path;
PyObject *var_realtime_url;
PyObject *var_url;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
};
#endif

static PyObject *openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime_locals *coroutine_heap = (struct openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_auth_headers = NULL;
coroutine_heap->var_query = NULL;
coroutine_heap->var_token = NULL;
coroutine_heap->var_base_url = NULL;
coroutine_heap->var_merge_raw_path = NULL;
coroutine_heap->var_realtime_url = NULL;
coroutine_heap->var_url = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(coroutine_heap->var_auth_headers == NULL);
coroutine_heap->var_auth_headers = tmp_assign_source_1;
}
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_9d81833fa088f573a2bb5b28e09c3c60, module_openai$lib$azure, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_assign_source_2;
PyObject *tmp_direct_call_arg1_1;
PyObject *tmp_tuple_element_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_extra_query);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 627;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_direct_call_arg1_1 = MAKE_TUPLE_EMPTY(tstate, 3);
{
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
int tmp_or_left_truth_1;
PyObject *tmp_or_left_value_1;
PyObject *tmp_or_right_value_1;
PyObject *tmp_expression_value_2;
PyTuple_SET_ITEM0(tmp_direct_call_arg1_1, 0, tmp_tuple_element_1);
tmp_dict_key_1 = mod_consts.const_str_digest_87d755b9a38521987bdeae1dc13474c1;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 628;
coroutine_heap->type_description_1 = "cccooooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__api_version);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 628;
coroutine_heap->type_description_1 = "cccooooooo";
    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
PyTuple_SET_ITEM(tmp_direct_call_arg1_1, 1, tmp_tuple_element_1);
tmp_dict_key_2 = mod_consts.const_str_plain_deployment;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 629;
coroutine_heap->type_description_1 = "cccooooooo";
    goto tuple_build_exception_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__azure_deployment);
if (tmp_or_left_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 629;
coroutine_heap->type_description_1 = "cccooooooo";
    goto tuple_build_exception_1;
}
tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
if (tmp_or_left_truth_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_or_left_value_1);

coroutine_heap->exception_lineno = 629;
coroutine_heap->type_description_1 = "cccooooooo";
    goto tuple_build_exception_1;
}
if (tmp_or_left_truth_1 == 1) {
    goto or_left_1;
} else {
    goto or_right_1;
}
or_right_1:;
CHECK_OBJECT(tmp_or_left_value_1);
Py_DECREF(tmp_or_left_value_1);
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_model);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 629;
coroutine_heap->type_description_1 = "cccooooooo";
    goto tuple_build_exception_1;
}

tmp_or_right_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
Py_INCREF(tmp_or_right_value_1);
tmp_dict_value_2 = tmp_or_right_value_1;
goto or_end_1;
or_left_1:;
tmp_dict_value_2 = tmp_or_left_value_1;
or_end_1:;
tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(coroutine_heap->tmp_res != 0));
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
    tmp_assign_source_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 626;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_query == NULL);
coroutine_heap->var_query = tmp_assign_source_2;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_expression_value_3;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 631;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_api_key);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 631;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_1 = mod_consts.const_str_digest_fee73283744c7235c0adf6386d48d405;
tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
CHECK_OBJECT(tmp_cmp_expr_left_1);
Py_DECREF(tmp_cmp_expr_left_1);
if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 631;
coroutine_heap->type_description_1 = "cccooooooo";
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
PyObject *tmp_assign_source_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_4;
tmp_dict_key_3 = mod_consts.const_str_digest_ca4abfd07e9bd381b3d5c852a72ac9e6;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 632;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_api_key);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 632;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_3 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(coroutine_heap->tmp_res != 0));
{
    PyObject *old = coroutine_heap->var_auth_headers;
    assert(old != NULL);
    coroutine_heap->var_auth_headers = tmp_assign_source_3;
    Py_DECREF(old);
}

}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_1;
coroutine->m_frame->m_frame.f_lineno = 634;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 634;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 634;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__get_azure_ad_token);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 634;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 634;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 634;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = yield_return_value;
assert(coroutine_heap->var_token == NULL);
coroutine_heap->var_token = tmp_assign_source_4;
}
{
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
CHECK_OBJECT(coroutine_heap->var_token);
tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_token);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 635;
coroutine_heap->type_description_1 = "cccooooooo";
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
{
PyObject *tmp_assign_source_5;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_2;
tmp_dict_key_4 = mod_consts.const_str_plain_Authorization;
tmp_tuple_element_2 = mod_consts.const_str_digest_28f49fbb90aed0f2148bfe34bee3edd7;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
CHECK_OBJECT(coroutine_heap->var_token);
tmp_format_value_1 = coroutine_heap->var_token;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 636;
coroutine_heap->type_description_1 = "cccooooooo";
    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_string_concat_values_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_dict_value_4 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_dict_value_4 == NULL));
tmp_assign_source_5 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_5, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(coroutine_heap->tmp_res != 0));
{
    PyObject *old = coroutine_heap->var_auth_headers;
    assert(old != NULL);
    coroutine_heap->var_auth_headers = tmp_assign_source_5;
    Py_DECREF(old);
}

}
branch_no_2:;
branch_end_1:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_expression_value_7;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 638;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_websocket_base_url);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 638;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_6;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_8;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_9;
tmp_expression_value_8 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 639;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_URL);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 639;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 639;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[2]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_websocket_base_url);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 639;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 639;
tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 639;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_base_url == NULL);
coroutine_heap->var_base_url = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_add_expr_left_1;
PyObject *tmp_add_expr_right_1;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(coroutine_heap->var_base_url);
tmp_expression_value_11 = coroutine_heap->var_base_url;
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_raw_path);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 640;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_rstrip);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 640;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 640;
tmp_add_expr_left_1 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts.const_tuple_bytes_chr_47_tuple);

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_add_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 640;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
tmp_add_expr_right_1 = mod_consts.const_bytes_digest_1da00ea90187aad24dc7e3140f838aae;
tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_1, tmp_add_expr_right_1);
CHECK_OBJECT(tmp_add_expr_left_1);
Py_DECREF(tmp_add_expr_left_1);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 640;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_merge_raw_path == NULL);
coroutine_heap->var_merge_raw_path = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_12;
PyObject *tmp_kw_call_value_0_1;
CHECK_OBJECT(coroutine_heap->var_base_url);
tmp_expression_value_12 = coroutine_heap->var_base_url;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_copy_with);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 641;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_merge_raw_path);
tmp_kw_call_value_0_1 = coroutine_heap->var_merge_raw_path;
coroutine->m_frame->m_frame.f_lineno = 641;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_assign_source_8 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_3, kw_values, mod_consts.const_tuple_str_plain_raw_path_tuple);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 641;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_realtime_url == NULL);
coroutine_heap->var_realtime_url = tmp_assign_source_8;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 643;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}

tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
coroutine->m_frame->m_frame.f_lineno = 643;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain__prepare_url,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_c29f32f4c31fff7938185e18b4a3427e_tuple, 0)
);

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 643;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_base_url == NULL);
coroutine_heap->var_base_url = tmp_assign_source_9;
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(coroutine_heap->var_base_url);
tmp_expression_value_13 = coroutine_heap->var_base_url;
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain_copy_with);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 644;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 644;
tmp_assign_source_10 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_wss_tuple, 0), mod_consts.const_tuple_str_plain_scheme_tuple);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 644;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_realtime_url == NULL);
coroutine_heap->var_realtime_url = tmp_assign_source_10;
}
branch_end_3:;
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_14;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_direct_call_arg1_2;
PyObject *tmp_tuple_element_3;
CHECK_OBJECT(coroutine_heap->var_realtime_url);
tmp_expression_value_14 = coroutine_heap->var_realtime_url;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_copy_with);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 646;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_query);
tmp_tuple_element_3 = coroutine_heap->var_query;
tmp_direct_call_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_direct_call_arg1_2, 0, tmp_tuple_element_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_kw_call_value_0_2 = impl___main__$$$helper_function__unpack_dict(tstate, dir_call_args);
}
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_5);

coroutine_heap->exception_lineno = 646;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 646;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, kw_values, mod_consts.const_tuple_str_plain_params_tuple);
}

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 646;
coroutine_heap->type_description_1 = "cccooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_url == NULL);
coroutine_heap->var_url = tmp_assign_source_11;
}

// Release exception attached to the frame
DROP_COROUTINE_EXCEPTION(coroutine);



goto frame_no_exception_1;
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
    coroutine->m_closure[2],
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_auth_headers,
    coroutine_heap->var_query,
    coroutine_heap->var_token,
    coroutine_heap->var_base_url,
    coroutine_heap->var_merge_raw_path,
    coroutine_heap->var_realtime_url,
    coroutine_heap->var_url
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
{
PyObject *tmp_tuple_element_4;
CHECK_OBJECT(coroutine_heap->var_url);
tmp_tuple_element_4 = coroutine_heap->var_url;
coroutine_heap->tmp_return_value = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 0, tmp_tuple_element_4);
CHECK_OBJECT(coroutine_heap->var_auth_headers);
tmp_tuple_element_4 = coroutine_heap->var_auth_headers;
PyTuple_SET_ITEM0(coroutine_heap->tmp_return_value, 1, tmp_tuple_element_4);
goto try_return_handler_1;
}
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_auth_headers);
CHECK_OBJECT(coroutine_heap->var_auth_headers);
Py_DECREF(coroutine_heap->var_auth_headers);
coroutine_heap->var_auth_headers = NULL;
CHECK_OBJECT(coroutine_heap->var_query);
CHECK_OBJECT(coroutine_heap->var_query);
Py_DECREF(coroutine_heap->var_query);
coroutine_heap->var_query = NULL;
Py_XDECREF(coroutine_heap->var_token);
coroutine_heap->var_token = NULL;
Py_XDECREF(coroutine_heap->var_base_url);
coroutine_heap->var_base_url = NULL;
Py_XDECREF(coroutine_heap->var_merge_raw_path);
coroutine_heap->var_merge_raw_path = NULL;
CHECK_OBJECT(coroutine_heap->var_realtime_url);
CHECK_OBJECT(coroutine_heap->var_realtime_url);
Py_DECREF(coroutine_heap->var_realtime_url);
coroutine_heap->var_realtime_url = NULL;
CHECK_OBJECT(coroutine_heap->var_url);
CHECK_OBJECT(coroutine_heap->var_url);
Py_DECREF(coroutine_heap->var_url);
coroutine_heap->var_url = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->var_auth_headers);
CHECK_OBJECT(coroutine_heap->var_auth_headers);
Py_DECREF(coroutine_heap->var_auth_headers);
coroutine_heap->var_auth_headers = NULL;
Py_XDECREF(coroutine_heap->var_query);
coroutine_heap->var_query = NULL;
Py_XDECREF(coroutine_heap->var_token);
coroutine_heap->var_token = NULL;
Py_XDECREF(coroutine_heap->var_base_url);
coroutine_heap->var_base_url = NULL;
Py_XDECREF(coroutine_heap->var_merge_raw_path);
coroutine_heap->var_merge_raw_path = NULL;
Py_XDECREF(coroutine_heap->var_realtime_url);
coroutine_heap->var_realtime_url = NULL;
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

static PyObject *MAKE_COROUTINE_openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime_context,
        module_openai$lib$azure,
        mod_consts.const_str_plain__configure_realtime,
        mod_consts.const_str_digest_af40ff0f937d12c3806f7e8b44a709b7,
        code_objects_9d81833fa088f573a2bb5b28e09c3c60,
        closure,
        3,
#if 1
        sizeof(struct openai$lib$azure$$$function__19__configure_realtime$$$coroutine__1__configure_realtime_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__10__prepare_options(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__10__prepare_options,
        mod_consts.const_str_plain__prepare_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_3b86cd3c40546a37db8ca64cc53d02a7,
#endif
        code_objects_b7a21c71fc6917f4718c0fd9da79910d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__11__configure_realtime(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__11__configure_realtime,
        mod_consts.const_str_plain__configure_realtime,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_6419d16b36b33d058791ee526aef6f2a,
#endif
        code_objects_99672e6ff1f80d78a64df0b431d6bd5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__12___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077,
#endif
        code_objects_ad1339d32658413fd86762772bfe6ae8,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__13___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077,
#endif
        code_objects_6fd101857e93caa6ad155759e1b8cf21,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__14___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077,
#endif
        code_objects_d719dea3b29937e1758eb77eb1d59830,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__15___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__15___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_cb721cb745463184f3c8a6a98cf41077,
#endif
        code_objects_1c932a30003bf1f4000d2715db000b56,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        mod_consts.const_str_digest_f4234d09c08c0d10b7ce27e6835887a2,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__16_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__16_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_47f3bb8e2741afebb2957219e2c39c82,
#endif
        code_objects_3e818545cf3775deec1ac75d1cb838e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__17__get_azure_ad_token(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__17__get_azure_ad_token,
        mod_consts.const_str_plain__get_azure_ad_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a98e1303d4a50eedae12334e02f37fc7,
#endif
        code_objects_cad984d3b3132ca30098c496abf2d119,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__18__prepare_options(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__18__prepare_options,
        mod_consts.const_str_plain__prepare_options,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_498afff08040f7a3dda7b9d03c6efaec,
#endif
        code_objects_80700edbf064038a99a91c8f138cbd4c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__19__configure_realtime(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__19__configure_realtime,
        mod_consts.const_str_plain__configure_realtime,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_af40ff0f937d12c3806f7e8b44a709b7,
#endif
        code_objects_9d81833fa088f573a2bb5b28e09c3c60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__1___init__(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_bf7f4e418b6d2bb5e2dde036e5d740af,
#endif
        code_objects_28241cffbed7731034f6582960848cc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__2__build_request(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__2__build_request,
        mod_consts.const_str_plain__build_request,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_15ce696214a297e2e95590b075afd25c,
#endif
        code_objects_cc0349444ec3ee4bec8ceb7583ec4167,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__3__prepare_url(PyThreadState *tstate, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__3__prepare_url,
        mod_consts.const_str_plain__prepare_url,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_5484f2382a2beeeca06037d7f2a84609,
#endif
        code_objects_891ae3610fe809dc2a5cbf6adf96d928,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
        mod_consts.const_str_digest_07c0f3cf4d870e538496417ff5dba3dc,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__4___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a,
#endif
        code_objects_cd503852d367d0e8533d6c9f9c35eff2,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__5___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a,
#endif
        code_objects_14331d37246f8b334a6677819b4f4f2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__6___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a,
#endif
        code_objects_526f49b774eebae160c7b86fd6ef7c0f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__7___init__(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_543bb74c1ba8344b0bdff19028c2c36a,
#endif
        code_objects_a563e0405e3995907b36c1fd5ef2e3b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        mod_consts.const_str_digest_a2a5cd265dd49b8b122f256818ac0c40,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__8_copy(PyThreadState *tstate, PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__8_copy,
        mod_consts.const_str_plain_copy,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_baa5896ed825b7146f6a498af97e0b8c,
#endif
        code_objects_af599b54532c744fc6d059c655e61416,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_openai$lib$azure,
        mod_consts.const_str_digest_e91ba79863152f4b86dffa9f9d36f308,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openai$lib$azure$$$function__9__get_azure_ad_token(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openai$lib$azure$$$function__9__get_azure_ad_token,
        mod_consts.const_str_plain__get_azure_ad_token,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_7d833677a2b662988ccaba64074a7a47,
#endif
        code_objects_8e40e722c343b434dae2bf04e9faed37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_openai$lib$azure,
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

static function_impl_code const function_table_openai$lib$azure[] = {
impl_openai$lib$azure$$$function__1___init__,
impl_openai$lib$azure$$$function__2__build_request,
impl_openai$lib$azure$$$function__3__prepare_url,
impl_openai$lib$azure$$$function__7___init__,
impl_openai$lib$azure$$$function__8_copy,
impl_openai$lib$azure$$$function__9__get_azure_ad_token,
impl_openai$lib$azure$$$function__10__prepare_options,
impl_openai$lib$azure$$$function__11__configure_realtime,
impl_openai$lib$azure$$$function__15___init__,
impl_openai$lib$azure$$$function__16_copy,
impl_openai$lib$azure$$$function__17__get_azure_ad_token,
impl_openai$lib$azure$$$function__18__prepare_options,
impl_openai$lib$azure$$$function__19__configure_realtime,
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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$lib$azure);
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
        module_openai$lib$azure,
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
        function_table_openai$lib$azure,
        sizeof(function_table_openai$lib$azure) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.lib.azure";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$lib$azure(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$lib$azure");

    // Store the module for future use.
    module_openai$lib$azure = module;

    moduledict_openai$lib$azure = MODULE_DICT(module_openai$lib$azure);

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
        PRINT_STRING("openai$lib$azure: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$lib$azure: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$lib$azure: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.lib.azure" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$lib$azure\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$lib$azure,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$lib$azure,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$lib$azure,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$lib$azure,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$lib$azure,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$lib$azure);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$lib$azure);
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

        UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
struct Nuitka_CellObject *outline_0_var___class__ = NULL;
struct Nuitka_CellObject *outline_1_var___class__ = NULL;
struct Nuitka_CellObject *outline_2_var___class__ = NULL;
struct Nuitka_CellObject *outline_3_var___class__ = NULL;
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
PyObject *tmp_class_container$class_creation_4__bases = NULL;
PyObject *tmp_class_container$class_creation_4__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_4__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_4__metaclass = NULL;
PyObject *tmp_class_container$class_creation_4__prepared = NULL;
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
PyObject *tmp_import_from_4__module = NULL;
PyObject *tmp_import_from_5__module = NULL;
PyObject *tmp_import_from_6__module = NULL;
PyObject *tmp_import_from_7__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure;
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
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
int tmp_res;
PyObject *locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
PyObject *locals_openai$lib$azure$$$class__2_BaseAzureClient_52 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3;
NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_12;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_13;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
PyObject *locals_openai$lib$azure$$$class__3_AzureOpenAI_89 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4;
NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_14;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_15;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_16;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
PyObject *locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367 = NULL;
struct Nuitka_FrameObject *frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5;
NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_17;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_18;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_19;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$lib$azure = MAKE_MODULE_FRAME(code_objects_e0258bfbe3b3fde5d937b979836573fe, module_openai$lib$azure);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure);
assert(Py_REFCNT(frame_frame_openai$lib$azure) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$lib$azure$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$lib$azure$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_4 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
tmp_assign_source_5 = IMPORT_HARD_OS();
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_os, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_plain_inspect;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_openai$lib$azure->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_7 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_7);
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
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_8);
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
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Mapping,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Mapping);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Mapping, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_4 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_TypeVar,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_TypeVar);
}

if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeVar, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_5 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Callable,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_Callable);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Callable, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Awaitable,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_Awaitable);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Awaitable, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_7 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_cast,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_cast);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_cast, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_overload,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_overload);
}

if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_overload, tmp_assign_source_15);
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
PyObject *tmp_assign_source_16;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_Self_str_plain_override_tuple;
tmp_level_value_2 = const_int_0;
frame_frame_openai$lib$azure->m_frame.f_lineno = 6;
tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_16;
}
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_9;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_9 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Self,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_Self);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Self, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_10 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_override,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_override);
}

if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_override, tmp_assign_source_18);
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
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_httpx;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_openai$lib$azure->m_frame.f_lineno = 8;
tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_httpx, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__types;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_b70797f6fa98dbd9794f2ccbe3fd0bda_tuple;
tmp_level_value_4 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 10;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_11;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_11 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_NOT_GIVEN,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_NOT_GIVEN, tmp_assign_source_21);
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
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Omit,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_Omit);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Omit, tmp_assign_source_22);
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
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Query,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_Query);
}

if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Query, tmp_assign_source_23);
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
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Timeout,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_Timeout);
}

if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Timeout, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_15 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_NotGiven,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_NotGiven);
}

if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_NotGiven, tmp_assign_source_25);
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
PyObject *tmp_assign_source_26;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_is_given_str_plain_is_mapping_tuple;
tmp_level_value_5 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 11;
tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_4__module == NULL);
tmp_import_from_4__module = tmp_assign_source_26;
}
// Tried code:
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_16;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_16 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_is_given,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_is_given);
}

if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_given, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_17;
CHECK_OBJECT(tmp_import_from_4__module);
tmp_import_name_from_17 = tmp_import_from_4__module;
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_is_mapping,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_is_mapping);
}

if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto try_except_handler_4;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_is_mapping, tmp_assign_source_28);
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
PyObject *tmp_assign_source_29;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain__client;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_OpenAI_str_plain_AsyncOpenAI_tuple;
tmp_level_value_6 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 12;
tmp_assign_source_29 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_5__module == NULL);
tmp_import_from_5__module = tmp_assign_source_29;
}
// Tried code:
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_18;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_18 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_OpenAI,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_OpenAI);
}

if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAI, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_19;
CHECK_OBJECT(tmp_import_from_5__module);
tmp_import_name_from_19 = tmp_import_from_5__module;
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_AsyncOpenAI,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_AsyncOpenAI);
}

if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto try_except_handler_5;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncOpenAI, tmp_assign_source_31);
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
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain__compat;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_model_copy_tuple;
tmp_level_value_7 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 13;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_model_copy,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_model_copy);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_model_copy, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain__models;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_FinalRequestOptions_tuple;
tmp_level_value_8 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 14;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_FinalRequestOptions,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_FinalRequestOptions);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_FinalRequestOptions, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain__streaming;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_Stream_str_plain_AsyncStream_tuple;
tmp_level_value_9 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 15;
tmp_assign_source_34 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_6__module == NULL);
tmp_import_from_6__module = tmp_assign_source_34;
}
// Tried code:
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_22;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_22 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_Stream,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_Stream);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_Stream, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_23;
CHECK_OBJECT(tmp_import_from_6__module);
tmp_import_name_from_23 = tmp_import_from_6__module;
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_AsyncStream,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto try_except_handler_6;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncStream, tmp_assign_source_36);
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
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain__exceptions;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_OpenAIError_tuple;
tmp_level_value_10 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 16;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_OpenAIError,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_OpenAIError);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_OpenAIError, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__base_client;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$lib$azure;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_DEFAULT_MAX_RETRIES_str_plain_BaseClient_tuple;
tmp_level_value_11 = mod_consts.const_int_pos_2;
frame_frame_openai$lib$azure->m_frame.f_lineno = 17;
tmp_assign_source_38 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_7__module == NULL);
tmp_import_from_7__module = tmp_assign_source_38;
}
// Tried code:
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_25;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_25 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_DEFAULT_MAX_RETRIES,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_DEFAULT_MAX_RETRIES, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_7__module);
tmp_import_name_from_26 = tmp_import_from_7__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$lib$azure,
        mod_consts.const_str_plain_BaseClient,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_BaseClient);
}

if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto try_except_handler_7;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseClient, tmp_assign_source_40);
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
PyObject *tmp_assign_source_41;
tmp_assign_source_41 = PySet_New(mod_consts.const_set_f5431430c18095449d86486c6cd4f3e9);
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__deployments_endpoints, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
tmp_expression_value_1 = module_var_accessor_openai$lib$azure$Callable(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_type_str_tuple, "li");
tmp_assign_source_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AzureADTokenProvider, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
tmp_expression_value_2 = module_var_accessor_openai$lib$azure$Callable(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Callable);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 34;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts.const_tuple_list_empty_str_digest_39d25ac4f8253d414486c4b563472eea_tuple, "li");
tmp_assign_source_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAzureADTokenProvider, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_called_value_1;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_4;
tmp_called_value_1 = module_var_accessor_openai$lib$azure$TypeVar(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_expression_value_3 = module_var_accessor_openai$lib$azure$Union(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_expression_value_4 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_Client);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_5;
PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_1);
tmp_expression_value_5 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 35;

    goto tuple_build_exception_1;
}
tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_AsyncClient);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_3);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure->m_frame.f_lineno = 35;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
    tmp_assign_source_44 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_1, mod_consts.const_tuple_str_plain__HttpxClientT_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__HttpxClientT, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_called_value_2;
PyObject *tmp_kw_call_value_0_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_5;
tmp_called_value_2 = module_var_accessor_openai$lib$azure$TypeVar(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeVar);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_expression_value_6 = module_var_accessor_openai$lib$azure$Union(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = module_var_accessor_openai$lib$azure$Stream(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Stream);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_subscript_value_5 = module_var_accessor_openai$lib$azure$Any(tstate);
if (unlikely(tmp_subscript_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_5);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_6;
PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_2);
tmp_expression_value_8 = module_var_accessor_openai$lib$azure$AsyncStream(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_2;
}
tmp_subscript_value_6 = module_var_accessor_openai$lib$azure$Any(tstate);
if (unlikely(tmp_subscript_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 36;

    goto tuple_build_exception_2;
}
tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_6);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_2);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_4);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_kw_call_value_0_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
frame_frame_openai$lib$azure->m_frame.f_lineno = 36;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
    tmp_assign_source_45 = CALL_FUNCTION_WITH_POS_ARGS1_KW_SPLIT(tstate, tmp_called_value_2, mod_consts.const_tuple_str_plain__DefaultStreamT_tuple, kw_values, mod_consts.const_tuple_str_plain_bound_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_2);
Py_DECREF(tmp_kw_call_value_0_2);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain__DefaultStreamT, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
tmp_assign_source_46 = mod_consts.const_str_digest_fee73283744c7235c0adf6386d48d405;
UPDATE_STRING_DICT0(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_API_KEY_SENTINEL, tmp_assign_source_46);
}
{
PyObject *tmp_outline_return_value_1;
// Tried code:
{
PyObject *tmp_assign_source_47;
PyObject *tmp_tuple_element_3;
tmp_tuple_element_3 = module_var_accessor_openai$lib$azure$OpenAIError(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OpenAIError);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_assign_source_47 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_assign_source_47, 0, tmp_tuple_element_3);
assert(tmp_class_container$class_creation_1__bases_orig == NULL);
tmp_class_container$class_creation_1__bases_orig = tmp_assign_source_47;
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_1__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_48 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__bases == NULL);
tmp_class_container$class_creation_1__bases = tmp_assign_source_48;
}
{
PyObject *tmp_assign_source_49;
tmp_assign_source_49 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_49;
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_1;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_7;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_1__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_expression_value_9 = tmp_class_container$class_creation_1__bases;
tmp_subscript_value_7 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_9, tmp_subscript_value_7, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_1__bases;
tmp_assign_source_50 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__metaclass == NULL);
tmp_class_container$class_creation_1__metaclass = tmp_assign_source_50;
}
{
bool tmp_condition_result_2;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_10 = tmp_class_container$class_creation_1__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
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
PyObject *tmp_assign_source_51;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_1__metaclass;
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_tuple_element_4 = mod_consts.const_str_plain_MutuallyExclusiveAuthError;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_4 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 45;
tmp_assign_source_51 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_51;
}
{
bool tmp_condition_result_3;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_expression_value_12 = tmp_class_container$class_creation_1__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_12, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
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
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_13;
PyObject *tmp_name_value_12;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_expression_value_13 = tmp_class_container$class_creation_1__metaclass;
tmp_name_value_12 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_13, tmp_name_value_12, tmp_default_value_1);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_14;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_1__prepared;
tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_14 == NULL));
tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
}
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_8;
}
frame_frame_openai$lib$azure->m_frame.f_lineno = 45;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 45;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_8;
}
branch_no_2:;
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_52;
tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_52;
}
branch_end_1:;
{
PyObject *tmp_assign_source_53;
outline_0_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_62a8641e984c5e01e59a699b4db09ecf;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_str_plain_MutuallyExclusiveAuthError;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_10;
}
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_10;
}
frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2 = MAKE_CLASS_FRAME(tstate, code_objects_b187b1695565acb1c78b88b2da5d3030, module_openai$lib$azure, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
struct Nuitka_CellObject *tmp_closure_1[1];
tmp_annotations_1 = DICT_COPY(tstate, mod_consts.const_dict_0d0b762981190d019d09fa21f156f3fb);
tmp_closure_1[0] = outline_0_var___class__;
Py_INCREF(tmp_closure_1[0]);
tmp_dictset_value = MAKE_FUNCTION_openai$lib$azure$$$function__1___init__(tstate, tmp_annotations_1, tmp_closure_1);

tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_10;
skip_nested_handling_1:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_10;
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


exception_lineno = 45;

    goto try_except_handler_10;
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
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_10;
}
branch_no_3:;
{
PyObject *tmp_assign_source_54;
PyObject *tmp_called_value_4;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_6;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_1__metaclass);
tmp_called_value_4 = tmp_class_container$class_creation_1__metaclass;
tmp_tuple_element_6 = mod_consts.const_str_plain_MutuallyExclusiveAuthError;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__bases);
tmp_tuple_element_6 = tmp_class_container$class_creation_1__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
tmp_tuple_element_6 = locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45;
PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 45;
tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_10;
}
assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_54);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
tmp_assign_source_53 = Nuitka_Cell_GET(outline_0_var___class__);
Py_INCREF(tmp_assign_source_53);
goto try_return_handler_10;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_10:;
Py_DECREF(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45);
locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45 = NULL;
goto try_return_handler_9;
// Exception handler code:
try_except_handler_10:;
exception_keeper_lineno_8 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_8 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45);
locals_openai$lib$azure$$$class__1_MutuallyExclusiveAuthError_45 = NULL;
// Re-raise.
exception_state = exception_keeper_name_8;
exception_lineno = exception_keeper_lineno_8;

goto try_except_handler_9;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_9:;
CHECK_OBJECT(outline_0_var___class__);
CHECK_OBJECT(outline_0_var___class__);
Py_DECREF(outline_0_var___class__);
outline_0_var___class__ = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_9:;
exception_keeper_lineno_9 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_9 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_9;
exception_lineno = exception_keeper_lineno_9;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 45;
goto try_except_handler_8;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_MutuallyExclusiveAuthError, tmp_assign_source_53);
}
goto try_end_8;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_10 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_10 = exception_state;
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
exception_state = exception_keeper_name_10;
exception_lineno = exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_8:;
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
PyObject *tmp_assign_source_55;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_8;
PyObject *tmp_tuple_element_8;
tmp_expression_value_15 = module_var_accessor_openai$lib$azure$BaseClient(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseClient);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto try_except_handler_11;
}
tmp_tuple_element_8 = module_var_accessor_openai$lib$azure$_HttpxClientT(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__HttpxClientT);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto try_except_handler_11;
}
tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_openai$lib$azure$_DefaultStreamT(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__DefaultStreamT);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 52;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_8);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_8);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_tuple_element_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
tmp_assign_source_55 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_55, 0, tmp_tuple_element_7);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_55;
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_direct_call_arg1_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_2 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_2);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_2};
    tmp_assign_source_56 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_56;
}
{
PyObject *tmp_assign_source_57;
tmp_assign_source_57 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_57;
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_metaclass_value_2;
nuitka_bool tmp_condition_result_5;
int tmp_truth_name_2;
PyObject *tmp_type_arg_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_9;
PyObject *tmp_bases_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_2;
} else {
    goto condexpr_false_2;
}
condexpr_true_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_16 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_9 = const_int_0;
tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_16, tmp_subscript_value_9, 0);
if (tmp_type_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
CHECK_OBJECT(tmp_type_arg_3);
Py_DECREF(tmp_type_arg_3);
if (tmp_metaclass_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
goto condexpr_end_2;
condexpr_false_2:;
tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_2);
condexpr_end_2:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_2 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_58 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
CHECK_OBJECT(tmp_metaclass_value_2);
Py_DECREF(tmp_metaclass_value_2);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_58;
}
{
bool tmp_condition_result_6;
PyObject *tmp_expression_value_17;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_17 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_17, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
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
PyObject *tmp_assign_source_59;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_18;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_9;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_18 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
tmp_tuple_element_9 = mod_consts.const_str_plain_BaseAzureClient;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_9 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_9);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 52;
tmp_assign_source_59 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_59;
}
{
bool tmp_condition_result_7;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_19 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_19, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
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
PyObject *tmp_tuple_element_10;
PyObject *tmp_expression_value_20;
PyObject *tmp_name_value_13;
PyObject *tmp_default_value_2;
tmp_mod_expr_left_2 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_20 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_13 = const_str_plain___name__;
tmp_default_value_2 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_10 = BUILTIN_GETATTR(tstate, tmp_expression_value_20, tmp_name_value_13, tmp_default_value_2);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_21;
PyObject *tmp_type_arg_4;
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_4 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_4);
assert(!(tmp_expression_value_21 == NULL));
tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_21);
Py_DECREF(tmp_expression_value_21);
if (tmp_tuple_element_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
}
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_mod_expr_right_2);
goto try_except_handler_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
CHECK_OBJECT(tmp_mod_expr_right_2);
Py_DECREF(tmp_mod_expr_right_2);
if (tmp_make_exception_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_11;
}
frame_frame_openai$lib$azure->m_frame.f_lineno = 52;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
CHECK_OBJECT(tmp_make_exception_arg_2);
Py_DECREF(tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 52;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_11;
}
branch_no_5:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_60;
tmp_assign_source_60 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_60;
}
branch_end_4:;
{
PyObject *tmp_assign_source_61;
outline_1_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_openai$lib$azure$$$class__2_BaseAzureClient_52 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_62a8641e984c5e01e59a699b4db09ecf;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_str_plain_BaseAzureClient;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_13;
}
tmp_dictset_value = mod_consts.const_int_pos_52;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_13;
}
tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, const_str_plain___annotations__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_13;
}
frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3 = MAKE_CLASS_FRAME(tstate, code_objects_332bacbf8f358039862a1a060962a653, module_openai$lib$azure, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3) == 2);

// Framed code:
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = mod_consts.const_str_digest_16aca04e29283f30f2957559a1c1c09f;
tmp_ass_subscribed_1 = PyObject_GetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 53;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain__azure_endpoint;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
CHECK_OBJECT(tmp_ass_subscribed_1);
Py_DECREF(tmp_ass_subscribed_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_ass_subvalue_2;
PyObject *tmp_ass_subscribed_2;
PyObject *tmp_ass_subscript_2;
tmp_ass_subvalue_2 = mod_consts.const_str_digest_4566cfe3b3f2bec71b1d44adce370e58;
tmp_ass_subscribed_2 = PyObject_GetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, const_str_plain___annotations__);

if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);

exception_lineno = 54;
type_description_2 = "c";
    goto frame_exception_exit_3;
}

if (tmp_ass_subscribed_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_ass_subscript_2 = mod_consts.const_str_plain__azure_deployment;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
CHECK_OBJECT(tmp_ass_subscribed_2);
Py_DECREF(tmp_ass_subscribed_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_1;
PyObject *tmp_kw_defaults_1;
PyObject *tmp_annotations_2;
struct Nuitka_CellObject *tmp_closure_2[1];
tmp_called_value_6 = PyObject_GetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain_override);

if (tmp_called_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_6 = module_var_accessor_openai$lib$azure$override(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 56;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts.const_dict_6148aac6132080f83b2250a58d97a427);
tmp_annotations_2 = DICT_COPY(tstate, mod_consts.const_dict_e213b10c01f475a9a6005474ca14c505);
tmp_closure_2[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_2[0]);
tmp_args_element_value_1 = MAKE_FUNCTION_openai$lib$azure$$$function__2__build_request(tstate, tmp_kw_defaults_1, tmp_annotations_2, tmp_closure_2);

frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3->m_frame.f_lineno = 56;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain__build_request, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_3;
struct Nuitka_CellObject *tmp_closure_3[1];
tmp_called_value_7 = PyObject_GetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain_override);

if (tmp_called_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_7 = module_var_accessor_openai$lib$azure$override(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_3 = DICT_COPY(tstate, mod_consts.const_dict_f37444b69cdae34d169b3cad9323433d);
tmp_closure_3[0] = outline_1_var___class__;
Py_INCREF(tmp_closure_3[0]);
tmp_args_element_value_2 = MAKE_FUNCTION_openai$lib$azure$$$function__3__prepare_url(tstate, tmp_annotations_3, tmp_closure_3);

frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3->m_frame.f_lineno = 70;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_7);
Py_DECREF(tmp_called_value_7);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "c";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain__prepare_url, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_openai$lib$azure$$$class__2_BaseAzureClient_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_13;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_13;
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


exception_lineno = 52;

    goto try_except_handler_13;
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
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__2_BaseAzureClient_52, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_13;
}
branch_no_6:;
{
PyObject *tmp_assign_source_62;
PyObject *tmp_called_value_8;
PyObject *tmp_args_value_4;
PyObject *tmp_tuple_element_11;
PyObject *tmp_kwargs_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_8 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_11 = mod_consts.const_str_plain_BaseAzureClient;
tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_11 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
tmp_tuple_element_11 = locals_openai$lib$azure$$$class__2_BaseAzureClient_52;
PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_4 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 52;
tmp_assign_source_62 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_4, tmp_kwargs_value_4);
CHECK_OBJECT(tmp_args_value_4);
Py_DECREF(tmp_args_value_4);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto try_except_handler_13;
}
assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_62);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
tmp_assign_source_61 = Nuitka_Cell_GET(outline_1_var___class__);
Py_INCREF(tmp_assign_source_61);
goto try_return_handler_13;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_13:;
Py_DECREF(locals_openai$lib$azure$$$class__2_BaseAzureClient_52);
locals_openai$lib$azure$$$class__2_BaseAzureClient_52 = NULL;
goto try_return_handler_12;
// Exception handler code:
try_except_handler_13:;
exception_keeper_lineno_11 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_11 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$lib$azure$$$class__2_BaseAzureClient_52);
locals_openai$lib$azure$$$class__2_BaseAzureClient_52 = NULL;
// Re-raise.
exception_state = exception_keeper_name_11;
exception_lineno = exception_keeper_lineno_11;

goto try_except_handler_12;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_12:;
CHECK_OBJECT(outline_1_var___class__);
CHECK_OBJECT(outline_1_var___class__);
Py_DECREF(outline_1_var___class__);
outline_1_var___class__ = NULL;
goto outline_result_4;
// Exception handler code:
try_except_handler_12:;
exception_keeper_lineno_12 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_12 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_12;
exception_lineno = exception_keeper_lineno_12;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 52;
goto try_except_handler_11;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseAzureClient, tmp_assign_source_61);
}
goto try_end_9;
// Exception handler code:
try_except_handler_11:;
exception_keeper_lineno_13 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_13 = exception_state;
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
exception_state = exception_keeper_name_13;
exception_lineno = exception_keeper_lineno_13;

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
PyObject *tmp_assign_source_63;
PyObject *tmp_tuple_element_12;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_23;
tmp_expression_value_22 = module_var_accessor_openai$lib$azure$BaseAzureClient(tstate);
if (unlikely(tmp_expression_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseAzureClient);
}

if (tmp_expression_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_expression_value_23 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_Client);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_11;
PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_13);
tmp_expression_value_24 = module_var_accessor_openai$lib$azure$Stream(tstate);
if (unlikely(tmp_expression_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Stream);
}

if (tmp_expression_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto tuple_build_exception_6;
}
tmp_subscript_value_11 = module_var_accessor_openai$lib$azure$Any(tstate);
if (unlikely(tmp_subscript_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto tuple_build_exception_6;
}
tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_11);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_13);
}
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_10);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_tuple_element_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_assign_source_63 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_63, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_openai$lib$azure$OpenAI(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_OpenAI);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_assign_source_63, 1, tmp_tuple_element_12);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_assign_source_63);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
assert(tmp_class_container$class_creation_3__bases_orig == NULL);
tmp_class_container$class_creation_3__bases_orig = tmp_assign_source_63;
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_direct_call_arg1_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_direct_call_arg1_3 = tmp_class_container$class_creation_3__bases_orig;
Py_INCREF(tmp_direct_call_arg1_3);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_3};
    tmp_assign_source_64 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_3__bases == NULL);
tmp_class_container$class_creation_3__bases = tmp_assign_source_64;
}
{
PyObject *tmp_assign_source_65;
tmp_assign_source_65 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__class_decl_dict == NULL);
tmp_class_container$class_creation_3__class_decl_dict = tmp_assign_source_65;
}
{
PyObject *tmp_assign_source_66;
PyObject *tmp_metaclass_value_3;
nuitka_bool tmp_condition_result_9;
int tmp_truth_name_3;
PyObject *tmp_type_arg_5;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_12;
PyObject *tmp_bases_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_container$class_creation_3__bases);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_3;
} else {
    goto condexpr_false_3;
}
condexpr_true_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_expression_value_25 = tmp_class_container$class_creation_3__bases;
tmp_subscript_value_12 = const_int_0;
tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_12, 0);
if (tmp_type_arg_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
CHECK_OBJECT(tmp_type_arg_5);
Py_DECREF(tmp_type_arg_5);
if (tmp_metaclass_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
goto condexpr_end_3;
condexpr_false_3:;
tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_3);
condexpr_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_bases_value_3 = tmp_class_container$class_creation_3__bases;
tmp_assign_source_66 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
CHECK_OBJECT(tmp_metaclass_value_3);
Py_DECREF(tmp_metaclass_value_3);
if (tmp_assign_source_66 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_3__metaclass == NULL);
tmp_class_container$class_creation_3__metaclass = tmp_assign_source_66;
}
{
bool tmp_condition_result_10;
PyObject *tmp_expression_value_26;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_26 = tmp_class_container$class_creation_3__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_condition_result_10 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_assign_source_67;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_27;
PyObject *tmp_args_value_5;
PyObject *tmp_tuple_element_14;
PyObject *tmp_kwargs_value_5;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_27 = tmp_class_container$class_creation_3__metaclass;
tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_tuple_element_14 = mod_consts.const_str_plain_AzureOpenAI;
tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_14 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_14);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_5 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 89;
tmp_assign_source_67 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
CHECK_OBJECT(tmp_args_value_5);
Py_DECREF(tmp_args_value_5);
if (tmp_assign_source_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_67;
}
{
bool tmp_condition_result_11;
PyObject *tmp_operand_value_3;
PyObject *tmp_expression_value_28;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_expression_value_28 = tmp_class_container$class_creation_3__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
assert(!(tmp_res == -1));
tmp_condition_result_11 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
PyObject *tmp_mod_expr_left_3;
PyObject *tmp_mod_expr_right_3;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_29;
PyObject *tmp_name_value_14;
PyObject *tmp_default_value_3;
tmp_mod_expr_left_3 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_expression_value_29 = tmp_class_container$class_creation_3__metaclass;
tmp_name_value_14 = const_str_plain___name__;
tmp_default_value_3 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_14, tmp_default_value_3);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_30;
PyObject *tmp_type_arg_6;
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_15);
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_type_arg_6 = tmp_class_container$class_creation_3__prepared;
tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_6);
assert(!(tmp_expression_value_30 == NULL));
tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_30);
Py_DECREF(tmp_expression_value_30);
if (tmp_tuple_element_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_15);
}
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_mod_expr_right_3);
goto try_except_handler_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
CHECK_OBJECT(tmp_mod_expr_right_3);
Py_DECREF(tmp_mod_expr_right_3);
if (tmp_make_exception_arg_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_14;
}
frame_frame_openai$lib$azure->m_frame.f_lineno = 89;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
CHECK_OBJECT(tmp_make_exception_arg_3);
Py_DECREF(tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 89;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_14;
}
branch_no_8:;
goto branch_end_7;
branch_no_7:;
{
PyObject *tmp_assign_source_68;
tmp_assign_source_68 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_3__prepared == NULL);
tmp_class_container$class_creation_3__prepared = tmp_assign_source_68;
}
branch_end_7:;
{
PyObject *tmp_assign_source_69;
outline_2_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__prepared);
tmp_set_locals_3 = tmp_class_container$class_creation_3__prepared;
locals_openai$lib$azure$$$class__3_AzureOpenAI_89 = tmp_set_locals_3;
Py_INCREF(tmp_set_locals_3);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_62a8641e984c5e01e59a699b4db09ecf;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_str_plain_AzureOpenAI;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_16;
}
tmp_dictset_value = mod_consts.const_int_pos_89;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_16;
}
frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4 = MAKE_CLASS_FRAME(tstate, code_objects_e01812c01f40b986f1275f037bbf4ea4, module_openai$lib$azure, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4) == 2);

// Framed code:
{
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_3;
PyObject *tmp_kw_defaults_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_annotations_4;
tmp_called_value_10 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_overload);

if (tmp_called_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_10 = module_var_accessor_openai$lib$azure$overload(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dict_key_1 = mod_consts.const_str_plain_azure_deployment;
tmp_dict_value_1 = Py_None;
tmp_kw_defaults_2 = _PyDict_NewPresized( 14 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_api_version;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_api_key;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_organization;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_timeout;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_1 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_1 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_1 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;
type_description_2 = "c";
    goto dict_build_exception_1;
}
        Py_INCREF(tmp_dict_value_1);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_1;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_default_query;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_http_client;
tmp_dict_value_1 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_1 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_called_value_10);
Py_DECREF(tmp_kw_defaults_2);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
tmp_annotations_4 = DICT_COPY(tstate, mod_consts.const_dict_b1f376b13e138979dc0d82676cdea7ad);

tmp_args_element_value_3 = MAKE_FUNCTION_openai$lib$azure$$$function__4___init__(tstate, tmp_kw_defaults_2, tmp_annotations_4);

frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4->m_frame.f_lineno = 90;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_4;
PyObject *tmp_kw_defaults_3;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_annotations_5;
tmp_called_value_11 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_overload);

if (tmp_called_value_11 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_11 = module_var_accessor_openai$lib$azure$overload(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_11);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dict_key_2 = mod_consts.const_str_plain_azure_deployment;
tmp_dict_value_2 = Py_None;
tmp_kw_defaults_3 = _PyDict_NewPresized( 14 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_api_version;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_api_key;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_organization;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_timeout;
tmp_dict_value_2 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_2 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_2 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 124;
type_description_2 = "c";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_dict_value_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_default_query;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_http_client;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_2 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_11);
Py_DECREF(tmp_kw_defaults_3);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_48a22c5315e62bd3a4b582c73fd02716);

tmp_args_element_value_4 = MAKE_FUNCTION_openai$lib$azure$$$function__5___init__(tstate, tmp_kw_defaults_3, tmp_annotations_5);

frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4->m_frame.f_lineno = 111;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 111;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_5;
PyObject *tmp_kw_defaults_4;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_annotations_6;
tmp_called_value_12 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_overload);

if (tmp_called_value_12 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_12 = module_var_accessor_openai$lib$azure$overload(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_12);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dict_key_3 = mod_consts.const_str_plain_api_version;
tmp_dict_value_3 = Py_None;
tmp_kw_defaults_4 = _PyDict_NewPresized( 13 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_api_key;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_organization;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_timeout;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 143;
type_description_2 = "c";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_3 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_3 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_3 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 144;
type_description_2 = "c";
    goto dict_build_exception_3;
}
        Py_INCREF(tmp_dict_value_3);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_3;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_default_query;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_http_client;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_3 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_4, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_called_value_12);
Py_DECREF(tmp_kw_defaults_4);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_1b123c3939f969a704afde1c3f21425c);

tmp_args_element_value_5 = MAKE_FUNCTION_openai$lib$azure$$$function__6___init__(tstate, tmp_kw_defaults_4, tmp_annotations_6);

frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4->m_frame.f_lineno = 131;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_5);
CHECK_OBJECT(tmp_called_value_12);
Py_DECREF(tmp_called_value_12);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_kw_defaults_5;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_annotations_7;
struct Nuitka_CellObject *tmp_closure_4[1];
tmp_dict_key_4 = mod_consts.const_str_plain_api_version;
tmp_dict_value_4 = Py_None;
tmp_kw_defaults_5 = _PyDict_NewPresized( 17 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_azure_endpoint;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_azure_deployment;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_api_key;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_organization;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_project;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_base_url;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_timeout;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 165;
type_description_2 = "c";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_4 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_4 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_2 = "c";
    goto dict_build_exception_4;
}
        Py_INCREF(tmp_dict_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_4;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_default_query;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_http_client;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_4 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_5, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_kw_defaults_5);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_2005541976b3992d412d75c9beb61a28);
tmp_closure_4[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_4[0]);
tmp_dictset_value = MAKE_FUNCTION_openai$lib$azure$$$function__7___init__(tstate, tmp_kw_defaults_5, tmp_annotations_7, tmp_closure_4);

tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 151;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_6;
PyObject *tmp_kw_defaults_6;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_annotations_8;
struct Nuitka_CellObject *tmp_closure_5[1];
tmp_called_value_13 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_override);

if (tmp_called_value_13 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_13 = module_var_accessor_openai$lib$azure$override(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 257;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_13);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_dict_key_5 = mod_consts.const_str_plain_api_key;
tmp_dict_value_5 = Py_None;
tmp_kw_defaults_6 = _PyDict_NewPresized( 17 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_organization;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_project;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_api_version;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_base_url;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_timeout;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;
type_description_2 = "c";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_http_client;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_5 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_5 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_5 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 272;
type_description_2 = "c";
    goto dict_build_exception_5;
}
        Py_INCREF(tmp_dict_value_5);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_5;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_set_default_headers;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_default_query;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_set_default_query;
tmp_dict_value_5 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain__extra_kwargs;
tmp_dict_value_5 = MAKE_DICT_EMPTY(tstate);
tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_called_value_13);
Py_DECREF(tmp_kw_defaults_6);
goto frame_exception_exit_4;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_a65531a9e2f88be5831bd411e9d2a08f);
tmp_closure_5[0] = outline_2_var___class__;
Py_INCREF(tmp_closure_5[0]);
tmp_args_element_value_6 = MAKE_FUNCTION_openai$lib$azure$$$function__8_copy(tstate, tmp_kw_defaults_6, tmp_annotations_8, tmp_closure_5);

frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4->m_frame.f_lineno = 257;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_13);
Py_DECREF(tmp_called_value_13);
CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 257;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 258;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
tmp_dictset_value = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_copy);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);

exception_lineno = 304;
type_description_2 = "c";
    goto frame_exception_exit_4;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_with_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
{
PyObject *tmp_annotations_9;
tmp_annotations_9 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_dictset_value = MAKE_FUNCTION_openai$lib$azure$$$function__9__get_azure_ad_token(tstate, tmp_annotations_9);

tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain__get_azure_ad_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 306;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_7;
PyObject *tmp_annotations_10;
tmp_called_value_14 = PyObject_GetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain_override);

if (tmp_called_value_14 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_14 = module_var_accessor_openai$lib$azure$override(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 321;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
        Py_INCREF(tmp_called_value_14);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_4;
    }
}

tmp_annotations_10 = DICT_COPY(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);

tmp_args_element_value_7 = MAKE_FUNCTION_openai$lib$azure$$$function__10__prepare_options(tstate, tmp_annotations_10);

frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4->m_frame.f_lineno = 321;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_7);
CHECK_OBJECT(tmp_called_value_14);
Py_DECREF(tmp_called_value_14);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 321;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain__prepare_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 322;
type_description_2 = "c";
    goto frame_exception_exit_4;
}
}
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_d626076dfbdd93e8cc71d5be9471760f);

tmp_dictset_value = MAKE_FUNCTION_openai$lib$azure$$$function__11__configure_realtime(tstate, tmp_annotations_11);

tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain__configure_realtime, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 341;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4,
    type_description_2,
    outline_2_var___class__
);



assertFrameObject(frame_frame_openai$lib$azure$$$class__3_AzureOpenAI_4);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_3;
frame_no_exception_3:;
goto skip_nested_handling_3;
nested_frame_exit_3:;

goto try_except_handler_16;
skip_nested_handling_3:;
tmp_dictset_value = mod_consts.const_tuple_4aa80aea1adedd8506ebea2580561738_tuple;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_16;
}
{
nuitka_bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_cmp_expr_left_3 = tmp_class_container$class_creation_3__bases;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_cmp_expr_right_3 = tmp_class_container$class_creation_3__bases_orig;
tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_16;
}
if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
CHECK_OBJECT(tmp_class_container$class_creation_3__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_3__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__3_AzureOpenAI_89, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_16;
}
branch_no_9:;
{
PyObject *tmp_assign_source_70;
PyObject *tmp_called_value_15;
PyObject *tmp_args_value_6;
PyObject *tmp_tuple_element_16;
PyObject *tmp_kwargs_value_6;
CHECK_OBJECT(tmp_class_container$class_creation_3__metaclass);
tmp_called_value_15 = tmp_class_container$class_creation_3__metaclass;
tmp_tuple_element_16 = mod_consts.const_str_plain_AzureOpenAI;
tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_3__bases);
tmp_tuple_element_16 = tmp_class_container$class_creation_3__bases;
PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_16);
tmp_tuple_element_16 = locals_openai$lib$azure$$$class__3_AzureOpenAI_89;
PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_16);
CHECK_OBJECT(tmp_class_container$class_creation_3__class_decl_dict);
tmp_kwargs_value_6 = tmp_class_container$class_creation_3__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 89;
tmp_assign_source_70 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_6, tmp_kwargs_value_6);
CHECK_OBJECT(tmp_args_value_6);
Py_DECREF(tmp_args_value_6);
if (tmp_assign_source_70 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto try_except_handler_16;
}
assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_70);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
tmp_assign_source_69 = Nuitka_Cell_GET(outline_2_var___class__);
Py_INCREF(tmp_assign_source_69);
goto try_return_handler_16;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_16:;
Py_DECREF(locals_openai$lib$azure$$$class__3_AzureOpenAI_89);
locals_openai$lib$azure$$$class__3_AzureOpenAI_89 = NULL;
goto try_return_handler_15;
// Exception handler code:
try_except_handler_16:;
exception_keeper_lineno_14 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_14 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$lib$azure$$$class__3_AzureOpenAI_89);
locals_openai$lib$azure$$$class__3_AzureOpenAI_89 = NULL;
// Re-raise.
exception_state = exception_keeper_name_14;
exception_lineno = exception_keeper_lineno_14;

goto try_except_handler_15;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_15:;
CHECK_OBJECT(outline_2_var___class__);
CHECK_OBJECT(outline_2_var___class__);
Py_DECREF(outline_2_var___class__);
outline_2_var___class__ = NULL;
goto outline_result_6;
// Exception handler code:
try_except_handler_15:;
exception_keeper_lineno_15 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_15 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_15;
exception_lineno = exception_keeper_lineno_15;

goto outline_exception_3;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_3:;
exception_lineno = 89;
goto try_except_handler_14;
outline_result_6:;
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AzureOpenAI, tmp_assign_source_69);
}
goto try_end_10;
// Exception handler code:
try_except_handler_14:;
exception_keeper_lineno_16 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_16 = exception_state;
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
exception_state = exception_keeper_name_16;
exception_lineno = exception_keeper_lineno_16;

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
// Tried code:
{
PyObject *tmp_assign_source_71;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_13;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_32;
tmp_expression_value_31 = module_var_accessor_openai$lib$azure$BaseAzureClient(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseAzureClient);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_expression_value_32 = module_var_accessor_openai$lib$azure$httpx(tstate);
if (unlikely(tmp_expression_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_httpx);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts.const_str_plain_AsyncClient);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_14;
PyTuple_SET_ITEM(tmp_subscript_value_13, 0, tmp_tuple_element_18);
tmp_expression_value_33 = module_var_accessor_openai$lib$azure$AsyncStream(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncStream);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

    goto tuple_build_exception_9;
}
tmp_subscript_value_14 = module_var_accessor_openai$lib$azure$Any(tstate);
if (unlikely(tmp_subscript_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_subscript_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

    goto tuple_build_exception_9;
}
tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_14);
if (tmp_tuple_element_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_18);
}
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_subscript_value_13);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_13);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_assign_source_71 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_assign_source_71, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = module_var_accessor_openai$lib$azure$AsyncOpenAI(tstate);
if (unlikely(tmp_tuple_element_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncOpenAI);
}

if (tmp_tuple_element_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_assign_source_71, 1, tmp_tuple_element_17);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_assign_source_71);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
assert(tmp_class_container$class_creation_4__bases_orig == NULL);
tmp_class_container$class_creation_4__bases_orig = tmp_assign_source_71;
}
{
PyObject *tmp_assign_source_72;
PyObject *tmp_direct_call_arg1_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_direct_call_arg1_4 = tmp_class_container$class_creation_4__bases_orig;
Py_INCREF(tmp_direct_call_arg1_4);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_4};
    tmp_assign_source_72 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_72 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_4__bases == NULL);
tmp_class_container$class_creation_4__bases = tmp_assign_source_72;
}
{
PyObject *tmp_assign_source_73;
tmp_assign_source_73 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__class_decl_dict == NULL);
tmp_class_container$class_creation_4__class_decl_dict = tmp_assign_source_73;
}
{
PyObject *tmp_assign_source_74;
PyObject *tmp_metaclass_value_4;
nuitka_bool tmp_condition_result_13;
int tmp_truth_name_4;
PyObject *tmp_type_arg_7;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_15;
PyObject *tmp_bases_value_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_container$class_creation_4__bases);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_4;
} else {
    goto condexpr_false_4;
}
condexpr_true_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_expression_value_34 = tmp_class_container$class_creation_4__bases;
tmp_subscript_value_15 = const_int_0;
tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_15, 0);
if (tmp_type_arg_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
CHECK_OBJECT(tmp_type_arg_7);
Py_DECREF(tmp_type_arg_7);
if (tmp_metaclass_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
goto condexpr_end_4;
condexpr_false_4:;
tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_4);
condexpr_end_4:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_bases_value_4 = tmp_class_container$class_creation_4__bases;
tmp_assign_source_74 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
CHECK_OBJECT(tmp_metaclass_value_4);
Py_DECREF(tmp_metaclass_value_4);
if (tmp_assign_source_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_4__metaclass == NULL);
tmp_class_container$class_creation_4__metaclass = tmp_assign_source_74;
}
{
bool tmp_condition_result_14;
PyObject *tmp_expression_value_35;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_35 = tmp_class_container$class_creation_4__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_35, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_condition_result_14 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_14 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_assign_source_75;
PyObject *tmp_called_value_16;
PyObject *tmp_expression_value_36;
PyObject *tmp_args_value_7;
PyObject *tmp_tuple_element_19;
PyObject *tmp_kwargs_value_7;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_36 = tmp_class_container$class_creation_4__metaclass;
tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_tuple_element_19 = mod_consts.const_str_plain_AsyncAzureOpenAI;
tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_19 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_19);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_7 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 367;
tmp_assign_source_75 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_7, tmp_kwargs_value_7);
CHECK_OBJECT(tmp_called_value_16);
Py_DECREF(tmp_called_value_16);
CHECK_OBJECT(tmp_args_value_7);
Py_DECREF(tmp_args_value_7);
if (tmp_assign_source_75 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_75;
}
{
bool tmp_condition_result_15;
PyObject *tmp_operand_value_4;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_expression_value_37 = tmp_class_container$class_creation_4__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_37, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
assert(!(tmp_res == -1));
tmp_condition_result_15 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_15 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
PyObject *tmp_mod_expr_left_4;
PyObject *tmp_mod_expr_right_4;
PyObject *tmp_tuple_element_20;
PyObject *tmp_expression_value_38;
PyObject *tmp_name_value_15;
PyObject *tmp_default_value_4;
tmp_mod_expr_left_4 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_expression_value_38 = tmp_class_container$class_creation_4__metaclass;
tmp_name_value_15 = const_str_plain___name__;
tmp_default_value_4 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_20 = BUILTIN_GETATTR(tstate, tmp_expression_value_38, tmp_name_value_15, tmp_default_value_4);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_39;
PyObject *tmp_type_arg_8;
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_20);
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_type_arg_8 = tmp_class_container$class_creation_4__prepared;
tmp_expression_value_39 = BUILTIN_TYPE1(tmp_type_arg_8);
assert(!(tmp_expression_value_39 == NULL));
tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_39);
Py_DECREF(tmp_expression_value_39);
if (tmp_tuple_element_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_20);
}
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_mod_expr_right_4);
goto try_except_handler_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
CHECK_OBJECT(tmp_mod_expr_right_4);
Py_DECREF(tmp_mod_expr_right_4);
if (tmp_make_exception_arg_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_17;
}
frame_frame_openai$lib$azure->m_frame.f_lineno = 367;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
CHECK_OBJECT(tmp_make_exception_arg_4);
Py_DECREF(tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 367;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_17;
}
branch_no_11:;
goto branch_end_10;
branch_no_10:;
{
PyObject *tmp_assign_source_76;
tmp_assign_source_76 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_4__prepared == NULL);
tmp_class_container$class_creation_4__prepared = tmp_assign_source_76;
}
branch_end_10:;
{
PyObject *tmp_assign_source_77;
outline_3_var___class__ = Nuitka_Cell_NewEmpty();
{
PyObject *tmp_set_locals_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__prepared);
tmp_set_locals_4 = tmp_class_container$class_creation_4__prepared;
locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367 = tmp_set_locals_4;
Py_INCREF(tmp_set_locals_4);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_62a8641e984c5e01e59a699b4db09ecf;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncAzureOpenAI;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_19;
}
tmp_dictset_value = mod_consts.const_int_pos_367;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_19;
}
frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5 = MAKE_CLASS_FRAME(tstate, code_objects_961f17271edec9b965bc4101b3648458, module_openai$lib$azure, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5);
assert(Py_REFCNT(frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5) == 2);

// Framed code:
{
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_8;
PyObject *tmp_kw_defaults_7;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_annotations_12;
tmp_called_value_17 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_overload);

if (tmp_called_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_17 = module_var_accessor_openai$lib$azure$overload(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 368;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_dict_key_6 = mod_consts.const_str_plain_azure_deployment;
tmp_dict_value_6 = Py_None;
tmp_kw_defaults_7 = _PyDict_NewPresized( 15 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_api_version;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_api_key;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_organization;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_project;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_timeout;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 382;
type_description_2 = "c";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_6 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_6 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_6 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 383;
type_description_2 = "c";
    goto dict_build_exception_6;
}
        Py_INCREF(tmp_dict_value_6);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_6;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_default_query;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_http_client;
tmp_dict_value_6 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_6 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_7, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_called_value_17);
Py_DECREF(tmp_kw_defaults_7);
goto frame_exception_exit_5;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;
tmp_annotations_12 = DICT_COPY(tstate, mod_consts.const_dict_a5a578ea1f8958882c40c14dec587ad1);

tmp_args_element_value_8 = MAKE_FUNCTION_openai$lib$azure$$$function__12___init__(tstate, tmp_kw_defaults_7, tmp_annotations_12);

frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5->m_frame.f_lineno = 368;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_8);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 368;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 369;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_9;
PyObject *tmp_kw_defaults_8;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_annotations_13;
tmp_called_value_18 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_overload);

if (tmp_called_value_18 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_18 = module_var_accessor_openai$lib$azure$overload(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_18);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_dict_key_7 = mod_consts.const_str_plain_azure_deployment;
tmp_dict_value_7 = Py_None;
tmp_kw_defaults_8 = _PyDict_NewPresized( 15 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_api_version;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_api_key;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_organization;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_project;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_timeout;
tmp_dict_value_7 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 403;
type_description_2 = "c";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_7 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 404;
type_description_2 = "c";
    goto dict_build_exception_7;
}
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_7;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_default_query;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_http_client;
tmp_dict_value_7 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_7 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_8, tmp_dict_key_7, tmp_dict_value_7);
assert(!(tmp_res != 0));
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_called_value_18);
Py_DECREF(tmp_kw_defaults_8);
goto frame_exception_exit_5;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;
tmp_annotations_13 = DICT_COPY(tstate, mod_consts.const_dict_6486ed57dc7d26fa9abb8b1f0dc060c6);

tmp_args_element_value_9 = MAKE_FUNCTION_openai$lib$azure$$$function__13___init__(tstate, tmp_kw_defaults_8, tmp_annotations_13);

frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5->m_frame.f_lineno = 390;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 391;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_10;
PyObject *tmp_kw_defaults_9;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_annotations_14;
tmp_called_value_19 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_overload);

if (tmp_called_value_19 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_19 = module_var_accessor_openai$lib$azure$overload(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_overload);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 411;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_19);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_dict_key_8 = mod_consts.const_str_plain_api_version;
tmp_dict_value_8 = Py_None;
tmp_kw_defaults_9 = _PyDict_NewPresized( 14 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_api_key;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_organization;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_project;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_timeout;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 424;
type_description_2 = "c";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_8 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_8 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_8 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 425;
type_description_2 = "c";
    goto dict_build_exception_8;
}
        Py_INCREF(tmp_dict_value_8);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_8;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_default_query;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_http_client;
tmp_dict_value_8 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_8 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_9, tmp_dict_key_8, tmp_dict_value_8);
assert(!(tmp_res != 0));
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_called_value_19);
Py_DECREF(tmp_kw_defaults_9);
goto frame_exception_exit_5;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;
tmp_annotations_14 = DICT_COPY(tstate, mod_consts.const_dict_74f2bf8accd8565a250df813c82d5a97);

tmp_args_element_value_10 = MAKE_FUNCTION_openai$lib$azure$$$function__14___init__(tstate, tmp_kw_defaults_9, tmp_annotations_14);

frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5->m_frame.f_lineno = 411;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_10);
CHECK_OBJECT(tmp_called_value_19);
Py_DECREF(tmp_called_value_19);
CHECK_OBJECT(tmp_args_element_value_10);
Py_DECREF(tmp_args_element_value_10);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 411;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 412;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_kw_defaults_10;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_annotations_15;
struct Nuitka_CellObject *tmp_closure_6[1];
tmp_dict_key_9 = mod_consts.const_str_plain_azure_endpoint;
tmp_dict_value_9 = Py_None;
tmp_kw_defaults_10 = _PyDict_NewPresized( 17 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_azure_deployment;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_api_version;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_api_key;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_organization;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_project;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_base_url;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_timeout;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 446;
type_description_2 = "c";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_9 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);

if (tmp_dict_value_9 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_9 = module_var_accessor_openai$lib$azure$DEFAULT_MAX_RETRIES(tstate);
if (unlikely(tmp_dict_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_DEFAULT_MAX_RETRIES);
}

if (tmp_dict_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_2 = "c";
    goto dict_build_exception_9;
}
        Py_INCREF(tmp_dict_value_9);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_9;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_default_query;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_http_client;
tmp_dict_value_9 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain__strict_response_validation;
tmp_dict_value_9 = Py_False;
tmp_res = PyDict_SetItem(tmp_kw_defaults_10, tmp_dict_key_9, tmp_dict_value_9);
assert(!(tmp_res != 0));
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_kw_defaults_10);
goto frame_exception_exit_5;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;
tmp_annotations_15 = DICT_COPY(tstate, mod_consts.const_dict_d7788023d83b6658411359bc3386f16d);
tmp_closure_6[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_6[0]);
tmp_dictset_value = MAKE_FUNCTION_openai$lib$azure$$$function__15___init__(tstate, tmp_kw_defaults_10, tmp_annotations_15, tmp_closure_6);

tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 432;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_11;
PyObject *tmp_kw_defaults_11;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_annotations_16;
struct Nuitka_CellObject *tmp_closure_7[1];
tmp_called_value_20 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_override);

if (tmp_called_value_20 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_20 = module_var_accessor_openai$lib$azure$override(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 538;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_20);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_dict_key_10 = mod_consts.const_str_plain_api_key;
tmp_dict_value_10 = Py_None;
tmp_kw_defaults_11 = _PyDict_NewPresized( 17 );
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_organization;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_project;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_webhook_secret;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_websocket_base_url;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_api_version;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_azure_ad_token;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_azure_ad_token_provider;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_base_url;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_timeout;
tmp_dict_value_10 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_10 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 551;
type_description_2 = "c";
    goto dict_build_exception_10;
}
        Py_INCREF(tmp_dict_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_10;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_http_client;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_max_retries;
tmp_dict_value_10 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_NOT_GIVEN);

if (tmp_dict_value_10 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_10 = module_var_accessor_openai$lib$azure$NOT_GIVEN(tstate);
if (unlikely(tmp_dict_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_NOT_GIVEN);
}

if (tmp_dict_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;
type_description_2 = "c";
    goto dict_build_exception_10;
}
        Py_INCREF(tmp_dict_value_10);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_10;
    }
}

tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_default_headers;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_set_default_headers;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_default_query;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_set_default_query;
tmp_dict_value_10 = Py_None;
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain__extra_kwargs;
tmp_dict_value_10 = MAKE_DICT_EMPTY(tstate);
tmp_res = PyDict_SetItem(tmp_kw_defaults_11, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
goto dict_build_no_exception_10;
// Exception handling pass through code for dict_build:
dict_build_exception_10:;
Py_DECREF(tmp_called_value_20);
Py_DECREF(tmp_kw_defaults_11);
goto frame_exception_exit_5;
// Finished with no exception for dict_build:
dict_build_no_exception_10:;
tmp_annotations_16 = DICT_COPY(tstate, mod_consts.const_dict_a41970f62793bf0a46147d5f20fbe35d);
tmp_closure_7[0] = outline_3_var___class__;
Py_INCREF(tmp_closure_7[0]);
tmp_args_element_value_11 = MAKE_FUNCTION_openai$lib$azure$$$function__16_copy(tstate, tmp_kw_defaults_11, tmp_annotations_16, tmp_closure_7);

frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5->m_frame.f_lineno = 538;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_11);
CHECK_OBJECT(tmp_called_value_20);
Py_DECREF(tmp_called_value_20);
CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 538;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_copy, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
tmp_dictset_value = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_copy);

if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_copy);

exception_lineno = 585;
type_description_2 = "c";
    goto frame_exception_exit_5;
}

if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_with_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 585;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
{
PyObject *tmp_annotations_17;
tmp_annotations_17 = DICT_COPY(tstate, mod_consts.const_dict_fb2aef63cbe899ae3db5a90391a96071);

tmp_dictset_value = MAKE_FUNCTION_openai$lib$azure$$$function__17__get_azure_ad_token(tstate, tmp_annotations_17);

tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain__get_azure_ad_token, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 587;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_12;
PyObject *tmp_annotations_18;
tmp_called_value_21 = PyObject_GetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain_override);

if (tmp_called_value_21 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_value_21 = module_var_accessor_openai$lib$azure$override(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_override);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 604;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
        Py_INCREF(tmp_called_value_21);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_5;
    }
}

tmp_annotations_18 = DICT_COPY(tstate, mod_consts.const_dict_004a463e0399a5f4a013ac50ad797d3b);

tmp_args_element_value_12 = MAKE_FUNCTION_openai$lib$azure$$$function__18__prepare_options(tstate, tmp_annotations_18);

frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5->m_frame.f_lineno = 604;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_12);
CHECK_OBJECT(tmp_called_value_21);
Py_DECREF(tmp_called_value_21);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 604;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain__prepare_options, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 605;
type_description_2 = "c";
    goto frame_exception_exit_5;
}
}
{
PyObject *tmp_annotations_19;
tmp_annotations_19 = DICT_COPY(tstate, mod_consts.const_dict_d626076dfbdd93e8cc71d5be9471760f);

tmp_dictset_value = MAKE_FUNCTION_openai$lib$azure$$$function__19__configure_realtime(tstate, tmp_annotations_19);

tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain__configure_realtime, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 624;
type_description_2 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5,
    type_description_2,
    outline_3_var___class__
);



assertFrameObject(frame_frame_openai$lib$azure$$$class__4_AsyncAzureOpenAI_5);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_4;
frame_no_exception_4:;
goto skip_nested_handling_4;
nested_frame_exit_4:;

goto try_except_handler_19;
skip_nested_handling_4:;
tmp_dictset_value = mod_consts.const_tuple_4aa80aea1adedd8506ebea2580561738_tuple;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_19;
}
{
nuitka_bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_cmp_expr_left_4 = tmp_class_container$class_creation_4__bases;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_cmp_expr_right_4 = tmp_class_container$class_creation_4__bases_orig;
tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_19;
}
if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_4__bases_orig;
tmp_res = PyObject_SetItem(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_19;
}
branch_no_12:;
{
PyObject *tmp_assign_source_78;
PyObject *tmp_called_value_22;
PyObject *tmp_args_value_8;
PyObject *tmp_tuple_element_21;
PyObject *tmp_kwargs_value_8;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
tmp_called_value_22 = tmp_class_container$class_creation_4__metaclass;
tmp_tuple_element_21 = mod_consts.const_str_plain_AsyncAzureOpenAI;
tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
tmp_tuple_element_21 = tmp_class_container$class_creation_4__bases;
PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_21);
tmp_tuple_element_21 = locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367;
PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_21);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
tmp_kwargs_value_8 = tmp_class_container$class_creation_4__class_decl_dict;
frame_frame_openai$lib$azure->m_frame.f_lineno = 367;
tmp_assign_source_78 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_8, tmp_kwargs_value_8);
CHECK_OBJECT(tmp_args_value_8);
Py_DECREF(tmp_args_value_8);
if (tmp_assign_source_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;

    goto try_except_handler_19;
}
assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
Nuitka_Cell_SET(outline_3_var___class__, tmp_assign_source_78);

}
CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
tmp_assign_source_77 = Nuitka_Cell_GET(outline_3_var___class__);
Py_INCREF(tmp_assign_source_77);
goto try_return_handler_19;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_19:;
Py_DECREF(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367);
locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367 = NULL;
goto try_return_handler_18;
// Exception handler code:
try_except_handler_19:;
exception_keeper_lineno_17 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_17 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367);
locals_openai$lib$azure$$$class__4_AsyncAzureOpenAI_367 = NULL;
// Re-raise.
exception_state = exception_keeper_name_17;
exception_lineno = exception_keeper_lineno_17;

goto try_except_handler_18;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_18:;
CHECK_OBJECT(outline_3_var___class__);
CHECK_OBJECT(outline_3_var___class__);
Py_DECREF(outline_3_var___class__);
outline_3_var___class__ = NULL;
goto outline_result_8;
// Exception handler code:
try_except_handler_18:;
exception_keeper_lineno_18 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_18 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Re-raise.
exception_state = exception_keeper_name_18;
exception_lineno = exception_keeper_lineno_18;

goto outline_exception_4;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_4:;
exception_lineno = 367;
goto try_except_handler_17;
outline_result_8:;
UPDATE_STRING_DICT1(moduledict_openai$lib$azure, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncAzureOpenAI, tmp_assign_source_77);
}
goto try_end_11;
// Exception handler code:
try_except_handler_17:;
exception_keeper_lineno_19 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_19 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
Py_XDECREF(tmp_class_container$class_creation_4__prepared);
tmp_class_container$class_creation_4__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_19;
exception_lineno = exception_keeper_lineno_19;

goto frame_exception_exit_1;
// End of try:
try_end_11:;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases_orig);
Py_DECREF(tmp_class_container$class_creation_4__bases_orig);
tmp_class_container$class_creation_4__bases_orig = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
CHECK_OBJECT(tmp_class_container$class_creation_4__bases);
Py_DECREF(tmp_class_container$class_creation_4__bases);
tmp_class_container$class_creation_4__bases = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_4__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_4__class_decl_dict);
tmp_class_container$class_creation_4__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
CHECK_OBJECT(tmp_class_container$class_creation_4__metaclass);
Py_DECREF(tmp_class_container$class_creation_4__metaclass);
tmp_class_container$class_creation_4__metaclass = NULL;
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


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_5;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$lib$azure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$lib$azure->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$lib$azure, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$lib$azure);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_5:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$lib$azure", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.lib.azure" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$lib$azure);
    return module_openai$lib$azure;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$lib$azure, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$lib$azure", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

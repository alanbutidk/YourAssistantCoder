/* Generated code for Python module 'google$genai$live_music'
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



/* The "module_google$genai$live_music" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$live_music;
PyDictObject *moduledict_google$genai$live_music;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain__api_client;
PyObject *const_str_plain__ws;
PyObject *const_str_plain_self;
PyObject *const_str_plain_vertexai;
PyObject *const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8;
PyObject *const_str_plain_weightedPrompts;
PyObject *const_str_plain_prompts;
PyObject *const_str_plain__common;
PyObject *const_str_plain_convert_to_dict;
PyObject *const_dict_0d01e5c322a4c2be56578014c806932f;
PyObject *const_str_plain_json;
PyObject *const_str_plain_dumps;
PyObject *const_str_plain_clientContent;
PyObject *const_str_plain_set_weighted_prompts;
PyObject *const_str_digest_ea2b47c09cbbcf119cadf834c19fe471;
PyObject *const_str_plain_config;
PyObject *const_str_plain_musicGenerationConfig;
PyObject *const_str_plain_set_music_generation_config;
PyObject *const_str_digest_ed4e5c7cb461fab9ff4cf41dfd0606dd;
PyObject *const_str_plain_playbackControl;
PyObject *const_str_plain_playback_control;
PyObject *const_str_plain_value;
PyObject *const_str_plain__send_control_signal;
PyObject *const_str_digest_a72e367176baa4753813e2b62dcc48a6;
PyObject *const_str_digest_c2b676a619cfb9f8c1ef97e046a0d488;
PyObject *const_str_plain_LiveMusicPlaybackControl;
PyObject *const_str_plain_PLAY;
PyObject *const_str_plain_play;
PyObject *const_str_digest_431ce9dd7a7cfcef4be7668cb31b0389;
PyObject *const_str_digest_6636bb1904680edcce3a5933d5e19619;
PyObject *const_str_plain_PAUSE;
PyObject *const_str_plain_pause;
PyObject *const_str_digest_0cf6bb13055ba8d350695bafccef59b7;
PyObject *const_str_digest_2e5d18c7b40e34961b4617f72e45f0ea;
PyObject *const_str_plain_STOP;
PyObject *const_str_plain_stop;
PyObject *const_str_digest_a65b4bb2db24c50bf17738c311ad8f87;
PyObject *const_str_digest_e970ce4a1d929aa1b37ef7b8eb6ba5af;
PyObject *const_str_plain_RESET_CONTEXT;
PyObject *const_str_plain_reset_context;
PyObject *const_str_digest_661e5405429402fb96646bc8f5bf6889;
PyObject *const_str_digest_18b8607ae3ab0bfb088aedf11532a96c;
PyObject *const_str_plain__receive;
PyObject *const_str_plain_receive;
PyObject *const_str_digest_e28c434591bc0064ba9abccacbdd4ec2;
PyObject *const_str_plain_LiveMusicServerMessage;
PyObject *const_str_plain_recv;
PyObject *const_tuple_false_tuple;
PyObject *const_tuple_str_plain_decode_tuple;
PyObject *const_str_plain_ConnectionClosed;
PyObject *const_str_plain_rcvd;
PyObject *const_str_plain_code;
PyObject *const_str_plain_reason;
PyObject *const_int_pos_1006;
PyObject *const_str_plain_websockets;
PyObject *const_str_plain_frames;
PyObject *const_str_plain_CLOSE_CODE_EXPLANATIONS;
PyObject *const_str_digest_30333b2d63547f771ba3b3be16258685;
PyObject *const_str_plain_errors;
PyObject *const_str_plain_APIError;
PyObject *const_str_plain_raise_error;
PyObject *const_str_plain_raw_response;
PyObject *const_str_plain_loads;
PyObject *const_str_plain_decoder;
PyObject *const_str_plain_JSONDecodeError;
PyObject *const_str_digest_649731aa63df0e99e676344235c6ff02;
PyObject *const_tuple_str_plain_code_tuple;
PyObject *const_str_plain__from_response;
PyObject *const_str_plain_model_dump;
PyObject *const_tuple_str_plain_response_str_plain_kwargs_tuple;
PyObject *const_str_digest_0168e2cd900b47c9acf9a45b8d9cdec8;
PyObject *const_str_digest_ae985b4491776d6e4e1ed4bcc4367b8d;
PyObject *const_str_digest_9bd24ecff944edbc860c6ef4c4e07ccd;
PyObject *const_str_digest_741aaa4f51abd294dbf9449a638622e3;
PyObject *const_str_plain__websocket_base_url;
PyObject *const_str_plain_decode;
PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
PyObject *const_str_plain_t;
PyObject *const_str_plain_t_model;
PyObject *const_str_plain_model;
PyObject *const_str_plain_api_key;
PyObject *const_str_plain__http_options;
PyObject *const_str_plain_api_version;
PyObject *const_str_digest_056f8617c1ddc5beb697d8db70735678;
PyObject *const_str_digest_0b54533ffdbed79828cea069fb7f003e;
PyObject *const_str_plain_headers;
PyObject *const_str_plain_live_converters;
PyObject *const_str_plain__LiveMusicConnectParameters_to_mldev;
PyObject *const_str_plain_LiveMusicConnectParameters;
PyObject *const_tuple_str_plain_model_tuple;
PyObject *const_tuple_true_tuple;
PyObject *const_tuple_str_plain_exclude_none_tuple;
PyObject *const_tuple_str_plain_from_object_tuple;
PyObject *const_str_plain_setv;
PyObject *const_str_plain_setup;
PyObject *const_str_plain_connect;
PyObject *const_tuple_str_plain_additional_headers_tuple;
PyObject *const_str_plain_logger;
PyObject *const_str_plain_info;
PyObject *const_str_plain_AsyncMusicSession;
PyObject *const_tuple_str_plain_api_client_str_plain_websocket_tuple;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_str_plain_extra_headers_tuple;
PyObject *const_str_digest_8744af4ae4be33a071f5f03ce872587c;
PyObject *const_str_digest_81d629815f8d0c5fb49357a4562cfefc;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_contextlib;
PyObject *const_str_plain_logging;
PyObject *const_str_plain_AsyncIterator;
PyObject *const_tuple_str_plain__api_module_tuple;
PyObject *const_str_plain__api_module;
PyObject *const_tuple_str_plain__common_tuple;
PyObject *const_tuple_str_plain__live_converters_tuple;
PyObject *const_str_plain__live_converters;
PyObject *const_tuple_str_plain__transformers_tuple;
PyObject *const_str_plain__transformers;
PyObject *const_tuple_str_plain_errors_tuple;
PyObject *const_tuple_str_plain_types_tuple;
PyObject *const_tuple_str_plain_BaseApiClient_tuple;
PyObject *const_str_plain_BaseApiClient;
PyObject *const_tuple_str_plain_set_value_by_path_tuple;
PyObject *const_str_plain_set_value_by_path;
PyObject *const_str_digest_d811ac36803ffd622c2c6785253bfe30;
PyObject *const_tuple_str_plain_ClientConnection_tuple;
PyObject *const_str_plain_ClientConnection;
PyObject *const_tuple_str_plain_connect_tuple;
PyObject *const_str_digest_64de269816a130c295cff935094a5f58;
PyObject *const_str_plain_getLogger;
PyObject *const_tuple_str_digest_769a8bfd6285434fe7d4fe7126f2a589_tuple;
PyObject *const_str_digest_164ea6b02091fd5f781add4ef8488bb2;
PyObject *const_str_digest_de564a09c74ede6fc9168a2f142add4b;
PyObject *const_str_plain___qualname__;
PyObject *const_int_pos_45;
PyObject *const_str_plain___firstlineno__;
PyObject *const_str_plain_api_client;
PyObject *const_str_plain_websocket;
PyObject *const_str_digest_37af57793f38790c58181212bddae3ea;
PyObject *const_str_plain_WeightedPrompt;
PyObject *const_str_plain_return;
PyObject *const_str_plain_LiveMusicGenerationConfig;
PyObject *const_dict_056a293e2058d56276328e53ff09a8b9;
PyObject *const_tuple_str_plain__api_client_str_plain__ws_tuple;
PyObject *const_str_plain___static_attributes__;
PyObject *const_str_plain_BaseModule;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain_AsyncLiveMusic;
PyObject *const_str_plain___getitem__;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_angle_metaclass;
PyObject *const_str_digest_3f7d52b49cb747e551edf32e060ec78e;
PyObject *const_int_pos_160;
PyObject *const_str_plain_experimental_warning;
PyObject *const_tuple_str_digest_5140f5cb8ffc788acd10930e9c70b603_tuple;
PyObject *const_str_plain_asynccontextmanager;
PyObject *const_str_plain_str;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_digest_56ea3eb0e6852c5bb235b69889b3e47c;
PyObject *const_str_digest_95c467c58bd4b3f01e74c8352018ffd5;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_self_str_plain_api_client_str_plain_websocket_tuple;
PyObject *const_tuple_d2efc3d6282838f5c6913dc8e40e0a48_tuple;
PyObject *const_tuple_aff70f8ae0177db84fb65a0c823599ff_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_tuple_0eff00925209b972c52b9e8235ec6866_tuple;
PyObject *const_tuple_str_plain_self_str_plain_result_tuple;
PyObject *const_tuple_str_plain_self_str_plain_config_str_plain_config_dict_tuple;
PyObject *const_tuple_c43ee1e7f81451324612a5409eab52c4_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[168];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai.live_music"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain__api_client);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain__ws);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_self);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_vertexai);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_weightedPrompts);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_prompts);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__common);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_convert_to_dict);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_dict_0d01e5c322a4c2be56578014c806932f);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_json);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_dumps);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_clientContent);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_weighted_prompts);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_digest_ea2b47c09cbbcf119cadf834c19fe471);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_musicGenerationConfig);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_music_generation_config);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_digest_ed4e5c7cb461fab9ff4cf41dfd0606dd);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_playbackControl);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_playback_control);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_value);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain__send_control_signal);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_digest_a72e367176baa4753813e2b62dcc48a6);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_digest_c2b676a619cfb9f8c1ef97e046a0d488);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicPlaybackControl);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_PLAY);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_play);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_digest_431ce9dd7a7cfcef4be7668cb31b0389);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_digest_6636bb1904680edcce3a5933d5e19619);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSE);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_pause);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_digest_0cf6bb13055ba8d350695bafccef59b7);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_digest_2e5d18c7b40e34961b4617f72e45f0ea);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_STOP);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_stop);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_digest_a65b4bb2db24c50bf17738c311ad8f87);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_digest_e970ce4a1d929aa1b37ef7b8eb6ba5af);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_RESET_CONTEXT);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_reset_context);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_digest_661e5405429402fb96646bc8f5bf6889);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_digest_18b8607ae3ab0bfb088aedf11532a96c);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain__receive);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_receive);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_e28c434591bc0064ba9abccacbdd4ec2);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicServerMessage);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_recv);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decode_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_rcvd);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_code);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_reason);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_int_pos_1006);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_websockets);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_frames);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_30333b2d63547f771ba3b3be16258685);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_errors);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_APIError);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_raise_error);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_raw_response);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_loads);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_decoder);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_digest_649731aa63df0e99e676344235c6ff02);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain__from_response);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_digest_0168e2cd900b47c9acf9a45b8d9cdec8);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_digest_ae985b4491776d6e4e1ed4bcc4367b8d);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_digest_9bd24ecff944edbc860c6ef4c4e07ccd);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_digest_741aaa4f51abd294dbf9449a638622e3);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain__websocket_base_url);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_decode);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_t_model);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_key);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain__http_options);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_version);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_digest_056f8617c1ddc5beb697d8db70735678);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_digest_0b54533ffdbed79828cea069fb7f003e);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_headers);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_live_converters);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain__LiveMusicConnectParameters_to_mldev);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicConnectParameters);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_tuple);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exclude_none_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_from_object_tuple);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_setv);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_setup);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_connect);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_additional_headers_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_logger);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_info);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncMusicSession);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_api_client_str_plain_websocket_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extra_headers_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_digest_8744af4ae4be33a071f5f03ce872587c);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_digest_81d629815f8d0c5fb49357a4562cfefc);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_logging);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__api_module_tuple);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain__api_module);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__common_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__live_converters_tuple);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain__live_converters);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__transformers_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain__transformers);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseApiClient_tuple);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseApiClient);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_value_by_path_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_value_by_path);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_digest_d811ac36803ffd622c2c6785253bfe30);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientConnection_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_ClientConnection);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_digest_64de269816a130c295cff935094a5f58);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_769a8bfd6285434fe7d4fe7126f2a589_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_digest_164ea6b02091fd5f781add4ef8488bb2);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_de564a09c74ede6fc9168a2f142add4b);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_int_pos_45);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_client);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_websocket);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_37af57793f38790c58181212bddae3ea);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_WeightedPrompt);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicGenerationConfig);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__api_client_str_plain__ws_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModule);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncLiveMusic);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_3f7d52b49cb747e551edf32e060ec78e);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_int_pos_160);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_experimental_warning);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5140f5cb8ffc788acd10930e9c70b603_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_asynccontextmanager);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_str);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_digest_56ea3eb0e6852c5bb235b69889b3e47c);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_95c467c58bd4b3f01e74c8352018ffd5);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_api_client_str_plain_websocket_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_tuple_d2efc3d6282838f5c6913dc8e40e0a48_tuple);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_aff70f8ae0177db84fb65a0c823599ff_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_tuple_0eff00925209b972c52b9e8235ec6866_tuple);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_config_str_plain_config_dict_tuple);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_tuple_c43ee1e7f81451324612a5409eab52c4_tuple);
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
void checkModuleConstants_google$genai$live_music(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain__api_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api_client);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain__ws));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__ws);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_self));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_self);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_vertexai));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_vertexai);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_weightedPrompts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_weightedPrompts);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_prompts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_prompts);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__common);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_convert_to_dict));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_convert_to_dict);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_dict_0d01e5c322a4c2be56578014c806932f));
CHECK_OBJECT_DEEP(mod_consts.const_dict_0d01e5c322a4c2be56578014c806932f);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_json));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_json);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_dumps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_dumps);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_clientContent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_clientContent);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_weighted_prompts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_weighted_prompts);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_digest_ea2b47c09cbbcf119cadf834c19fe471));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ea2b47c09cbbcf119cadf834c19fe471);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_musicGenerationConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_musicGenerationConfig);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_music_generation_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_music_generation_config);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_digest_ed4e5c7cb461fab9ff4cf41dfd0606dd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ed4e5c7cb461fab9ff4cf41dfd0606dd);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_playbackControl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_playbackControl);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_playback_control));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_playback_control);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_value));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_value);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain__send_control_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__send_control_signal);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_digest_a72e367176baa4753813e2b62dcc48a6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a72e367176baa4753813e2b62dcc48a6);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_digest_c2b676a619cfb9f8c1ef97e046a0d488));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_c2b676a619cfb9f8c1ef97e046a0d488);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicPlaybackControl));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LiveMusicPlaybackControl);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_PLAY));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PLAY);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_play));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_play);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_digest_431ce9dd7a7cfcef4be7668cb31b0389));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_431ce9dd7a7cfcef4be7668cb31b0389);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_digest_6636bb1904680edcce3a5933d5e19619));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6636bb1904680edcce3a5933d5e19619);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_PAUSE));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PAUSE);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_pause));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_pause);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_digest_0cf6bb13055ba8d350695bafccef59b7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0cf6bb13055ba8d350695bafccef59b7);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_digest_2e5d18c7b40e34961b4617f72e45f0ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2e5d18c7b40e34961b4617f72e45f0ea);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_STOP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_STOP);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_stop));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stop);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_digest_a65b4bb2db24c50bf17738c311ad8f87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a65b4bb2db24c50bf17738c311ad8f87);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_digest_e970ce4a1d929aa1b37ef7b8eb6ba5af));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e970ce4a1d929aa1b37ef7b8eb6ba5af);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_RESET_CONTEXT));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_RESET_CONTEXT);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_reset_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reset_context);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_digest_661e5405429402fb96646bc8f5bf6889));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_661e5405429402fb96646bc8f5bf6889);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_digest_18b8607ae3ab0bfb088aedf11532a96c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18b8607ae3ab0bfb088aedf11532a96c);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain__receive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__receive);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_receive));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_receive);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_e28c434591bc0064ba9abccacbdd4ec2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e28c434591bc0064ba9abccacbdd4ec2);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicServerMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LiveMusicServerMessage);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_recv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_recv);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_false_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_false_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_decode_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_decode_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ConnectionClosed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ConnectionClosed);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_rcvd));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_rcvd);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_reason));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_reason);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_int_pos_1006));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_1006);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_websockets));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_websockets);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_frames));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_frames);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_30333b2d63547f771ba3b3be16258685));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30333b2d63547f771ba3b3be16258685);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_errors));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_errors);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_APIError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_APIError);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_raise_error));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raise_error);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_raw_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_raw_response);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_loads));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_loads);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_decoder));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decoder);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_JSONDecodeError));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_JSONDecodeError);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_digest_649731aa63df0e99e676344235c6ff02));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_649731aa63df0e99e676344235c6ff02);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_code_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_code_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain__from_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__from_response);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_model_dump));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model_dump);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_digest_0168e2cd900b47c9acf9a45b8d9cdec8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0168e2cd900b47c9acf9a45b8d9cdec8);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_digest_ae985b4491776d6e4e1ed4bcc4367b8d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ae985b4491776d6e4e1ed4bcc4367b8d);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_digest_9bd24ecff944edbc860c6ef4c4e07ccd));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_9bd24ecff944edbc860c6ef4c4e07ccd);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_digest_741aaa4f51abd294dbf9449a638622e3));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_741aaa4f51abd294dbf9449a638622e3);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain__websocket_base_url));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__websocket_base_url);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_decode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_decode);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_t_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t_model);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_key);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain__http_options));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__http_options);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_version));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_version);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_digest_056f8617c1ddc5beb697d8db70735678));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_056f8617c1ddc5beb697d8db70735678);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_digest_0b54533ffdbed79828cea069fb7f003e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_0b54533ffdbed79828cea069fb7f003e);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_headers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_headers);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_live_converters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_live_converters);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain__LiveMusicConnectParameters_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LiveMusicConnectParameters_to_mldev);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicConnectParameters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LiveMusicConnectParameters);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_model_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_model_tuple);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_true_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_true_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_exclude_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_exclude_none_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_from_object_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_from_object_tuple);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_setv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setv);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_setup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setup);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_connect));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_connect);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_additional_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_additional_headers_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_logger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logger);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_info));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_info);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncMusicSession));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncMusicSession);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_api_client_str_plain_websocket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_api_client_str_plain_websocket_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_tuple_none_none_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_none_none_tuple);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_extra_headers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_extra_headers_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_digest_8744af4ae4be33a071f5f03ce872587c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8744af4ae4be33a071f5f03ce872587c);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_digest_81d629815f8d0c5fb49357a4562cfefc));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_81d629815f8d0c5fb49357a4562cfefc);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextlib));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextlib);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_logging));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_logging);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncIterator));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncIterator);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__api_module_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__api_module_tuple);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain__api_module));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api_module);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__common_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__common_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__live_converters_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__live_converters_tuple);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain__live_converters));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__live_converters);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__transformers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__transformers_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain__transformers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__transformers);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_errors_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_errors_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_types_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_types_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseApiClient_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseApiClient_tuple);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseApiClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseApiClient);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_value_by_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_value_by_path_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_value_by_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_value_by_path);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_digest_d811ac36803ffd622c2c6785253bfe30));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d811ac36803ffd622c2c6785253bfe30);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ClientConnection_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ClientConnection_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_ClientConnection));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ClientConnection);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_connect_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_connect_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_digest_64de269816a130c295cff935094a5f58));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_64de269816a130c295cff935094a5f58);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_getLogger));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getLogger);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_769a8bfd6285434fe7d4fe7126f2a589_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_769a8bfd6285434fe7d4fe7126f2a589_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_digest_164ea6b02091fd5f781add4ef8488bb2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_164ea6b02091fd5f781add4ef8488bb2);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_de564a09c74ede6fc9168a2f142add4b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_de564a09c74ede6fc9168a2f142add4b);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain___qualname__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___qualname__);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_int_pos_45));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_45);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain___firstlineno__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___firstlineno__);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_client);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_websocket));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_websocket);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_37af57793f38790c58181212bddae3ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_37af57793f38790c58181212bddae3ea);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_WeightedPrompt));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_WeightedPrompt);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_LiveMusicGenerationConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_LiveMusicGenerationConfig);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9));
CHECK_OBJECT_DEEP(mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__api_client_str_plain__ws_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__api_client_str_plain__ws_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain___static_attributes__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___static_attributes__);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseModule));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseModule);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain___prepare__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___prepare__);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_AsyncLiveMusic));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_AsyncLiveMusic);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain___getitem__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___getitem__);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_angle_metaclass));
CHECK_OBJECT_DEEP(mod_consts.const_str_angle_metaclass);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_3f7d52b49cb747e551edf32e060ec78e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3f7d52b49cb747e551edf32e060ec78e);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_int_pos_160));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_160);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_experimental_warning));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_experimental_warning);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_5140f5cb8ffc788acd10930e9c70b603_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_5140f5cb8ffc788acd10930e9c70b603_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_asynccontextmanager));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_asynccontextmanager);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_str));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_str);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain___orig_bases__));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain___orig_bases__);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_digest_56ea3eb0e6852c5bb235b69889b3e47c));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_56ea3eb0e6852c5bb235b69889b3e47c);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_95c467c58bd4b3f01e74c8352018ffd5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_95c467c58bd4b3f01e74c8352018ffd5);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain___class___tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain___class___tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_api_client_str_plain_websocket_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_api_client_str_plain_websocket_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_tuple_d2efc3d6282838f5c6913dc8e40e0a48_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d2efc3d6282838f5c6913dc8e40e0a48_tuple);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_aff70f8ae0177db84fb65a0c823599ff_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_aff70f8ae0177db84fb65a0c823599ff_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_tuple_0eff00925209b972c52b9e8235ec6866_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_0eff00925209b972c52b9e8235ec6866_tuple);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_result_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_self_str_plain_config_str_plain_config_dict_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_self_str_plain_config_str_plain_config_dict_tuple);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_tuple_c43ee1e7f81451324612a5409eab52c4_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c43ee1e7f81451324612a5409eab52c4_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 19
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
static PyObject *module_var_accessor_google$genai$live_music$AsyncIterator(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterator);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterator, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncIterator);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncIterator, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$AsyncMusicSession(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncMusicSession);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncMusicSession);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncMusicSession, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_AsyncMusicSession);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_AsyncMusicSession, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncMusicSession);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncMusicSession);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncMusicSession);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$BaseApiClient(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseApiClient);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseApiClient, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_BaseApiClient);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_BaseApiClient, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$ClientConnection(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientConnection);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientConnection);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientConnection, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ClientConnection);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ClientConnection, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientConnection);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientConnection);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientConnection);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$ConnectionClosed(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosed);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosed, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ConnectionClosed);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ConnectionClosed, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$_api_module(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__api_module);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__api_module, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__api_module);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__api_module, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$_common(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__common);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__common, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__common);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__common, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__common);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$connect(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_connect);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_connect);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_connect, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_connect);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_connect, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_connect);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_connect);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_connect);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$contextlib(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_contextlib);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_contextlib, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$errors(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errors);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errors, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_errors);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_errors, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_errors);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$json(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_json);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_json, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_json);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$live_converters(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_live_converters);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_live_converters);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_live_converters, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_live_converters);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_live_converters, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_live_converters);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_live_converters);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_live_converters);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$logger(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logger);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logger, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logger);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$logging(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_logging);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_logging, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_logging);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$setv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_setv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_setv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_setv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_setv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$t(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_t);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_t, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_t);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_t, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$types(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain_types);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain_types);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain_types);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_types);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$live_music$websockets(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$live_music->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$live_music->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_websockets);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$live_music->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_websockets);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_websockets, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_websockets);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_websockets, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_websockets);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_websockets);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_websockets);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_50c9d2f270f026ab8fc36c5e34a5a88d;
static PyCodeObject *code_objects_85e200fba683e5ede8073cd3beaba4c2;
static PyCodeObject *code_objects_3808eeb4dce3a098bf2f40b4ac677f55;
static PyCodeObject *code_objects_3cf9947eb7460acc804140efc776e0bb;
static PyCodeObject *code_objects_19f43b47a01ab1773df9374743f3276e;
static PyCodeObject *code_objects_d539a6d379a6e3ff29300bcccba4915d;
static PyCodeObject *code_objects_12bd778fa35a870c5777d2f17b38d279;
static PyCodeObject *code_objects_f00bed6b7592e80674e2bb56825dbf2f;
static PyCodeObject *code_objects_5c1c8e0392a2f4970d59b3f3ee446027;
static PyCodeObject *code_objects_43d597576d2e7c77bfb3ebd4eb24799e;
static PyCodeObject *code_objects_49340cfd511b231cb1351f9ea4ed3b10;
static PyCodeObject *code_objects_af061e40234eb00798b84f58c7630b53;
static PyCodeObject *code_objects_5dcfb17a5679b28fb23e300cdcd6cd96;
static PyCodeObject *code_objects_2ac168e534491dfc4795a30dd979cecf;
static PyCodeObject *code_objects_5a898bc7491cdf5f7d050e0e7beff07c;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_56ea3eb0e6852c5bb235b69889b3e47c); CHECK_OBJECT(module_filename_obj);
code_objects_50c9d2f270f026ab8fc36c5e34a5a88d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_95c467c58bd4b3f01e74c8352018ffd5, mod_consts.const_str_digest_95c467c58bd4b3f01e74c8352018ffd5, NULL, NULL, 0, 0, 0);
code_objects_85e200fba683e5ede8073cd3beaba4c2 = MAKE_CODE_OBJECT(module_filename_obj, 160, 0, mod_consts.const_str_plain_AsyncLiveMusic, mod_consts.const_str_plain_AsyncLiveMusic, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3808eeb4dce3a098bf2f40b4ac677f55 = MAKE_CODE_OBJECT(module_filename_obj, 45, 0, mod_consts.const_str_plain_AsyncMusicSession, mod_consts.const_str_plain_AsyncMusicSession, mod_consts.const_tuple_str_plain___class___tuple, NULL, 0, 0, 0);
code_objects_3cf9947eb7460acc804140efc776e0bb = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain___init__, mod_consts.const_str_digest_37af57793f38790c58181212bddae3ea, mod_consts.const_tuple_str_plain_self_str_plain_api_client_str_plain_websocket_tuple, NULL, 3, 0, 0);
code_objects_19f43b47a01ab1773df9374743f3276e = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__receive, mod_consts.const_str_digest_0168e2cd900b47c9acf9a45b8d9cdec8, mod_consts.const_tuple_d2efc3d6282838f5c6913dc8e40e0a48_tuple, NULL, 1, 0, 0);
code_objects_d539a6d379a6e3ff29300bcccba4915d = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__send_control_signal, mod_consts.const_str_digest_a72e367176baa4753813e2b62dcc48a6, mod_consts.const_tuple_aff70f8ae0177db84fb65a0c823599ff_tuple, NULL, 2, 0, 0);
code_objects_12bd778fa35a870c5777d2f17b38d279 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, const_str_plain_close, mod_consts.const_str_digest_9bd24ecff944edbc860c6ef4c4e07ccd, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_f00bed6b7592e80674e2bb56825dbf2f = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_connect, mod_consts.const_str_digest_8744af4ae4be33a071f5f03ce872587c, mod_consts.const_tuple_0eff00925209b972c52b9e8235ec6866_tuple, NULL, 1, 1, 0);
code_objects_5c1c8e0392a2f4970d59b3f3ee446027 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_pause, mod_consts.const_str_digest_0cf6bb13055ba8d350695bafccef59b7, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_43d597576d2e7c77bfb3ebd4eb24799e = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_play, mod_consts.const_str_digest_431ce9dd7a7cfcef4be7668cb31b0389, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_49340cfd511b231cb1351f9ea4ed3b10 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_receive, mod_consts.const_str_digest_e28c434591bc0064ba9abccacbdd4ec2, mod_consts.const_tuple_str_plain_self_str_plain_result_tuple, NULL, 1, 0, 0);
code_objects_af061e40234eb00798b84f58c7630b53 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_reset_context, mod_consts.const_str_digest_661e5405429402fb96646bc8f5bf6889, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
code_objects_5dcfb17a5679b28fb23e300cdcd6cd96 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_music_generation_config, mod_consts.const_str_digest_ed4e5c7cb461fab9ff4cf41dfd0606dd, mod_consts.const_tuple_str_plain_self_str_plain_config_str_plain_config_dict_tuple, NULL, 2, 0, 0);
code_objects_2ac168e534491dfc4795a30dd979cecf = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_set_weighted_prompts, mod_consts.const_str_digest_ea2b47c09cbbcf119cadf834c19fe471, mod_consts.const_tuple_c43ee1e7f81451324612a5409eab52c4_tuple, NULL, 2, 0, 0);
code_objects_5a898bc7491cdf5f7d050e0e7beff07c = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain_stop, mod_consts.const_str_digest_a65b4bb2db24c50bf17738c311ad8f87, mod_consts.const_tuple_str_plain_self_tuple, NULL, 1, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__5_play$$$coroutine__1_play(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__6_pause$$$coroutine__1_pause(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__7_stop$$$coroutine__1_stop(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__10__receive$$$coroutine__1__receive(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__11_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__10__receive(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__11_close(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__12_connect(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__1___init__(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__2_set_weighted_prompts(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__3_set_music_generation_config(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__4__send_control_signal(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__5_play(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__6_pause(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__7_stop(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__8_reset_context(PyThreadState *tstate, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__9_receive(PyThreadState *tstate, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$genai$live_music$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_self = python_pars[0];
PyObject *par_api_client = python_pars[1];
PyObject *par_websocket = python_pars[2];
struct Nuitka_FrameObject *frame_frame_google$genai$live_music$$$function__1___init__;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$live_music$$$function__1___init__ = NULL;
PyObject *tmp_return_value = NULL;

    // Actual function body.
if (isFrameUnusable(cache_frame_frame_google$genai$live_music$$$function__1___init__)) {
    Py_XDECREF(cache_frame_frame_google$genai$live_music$$$function__1___init__);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$live_music$$$function__1___init__ == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$live_music$$$function__1___init__ = MAKE_FUNCTION_FRAME(tstate, code_objects_3cf9947eb7460acc804140efc776e0bb, module_google$genai$live_music, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$live_music$$$function__1___init__->m_type_description == NULL);
frame_frame_google$genai$live_music$$$function__1___init__ = cache_frame_frame_google$genai$live_music$$$function__1___init__;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$live_music$$$function__1___init__);
assert(Py_REFCNT(frame_frame_google$genai$live_music$$$function__1___init__) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
CHECK_OBJECT(par_api_client);
tmp_assattr_value_1 = par_api_client;
CHECK_OBJECT(par_self);
tmp_assattr_target_1 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts.const_str_plain__api_client, tmp_assattr_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
}
{
PyObject *tmp_assattr_value_2;
PyObject *tmp_assattr_target_2;
CHECK_OBJECT(par_websocket);
tmp_assattr_value_2 = par_websocket;
CHECK_OBJECT(par_self);
tmp_assattr_target_2 = par_self;
tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts.const_str_plain__ws, tmp_assattr_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$live_music$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$live_music$$$function__1___init__->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$live_music$$$function__1___init__, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$live_music$$$function__1___init__,
    type_description_1,
    par_self,
    par_api_client,
    par_websocket
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$live_music$$$function__1___init__ == cache_frame_frame_google$genai$live_music$$$function__1___init__) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$live_music$$$function__1___init__);
    cache_frame_frame_google$genai$live_music$$$function__1___init__ = NULL;
}

assertFrameObject(frame_frame_google$genai$live_music$$$function__1___init__);

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
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_websocket);
Py_DECREF(par_websocket);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_self);
Py_DECREF(par_self);
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_websocket);
Py_DECREF(par_websocket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$live_music$$$function__2_set_weighted_prompts(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_prompts = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_prompts;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_prompts);
CHECK_OBJECT(par_prompts);
Py_DECREF(par_prompts);
par_prompts = NULL;
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
struct google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts_locals {
PyObject *var_client_content_dict;
PyObject *outline_0_var_prompt;
PyObject *tmp_listcomp_1__$0;
PyObject *tmp_listcomp_1__contraction;
PyObject *tmp_listcomp_1__iter_value_0;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
int tmp_res;
char yield_tmps[1024];
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
};
#endif

static PyObject *google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts_locals *coroutine_heap = (struct google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_client_content_dict = NULL;
coroutine_heap->outline_0_var_prompt = NULL;
coroutine_heap->tmp_listcomp_1__$0 = NULL;
coroutine_heap->tmp_listcomp_1__contraction = NULL;
coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_2ac168e534491dfc4795a30dd979cecf, module_google$genai$live_music, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_vertexai);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 55;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8;
coroutine->m_frame->m_frame.f_lineno = 56;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 56;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cco";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_weightedPrompts;
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_prompts);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}

tmp_iter_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 63;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_2;
}
assert(coroutine_heap->tmp_listcomp_1__$0 == NULL);
coroutine_heap->tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(coroutine_heap->tmp_listcomp_1__contraction == NULL);
coroutine_heap->tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
tmp_next_source_1 = coroutine_heap->tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cco";
coroutine_heap->exception_lineno = 61;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = coroutine_heap->tmp_listcomp_1__iter_value_0;
    coroutine_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = coroutine_heap->tmp_listcomp_1__iter_value_0;
{
    PyObject *old = coroutine_heap->outline_0_var_prompt;
    coroutine_heap->outline_0_var_prompt = tmp_assign_source_5;
    Py_INCREF(coroutine_heap->outline_0_var_prompt);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
tmp_append_list_1 = coroutine_heap->tmp_listcomp_1__contraction;
tmp_expression_value_3 = module_var_accessor_google$genai$live_music$_common(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_convert_to_dict);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
CHECK_OBJECT(coroutine_heap->outline_0_var_prompt);
tmp_tuple_element_1 = coroutine_heap->outline_0_var_prompt;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_0d01e5c322a4c2be56578014c806932f);
coroutine->m_frame->m_frame.f_lineno = 62;
tmp_append_value_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 62;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
coroutine_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (coroutine_heap->tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 61;
coroutine_heap->type_description_1 = "cco";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
tmp_dict_value_1 = coroutine_heap->tmp_listcomp_1__contraction;
Py_INCREF(tmp_dict_value_1);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
coroutine_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
coroutine_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__$0);
Py_DECREF(coroutine_heap->tmp_listcomp_1__$0);
coroutine_heap->tmp_listcomp_1__$0 = NULL;
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
CHECK_OBJECT(coroutine_heap->tmp_listcomp_1__contraction);
Py_DECREF(coroutine_heap->tmp_listcomp_1__contraction);
coroutine_heap->tmp_listcomp_1__contraction = NULL;
Py_XDECREF(coroutine_heap->tmp_listcomp_1__iter_value_0);
coroutine_heap->tmp_listcomp_1__iter_value_0 = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_1;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(coroutine_heap->outline_0_var_prompt);
coroutine_heap->outline_0_var_prompt = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->outline_0_var_prompt);
coroutine_heap->outline_0_var_prompt = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
coroutine_heap->exception_lineno = 61;
goto frame_exception_exit_1;
outline_result_1:;
tmp_assign_source_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
assert(coroutine_heap->var_client_content_dict == NULL);
coroutine_heap->var_client_content_dict = tmp_assign_source_1;
}
branch_end_1:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 67;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__ws);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_send);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$genai$live_music$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_dict_key_2 = mod_consts.const_str_plain_clientContent;
CHECK_OBJECT(coroutine_heap->var_client_content_dict);
tmp_dict_value_2 = coroutine_heap->var_client_content_dict;
tmp_args_element_value_2 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(coroutine_heap->tmp_res != 0));
coroutine->m_frame->m_frame.f_lineno = 67;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 67;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_dict_key_2, sizeof(PyObject *), &tmp_dict_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 67;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
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
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_client_content_dict
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
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_client_content_dict);
CHECK_OBJECT(coroutine_heap->var_client_content_dict);
Py_DECREF(coroutine_heap->var_client_content_dict);
coroutine_heap->var_client_content_dict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_client_content_dict);
coroutine_heap->var_client_content_dict = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

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

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_set_weighted_prompts,
        mod_consts.const_str_digest_ea2b47c09cbbcf119cadf834c19fe471,
        code_objects_2ac168e534491dfc4795a30dd979cecf,
        closure,
        2,
#if 1
        sizeof(struct google$genai$live_music$$$function__2_set_weighted_prompts$$$coroutine__1_set_weighted_prompts_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__3_set_music_generation_config(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_config = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_config;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_config);
CHECK_OBJECT(par_config);
Py_DECREF(par_config);
par_config = NULL;
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
struct google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config_locals {
PyObject *var_config_dict;
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

static PyObject *google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config_locals *coroutine_heap = (struct google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_config_dict = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5dcfb17a5679b28fb23e300cdcd6cd96, module_google$genai$live_music, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_vertexai);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 72;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8;
coroutine->m_frame->m_frame.f_lineno = 73;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cco";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_expression_value_3 = module_var_accessor_google$genai$live_music$_common(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 77;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_convert_to_dict);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 77;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_config);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 77;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_tuple_element_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts.const_dict_0d01e5c322a4c2be56578014c806932f);
coroutine->m_frame->m_frame.f_lineno = 77;
tmp_assign_source_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
CHECK_OBJECT(tmp_kwargs_value_1);
Py_DECREF(tmp_kwargs_value_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 77;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_config_dict == NULL);
coroutine_heap->var_config_dict = tmp_assign_source_1;
}
branch_end_1:;
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 78;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__ws);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_send);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$genai$live_music$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_dict_key_1 = mod_consts.const_str_plain_musicGenerationConfig;
CHECK_OBJECT(coroutine_heap->var_config_dict);
tmp_dict_value_1 = coroutine_heap->var_config_dict;
tmp_args_element_value_2 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_args_element_value_2, tmp_dict_key_1, tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
coroutine->m_frame->m_frame.f_lineno = 78;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_2);

coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 78;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_dict_key_1, sizeof(PyObject *), &tmp_dict_value_1, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 78;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
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
    coroutine->m_closure[1],
    coroutine->m_closure[0],
    coroutine_heap->var_config_dict
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
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_config_dict);
CHECK_OBJECT(coroutine_heap->var_config_dict);
Py_DECREF(coroutine_heap->var_config_dict);
coroutine_heap->var_config_dict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_config_dict);
coroutine_heap->var_config_dict = NULL;
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

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_set_music_generation_config,
        mod_consts.const_str_digest_ed4e5c7cb461fab9ff4cf41dfd0606dd,
        code_objects_5dcfb17a5679b28fb23e300cdcd6cd96,
        closure,
        2,
#if 1
        sizeof(struct google$genai$live_music$$$function__3_set_music_generation_config$$$coroutine__1_set_music_generation_config_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__4__send_control_signal(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_playback_control = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_playback_control;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal(tstate, tmp_closure_1);

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
CHECK_OBJECT(par_playback_control);
CHECK_OBJECT(par_playback_control);
Py_DECREF(par_playback_control);
par_playback_control = NULL;
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
struct google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal_locals {
PyObject *var_playback_control_dict;
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

static PyObject *google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal_locals *coroutine_heap = (struct google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_playback_control_dict = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_d539a6d379a6e3ff29300bcccba4915d, module_google$genai$live_music, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
nuitka_bool tmp_condition_result_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_vertexai);
CHECK_OBJECT(tmp_expression_value_1);
Py_DECREF(tmp_expression_value_1);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 83;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8;
coroutine->m_frame->m_frame.f_lineno = 84;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 84;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cco";
goto frame_exception_exit_1;
}
goto branch_end_1;
branch_no_1:;
{
PyObject *tmp_assign_source_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_3;
tmp_dict_key_1 = mod_consts.const_str_plain_playbackControl;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_playback_control);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_value);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 88;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_assign_source_1 = _PyDict_NewPresized( 1 );
coroutine_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(coroutine_heap->tmp_res != 0));
assert(coroutine_heap->var_playback_control_dict == NULL);
coroutine_heap->var_playback_control_dict = tmp_assign_source_1;
}
{
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_6;
PyObject *tmp_expression_value_7;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_args_element_value_2;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 89;
if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[1]);
tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__ws);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_send);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_called_instance_1 = module_var_accessor_google$genai$live_music$json(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_playback_control_dict);
tmp_args_element_value_2 = coroutine_heap->var_playback_control_dict;
coroutine->m_frame->m_frame.f_lineno = 89;
tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts.const_str_plain_dumps, tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 89;
tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_4;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 89;
coroutine_heap->type_description_1 = "cco";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
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
    coroutine_heap->var_playback_control_dict
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
Py_INCREF(coroutine_heap->tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(coroutine_heap->var_playback_control_dict);
CHECK_OBJECT(coroutine_heap->var_playback_control_dict);
Py_DECREF(coroutine_heap->var_playback_control_dict);
coroutine_heap->var_playback_control_dict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_playback_control_dict);
coroutine_heap->var_playback_control_dict = NULL;
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

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain__send_control_signal,
        mod_consts.const_str_digest_a72e367176baa4753813e2b62dcc48a6,
        code_objects_d539a6d379a6e3ff29300bcccba4915d,
        closure,
        2,
#if 1
        sizeof(struct google$genai$live_music$$$function__4__send_control_signal$$$coroutine__1__send_control_signal_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__5_play(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__5_play$$$coroutine__1_play(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__5_play$$$coroutine__1_play_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$genai$live_music$$$function__5_play$$$coroutine__1_play_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__5_play$$$coroutine__1_play_locals *coroutine_heap = (struct google$genai$live_music$$$function__5_play$$$coroutine__1_play_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_43d597576d2e7c77bfb3ebd4eb24799e, module_google$genai$live_music, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
coroutine->m_frame->m_frame.f_lineno = 93;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__send_control_signal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_LiveMusicPlaybackControl);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_PLAY);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 93;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 93;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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

goto function_return_exit;

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
    coroutine->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__5_play$$$coroutine__1_play(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__5_play$$$coroutine__1_play_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_play,
        mod_consts.const_str_digest_431ce9dd7a7cfcef4be7668cb31b0389,
        code_objects_43d597576d2e7c77bfb3ebd4eb24799e,
        closure,
        1,
#if 1
        sizeof(struct google$genai$live_music$$$function__5_play$$$coroutine__1_play_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__6_pause(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__6_pause$$$coroutine__1_pause(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__6_pause$$$coroutine__1_pause_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$genai$live_music$$$function__6_pause$$$coroutine__1_pause_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__6_pause$$$coroutine__1_pause_locals *coroutine_heap = (struct google$genai$live_music$$$function__6_pause$$$coroutine__1_pause_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5c1c8e0392a2f4970d59b3f3ee446027, module_google$genai$live_music, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
coroutine->m_frame->m_frame.f_lineno = 97;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__send_control_signal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_LiveMusicPlaybackControl);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_PAUSE);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 97;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 97;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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

goto function_return_exit;

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
    coroutine->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__6_pause$$$coroutine__1_pause(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__6_pause$$$coroutine__1_pause_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_pause,
        mod_consts.const_str_digest_0cf6bb13055ba8d350695bafccef59b7,
        code_objects_5c1c8e0392a2f4970d59b3f3ee446027,
        closure,
        1,
#if 1
        sizeof(struct google$genai$live_music$$$function__6_pause$$$coroutine__1_pause_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__7_stop(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__7_stop$$$coroutine__1_stop(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__7_stop$$$coroutine__1_stop_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$genai$live_music$$$function__7_stop$$$coroutine__1_stop_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__7_stop$$$coroutine__1_stop_locals *coroutine_heap = (struct google$genai$live_music$$$function__7_stop$$$coroutine__1_stop_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_5a898bc7491cdf5f7d050e0e7beff07c, module_google$genai$live_music, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
coroutine->m_frame->m_frame.f_lineno = 104;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__send_control_signal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_LiveMusicPlaybackControl);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_STOP);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 104;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 104;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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

goto function_return_exit;

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
    coroutine->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__7_stop$$$coroutine__1_stop(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__7_stop$$$coroutine__1_stop_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_stop,
        mod_consts.const_str_digest_a65b4bb2db24c50bf17738c311ad8f87,
        code_objects_5a898bc7491cdf5f7d050e0e7beff07c,
        closure,
        1,
#if 1
        sizeof(struct google$genai$live_music$$$function__7_stop$$$coroutine__1_stop_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__8_reset_context(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context_locals {
char const *type_description_1;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
};
#endif

static PyObject *google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context_locals *coroutine_heap = (struct google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->tmp_return_value = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_af061e40234eb00798b84f58c7630b53, module_google$genai$live_music, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_expression_value_5;
coroutine->m_frame->m_frame.f_lineno = 108;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__send_control_signal);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_5 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));

Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_LiveMusicPlaybackControl);
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_RESET_CONTEXT);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_1);

coroutine_heap->exception_lineno = 109;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 108;
tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 108;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine_heap->tmp_return_value = yield_return_value;
goto frame_return_exit_1;
}

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

goto function_return_exit;

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
    coroutine->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_reset_context,
        mod_consts.const_str_digest_661e5405429402fb96646bc8f5bf6889,
        code_objects_af061e40234eb00798b84f58c7630b53,
        closure,
        1,
#if 1
        sizeof(struct google$genai$live_music$$$function__8_reset_context$$$coroutine__1_reset_context_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__9_receive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_ASYNCGEN_google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive_locals {
PyObject *var_result;
PyObject *tmp_assignment_expr_1__value;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
};
#endif

static PyObject *google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive_locals *asyncgen_heap = (struct google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_result = NULL;
asyncgen_heap->tmp_assignment_expr_1__value = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_49340cfd511b231cb1351f9ea4ed3b10, module_google$genai$live_music, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
loop_start_1:;
{
bool tmp_condition_result_1;
PyObject *tmp_operand_value_1;
// Tried code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
asyncgen->m_frame->m_frame.f_lineno = 119;
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 119;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}

tmp_called_instance_1 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 119;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__receive);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 119;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 119;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_operand_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_1;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_operand_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 119;
asyncgen_heap->type_description_1 = "co";
    goto try_except_handler_2;
}
tmp_assign_source_1 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_assignment_expr_1__value;
    asyncgen_heap->tmp_assignment_expr_1__value = tmp_assign_source_1;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_2;
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
tmp_assign_source_2 = asyncgen_heap->tmp_assignment_expr_1__value;
{
    PyObject *old = asyncgen_heap->var_result;
    asyncgen_heap->var_result = tmp_assign_source_2;
    Py_INCREF(asyncgen_heap->var_result);
    Py_XDECREF(old);
}

}
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
tmp_operand_value_1 = asyncgen_heap->tmp_assignment_expr_1__value;
Py_INCREF(tmp_operand_value_1);
goto try_return_handler_2;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
CHECK_OBJECT(asyncgen_heap->tmp_assignment_expr_1__value);
Py_DECREF(asyncgen_heap->tmp_assignment_expr_1__value);
asyncgen_heap->tmp_assignment_expr_1__value = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_assignment_expr_1__value);
asyncgen_heap->tmp_assignment_expr_1__value = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_1;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

goto frame_exception_exit_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_result_1:;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 119;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
goto loop_end_1;
branch_no_1:;
{
PyObject *tmp_expression_value_3;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
CHECK_OBJECT(asyncgen_heap->var_result);
tmp_expression_value_3 = asyncgen_heap->var_result;
Py_INCREF(tmp_expression_value_3);
asyncgen->m_yield_return_index = 2;
return tmp_expression_value_3;
yield_return_2:
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 120;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 119;
asyncgen_heap->type_description_1 = "co";
    goto frame_exception_exit_1;
}
goto loop_start_1;
loop_end_1:;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[0],
    asyncgen_heap->var_result
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(asyncgen_heap->var_result);
CHECK_OBJECT(asyncgen_heap->var_result);
Py_DECREF(asyncgen_heap->var_result);
asyncgen_heap->var_result = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_result);
asyncgen_heap->var_result = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_receive,
        mod_consts.const_str_digest_e28c434591bc0064ba9abccacbdd4ec2,
        code_objects_49340cfd511b231cb1351f9ea4ed3b10,
        closure,
        1,
#if 1
        sizeof(struct google$genai$live_music$$$function__9_receive$$$asyncgen__1_receive_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__10__receive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__10__receive$$$coroutine__1__receive(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__10__receive$$$coroutine__1__receive_locals {
PyObject *var_parameter_model;
PyObject *var_raw_response;
PyObject *var_e;
PyObject *var_code;
PyObject *var_reason;
PyObject *var_response;
PyObject *var_response_dict;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
PyObject *tmp_return_value;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
};
#endif

static PyObject *google$genai$live_music$$$function__10__receive$$$coroutine__1__receive_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__10__receive$$$coroutine__1__receive_locals *coroutine_heap = (struct google$genai$live_music$$$function__10__receive$$$coroutine__1__receive_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->var_parameter_model = NULL;
coroutine_heap->var_raw_response = NULL;
coroutine_heap->var_e = NULL;
coroutine_heap->var_code = NULL;
coroutine_heap->var_reason = NULL;
coroutine_heap->var_response = NULL;
coroutine_heap->var_response_dict = NULL;
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_19f43b47a01ab1773df9374743f3276e, module_google$genai$live_music, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 123;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain_LiveMusicServerMessage);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 123;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
assert(coroutine_heap->var_parameter_model == NULL);
coroutine_heap->var_parameter_model = tmp_assign_source_1;
}
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_expression_value_4;
coroutine->m_frame->m_frame.f_lineno = 125;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_2;
}

tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__ws);
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_2;
}
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_recv);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_2;
}
coroutine->m_frame->m_frame.f_lineno = 125;
tmp_expression_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_decode_tuple);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_2;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_2;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 125;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = yield_return_value;
assert(coroutine_heap->var_raw_response == NULL);
coroutine_heap->var_raw_response = tmp_assign_source_2;
}
goto try_end_1;
// Exception handler code:
try_except_handler_2:;
coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_1 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 1.
coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_TypeError;
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(coroutine_heap->tmp_res == -1));
tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_1 != false) {
    goto branch_yes_1;
} else {
    goto branch_no_1;
}
}
branch_yes_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_called_instance_2;
PyObject *tmp_expression_value_7;
coroutine->m_frame->m_frame.f_lineno = 127;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_3;
}

tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain__ws);
if (tmp_called_instance_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_3;
}
coroutine->m_frame->m_frame.f_lineno = 127;
tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts.const_str_plain_recv);
CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
coroutine->m_yield_return_index = 2;
coroutine->m_yield_from = tmp_expression_value_5;
coroutine->m_awaiting = true;
return NULL;

yield_return_2:
RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 127;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_3 = yield_return_value;
assert(coroutine_heap->var_raw_response == NULL);
coroutine_heap->var_raw_response = tmp_assign_source_3;
}
goto branch_end_1;
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
tmp_cmp_expr_left_2 = EXC_TYPE(tstate);
tmp_cmp_expr_right_2 = module_var_accessor_google$genai$live_music$ConnectionClosed(tstate);
if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_ConnectionClosed);
}

if (tmp_cmp_expr_right_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_3;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 128;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_3;
}
tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_assign_source_4); 
assert(coroutine_heap->var_e == NULL);
Py_INCREF(tmp_assign_source_4);
coroutine_heap->var_e = tmp_assign_source_4;
}
// Tried code:
{
nuitka_bool tmp_condition_result_3;
PyObject *tmp_expression_value_8;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
CHECK_OBJECT(coroutine_heap->var_e);
tmp_expression_value_8 = coroutine_heap->var_e;
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_rcvd);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 129;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

coroutine_heap->exception_lineno = 129;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
CHECK_OBJECT(coroutine_heap->var_e);
tmp_expression_value_10 = coroutine_heap->var_e;
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain_rcvd);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_code);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 130;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_code == NULL);
coroutine_heap->var_code = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_expression_value_11;
PyObject *tmp_expression_value_12;
CHECK_OBJECT(coroutine_heap->var_e);
tmp_expression_value_12 = coroutine_heap->var_e;
tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_rcvd);
if (tmp_expression_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 131;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain_reason);
CHECK_OBJECT(tmp_expression_value_11);
Py_DECREF(tmp_expression_value_11);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 131;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_reason == NULL);
coroutine_heap->var_reason = tmp_assign_source_6;
}
goto branch_end_3;
branch_no_3:;
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = mod_consts.const_int_pos_1006;
assert(coroutine_heap->var_code == NULL);
Py_INCREF(tmp_assign_source_7);
coroutine_heap->var_code = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_expression_value_15 = module_var_accessor_google$genai$live_music$websockets(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_websockets);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_frames);
if (tmp_expression_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain_CLOSE_CODE_EXPLANATIONS);
CHECK_OBJECT(tmp_expression_value_14);
Py_DECREF(tmp_expression_value_14);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_code);
tmp_args_element_value_1 = coroutine_heap->var_code;
tmp_args_element_value_2 = mod_consts.const_str_digest_30333b2d63547f771ba3b3be16258685;
coroutine->m_frame->m_frame.f_lineno = 134;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 134;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
assert(coroutine_heap->var_reason == NULL);
coroutine_heap->var_reason = tmp_assign_source_8;
}
branch_end_3:;
{
PyObject *tmp_called_instance_3;
PyObject *tmp_expression_value_16;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_expression_value_16 = module_var_accessor_google$genai$live_music$errors(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_errors);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_APIError);
if (tmp_called_instance_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(coroutine_heap->var_code);
tmp_args_element_value_3 = coroutine_heap->var_code;
CHECK_OBJECT(coroutine_heap->var_reason);
tmp_args_element_value_4 = coroutine_heap->var_reason;
tmp_args_element_value_5 = Py_None;
coroutine->m_frame->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
        tstate,
        tmp_called_instance_3,
        mod_consts.const_str_plain_raise_error,
        call_args
    );
}

CHECK_OBJECT(tmp_called_instance_3);
Py_DECREF(tmp_called_instance_3);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 135;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
goto try_end_2;
// Exception handler code:
try_except_handler_4:;
coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_2 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_2;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

goto try_except_handler_3;
// End of try:
try_end_2:;
Py_XDECREF(coroutine_heap->var_e);
coroutine_heap->var_e = NULL;

goto branch_end_2;
branch_no_2:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 124;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cooooooo";
goto try_except_handler_3;
branch_end_2:;
branch_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_3 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_3;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
{
nuitka_bool tmp_condition_result_4;
int tmp_truth_name_2;
if (coroutine_heap->var_raw_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_raw_response);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}

tmp_truth_name_2 = CHECK_IF_TRUE(coroutine_heap->var_raw_response);
if (tmp_truth_name_2 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 136;
coroutine_heap->type_description_1 = "cooooooo";
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
// Tried code:
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_17;
PyObject *tmp_args_element_value_6;
tmp_expression_value_17 = module_var_accessor_google$genai$live_music$json(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_5;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_loads);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_5;
}
if (coroutine_heap->var_raw_response == NULL) {
Py_DECREF(tmp_called_value_3);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_raw_response);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_5;
}

tmp_args_element_value_6 = coroutine_heap->var_raw_response;
coroutine->m_frame->m_frame.f_lineno = 138;
tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 138;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_5;
}
assert(coroutine_heap->var_response == NULL);
coroutine_heap->var_response = tmp_assign_source_9;
}
goto try_end_4;
// Exception handler code:
try_except_handler_5:;
coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_4 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Preserve existing published exception id 2.
coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_4);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_4, exception_tb);
    } else if (coroutine_heap->exception_keeper_lineno_4 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
        SET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_keeper_name_4, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_name_4);
// Tried code:
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_expression_value_18;
PyObject *tmp_expression_value_19;
tmp_cmp_expr_left_3 = EXC_TYPE(tstate);
tmp_expression_value_19 = module_var_accessor_google$genai$live_music$json(tstate);
if (unlikely(tmp_expression_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_json);
}

if (tmp_expression_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 139;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts.const_str_plain_decoder);
if (tmp_expression_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 139;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_6;
}
tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_JSONDecodeError);
CHECK_OBJECT(tmp_expression_value_18);
Py_DECREF(tmp_expression_value_18);
if (tmp_cmp_expr_right_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 139;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_6;
}
coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
CHECK_OBJECT(tmp_cmp_expr_right_3);
Py_DECREF(tmp_cmp_expr_right_3);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 139;
coroutine_heap->type_description_1 = "cooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_5 = (coroutine_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
tmp_tuple_element_1 = mod_consts.const_str_digest_649731aa63df0e99e676344235c6ff02;
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_format_value_1;
PyObject *tmp_operand_value_1;
PyObject *tmp_format_spec_1;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
if (coroutine_heap->var_raw_response == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_raw_response);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "cooooooo";
    goto tuple_build_exception_1;
}

tmp_operand_value_1 = coroutine_heap->var_raw_response;
tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
if (tmp_format_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "cooooooo";
    goto tuple_build_exception_1;
}
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
CHECK_OBJECT(tmp_format_value_1);
Py_DECREF(tmp_format_value_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 140;
coroutine_heap->type_description_1 = "cooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_string_concat_values_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_make_exception_arg_1 == NULL));
coroutine->m_frame->m_frame.f_lineno = 140;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_1;
coroutine_heap->exception_lineno = 140;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cooooooo";
goto try_except_handler_6;
}
goto branch_end_5;
branch_no_5:;
coroutine_heap->tmp_result = RERAISE_EXCEPTION(tstate, &coroutine_heap->exception_state);
if (unlikely(coroutine_heap->tmp_result == false)) {
    coroutine_heap->exception_lineno = 137;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&coroutine_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &coroutine->m_frame->m_frame)) {
        coroutine->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
coroutine_heap->type_description_1 = "cooooooo";
goto try_except_handler_6;
branch_end_5:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Exception handler code:
try_except_handler_6:;
coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_5 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_5;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
// End of try:
try_end_4:;
goto branch_end_4;
branch_no_4:;
{
PyObject *tmp_assign_source_10;
tmp_assign_source_10 = MAKE_DICT_EMPTY(tstate);
assert(coroutine_heap->var_response == NULL);
coroutine_heap->var_response = tmp_assign_source_10;
}
branch_end_4:;
{
nuitka_bool tmp_condition_result_6;
PyObject *tmp_expression_value_20;
PyObject *tmp_expression_value_21;
PyObject *tmp_attribute_value_2;
int tmp_truth_name_3;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts.const_str_plain_vertexai);
CHECK_OBJECT(tmp_expression_value_20);
Py_DECREF(tmp_expression_value_20);
if (tmp_attribute_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
if (tmp_truth_name_3 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_attribute_value_2);

coroutine_heap->exception_lineno = 144;
coroutine_heap->type_description_1 = "cooooooo";
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
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8;
coroutine->m_frame->m_frame.f_lineno = 145;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
coroutine_heap->exception_state.exception_value = tmp_raise_type_2;
coroutine_heap->exception_lineno = 145;
RAISE_EXCEPTION_WITH_VALUE(tstate, &coroutine_heap->exception_state);
coroutine_heap->type_description_1 = "cooooooo";
goto frame_exception_exit_1;
}
goto branch_end_6;
branch_no_6:;
{
PyObject *tmp_assign_source_11;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_assign_source_11 = coroutine_heap->var_response;
assert(coroutine_heap->var_response_dict == NULL);
Py_INCREF(tmp_assign_source_11);
coroutine_heap->var_response_dict = tmp_assign_source_11;
}
branch_end_6:;
{
nuitka_bool tmp_condition_result_7;
int tmp_and_left_truth_1;
nuitka_bool tmp_and_left_value_1;
nuitka_bool tmp_and_right_value_1;
PyObject *tmp_operand_value_2;
int tmp_truth_name_4;
CHECK_OBJECT(coroutine_heap->var_response_dict);
tmp_operand_value_2 = coroutine_heap->var_response_dict;
coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
if (coroutine_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_and_left_value_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
if (tmp_and_left_truth_1 == 1) {
    goto and_right_1;
} else {
    goto and_left_1;
}
and_right_1:;
CHECK_OBJECT(coroutine_heap->var_response);
tmp_truth_name_4 = CHECK_IF_TRUE(coroutine_heap->var_response);
if (tmp_truth_name_4 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 148;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_and_right_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
tmp_condition_result_7 = tmp_and_right_value_1;
goto and_end_1;
and_left_1:;
tmp_condition_result_7 = tmp_and_left_value_1;
and_end_1:;
if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_22;
PyObject *tmp_expression_value_23;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_24;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_expression_value_23 = module_var_accessor_google$genai$live_music$errors(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_errors);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts.const_str_plain_APIError);
if (tmp_expression_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts.const_str_plain_raise_error);
CHECK_OBJECT(tmp_expression_value_22);
Py_DECREF(tmp_expression_value_22);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_response);
tmp_expression_value_24 = coroutine_heap->var_response;
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, const_str_plain_get);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 150;
tmp_args_element_value_7 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_5, mod_consts.const_tuple_str_plain_code_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_4);

coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_response);
tmp_args_element_value_8 = coroutine_heap->var_response;
tmp_args_element_value_9 = Py_None;
coroutine->m_frame->m_frame.f_lineno = 150;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 150;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_7:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_25;
PyObject *tmp_expression_value_26;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_kw_call_value_1_1;
PyObject *tmp_called_instance_4;
tmp_expression_value_26 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &coroutine_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&coroutine_heap->exception_state));



coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts.const_str_plain_LiveMusicServerMessage);
if (tmp_expression_value_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain__from_response);
CHECK_OBJECT(tmp_expression_value_25);
Py_DECREF(tmp_expression_value_25);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(coroutine_heap->var_response_dict);
tmp_kw_call_value_0_1 = coroutine_heap->var_response_dict;
CHECK_OBJECT(coroutine_heap->var_parameter_model);
tmp_called_instance_4 = coroutine_heap->var_parameter_model;
coroutine->m_frame->m_frame.f_lineno = 152;
tmp_kw_call_value_1_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts.const_str_plain_model_dump);
if (tmp_kw_call_value_1_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
Py_DECREF(tmp_called_value_6);

coroutine_heap->exception_lineno = 152;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 151;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

    coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_response_str_plain_kwargs_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
CHECK_OBJECT(tmp_kw_call_value_1_1);
Py_DECREF(tmp_kw_call_value_1_1);
if (coroutine_heap->tmp_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 151;
coroutine_heap->type_description_1 = "cooooooo";
    goto frame_exception_exit_1;
}
goto frame_return_exit_1;
}

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
    coroutine_heap->var_parameter_model,
    coroutine_heap->var_raw_response,
    coroutine_heap->var_e,
    coroutine_heap->var_code,
    coroutine_heap->var_reason,
    coroutine_heap->var_response,
    coroutine_heap->var_response_dict
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
CHECK_OBJECT(coroutine_heap->var_parameter_model);
CHECK_OBJECT(coroutine_heap->var_parameter_model);
Py_DECREF(coroutine_heap->var_parameter_model);
coroutine_heap->var_parameter_model = NULL;
Py_XDECREF(coroutine_heap->var_raw_response);
coroutine_heap->var_raw_response = NULL;
Py_XDECREF(coroutine_heap->var_code);
coroutine_heap->var_code = NULL;
Py_XDECREF(coroutine_heap->var_reason);
coroutine_heap->var_reason = NULL;
CHECK_OBJECT(coroutine_heap->var_response);
CHECK_OBJECT(coroutine_heap->var_response);
Py_DECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
CHECK_OBJECT(coroutine_heap->var_response_dict);
CHECK_OBJECT(coroutine_heap->var_response_dict);
Py_DECREF(coroutine_heap->var_response_dict);
coroutine_heap->var_response_dict = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
coroutine_heap->exception_lineno = 0;
coroutine_heap->exception_keeper_name_6 = coroutine_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&coroutine_heap->exception_state);

Py_XDECREF(coroutine_heap->var_parameter_model);
coroutine_heap->var_parameter_model = NULL;
Py_XDECREF(coroutine_heap->var_raw_response);
coroutine_heap->var_raw_response = NULL;
Py_XDECREF(coroutine_heap->var_code);
coroutine_heap->var_code = NULL;
Py_XDECREF(coroutine_heap->var_reason);
coroutine_heap->var_reason = NULL;
Py_XDECREF(coroutine_heap->var_response);
coroutine_heap->var_response = NULL;
Py_XDECREF(coroutine_heap->var_response_dict);
coroutine_heap->var_response_dict = NULL;
// Re-raise.
coroutine_heap->exception_state = coroutine_heap->exception_keeper_name_6;
coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

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

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__10__receive$$$coroutine__1__receive(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__10__receive$$$coroutine__1__receive_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain__receive,
        mod_consts.const_str_digest_0168e2cd900b47c9acf9a45b8d9cdec8,
        code_objects_19f43b47a01ab1773df9374743f3276e,
        closure,
        1,
#if 1
        sizeof(struct google$genai$live_music$$$function__10__receive$$$coroutine__1__receive_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__11_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
tmp_return_value = MAKE_COROUTINE_google$genai$live_music$$$function__11_close$$$coroutine__1_close(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__11_close$$$coroutine__1_close_locals {
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
char yield_tmps[1024];
PyObject *tmp_return_value;
};
#endif

static PyObject *google$genai$live_music$$$function__11_close$$$coroutine__1_close_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__11_close$$$coroutine__1_close_locals *coroutine_heap = (struct google$genai$live_music$$$function__11_close$$$coroutine__1_close_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(coroutine->m_yield_return_index) {
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
coroutine_heap->type_description_1 = NULL;
coroutine_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
coroutine_heap->exception_lineno = 0;
coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_12bd778fa35a870c5777d2f17b38d279, module_google$genai$live_music, sizeof(void *));
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
PyObject *tmp_expression_value_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_3;
PyObject *tmp_await_result_1;
coroutine->m_frame->m_frame.f_lineno = 157;
if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &coroutine_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, coroutine_heap->exception_state.exception_value);

coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}

tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain__ws);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
coroutine->m_frame->m_frame.f_lineno = 157;
tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, const_str_plain_close);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_expression_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_expression_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_yield_return_index = 1;
coroutine->m_yield_from = tmp_expression_value_1;
coroutine->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
coroutine->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);


coroutine_heap->exception_lineno = 157;
coroutine_heap->type_description_1 = "c";
    goto frame_exception_exit_1;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
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
    coroutine->m_closure[0]
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
goto function_exception_exit;
frame_no_exception_1:;
coroutine_heap->tmp_return_value = Py_None;
Py_INCREF(coroutine_heap->tmp_return_value);
goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&coroutine_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &coroutine_heap->exception_state);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_google$genai$live_music$$$function__11_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        google$genai$live_music$$$function__11_close$$$coroutine__1_close_context,
        module_google$genai$live_music,
        const_str_plain_close,
        mod_consts.const_str_digest_9bd24ecff944edbc860c6ef4c4e07ccd,
        code_objects_12bd778fa35a870c5777d2f17b38d279,
        closure,
        1,
#if 1
        sizeof(struct google$genai$live_music$$$function__11_close$$$coroutine__1_close_locals)
#else
        0
#endif
    );
}


static PyObject *impl_google$genai$live_music$$$function__12_connect(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
struct Nuitka_CellObject *par_model = Nuitka_Cell_New1(python_pars[1]);
PyObject *tmp_return_value = NULL;

    // Actual function body.
// Tried code:
{
struct Nuitka_CellObject *tmp_closure_1[2];
tmp_closure_1[0] = par_model;
Py_INCREF(tmp_closure_1[0]);
tmp_closure_1[1] = par_self;
Py_INCREF(tmp_closure_1[1]);
tmp_return_value = MAKE_ASYNCGEN_google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect(tstate, tmp_closure_1);

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
struct google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect_locals {
PyObject *var_base_url;
PyObject *var_transformed_model;
PyObject *var_api_key;
PyObject *var_version;
PyObject *var_uri;
PyObject *var_headers;
PyObject *var_request_dict;
PyObject *var_request;
PyObject *var_ws;
PyObject *tmp_with_1__enter;
PyObject *tmp_with_1__exit;
nuitka_bool tmp_with_1__indicator;
PyObject *tmp_with_1__source;
PyObject *tmp_with_2__enter;
PyObject *tmp_with_2__exit;
nuitka_bool tmp_with_2__indicator;
PyObject *tmp_with_2__source;
char const *type_description_1;
struct Nuitka_ExceptionPreservationItem exception_state;
int exception_lineno;
int tmp_res;
char yield_tmps[1024];
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
int exception_keeper_lineno_5;
struct Nuitka_ExceptionStackItem exception_preserved_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_6;
int exception_keeper_lineno_6;
struct Nuitka_ExceptionStackItem exception_preserved_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_7;
int exception_keeper_lineno_7;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_8;
int exception_keeper_lineno_8;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_9;
int exception_keeper_lineno_9;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_10;
int exception_keeper_lineno_10;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_11;
int exception_keeper_lineno_11;
};
#endif

static PyObject *google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
struct google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect_locals *asyncgen_heap = (struct google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
switch(asyncgen->m_yield_return_index) {
case 14: goto yield_return_14;
case 13: goto yield_return_13;
case 12: goto yield_return_12;
case 11: goto yield_return_11;
case 10: goto yield_return_10;
case 9: goto yield_return_9;
case 8: goto yield_return_8;
case 7: goto yield_return_7;
case 6: goto yield_return_6;
case 5: goto yield_return_5;
case 4: goto yield_return_4;
case 3: goto yield_return_3;
case 2: goto yield_return_2;
case 1: goto yield_return_1;
}

    // Local variable initialization
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_m_frame = NULL;
asyncgen_heap->var_base_url = NULL;
asyncgen_heap->var_transformed_model = NULL;
asyncgen_heap->var_api_key = NULL;
asyncgen_heap->var_version = NULL;
asyncgen_heap->var_uri = NULL;
asyncgen_heap->var_headers = NULL;
asyncgen_heap->var_request_dict = NULL;
asyncgen_heap->var_request = NULL;
asyncgen_heap->var_ws = NULL;
asyncgen_heap->tmp_with_1__enter = NULL;
asyncgen_heap->tmp_with_1__exit = NULL;
asyncgen_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
asyncgen_heap->tmp_with_1__source = NULL;
asyncgen_heap->tmp_with_2__enter = NULL;
asyncgen_heap->tmp_with_2__exit = NULL;
asyncgen_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
asyncgen_heap->tmp_with_2__source = NULL;
asyncgen_heap->type_description_1 = NULL;
asyncgen_heap->exception_state = Empty_Nuitka_ExceptionPreservationItem;
asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
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
    cache_m_frame = MAKE_FUNCTION_FRAME(tstate, code_objects_f00bed6b7592e80674e2bb56825dbf2f, module_google$genai$live_music, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_m_frame->m_type_description == NULL);
asyncgen->m_frame = cache_m_frame;
// Mark the frame object as in use, ref count 1 will be up for reuse.
Py_INCREF(asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

assert(asyncgen->m_frame->m_frame.f_back == NULL);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
assert(Py_REFCNT(asyncgen->m_frame) == 2);

// Store currently existing exception as the one to publish again when we
// yield or yield from.
STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

// Framed code:
{
PyObject *tmp_assign_source_1;
PyObject *tmp_called_instance_1;
PyObject *tmp_expression_value_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_1 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain__api_client);
if (tmp_called_instance_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 172;
tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts.const_str_plain__websocket_base_url);
CHECK_OBJECT(tmp_called_instance_1);
Py_DECREF(tmp_called_instance_1);
if (tmp_assign_source_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 172;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_base_url == NULL);
asyncgen_heap->var_base_url = tmp_assign_source_1;
}
{
nuitka_bool tmp_condition_result_1;
PyObject *tmp_isinstance_inst_1;
PyObject *tmp_isinstance_cls_1;
CHECK_OBJECT(asyncgen_heap->var_base_url);
tmp_isinstance_inst_1 = asyncgen_heap->var_base_url;
tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
asyncgen_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 173;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_1 = (asyncgen_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
CHECK_OBJECT(asyncgen_heap->var_base_url);
tmp_expression_value_2 = asyncgen_heap->var_base_url;
tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_decode);
if (tmp_called_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 174;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 174;
tmp_assign_source_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_1, mod_consts.const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple);

CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 174;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
{
    PyObject *old = asyncgen_heap->var_base_url;
    assert(old != NULL);
    asyncgen_heap->var_base_url = tmp_assign_source_2;
    Py_DECREF(old);
}

}
branch_no_1:;
{
PyObject *tmp_assign_source_3;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_1;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_2;
tmp_expression_value_3 = module_var_accessor_google$genai$live_music$t(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_t);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 175;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_t_model);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 175;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {
Py_DECREF(tmp_called_value_2);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 175;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_4 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain__api_client);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_2);

asyncgen_heap->exception_lineno = 175;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
Py_DECREF(tmp_called_value_2);
Py_DECREF(tmp_args_element_value_1);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_model);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 175;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_2 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
asyncgen->m_frame->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_assign_source_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 175;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_transformed_model == NULL);
asyncgen_heap->var_transformed_model = tmp_assign_source_3;
}
{
nuitka_bool tmp_condition_result_2;
PyObject *tmp_expression_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_attribute_value_1;
int tmp_truth_name_1;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 177;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_6 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 177;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_api_key);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_attribute_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 177;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_attribute_value_1);

asyncgen_heap->exception_lineno = 177;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
CHECK_OBJECT(tmp_attribute_value_1);
Py_DECREF(tmp_attribute_value_1);
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_4;
PyObject *tmp_expression_value_7;
PyObject *tmp_expression_value_8;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_8 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_api_key);
CHECK_OBJECT(tmp_expression_value_7);
Py_DECREF(tmp_expression_value_7);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 178;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_api_key == NULL);
asyncgen_heap->var_api_key = tmp_assign_source_4;
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_expression_value_9;
PyObject *tmp_expression_value_10;
PyObject *tmp_expression_value_11;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 179;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_11 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 179;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts.const_str_plain__http_options);
CHECK_OBJECT(tmp_expression_value_10);
Py_DECREF(tmp_expression_value_10);
if (tmp_expression_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 179;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_api_version);
CHECK_OBJECT(tmp_expression_value_9);
Py_DECREF(tmp_expression_value_9);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 179;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_version == NULL);
asyncgen_heap->var_version = tmp_assign_source_5;
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_string_concat_values_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_format_value_1;
PyObject *tmp_format_spec_1;
CHECK_OBJECT(asyncgen_heap->var_base_url);
tmp_format_value_1 = asyncgen_heap->var_base_url;
tmp_format_spec_1 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 180;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
{
PyObject *tmp_format_value_2;
PyObject *tmp_format_spec_2;
PyObject *tmp_format_value_3;
PyObject *tmp_format_spec_3;
PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_056f8617c1ddc5beb697d8db70735678;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
CHECK_OBJECT(asyncgen_heap->var_version);
tmp_format_value_2 = asyncgen_heap->var_version;
tmp_format_spec_2 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 180;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
tmp_tuple_element_1 = mod_consts.const_str_digest_0b54533ffdbed79828cea069fb7f003e;
PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
CHECK_OBJECT(asyncgen_heap->var_api_key);
tmp_format_value_3 = asyncgen_heap->var_api_key;
tmp_format_spec_3 = const_str_empty;
tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 180;
asyncgen_heap->type_description_1 = "ccooooooooo";
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
tmp_assign_source_6 = PyUnicode_Join(const_str_empty, tmp_string_concat_values_1);
CHECK_OBJECT(tmp_string_concat_values_1);
Py_DECREF(tmp_string_concat_values_1);
assert(!(tmp_assign_source_6 == NULL));
assert(asyncgen_heap->var_uri == NULL);
asyncgen_heap->var_uri = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_expression_value_12;
PyObject *tmp_expression_value_13;
PyObject *tmp_expression_value_14;
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 181;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}

tmp_expression_value_14 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts.const_str_plain__api_client);
if (tmp_expression_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 181;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts.const_str_plain__http_options);
CHECK_OBJECT(tmp_expression_value_13);
Py_DECREF(tmp_expression_value_13);
if (tmp_expression_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 181;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain_headers);
CHECK_OBJECT(tmp_expression_value_12);
Py_DECREF(tmp_expression_value_12);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 181;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_headers == NULL);
asyncgen_heap->var_headers = tmp_assign_source_7;
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_15;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_kw_call_value_0_1;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_17;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_18;
PyObject *tmp_kw_call_value_0_2;
tmp_expression_value_15 = module_var_accessor_google$genai$live_music$_common(tstate);
if (unlikely(tmp_expression_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain__common);
}

if (tmp_expression_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 184;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts.const_str_plain_convert_to_dict);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 184;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_16 = module_var_accessor_google$genai$live_music$live_converters(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_live_converters);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));

Py_DECREF(tmp_called_value_3);

asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain__LiveMusicConnectParameters_to_mldev);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_3);

asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_18 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, const_str_plain_types);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));

Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);

asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts.const_str_plain_LiveMusicConnectParameters);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);

asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(asyncgen_heap->var_transformed_model);
tmp_kw_call_value_0_2 = asyncgen_heap->var_transformed_model;
asyncgen->m_frame->m_frame.f_lineno = 186;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

    tmp_expression_value_17 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_6, kw_values, mod_consts.const_tuple_str_plain_model_tuple);
}

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_expression_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);

asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts.const_str_plain_model_dump);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);

asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 186;
tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts.const_tuple_true_tuple, 0), mod_consts.const_tuple_str_plain_exclude_none_tuple);
CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_kw_call_value_0_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);

asyncgen_heap->exception_lineno = 186;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 185;
{
    PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

    tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts.const_tuple_str_plain_from_object_tuple);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_kw_call_value_0_1);
Py_DECREF(tmp_kw_call_value_0_1);
if (tmp_args_element_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_3);

asyncgen_heap->exception_lineno = 185;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
asyncgen->m_frame->m_frame.f_lineno = 184;
tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_3);
Py_DECREF(tmp_args_element_value_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 184;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_request_dict == NULL);
asyncgen_heap->var_request_dict = tmp_assign_source_8;
}
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
tmp_called_value_7 = module_var_accessor_google$genai$live_music$setv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(asyncgen_heap->var_request_dict);
tmp_args_element_value_4 = asyncgen_heap->var_request_dict;
tmp_args_element_value_5 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_model);
CHECK_OBJECT(asyncgen_heap->var_transformed_model);
tmp_args_element_value_6 = asyncgen_heap->var_transformed_model;
asyncgen->m_frame->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 192;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_7;
tmp_called_instance_2 = module_var_accessor_google$genai$live_music$json(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_json);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 194;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(asyncgen_heap->var_request_dict);
tmp_args_element_value_7 = asyncgen_heap->var_request_dict;
asyncgen->m_frame->m_frame.f_lineno = 194;
tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts.const_str_plain_dumps, tmp_args_element_value_7);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 194;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto frame_exception_exit_1;
}
assert(asyncgen_heap->var_request == NULL);
asyncgen_heap->var_request = tmp_assign_source_9;
}
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e30e1379040c2cfb9f072ca0b4cf2fa8;
asyncgen->m_frame->m_frame.f_lineno = 196;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_NotImplementedError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
asyncgen_heap->exception_state.exception_value = tmp_raise_type_1;
asyncgen_heap->exception_lineno = 196;
RAISE_EXCEPTION_WITH_VALUE(tstate, &asyncgen_heap->exception_state);
asyncgen_heap->type_description_1 = "ccooooooooo";
goto frame_exception_exit_1;
}
branch_end_2:;
// Tried code:
// Tried code:
{
PyObject *tmp_assign_source_10;
PyObject *tmp_called_value_8;
PyObject *tmp_kw_call_arg_value_0_1;
PyObject *tmp_kw_call_dict_value_0_1;
tmp_called_value_8 = module_var_accessor_google$genai$live_music$connect(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_connect);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(asyncgen_heap->var_uri);
tmp_kw_call_arg_value_0_1 = asyncgen_heap->var_uri;
CHECK_OBJECT(asyncgen_heap->var_headers);
tmp_kw_call_dict_value_0_1 = asyncgen_heap->var_headers;
asyncgen->m_frame->m_frame.f_lineno = 199;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_1};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
    tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts.const_tuple_str_plain_additional_headers_tuple);
}

if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
assert(asyncgen_heap->tmp_with_1__source == NULL);
asyncgen_heap->tmp_with_1__source = tmp_assign_source_10;
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_called_value_9;
PyObject *tmp_expression_value_19;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
tmp_expression_value_19 = asyncgen_heap->tmp_with_1__source;
tmp_called_value_9 = LOOKUP_SPECIAL(tstate, tmp_expression_value_19, const_str_plain___aenter__);
if (tmp_called_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
asyncgen->m_frame->m_frame.f_lineno = 199;
tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
CHECK_OBJECT(tmp_called_value_9);
Py_DECREF(tmp_called_value_9);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
assert(asyncgen_heap->tmp_with_1__enter == NULL);
asyncgen_heap->tmp_with_1__enter = tmp_assign_source_11;
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_expression_value_20;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
tmp_expression_value_20 = asyncgen_heap->tmp_with_1__source;
tmp_assign_source_12 = LOOKUP_SPECIAL(tstate, tmp_expression_value_20, const_str_plain___aexit__);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
assert(asyncgen_heap->tmp_with_1__exit == NULL);
asyncgen_heap->tmp_with_1__exit = tmp_assign_source_12;
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_expression_value_21;
PyObject *tmp_expression_value_22;
asyncgen->m_frame->m_frame.f_lineno = 199;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
tmp_expression_value_22 = asyncgen_heap->tmp_with_1__enter;
tmp_expression_value_21 = ASYNC_AWAIT(tstate, tmp_expression_value_22, await_enter);
if (tmp_expression_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 1;
asyncgen->m_yield_from = tmp_expression_value_21;
asyncgen->m_awaiting = true;
return NULL;

yield_return_1:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_22, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
tmp_assign_source_13 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_with_1__enter;
    assert(old != NULL);
    asyncgen_heap->tmp_with_1__enter = tmp_assign_source_13;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_14;
tmp_assign_source_14 = NUITKA_BOOL_TRUE;
asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_14;
}
{
PyObject *tmp_assign_source_15;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
tmp_assign_source_15 = asyncgen_heap->tmp_with_1__enter;
assert(asyncgen_heap->var_ws == NULL);
Py_INCREF(tmp_assign_source_15);
asyncgen_heap->var_ws = tmp_assign_source_15;
}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_called_instance_3;
PyObject *tmp_args_element_value_8;
PyObject *tmp_await_result_1;
asyncgen->m_frame->m_frame.f_lineno = 200;
CHECK_OBJECT(asyncgen_heap->var_ws);
tmp_called_instance_3 = asyncgen_heap->var_ws;
CHECK_OBJECT(asyncgen_heap->var_request);
tmp_args_element_value_8 = asyncgen_heap->var_request;
asyncgen->m_frame->m_frame.f_lineno = 200;
tmp_expression_value_24 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, const_str_plain_send, tmp_args_element_value_8);
if (tmp_expression_value_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 200;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_23 = ASYNC_AWAIT(tstate, tmp_expression_value_24, await_normal);
CHECK_OBJECT(tmp_expression_value_24);
Py_DECREF(tmp_expression_value_24);
if (tmp_expression_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 200;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_24, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 2;
asyncgen->m_yield_from = tmp_expression_value_23;
asyncgen->m_awaiting = true;
return NULL;

yield_return_2:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_24, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 200;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
tmp_await_result_1 = yield_return_value;
CHECK_OBJECT(tmp_await_result_1);
Py_DECREF(tmp_await_result_1);
}
{
PyObject *tmp_called_value_10;
PyObject *tmp_expression_value_25;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_9;
PyObject *tmp_expression_value_26;
PyObject *tmp_expression_value_27;
PyObject *tmp_called_value_11;
PyObject *tmp_expression_value_28;
tmp_expression_value_25 = module_var_accessor_google$genai$live_music$logger(tstate);
if (unlikely(tmp_expression_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts.const_str_plain_info);
if (tmp_called_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
asyncgen->m_frame->m_frame.f_lineno = 201;
CHECK_OBJECT(asyncgen_heap->var_ws);
tmp_expression_value_28 = asyncgen_heap->var_ws;
tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts.const_str_plain_recv);
if (tmp_called_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_10);

asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
asyncgen->m_frame->m_frame.f_lineno = 201;
tmp_expression_value_27 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts.const_tuple_false_tuple, 0), mod_consts.const_tuple_str_plain_decode_tuple);
CHECK_OBJECT(tmp_called_value_11);
Py_DECREF(tmp_called_value_11);
if (tmp_expression_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_10);

asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
tmp_expression_value_26 = ASYNC_AWAIT(tstate, tmp_expression_value_27, await_normal);
CHECK_OBJECT(tmp_expression_value_27);
Py_DECREF(tmp_expression_value_27);
if (tmp_expression_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_10);

asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_expression_value_25, sizeof(PyObject *), &tmp_call_result_2, sizeof(PyObject *), &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_28, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 3;
asyncgen->m_yield_from = tmp_expression_value_26;
asyncgen->m_awaiting = true;
return NULL;

yield_return_3:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_10, sizeof(PyObject *), &tmp_expression_value_25, sizeof(PyObject *), &tmp_call_result_2, sizeof(PyObject *), &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_value_11, sizeof(PyObject *), &tmp_expression_value_28, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_10);

asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
tmp_args_element_value_9 = yield_return_value;
asyncgen->m_frame->m_frame.f_lineno = 201;
tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_9);
CHECK_OBJECT(tmp_called_value_10);
Py_DECREF(tmp_called_value_10);
CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 201;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
{
PyObject *tmp_expression_value_29;
PyObject *tmp_called_value_12;
PyObject *tmp_kw_call_value_0_3;
PyObject *tmp_expression_value_30;
PyObject *tmp_kw_call_value_1_1;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
tmp_called_value_12 = module_var_accessor_google$genai$live_music$AsyncMusicSession(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_AsyncMusicSession);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}

tmp_expression_value_30 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts.const_str_plain__api_client);
if (tmp_kw_call_value_0_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(asyncgen_heap->var_ws);
tmp_kw_call_value_1_1 = asyncgen_heap->var_ws;
asyncgen->m_frame->m_frame.f_lineno = 203;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_1};

    tmp_expression_value_29 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_12, kw_values, mod_consts.const_tuple_str_plain_api_client_str_plain_websocket_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_3);
Py_DECREF(tmp_kw_call_value_0_3);
if (tmp_expression_value_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_12, sizeof(PyObject *), &tmp_kw_call_value_0_3, sizeof(PyObject *), &tmp_expression_value_30, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 4;
return tmp_expression_value_29;
yield_return_4:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_12, sizeof(PyObject *), &tmp_kw_call_value_0_3, sizeof(PyObject *), &tmp_expression_value_30, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 203;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_5;
}
tmp_yield_result_1 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_1);
Py_DECREF(tmp_yield_result_1);
}
goto try_end_1;
// Exception handler code:
try_except_handler_5:;
asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_1 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 1.
asyncgen_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_1, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_1);
// Tried code:
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
tmp_cmp_expr_left_1 = EXC_TYPE(tstate);
tmp_cmp_expr_right_1 = PyExc_BaseException;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_3 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
nuitka_bool tmp_assign_source_16;
tmp_assign_source_16 = NUITKA_BOOL_FALSE;
asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_16;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_31;
PyObject *tmp_expression_value_32;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
asyncgen->m_frame->m_frame.f_lineno = 199;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_13 = asyncgen_heap->tmp_with_1__exit;
tmp_args_element_value_10 = EXC_TYPE(tstate);
tmp_args_element_value_11 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_11); 
tmp_args_element_value_12 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_12 == NULL) {
    tmp_args_element_value_12 = Py_None;
}
asyncgen->m_frame->m_frame.f_lineno = 199;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_expression_value_32 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

if (tmp_expression_value_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_6;
}
tmp_expression_value_31 = ASYNC_AWAIT(tstate, tmp_expression_value_32, await_exit);
CHECK_OBJECT(tmp_expression_value_32);
Py_DECREF(tmp_expression_value_32);
if (tmp_expression_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_6;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_4, sizeof(bool), &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_13, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 5;
asyncgen->m_yield_from = tmp_expression_value_31;
asyncgen->m_awaiting = true;
return NULL;

yield_return_5:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_4, sizeof(bool), &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_13, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_6;
}
tmp_operand_value_1 = yield_return_value;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
CHECK_OBJECT(tmp_operand_value_1);
Py_DECREF(tmp_operand_value_1);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_6;
}
tmp_condition_result_4 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 199;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooo";
goto try_except_handler_6;
branch_no_4:;
goto branch_end_3;
branch_no_3:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 199;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooo";
goto try_except_handler_6;
branch_end_3:;
goto try_end_2;
// Exception handler code:
try_except_handler_6:;
asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_2 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_2;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

goto try_except_handler_4;
// End of try:
try_end_2:;
// Restore previous exception id 1.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

goto try_end_1;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_1:;
goto try_end_3;
// Exception handler code:
try_except_handler_4:;
asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_3 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_5;
nuitka_bool tmp_cmp_expr_left_2;
nuitka_bool tmp_cmp_expr_right_2;
assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_2 = asyncgen_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_expression_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_called_value_14;
PyObject *tmp_await_result_2;
asyncgen->m_frame->m_frame.f_lineno = 199;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_14 = asyncgen_heap->tmp_with_1__exit;
asyncgen->m_frame->m_frame.f_lineno = 199;
tmp_expression_value_34 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_14, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_3);

asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_33 = ASYNC_AWAIT(tstate, tmp_expression_value_34, await_exit);
CHECK_OBJECT(tmp_expression_value_34);
Py_DECREF(tmp_expression_value_34);
if (tmp_expression_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_3);

asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 6;
asyncgen->m_yield_from = tmp_expression_value_33;
asyncgen->m_awaiting = true;
return NULL;

yield_return_6:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_14, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_3);

asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
tmp_await_result_2 = yield_return_value;
CHECK_OBJECT(tmp_await_result_2);
Py_DECREF(tmp_await_result_2);
}
branch_no_5:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_3;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_3;

goto try_except_handler_3;
// End of try:
try_end_3:;
{
bool tmp_condition_result_6;
nuitka_bool tmp_cmp_expr_left_3;
nuitka_bool tmp_cmp_expr_right_3;
assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_3 = asyncgen_heap->tmp_with_1__indicator;
tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_expression_value_35;
PyObject *tmp_expression_value_36;
PyObject *tmp_called_value_15;
PyObject *tmp_await_result_3;
asyncgen->m_frame->m_frame.f_lineno = 199;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
tmp_called_value_15 = asyncgen_heap->tmp_with_1__exit;
asyncgen->m_frame->m_frame.f_lineno = 199;
tmp_expression_value_36 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_15, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
tmp_expression_value_35 = ASYNC_AWAIT(tstate, tmp_expression_value_36, await_exit);
CHECK_OBJECT(tmp_expression_value_36);
Py_DECREF(tmp_expression_value_36);
if (tmp_expression_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_36, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
asyncgen->m_yield_return_index = 7;
asyncgen->m_yield_from = tmp_expression_value_35;
asyncgen->m_awaiting = true;
return NULL;

yield_return_7:
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_36, sizeof(PyObject *), &tmp_called_value_15, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 199;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_3;
}
tmp_await_result_3 = yield_return_value;
CHECK_OBJECT(tmp_await_result_3);
Py_DECREF(tmp_await_result_3);
}
branch_no_6:;
goto try_end_4;
// Exception handler code:
try_except_handler_3:;
asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_4 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_with_1__source);
asyncgen_heap->tmp_with_1__source = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_1__enter);
asyncgen_heap->tmp_with_1__enter = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_1__exit);
asyncgen_heap->tmp_with_1__exit = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_4;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

goto try_except_handler_2;
// End of try:
try_end_4:;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
Py_DECREF(asyncgen_heap->tmp_with_1__source);
asyncgen_heap->tmp_with_1__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
Py_DECREF(asyncgen_heap->tmp_with_1__enter);
asyncgen_heap->tmp_with_1__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
Py_DECREF(asyncgen_heap->tmp_with_1__exit);
asyncgen_heap->tmp_with_1__exit = NULL;
goto try_end_5;
// Exception handler code:
try_except_handler_2:;
asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_5 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 3.
asyncgen_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_5);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_5, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_5 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_5);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_5, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_5);
// Tried code:
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
tmp_cmp_expr_left_4 = EXC_TYPE(tstate);
tmp_cmp_expr_right_4 = PyExc_TypeError;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_7 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
// Tried code:
{
PyObject *tmp_assign_source_17;
PyObject *tmp_called_value_16;
PyObject *tmp_kw_call_arg_value_0_2;
PyObject *tmp_kw_call_dict_value_0_2;
tmp_called_value_16 = module_var_accessor_google$genai$live_music$connect(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_connect);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
CHECK_OBJECT(asyncgen_heap->var_uri);
tmp_kw_call_arg_value_0_2 = asyncgen_heap->var_uri;
CHECK_OBJECT(asyncgen_heap->var_headers);
tmp_kw_call_dict_value_0_2 = asyncgen_heap->var_headers;
asyncgen->m_frame->m_frame.f_lineno = 206;
{
    PyObject *args[] = {tmp_kw_call_arg_value_0_2};
    PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
    tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_16, args, kw_values, mod_consts.const_tuple_str_plain_extra_headers_tuple);
}

if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
assert(asyncgen_heap->tmp_with_2__source == NULL);
asyncgen_heap->tmp_with_2__source = tmp_assign_source_17;
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_called_value_17;
PyObject *tmp_expression_value_37;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
tmp_expression_value_37 = asyncgen_heap->tmp_with_2__source;
tmp_called_value_17 = LOOKUP_SPECIAL(tstate, tmp_expression_value_37, const_str_plain___aenter__);
if (tmp_called_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
asyncgen->m_frame->m_frame.f_lineno = 206;
tmp_assign_source_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_17);
CHECK_OBJECT(tmp_called_value_17);
Py_DECREF(tmp_called_value_17);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
assert(asyncgen_heap->tmp_with_2__enter == NULL);
asyncgen_heap->tmp_with_2__enter = tmp_assign_source_18;
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_expression_value_38;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
tmp_expression_value_38 = asyncgen_heap->tmp_with_2__source;
tmp_assign_source_19 = LOOKUP_SPECIAL(tstate, tmp_expression_value_38, const_str_plain___aexit__);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
assert(asyncgen_heap->tmp_with_2__exit == NULL);
asyncgen_heap->tmp_with_2__exit = tmp_assign_source_19;
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_expression_value_39;
PyObject *tmp_expression_value_40;
asyncgen->m_frame->m_frame.f_lineno = 206;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
tmp_expression_value_40 = asyncgen_heap->tmp_with_2__enter;
tmp_expression_value_39 = ASYNC_AWAIT(tstate, tmp_expression_value_40, await_enter);
if (tmp_expression_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 8;
asyncgen->m_yield_from = tmp_expression_value_39;
asyncgen->m_awaiting = true;
return NULL;

yield_return_8:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
tmp_assign_source_20 = yield_return_value;
{
    PyObject *old = asyncgen_heap->tmp_with_2__enter;
    assert(old != NULL);
    asyncgen_heap->tmp_with_2__enter = tmp_assign_source_20;
    Py_DECREF(old);
}

}
{
nuitka_bool tmp_assign_source_21;
tmp_assign_source_21 = NUITKA_BOOL_TRUE;
asyncgen_heap->tmp_with_2__indicator = tmp_assign_source_21;
}
{
PyObject *tmp_assign_source_22;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
tmp_assign_source_22 = asyncgen_heap->tmp_with_2__enter;
{
    PyObject *old = asyncgen_heap->var_ws;
    asyncgen_heap->var_ws = tmp_assign_source_22;
    Py_INCREF(asyncgen_heap->var_ws);
    Py_XDECREF(old);
}

}
// Tried code:
// Tried code:
{
PyObject *tmp_expression_value_41;
PyObject *tmp_expression_value_42;
PyObject *tmp_called_instance_4;
PyObject *tmp_args_element_value_13;
PyObject *tmp_await_result_4;
asyncgen->m_frame->m_frame.f_lineno = 207;
CHECK_OBJECT(asyncgen_heap->var_ws);
tmp_called_instance_4 = asyncgen_heap->var_ws;
CHECK_OBJECT(asyncgen_heap->var_request);
tmp_args_element_value_13 = asyncgen_heap->var_request;
asyncgen->m_frame->m_frame.f_lineno = 207;
tmp_expression_value_42 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, const_str_plain_send, tmp_args_element_value_13);
if (tmp_expression_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 207;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
tmp_expression_value_41 = ASYNC_AWAIT(tstate, tmp_expression_value_42, await_normal);
CHECK_OBJECT(tmp_expression_value_42);
Py_DECREF(tmp_expression_value_42);
if (tmp_expression_value_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 207;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_42, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 9;
asyncgen->m_yield_from = tmp_expression_value_41;
asyncgen->m_awaiting = true;
return NULL;

yield_return_9:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_42, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 207;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
tmp_await_result_4 = yield_return_value;
CHECK_OBJECT(tmp_await_result_4);
Py_DECREF(tmp_await_result_4);
}
{
PyObject *tmp_called_value_18;
PyObject *tmp_expression_value_43;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_14;
PyObject *tmp_expression_value_44;
PyObject *tmp_expression_value_45;
PyObject *tmp_called_instance_5;
tmp_expression_value_43 = module_var_accessor_google$genai$live_music$logger(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_logger);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts.const_str_plain_info);
if (tmp_called_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
asyncgen->m_frame->m_frame.f_lineno = 208;
CHECK_OBJECT(asyncgen_heap->var_ws);
tmp_called_instance_5 = asyncgen_heap->var_ws;
asyncgen->m_frame->m_frame.f_lineno = 208;
tmp_expression_value_45 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts.const_str_plain_recv);
if (tmp_expression_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_18);

asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
tmp_expression_value_44 = ASYNC_AWAIT(tstate, tmp_expression_value_45, await_normal);
CHECK_OBJECT(tmp_expression_value_45);
Py_DECREF(tmp_expression_value_45);
if (tmp_expression_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_18);

asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_18, sizeof(PyObject *), &tmp_expression_value_43, sizeof(PyObject *), &tmp_call_result_3, sizeof(PyObject *), &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 10;
asyncgen->m_yield_from = tmp_expression_value_44;
asyncgen->m_awaiting = true;
return NULL;

yield_return_10:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_18, sizeof(PyObject *), &tmp_expression_value_43, sizeof(PyObject *), &tmp_call_result_3, sizeof(PyObject *), &tmp_expression_value_45, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
Py_DECREF(tmp_called_value_18);

asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
tmp_args_element_value_14 = yield_return_value;
asyncgen->m_frame->m_frame.f_lineno = 208;
tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_14);
CHECK_OBJECT(tmp_called_value_18);
Py_DECREF(tmp_called_value_18);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 208;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
{
PyObject *tmp_expression_value_46;
PyObject *tmp_called_value_19;
PyObject *tmp_kw_call_value_0_4;
PyObject *tmp_expression_value_47;
PyObject *tmp_kw_call_value_1_2;
NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
tmp_called_value_19 = module_var_accessor_google$genai$live_music$AsyncMusicSession(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_AsyncMusicSession);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&asyncgen_heap->exception_state));



asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &asyncgen_heap->exception_state, mod_consts.const_str_plain_self);
CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_state.exception_value);

asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}

tmp_expression_value_47 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts.const_str_plain__api_client);
if (tmp_kw_call_value_0_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
CHECK_OBJECT(asyncgen_heap->var_ws);
tmp_kw_call_value_1_2 = asyncgen_heap->var_ws;
asyncgen->m_frame->m_frame.f_lineno = 210;
{
    PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_2};

    tmp_expression_value_46 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_19, kw_values, mod_consts.const_tuple_str_plain_api_client_str_plain_websocket_tuple);
}

CHECK_OBJECT(tmp_kw_call_value_0_4);
Py_DECREF(tmp_kw_call_value_0_4);
if (tmp_expression_value_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_called_value_19, sizeof(PyObject *), &tmp_kw_call_value_0_4, sizeof(PyObject *), &tmp_expression_value_47, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 11;
return tmp_expression_value_46;
yield_return_11:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_called_value_19, sizeof(PyObject *), &tmp_kw_call_value_0_4, sizeof(PyObject *), &tmp_expression_value_47, sizeof(PyObject *), &tmp_kw_call_value_1_2, sizeof(PyObject *), NULL);
if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 210;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_10;
}
tmp_yield_result_2 = yield_return_value;
CHECK_OBJECT(tmp_yield_result_2);
Py_DECREF(tmp_yield_result_2);
}
goto try_end_6;
// Exception handler code:
try_except_handler_10:;
asyncgen_heap->exception_keeper_lineno_6 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_6 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Preserve existing published exception id 2.
asyncgen_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_6);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_6, exception_tb);
    } else if (asyncgen_heap->exception_keeper_lineno_6 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_6);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_keeper_name_6, exception_tb);
    }
}

PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_name_6);
// Tried code:
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
tmp_cmp_expr_left_5 = EXC_TYPE(tstate);
tmp_cmp_expr_right_5 = PyExc_BaseException;
asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
assert(!(asyncgen_heap->tmp_res == -1));
tmp_condition_result_8 = (asyncgen_heap->tmp_res != 0) ? true : false;
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
nuitka_bool tmp_assign_source_23;
tmp_assign_source_23 = NUITKA_BOOL_FALSE;
asyncgen_heap->tmp_with_2__indicator = tmp_assign_source_23;
}
{
bool tmp_condition_result_9;
PyObject *tmp_operand_value_2;
PyObject *tmp_expression_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
asyncgen->m_frame->m_frame.f_lineno = 206;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
tmp_called_value_20 = asyncgen_heap->tmp_with_2__exit;
tmp_args_element_value_15 = EXC_TYPE(tstate);
tmp_args_element_value_16 = EXC_VALUE(tstate);
CHECK_OBJECT(tmp_args_element_value_16); 
tmp_args_element_value_17 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(tstate));
if (tmp_args_element_value_17 == NULL) {
    tmp_args_element_value_17 = Py_None;
}
asyncgen->m_frame->m_frame.f_lineno = 206;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_expression_value_49 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
}

if (tmp_expression_value_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_11;
}
tmp_expression_value_48 = ASYNC_AWAIT(tstate, tmp_expression_value_49, await_exit);
CHECK_OBJECT(tmp_expression_value_49);
Py_DECREF(tmp_expression_value_49);
if (tmp_expression_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_11;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_9, sizeof(bool), &tmp_expression_value_49, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 12;
asyncgen->m_yield_from = tmp_expression_value_48;
asyncgen->m_awaiting = true;
return NULL;

yield_return_12:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_9, sizeof(bool), &tmp_expression_value_49, sizeof(PyObject *), &tmp_called_value_20, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_11;
}
tmp_operand_value_2 = yield_return_value;
asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
CHECK_OBJECT(tmp_operand_value_2);
Py_DECREF(tmp_operand_value_2);
if (asyncgen_heap->tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_11;
}
tmp_condition_result_9 = (asyncgen_heap->tmp_res == 0) ? true : false;
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 206;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooo";
goto try_except_handler_11;
branch_no_9:;
goto branch_end_8;
branch_no_8:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 206;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooo";
goto try_except_handler_11;
branch_end_8:;
goto try_end_7;
// Exception handler code:
try_except_handler_11:;
asyncgen_heap->exception_keeper_lineno_7 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_7 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_7;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_7;

goto try_except_handler_9;
// End of try:
try_end_7:;
// Restore previous exception id 2.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

goto try_end_6;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_6:;
goto try_end_8;
// Exception handler code:
try_except_handler_9:;
asyncgen_heap->exception_keeper_lineno_8 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_8 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

{
bool tmp_condition_result_10;
nuitka_bool tmp_cmp_expr_left_6;
nuitka_bool tmp_cmp_expr_right_6;
assert(asyncgen_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_6 = asyncgen_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_expression_value_50;
PyObject *tmp_expression_value_51;
PyObject *tmp_called_value_21;
PyObject *tmp_await_result_5;
asyncgen->m_frame->m_frame.f_lineno = 206;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
tmp_called_value_21 = asyncgen_heap->tmp_with_2__exit;
asyncgen->m_frame->m_frame.f_lineno = 206;
tmp_expression_value_51 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_21, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_8);

asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_50 = ASYNC_AWAIT(tstate, tmp_expression_value_51, await_exit);
CHECK_OBJECT(tmp_expression_value_51);
Py_DECREF(tmp_expression_value_51);
if (tmp_expression_value_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_8);

asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_51, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 13;
asyncgen->m_yield_from = tmp_expression_value_50;
asyncgen->m_awaiting = true;
return NULL;

yield_return_13:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_51, sizeof(PyObject *), &tmp_called_value_21, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);

RELEASE_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_keeper_name_8);

asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
tmp_await_result_5 = yield_return_value;
CHECK_OBJECT(tmp_await_result_5);
Py_DECREF(tmp_await_result_5);
}
branch_no_10:;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_8;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_8;

goto try_except_handler_8;
// End of try:
try_end_8:;
{
bool tmp_condition_result_11;
nuitka_bool tmp_cmp_expr_left_7;
nuitka_bool tmp_cmp_expr_right_7;
assert(asyncgen_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
tmp_cmp_expr_left_7 = asyncgen_heap->tmp_with_2__indicator;
tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_expression_value_52;
PyObject *tmp_expression_value_53;
PyObject *tmp_called_value_22;
PyObject *tmp_await_result_6;
asyncgen->m_frame->m_frame.f_lineno = 206;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
tmp_called_value_22 = asyncgen_heap->tmp_with_2__exit;
asyncgen->m_frame->m_frame.f_lineno = 206;
tmp_expression_value_53 = CALL_FUNCTION_WITH_POS_ARGS3(tstate, tmp_called_value_22, mod_consts.const_tuple_none_none_none_tuple);

if (tmp_expression_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
tmp_expression_value_52 = ASYNC_AWAIT(tstate, tmp_expression_value_53, await_exit);
CHECK_OBJECT(tmp_expression_value_53);
Py_DECREF(tmp_expression_value_53);
if (tmp_expression_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_53, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), NULL);
SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
asyncgen->m_yield_return_index = 14;
asyncgen->m_yield_from = tmp_expression_value_52;
asyncgen->m_awaiting = true;
return NULL;

yield_return_14:
RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_53, sizeof(PyObject *), &tmp_called_value_22, sizeof(PyObject *), NULL);
asyncgen->m_awaiting = false;

if (yield_return_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);


asyncgen_heap->exception_lineno = 206;
asyncgen_heap->type_description_1 = "ccooooooooo";
    goto try_except_handler_8;
}
tmp_await_result_6 = yield_return_value;
CHECK_OBJECT(tmp_await_result_6);
Py_DECREF(tmp_await_result_6);
}
branch_no_11:;
goto try_end_9;
// Exception handler code:
try_except_handler_8:;
asyncgen_heap->exception_keeper_lineno_9 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_9 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->tmp_with_2__source);
asyncgen_heap->tmp_with_2__source = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_2__enter);
asyncgen_heap->tmp_with_2__enter = NULL;
Py_XDECREF(asyncgen_heap->tmp_with_2__exit);
asyncgen_heap->tmp_with_2__exit = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_9;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_9;

goto try_except_handler_7;
// End of try:
try_end_9:;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
Py_DECREF(asyncgen_heap->tmp_with_2__source);
asyncgen_heap->tmp_with_2__source = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
Py_DECREF(asyncgen_heap->tmp_with_2__enter);
asyncgen_heap->tmp_with_2__enter = NULL;
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
Py_DECREF(asyncgen_heap->tmp_with_2__exit);
asyncgen_heap->tmp_with_2__exit = NULL;
goto branch_end_7;
branch_no_7:;
asyncgen_heap->tmp_result = RERAISE_EXCEPTION(tstate, &asyncgen_heap->exception_state);
if (unlikely(asyncgen_heap->tmp_result == false)) {
    asyncgen_heap->exception_lineno = 198;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &asyncgen->m_frame->m_frame)) {
        asyncgen->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}
asyncgen_heap->type_description_1 = "ccooooooooo";
goto try_except_handler_7;
branch_end_7:;
goto try_end_10;
// Exception handler code:
try_except_handler_7:;
asyncgen_heap->exception_keeper_lineno_10 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_10 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_10;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_10;

goto frame_exception_exit_1;
// End of try:
try_end_10:;
// Restore previous exception id 3.
SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

goto try_end_5;
NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
return NULL;
// End of try:
try_end_5:;

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);



goto frame_no_exception_1;
frame_exception_exit_1:;

// If it's not an exit exception, consider and create a traceback for it.
if (!EXCEPTION_STATE_MATCH_GENERATOR(tstate, &asyncgen_heap->exception_state)) {
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    } else if ((asyncgen_heap->exception_lineno != 0) && (exception_tb->tb_frame != &asyncgen->m_frame->m_frame)) {
        exception_tb = ADD_TRACEBACK(exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&asyncgen_heap->exception_state, exception_tb);
    }

Nuitka_Frame_AttachLocals(
    asyncgen->m_frame,
    asyncgen_heap->type_description_1,
    asyncgen->m_closure[1],
    asyncgen->m_closure[0],
    asyncgen_heap->var_base_url,
    asyncgen_heap->var_transformed_model,
    asyncgen_heap->var_api_key,
    asyncgen_heap->var_version,
    asyncgen_heap->var_uri,
    asyncgen_heap->var_headers,
    asyncgen_heap->var_request_dict,
    asyncgen_heap->var_request,
    asyncgen_heap->var_ws
);


    // Release cached frame if used for exception.
    if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_m_frame);
        cache_m_frame = NULL;
    }

    assertFrameObject(asyncgen->m_frame);
}

// Release exception attached to the frame
DROP_ASYNCGEN_EXCEPTION(asyncgen);


// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(asyncgen_heap->var_base_url);
CHECK_OBJECT(asyncgen_heap->var_base_url);
Py_DECREF(asyncgen_heap->var_base_url);
asyncgen_heap->var_base_url = NULL;
CHECK_OBJECT(asyncgen_heap->var_transformed_model);
CHECK_OBJECT(asyncgen_heap->var_transformed_model);
Py_DECREF(asyncgen_heap->var_transformed_model);
asyncgen_heap->var_transformed_model = NULL;
CHECK_OBJECT(asyncgen_heap->var_api_key);
CHECK_OBJECT(asyncgen_heap->var_api_key);
Py_DECREF(asyncgen_heap->var_api_key);
asyncgen_heap->var_api_key = NULL;
CHECK_OBJECT(asyncgen_heap->var_version);
CHECK_OBJECT(asyncgen_heap->var_version);
Py_DECREF(asyncgen_heap->var_version);
asyncgen_heap->var_version = NULL;
CHECK_OBJECT(asyncgen_heap->var_uri);
CHECK_OBJECT(asyncgen_heap->var_uri);
Py_DECREF(asyncgen_heap->var_uri);
asyncgen_heap->var_uri = NULL;
CHECK_OBJECT(asyncgen_heap->var_headers);
CHECK_OBJECT(asyncgen_heap->var_headers);
Py_DECREF(asyncgen_heap->var_headers);
asyncgen_heap->var_headers = NULL;
CHECK_OBJECT(asyncgen_heap->var_request_dict);
CHECK_OBJECT(asyncgen_heap->var_request_dict);
Py_DECREF(asyncgen_heap->var_request_dict);
asyncgen_heap->var_request_dict = NULL;
CHECK_OBJECT(asyncgen_heap->var_request);
CHECK_OBJECT(asyncgen_heap->var_request);
Py_DECREF(asyncgen_heap->var_request);
asyncgen_heap->var_request = NULL;
Py_XDECREF(asyncgen_heap->var_ws);
asyncgen_heap->var_ws = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
asyncgen_heap->exception_keeper_lineno_11 = asyncgen_heap->exception_lineno;
asyncgen_heap->exception_lineno = 0;
asyncgen_heap->exception_keeper_name_11 = asyncgen_heap->exception_state;
INIT_ERROR_OCCURRED_STATE(&asyncgen_heap->exception_state);

Py_XDECREF(asyncgen_heap->var_base_url);
asyncgen_heap->var_base_url = NULL;
Py_XDECREF(asyncgen_heap->var_transformed_model);
asyncgen_heap->var_transformed_model = NULL;
Py_XDECREF(asyncgen_heap->var_api_key);
asyncgen_heap->var_api_key = NULL;
Py_XDECREF(asyncgen_heap->var_version);
asyncgen_heap->var_version = NULL;
Py_XDECREF(asyncgen_heap->var_uri);
asyncgen_heap->var_uri = NULL;
Py_XDECREF(asyncgen_heap->var_headers);
asyncgen_heap->var_headers = NULL;
Py_XDECREF(asyncgen_heap->var_request_dict);
asyncgen_heap->var_request_dict = NULL;
Py_XDECREF(asyncgen_heap->var_request);
asyncgen_heap->var_request = NULL;
Py_XDECREF(asyncgen_heap->var_ws);
asyncgen_heap->var_ws = NULL;
// Re-raise.
asyncgen_heap->exception_state = asyncgen_heap->exception_keeper_name_11;
asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_11;

goto function_exception_exit;
// End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    CHECK_EXCEPTION_STATE(&asyncgen_heap->exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &asyncgen_heap->exception_state);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect_context,
        module_google$genai$live_music,
        mod_consts.const_str_plain_connect,
        mod_consts.const_str_digest_8744af4ae4be33a071f5f03ce872587c,
        code_objects_f00bed6b7592e80674e2bb56825dbf2f,
        closure,
        2,
#if 1
        sizeof(struct google$genai$live_music$$$function__12_connect$$$asyncgen__1_connect_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__10__receive(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__10__receive,
        mod_consts.const_str_plain__receive,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0168e2cd900b47c9acf9a45b8d9cdec8,
#endif
        code_objects_19f43b47a01ab1773df9374743f3276e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__11_close(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__11_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_9bd24ecff944edbc860c6ef4c4e07ccd,
#endif
        code_objects_12bd778fa35a870c5777d2f17b38d279,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        mod_consts.const_str_digest_ae985b4491776d6e4e1ed4bcc4367b8d,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__12_connect(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__12_connect,
        mod_consts.const_str_plain_connect,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_8744af4ae4be33a071f5f03ce872587c,
#endif
        code_objects_f00bed6b7592e80674e2bb56825dbf2f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        mod_consts.const_str_digest_741aaa4f51abd294dbf9449a638622e3,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__1___init__(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_37af57793f38790c58181212bddae3ea,
#endif
        code_objects_3cf9947eb7460acc804140efc776e0bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__2_set_weighted_prompts(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__2_set_weighted_prompts,
        mod_consts.const_str_plain_set_weighted_prompts,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ea2b47c09cbbcf119cadf834c19fe471,
#endif
        code_objects_2ac168e534491dfc4795a30dd979cecf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__3_set_music_generation_config(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__3_set_music_generation_config,
        mod_consts.const_str_plain_set_music_generation_config,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_ed4e5c7cb461fab9ff4cf41dfd0606dd,
#endif
        code_objects_5dcfb17a5679b28fb23e300cdcd6cd96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__4__send_control_signal(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__4__send_control_signal,
        mod_consts.const_str_plain__send_control_signal,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a72e367176baa4753813e2b62dcc48a6,
#endif
        code_objects_d539a6d379a6e3ff29300bcccba4915d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__5_play(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__5_play,
        mod_consts.const_str_plain_play,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_431ce9dd7a7cfcef4be7668cb31b0389,
#endif
        code_objects_43d597576d2e7c77bfb3ebd4eb24799e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        mod_consts.const_str_digest_c2b676a619cfb9f8c1ef97e046a0d488,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__6_pause(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__6_pause,
        mod_consts.const_str_plain_pause,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_0cf6bb13055ba8d350695bafccef59b7,
#endif
        code_objects_5c1c8e0392a2f4970d59b3f3ee446027,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        mod_consts.const_str_digest_6636bb1904680edcce3a5933d5e19619,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__7_stop(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__7_stop,
        mod_consts.const_str_plain_stop,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_a65b4bb2db24c50bf17738c311ad8f87,
#endif
        code_objects_5a898bc7491cdf5f7d050e0e7beff07c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        mod_consts.const_str_digest_2e5d18c7b40e34961b4617f72e45f0ea,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__8_reset_context(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__8_reset_context,
        mod_consts.const_str_plain_reset_context,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_661e5405429402fb96646bc8f5bf6889,
#endif
        code_objects_af061e40234eb00798b84f58c7630b53,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        mod_consts.const_str_digest_e970ce4a1d929aa1b37ef7b8eb6ba5af,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$live_music$$$function__9_receive(PyThreadState *tstate, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$live_music$$$function__9_receive,
        mod_consts.const_str_plain_receive,
#if PYTHON_VERSION >= 0x300
        mod_consts.const_str_digest_e28c434591bc0064ba9abccacbdd4ec2,
#endif
        code_objects_49340cfd511b231cb1351f9ea4ed3b10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$live_music,
        mod_consts.const_str_digest_18b8607ae3ab0bfb088aedf11532a96c,
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

static function_impl_code const function_table_google$genai$live_music[] = {
impl_google$genai$live_music$$$function__1___init__,
impl_google$genai$live_music$$$function__2_set_weighted_prompts,
impl_google$genai$live_music$$$function__3_set_music_generation_config,
impl_google$genai$live_music$$$function__4__send_control_signal,
impl_google$genai$live_music$$$function__5_play,
impl_google$genai$live_music$$$function__6_pause,
impl_google$genai$live_music$$$function__7_stop,
impl_google$genai$live_music$$$function__8_reset_context,
impl_google$genai$live_music$$$function__9_receive,
impl_google$genai$live_music$$$function__10__receive,
impl_google$genai$live_music$$$function__11_close,
impl_google$genai$live_music$$$function__12_connect,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$live_music);
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
        module_google$genai$live_music,
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
        function_table_google$genai$live_music,
        sizeof(function_table_google$genai$live_music) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai.live_music";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$live_music(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$live_music");

    // Store the module for future use.
    module_google$genai$live_music = module;

    moduledict_google$genai$live_music = MODULE_DICT(module_google$genai$live_music);

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
        PRINT_STRING("google$genai$live_music: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$live_music: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$live_music: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai.live_music" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$live_music\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$live_music,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$live_music,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$live_music,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$live_music,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$live_music,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$live_music);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$live_music);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *outline_0_var___class__ = NULL;
PyObject *outline_1_var___class__ = NULL;
PyObject *tmp_class_container$class_creation_1__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_1__prepared = NULL;
PyObject *tmp_class_container$class_creation_2__bases = NULL;
PyObject *tmp_class_container$class_creation_2__bases_orig = NULL;
PyObject *tmp_class_container$class_creation_2__class_decl_dict = NULL;
PyObject *tmp_class_container$class_creation_2__metaclass = NULL;
PyObject *tmp_class_container$class_creation_2__prepared = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$live_music;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionStackItem exception_preserved_1;
int tmp_res;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
PyObject *locals_google$genai$live_music$$$class__1_AsyncMusicSession_45 = NULL;
PyObject *tmp_dictset_value;
struct Nuitka_FrameObject *frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2;
NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
PyObject *locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3;
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
tmp_assign_source_1 = mod_consts.const_str_digest_81d629815f8d0c5fb49357a4562cfefc;
UPDATE_STRING_DICT0(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$live_music = MAKE_MODULE_FRAME(code_objects_50c9d2f270f026ab8fc36c5e34a5a88d, module_google$genai$live_music);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$live_music);
assert(Py_REFCNT(frame_frame_google$genai$live_music) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$live_music$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$live_music$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_contextlib;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = Py_None;
tmp_level_value_1 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 18;
tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_contextlib, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_json;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = Py_None;
tmp_level_value_2 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 19;
tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_json, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_logging;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = Py_None;
tmp_level_value_3 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 20;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logging, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_AsyncIterator,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncIterator, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_websockets;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = Py_None;
tmp_level_value_4 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 22;
tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_websockets, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = const_str_empty;
tmp_globals_arg_value_5 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain__api_module_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 24;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain__api_module,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain__api_module);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__api_module, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = const_str_empty;
tmp_globals_arg_value_6 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain__common_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 25;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain__common,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain__common);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain__common, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = const_str_empty;
tmp_globals_arg_value_7 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain__live_converters_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 26;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain__live_converters,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__live_converters);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_live_converters, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = const_str_empty;
tmp_globals_arg_value_8 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain__transformers_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 27;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain__transformers,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain__transformers);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_t, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = const_str_empty;
tmp_globals_arg_value_9 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_errors_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 28;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_errors,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_errors);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_errors, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = const_str_empty;
tmp_globals_arg_value_10 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_types_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 29;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$genai$live_music,
        const_str_plain_types,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, const_str_plain_types);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain_types, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain__api_client;
tmp_globals_arg_value_11 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_BaseApiClient_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 30;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_BaseApiClient,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_BaseApiClient);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain__common;
tmp_globals_arg_value_12 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_set_value_by_path_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_google$genai$live_music->m_frame.f_lineno = 31;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_set_value_by_path,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_set_value_by_path);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_setv, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_expression_value_1;
tmp_expression_value_1 = module_var_accessor_google$genai$live_music$websockets(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_websockets);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 33;

    goto frame_exception_exit_1;
}
tmp_assign_source_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_ConnectionClosed);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ConnectionClosed, tmp_assign_source_17);
}
// Tried code:
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_digest_d811ac36803ffd622c2c6785253bfe30;
tmp_globals_arg_value_13 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ClientConnection_tuple;
tmp_level_value_13 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 36;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_ClientConnection,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ClientConnection);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientConnection, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_digest_d811ac36803ffd622c2c6785253bfe30;
tmp_globals_arg_value_14 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_connect_tuple;
tmp_level_value_14 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 37;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_connect,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_connect);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_connect, tmp_assign_source_19);
}
goto try_end_1;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

// Preserve existing published exception id 1.
exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$live_music, exception_keeper_lineno_1);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_keeper_name_1, exception_tb);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$live_music, exception_keeper_lineno_1);
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
tmp_cmp_expr_right_1 = PyExc_ModuleNotFoundError;
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
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_digest_64de269816a130c295cff935094a5f58;
tmp_globals_arg_value_15 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_ClientConnection_tuple;
tmp_level_value_15 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 39;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_ClientConnection,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ClientConnection);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_ClientConnection, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_digest_64de269816a130c295cff935094a5f58;
tmp_globals_arg_value_16 = (PyObject *)moduledict_google$genai$live_music;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_connect_tuple;
tmp_level_value_16 = const_int_0;
frame_frame_google$genai$live_music->m_frame.f_lineno = 40;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_2;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_google$genai$live_music,
        mod_consts.const_str_plain_connect,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_connect);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_connect, tmp_assign_source_21);
}
goto branch_end_1;
branch_no_1:;
tmp_result = RERAISE_EXCEPTION(tstate, &exception_state);
if (unlikely(tmp_result == false)) {
    exception_lineno = 35;
}

{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);

    if ((exception_tb != NULL) && (exception_tb->tb_frame == &frame_frame_google$genai$live_music->m_frame)) {
        frame_frame_google$genai$live_music->m_frame.f_lineno = exception_tb->tb_lineno;
    }
}

goto try_except_handler_2;
branch_end_1:;
goto try_end_2;
// Exception handler code:
try_except_handler_2:;
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
PyObject *tmp_assign_source_22;
PyObject *tmp_called_instance_1;
tmp_called_instance_1 = module_var_accessor_google$genai$live_music$logging(tstate);
if (unlikely(tmp_called_instance_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_logging);
}

if (tmp_called_instance_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto frame_exception_exit_1;
}
frame_frame_google$genai$live_music->m_frame.f_lineno = 42;
tmp_assign_source_22 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_1,
    mod_consts.const_str_plain_getLogger,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_769a8bfd6285434fe7d4fe7126f2a589_tuple, 0)
);

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_logger, tmp_assign_source_22);
}
{
PyObject *tmp_outline_return_value_1;
{
PyObject *tmp_assign_source_23;
tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__class_decl_dict == NULL);
tmp_class_container$class_creation_1__class_decl_dict = tmp_assign_source_23;
}
{
PyObject *tmp_assign_source_24;
tmp_assign_source_24 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_1__prepared == NULL);
tmp_class_container$class_creation_1__prepared = tmp_assign_source_24;
}
// Tried code:
{
PyObject *tmp_assign_source_25;
{
PyObject *tmp_set_locals_1;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
tmp_set_locals_1 = tmp_class_container$class_creation_1__prepared;
locals_google$genai$live_music$$$class__1_AsyncMusicSession_45 = tmp_set_locals_1;
Py_INCREF(tmp_set_locals_1);
}
tmp_dictset_value = mod_consts.const_str_digest_164ea6b02091fd5f781add4ef8488bb2;
tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, const_str_plain___module__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_digest_de564a09c74ede6fc9168a2f142add4b;
tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, const_str_plain___doc__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_str_plain_AsyncMusicSession;
tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
assert(!(tmp_result == false));
tmp_dictset_value = mod_consts.const_int_pos_45;
tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
assert(!(tmp_result == false));
// Tried code:
// Tried code:
frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2 = MAKE_CLASS_FRAME(tstate, code_objects_3808eeb4dce3a098bf2f40b4ac677f55, module_google$genai$live_music, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2);
assert(Py_REFCNT(frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2) == 2);

// Framed code:
{
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
tmp_dict_key_1 = mod_consts.const_str_plain_api_client;
tmp_dict_value_1 = module_var_accessor_google$genai$live_music$BaseApiClient(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseApiClient);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_1 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_websocket;
tmp_dict_value_1 = module_var_accessor_google$genai$live_music$ClientConnection(tstate);
if (unlikely(tmp_dict_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ClientConnection);
}

if (tmp_dict_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_2 = "o";
    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
assert(!(tmp_res != 0));
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_2;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__1___init__(tstate, tmp_annotations_1);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, const_str_plain___init__, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_1;
PyObject *tmp_expression_value_3;
tmp_dict_key_2 = mod_consts.const_str_plain_prompts;
tmp_expression_value_2 = (PyObject *)&PyList_Type;
tmp_expression_value_3 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_WeightedPrompt);
if (tmp_subscript_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_2 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_dict_value_2 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__2_set_weighted_prompts(tstate, tmp_annotations_2);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain_set_weighted_prompts, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_4;
tmp_dict_key_3 = mod_consts.const_str_plain_config;
tmp_expression_value_4 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_LiveMusicGenerationConfig);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_3 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_dict_value_3 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__3_set_music_generation_config(tstate, tmp_annotations_3);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain_set_music_generation_config, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 69;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_5;
tmp_dict_key_4 = mod_consts.const_str_plain_playback_control;
tmp_expression_value_5 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts.const_str_plain_LiveMusicPlaybackControl);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 81;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_4 = _PyDict_NewPresized( 2 );
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_dict_value_4 = Py_None;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__4__send_control_signal(tstate, tmp_annotations_4);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain__send_control_signal, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 80;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_5;
tmp_annotations_5 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__5_play(tstate, tmp_annotations_5);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain_play, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_6;
tmp_annotations_6 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__6_pause(tstate, tmp_annotations_6);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain_pause, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_7;
tmp_annotations_7 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__7_stop(tstate, tmp_annotations_7);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain_stop, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_8;
tmp_annotations_8 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__8_reset_context(tstate, tmp_annotations_8);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain_reset_context, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
{
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_2;
PyObject *tmp_expression_value_7;
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_expression_value_6 = module_var_accessor_google$genai$live_music$AsyncIterator(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_expression_value_7 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts.const_str_plain_LiveMusicServerMessage);
if (tmp_subscript_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_9 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__9_receive(tstate, tmp_annotations_9);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain_receive, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
}
{
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
PyObject *tmp_expression_value_8;
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_expression_value_8 = module_var_accessor_google$genai$live_music$types(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain_types);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts.const_str_plain_LiveMusicServerMessage);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_2 = "o";
    goto frame_exception_exit_2;
}
tmp_annotations_10 = _PyDict_NewPresized( 1 );
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__10__receive(tstate, tmp_annotations_10);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain__receive, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2,
    type_description_2,
    outline_0_var___class__
);



assertFrameObject(frame_frame_google$genai$live_music$$$class__1_AsyncMusicSession_2);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_1;
frame_no_exception_1:;
goto skip_nested_handling_1;
nested_frame_exit_1:;

goto try_except_handler_5;
skip_nested_handling_1:;
{
PyObject *tmp_annotations_11;
tmp_annotations_11 = DICT_COPY(tstate, mod_consts.const_dict_056a293e2058d56276328e53ff09a8b9);

tmp_dictset_value = MAKE_FUNCTION_google$genai$live_music$$$function__11_close(tstate, tmp_annotations_11);

tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, const_str_plain_close, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
assert(!(tmp_result == false));
}
tmp_dictset_value = mod_consts.const_tuple_str_plain__api_client_str_plain__ws_tuple;
tmp_result = DICT_SET_ITEM(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
assert(!(tmp_result == false));
{
PyObject *tmp_assign_source_26;
PyObject *tmp_called_value_1;
PyObject *tmp_args_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_kwargs_value_1;
tmp_called_value_1 = (PyObject *)&PyType_Type;
tmp_tuple_element_1 = mod_consts.const_str_plain_AsyncMusicSession;
tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = const_tuple_empty;
PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
tmp_tuple_element_1 = locals_google$genai$live_music$$$class__1_AsyncMusicSession_45;
PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
tmp_kwargs_value_1 = tmp_class_container$class_creation_1__class_decl_dict;
frame_frame_google$genai$live_music->m_frame.f_lineno = 45;
tmp_assign_source_26 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
CHECK_OBJECT(tmp_args_value_1);
Py_DECREF(tmp_args_value_1);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto try_except_handler_5;
}
assert(outline_0_var___class__ == NULL);
outline_0_var___class__ = tmp_assign_source_26;
}
CHECK_OBJECT(outline_0_var___class__);
tmp_assign_source_25 = outline_0_var___class__;
Py_INCREF(tmp_assign_source_25);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
Py_DECREF(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45);
locals_google$genai$live_music$$$class__1_AsyncMusicSession_45 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$live_music$$$class__1_AsyncMusicSession_45);
locals_google$genai$live_music$$$class__1_AsyncMusicSession_45 = NULL;
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
exception_lineno = 45;
goto try_except_handler_3;
outline_result_2:;
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncMusicSession, tmp_assign_source_25);
}
goto try_end_3;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
CHECK_OBJECT(tmp_class_container$class_creation_1__prepared);
Py_DECREF(tmp_class_container$class_creation_1__prepared);
tmp_class_container$class_creation_1__prepared = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto frame_exception_exit_1;
// End of try:
try_end_3:;
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
CHECK_OBJECT(tmp_class_container$class_creation_1__class_decl_dict);
Py_DECREF(tmp_class_container$class_creation_1__class_decl_dict);
tmp_class_container$class_creation_1__class_decl_dict = NULL;
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
PyObject *tmp_assign_source_27;
PyObject *tmp_tuple_element_2;
PyObject *tmp_expression_value_9;
tmp_expression_value_9 = module_var_accessor_google$genai$live_music$_api_module(tstate);
if (unlikely(tmp_expression_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__api_module);
}

if (tmp_expression_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts.const_str_plain_BaseModule);
if (tmp_tuple_element_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_assign_source_27 = MAKE_TUPLE_EMPTY(tstate, 1);
PyTuple_SET_ITEM(tmp_assign_source_27, 0, tmp_tuple_element_2);
assert(tmp_class_container$class_creation_2__bases_orig == NULL);
tmp_class_container$class_creation_2__bases_orig = tmp_assign_source_27;
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_direct_call_arg1_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_direct_call_arg1_1 = tmp_class_container$class_creation_2__bases_orig;
Py_INCREF(tmp_direct_call_arg1_1);

{
    PyObject *dir_call_args[] = {tmp_direct_call_arg1_1};
    tmp_assign_source_28 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
}
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__bases == NULL);
tmp_class_container$class_creation_2__bases = tmp_assign_source_28;
}
{
PyObject *tmp_assign_source_29;
tmp_assign_source_29 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__class_decl_dict == NULL);
tmp_class_container$class_creation_2__class_decl_dict = tmp_assign_source_29;
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_metaclass_value_1;
nuitka_bool tmp_condition_result_2;
int tmp_truth_name_1;
PyObject *tmp_type_arg_1;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_3;
PyObject *tmp_bases_value_1;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_container$class_creation_2__bases);
if (tmp_truth_name_1 == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
    goto condexpr_true_1;
} else {
    goto condexpr_false_1;
}
condexpr_true_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_expression_value_10 = tmp_class_container$class_creation_2__bases;
tmp_subscript_value_3 = const_int_0;
tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_10, tmp_subscript_value_3, 0);
if (tmp_type_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
CHECK_OBJECT(tmp_type_arg_1);
Py_DECREF(tmp_type_arg_1);
if (tmp_metaclass_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
goto condexpr_end_1;
condexpr_false_1:;
tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
Py_INCREF(tmp_metaclass_value_1);
condexpr_end_1:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_bases_value_1 = tmp_class_container$class_creation_2__bases;
tmp_assign_source_30 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
CHECK_OBJECT(tmp_metaclass_value_1);
Py_DECREF(tmp_metaclass_value_1);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__metaclass == NULL);
tmp_class_container$class_creation_2__metaclass = tmp_assign_source_30;
}
{
bool tmp_condition_result_3;
PyObject *tmp_expression_value_11;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_11 = tmp_class_container$class_creation_2__metaclass;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts.const_str_plain___prepare__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_condition_result_3 = (tmp_res != 0) ? true : false;
if (tmp_condition_result_3 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_assign_source_31;
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_12;
PyObject *tmp_args_value_2;
PyObject *tmp_tuple_element_3;
PyObject *tmp_kwargs_value_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_12 = tmp_class_container$class_creation_2__metaclass;
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts.const_str_plain___prepare__);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_tuple_element_3 = mod_consts.const_str_plain_AsyncLiveMusic;
tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_3 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_2 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$genai$live_music->m_frame.f_lineno = 160;
tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_value_2);
Py_DECREF(tmp_args_value_2);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_31;
}
{
bool tmp_condition_result_4;
PyObject *tmp_operand_value_1;
PyObject *tmp_expression_value_13;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_expression_value_13 = tmp_class_container$class_creation_2__prepared;
tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_13, mod_consts.const_str_plain___getitem__);
if (tmp_res == -1) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
assert(!(tmp_res == -1));
tmp_condition_result_4 = (tmp_res == 0) ? true : false;
if (tmp_condition_result_4 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
PyObject *tmp_mod_expr_left_1;
PyObject *tmp_mod_expr_right_1;
PyObject *tmp_tuple_element_4;
PyObject *tmp_expression_value_14;
PyObject *tmp_name_value_17;
PyObject *tmp_default_value_1;
tmp_mod_expr_left_1 = mod_consts.const_str_digest_75fd71b1edada749c2ef7ac810062295;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_expression_value_14 = tmp_class_container$class_creation_2__metaclass;
tmp_name_value_17 = const_str_plain___name__;
tmp_default_value_1 = mod_consts.const_str_angle_metaclass;
tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_14, tmp_name_value_17, tmp_default_value_1);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_expression_value_15;
PyObject *tmp_type_arg_2;
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_type_arg_2 = tmp_class_container$class_creation_2__prepared;
tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_2);
assert(!(tmp_expression_value_15 == NULL));
tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, const_str_plain___name__);
CHECK_OBJECT(tmp_expression_value_15);
Py_DECREF(tmp_expression_value_15);
if (tmp_tuple_element_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
}
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_mod_expr_right_1);
goto try_except_handler_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
CHECK_OBJECT(tmp_mod_expr_right_1);
Py_DECREF(tmp_mod_expr_right_1);
if (tmp_make_exception_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_6;
}
frame_frame_google$genai$live_music->m_frame.f_lineno = 160;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
CHECK_OBJECT(tmp_make_exception_arg_1);
Py_DECREF(tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 160;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);

goto try_except_handler_6;
}
branch_no_3:;
goto branch_end_2;
branch_no_2:;
{
PyObject *tmp_assign_source_32;
tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
assert(tmp_class_container$class_creation_2__prepared == NULL);
tmp_class_container$class_creation_2__prepared = tmp_assign_source_32;
}
branch_end_2:;
{
PyObject *tmp_assign_source_33;
{
PyObject *tmp_set_locals_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__prepared);
tmp_set_locals_2 = tmp_class_container$class_creation_2__prepared;
locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160 = tmp_set_locals_2;
Py_INCREF(tmp_set_locals_2);
}
// Tried code:
// Tried code:
tmp_dictset_value = mod_consts.const_str_digest_164ea6b02091fd5f781add4ef8488bb2;
tmp_res = PyObject_SetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, const_str_plain___module__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_digest_3f7d52b49cb747e551edf32e060ec78e;
tmp_res = PyObject_SetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, const_str_plain___doc__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_str_plain_AsyncLiveMusic;
tmp_res = PyObject_SetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain___qualname__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
tmp_dictset_value = mod_consts.const_int_pos_160;
tmp_res = PyObject_SetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain___firstlineno__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3 = MAKE_CLASS_FRAME(tstate, code_objects_85e200fba683e5ede8073cd3beaba4c2, module_google$genai$live_music, NULL, sizeof(void *));

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3);
assert(Py_REFCNT(frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3) == 2);

// Framed code:
{
PyObject *tmp_called_value_3;
PyObject *tmp_called_instance_2;
PyObject *tmp_args_element_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_args_element_value_2;
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
tmp_called_instance_2 = PyObject_GetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain__common);

if (tmp_called_instance_2 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_called_instance_2 = module_var_accessor_google$genai$live_music$_common(tstate);
if (unlikely(tmp_called_instance_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__common);
}

if (tmp_called_instance_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_called_instance_2);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3->m_frame.f_lineno = 166;
tmp_called_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
    tstate,
    tmp_called_instance_2,
    mod_consts.const_str_plain_experimental_warning,
    PyTuple_GET_ITEM(mod_consts.const_tuple_str_digest_5140f5cb8ffc788acd10930e9c70b603_tuple, 0)
);

CHECK_OBJECT(tmp_called_instance_2);
Py_DECREF(tmp_called_instance_2);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_expression_value_16 = PyObject_GetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain_contextlib);

if (tmp_expression_value_16 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_16 = module_var_accessor_google$genai$live_music$contextlib(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_contextlib);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_3);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
        Py_INCREF(tmp_expression_value_16);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts.const_str_plain_asynccontextmanager);
CHECK_OBJECT(tmp_expression_value_16);
Py_DECREF(tmp_expression_value_16);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_dict_key_7 = mod_consts.const_str_plain_model;
tmp_dict_value_7 = PyObject_GetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain_str);

if (tmp_dict_value_7 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
        Py_INCREF(tmp_dict_value_7);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto frame_exception_exit_3;
    }
}

tmp_annotations_12 = _PyDict_NewPresized( 2 );
{
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_4;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_17 = PyObject_GetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain_AsyncIterator);

if (tmp_expression_value_17 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_expression_value_17 = module_var_accessor_google$genai$live_music$AsyncIterator(tstate);
if (unlikely(tmp_expression_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncIterator);
}

if (tmp_expression_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_expression_value_17);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_subscript_value_4 = PyObject_GetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain_AsyncMusicSession);

if (tmp_subscript_value_4 == NULL) {
    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
tmp_subscript_value_4 = module_var_accessor_google$genai$live_music$AsyncMusicSession(tstate);
if (unlikely(tmp_subscript_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_AsyncMusicSession);
}

if (tmp_subscript_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_expression_value_17);

exception_lineno = 170;
type_description_2 = "o";
    goto dict_build_exception_2;
}
        Py_INCREF(tmp_subscript_value_4);
    } else {
        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
        goto dict_build_exception_2;
    }
}

tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_4);
CHECK_OBJECT(tmp_expression_value_17);
Py_DECREF(tmp_expression_value_17);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
type_description_2 = "o";
    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_called_value_3);
Py_DECREF(tmp_called_value_4);
Py_DECREF(tmp_annotations_12);
goto frame_exception_exit_3;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;

tmp_args_element_value_2 = MAKE_FUNCTION_google$genai$live_music$$$function__12_connect(tstate, tmp_annotations_12);

frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3->m_frame.f_lineno = 169;
tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_args_element_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_3);

exception_lineno = 169;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3->m_frame.f_lineno = 166;
tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_1);
Py_DECREF(tmp_args_element_value_1);
if (tmp_dictset_value == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 166;
type_description_2 = "o";
    goto frame_exception_exit_3;
}
tmp_res = PyObject_SetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain_connect, tmp_dictset_value);
CHECK_OBJECT(tmp_dictset_value);
Py_DECREF(tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 170;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3,
    type_description_2,
    outline_1_var___class__
);



assertFrameObject(frame_frame_google$genai$live_music$$$class__2_AsyncLiveMusic_3);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto nested_frame_exit_2;
frame_no_exception_2:;
goto skip_nested_handling_2;
nested_frame_exit_2:;

goto try_except_handler_8;
skip_nested_handling_2:;
tmp_dictset_value = const_tuple_empty;
tmp_res = PyObject_SetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain___static_attributes__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
{
nuitka_bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_cmp_expr_left_2 = tmp_class_container$class_creation_2__bases;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_cmp_expr_right_2 = tmp_class_container$class_creation_2__bases_orig;
tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
CHECK_OBJECT(tmp_class_container$class_creation_2__bases_orig);
tmp_dictset_value = tmp_class_container$class_creation_2__bases_orig;
tmp_res = PyObject_SetItem(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160, mod_consts.const_str_plain___orig_bases__, tmp_dictset_value);
if (tmp_res != 0) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
branch_no_4:;
{
PyObject *tmp_assign_source_34;
PyObject *tmp_called_value_5;
PyObject *tmp_args_value_3;
PyObject *tmp_tuple_element_5;
PyObject *tmp_kwargs_value_3;
CHECK_OBJECT(tmp_class_container$class_creation_2__metaclass);
tmp_called_value_5 = tmp_class_container$class_creation_2__metaclass;
tmp_tuple_element_5 = mod_consts.const_str_plain_AsyncLiveMusic;
tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__bases);
tmp_tuple_element_5 = tmp_class_container$class_creation_2__bases;
PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
tmp_tuple_element_5 = locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160;
PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
CHECK_OBJECT(tmp_class_container$class_creation_2__class_decl_dict);
tmp_kwargs_value_3 = tmp_class_container$class_creation_2__class_decl_dict;
frame_frame_google$genai$live_music->m_frame.f_lineno = 160;
tmp_assign_source_34 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
CHECK_OBJECT(tmp_args_value_3);
Py_DECREF(tmp_args_value_3);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;

    goto try_except_handler_8;
}
assert(outline_1_var___class__ == NULL);
outline_1_var___class__ = tmp_assign_source_34;
}
CHECK_OBJECT(outline_1_var___class__);
tmp_assign_source_33 = outline_1_var___class__;
Py_INCREF(tmp_assign_source_33);
goto try_return_handler_8;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_8:;
Py_DECREF(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160);
locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160 = NULL;
goto try_return_handler_7;
// Exception handler code:
try_except_handler_8:;
exception_keeper_lineno_6 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_6 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_DECREF(locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160);
locals_google$genai$live_music$$$class__2_AsyncLiveMusic_160 = NULL;
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
exception_lineno = 160;
goto try_except_handler_6;
outline_result_4:;
UPDATE_STRING_DICT1(moduledict_google$genai$live_music, (Nuitka_StringObject *)mod_consts.const_str_plain_AsyncLiveMusic, tmp_assign_source_33);
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$live_music, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$live_music->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$live_music, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$live_music);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$live_music", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai.live_music" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$live_music);
    return module_google$genai$live_music;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$live_music, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$live_music", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

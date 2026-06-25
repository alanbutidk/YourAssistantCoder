/* Generated code for Python module 'google$genai$_tokens_converters'
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



/* The "module_google$genai$_tokens_converters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_google$genai$_tokens_converters;
PyDictObject *moduledict_google$genai$_tokens_converters;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_getv;
PyObject *const_str_plain_language_codes;
PyObject *const_str_digest_202818aa0afaad62c03f4ae5e300deec;
PyObject *const_str_plain_api_key;
PyObject *const_str_plain_setv;
PyObject *const_str_plain_apiKey;
PyObject *const_str_plain_api_key_config;
PyObject *const_str_digest_33d0a6377f2906dd8d6df242af4ae08b;
PyObject *const_str_plain_auth_type;
PyObject *const_str_digest_deb3e02eba685b4a3dc9030d2bbdd174;
PyObject *const_str_plain_google_service_account_config;
PyObject *const_str_digest_f9553429fc54d072271e31c28ca758c7;
PyObject *const_str_plain_http_basic_auth_config;
PyObject *const_str_digest_3fe49994fd0203b7afbab58ec31868f8;
PyObject *const_str_plain_oauth_config;
PyObject *const_str_digest_7ad9b469721c2469fe07e2cd7b0ac93d;
PyObject *const_str_plain_oidc_config;
PyObject *const_str_digest_e60f51d0b76be7f3474812ea92f9190f;
PyObject *const_str_plain_data;
PyObject *const_str_plain_display_name;
PyObject *const_str_digest_be606c5b7a98ad9187cec3ccb563a9b8;
PyObject *const_str_plain_mime_type;
PyObject *const_str_plain_mimeType;
PyObject *const_str_plain_parts;
PyObject *const_str_plain__Part_to_mldev;
PyObject *const_str_plain_to_object;
PyObject *const_str_plain_role;
PyObject *const_str_plain_expire_time;
PyObject *const_str_plain_expireTime;
PyObject *const_str_plain_new_session_expire_time;
PyObject *const_str_plain_newSessionExpireTime;
PyObject *const_str_plain_uses;
PyObject *const_str_plain_live_connect_constraints;
PyObject *const_str_plain_bidiGenerateContentSetup;
PyObject *const_str_plain__LiveConnectConstraints_to_mldev;
PyObject *const_str_plain_lock_additional_fields;
PyObject *const_str_plain_fieldMask;
PyObject *const_str_plain_config;
PyObject *const_str_plain__CreateAuthTokenConfig_to_mldev;
PyObject *const_str_digest_bb08004e03e6917c7dd4d572c75eea51;
PyObject *const_str_plain_file_uri;
PyObject *const_str_plain_fileUri;
PyObject *const_str_plain_id;
PyObject *const_str_plain_partial_args;
PyObject *const_str_digest_ebaea9ddfbffdaa94ccd5ca0cf4723a5;
PyObject *const_str_plain_will_continue;
PyObject *const_str_digest_1775d395d81443c5e7f1c8d9c4e403ff;
PyObject *const_str_plain_auth_config;
PyObject *const_str_plain_authConfig;
PyObject *const_str_plain__AuthConfig_to_mldev;
PyObject *const_str_plain_enable_widget;
PyObject *const_str_plain_enableWidget;
PyObject *const_str_plain_search_types;
PyObject *const_str_plain_searchTypes;
PyObject *const_str_plain_blocking_confidence;
PyObject *const_str_digest_8f4342e9314e008de8095a2acf4f0d18;
PyObject *const_str_plain_exclude_domains;
PyObject *const_str_digest_172274efa5ada221a55343a0f6a68ee1;
PyObject *const_str_plain_time_range_filter;
PyObject *const_str_plain_timeRangeFilter;
PyObject *const_str_plain_generation_config;
PyObject *const_str_plain_setup;
PyObject *const_str_plain_generationConfig;
PyObject *const_str_plain_response_modalities;
PyObject *const_str_plain_responseModalities;
PyObject *const_str_plain_temperature;
PyObject *const_str_plain_top_p;
PyObject *const_str_plain_topP;
PyObject *const_str_plain_top_k;
PyObject *const_str_plain_topK;
PyObject *const_str_plain_max_output_tokens;
PyObject *const_str_plain_maxOutputTokens;
PyObject *const_str_plain_media_resolution;
PyObject *const_str_plain_mediaResolution;
PyObject *const_str_plain_seed;
PyObject *const_str_plain_speech_config;
PyObject *const_str_plain_speechConfig;
PyObject *const_str_plain_t;
PyObject *const_str_plain_t_live_speech_config;
PyObject *const_str_plain_thinking_config;
PyObject *const_str_plain_thinkingConfig;
PyObject *const_str_plain_enable_affective_dialog;
PyObject *const_str_plain_enableAffectiveDialog;
PyObject *const_str_plain_system_instruction;
PyObject *const_str_plain_systemInstruction;
PyObject *const_str_plain__Content_to_mldev;
PyObject *const_str_plain_t_content;
PyObject *const_str_plain_tools;
PyObject *const_str_plain_t_tools;
PyObject *const_str_plain__Tool_to_mldev;
PyObject *const_str_plain_t_tool;
PyObject *const_str_plain_api_client;
PyObject *const_str_plain_session_resumption;
PyObject *const_str_plain_sessionResumption;
PyObject *const_str_plain__SessionResumptionConfig_to_mldev;
PyObject *const_str_plain_input_audio_transcription;
PyObject *const_str_plain_inputAudioTranscription;
PyObject *const_str_plain__AudioTranscriptionConfig_to_mldev;
PyObject *const_str_plain_output_audio_transcription;
PyObject *const_str_plain_outputAudioTranscription;
PyObject *const_str_plain_realtime_input_config;
PyObject *const_str_plain_realtimeInputConfig;
PyObject *const_str_plain_context_window_compression;
PyObject *const_str_plain_contextWindowCompression;
PyObject *const_str_plain_proactivity;
PyObject *const_str_plain_explicit_vad_signal;
PyObject *const_str_digest_4f4e57f62b637b6c20d4ed2faf1d11db;
PyObject *const_str_plain_history_config;
PyObject *const_str_plain_historyConfig;
PyObject *const_str_plain_avatar_config;
PyObject *const_str_plain_avatarConfig;
PyObject *const_str_plain_safety_settings;
PyObject *const_str_plain_safetySettings;
PyObject *const_str_plain__SafetySetting_to_mldev;
PyObject *const_str_plain_stream_translation_config;
PyObject *const_str_plain_streamTranslationConfig;
PyObject *const_str_plain_model;
PyObject *const_str_plain_t_model;
PyObject *const_str_plain__LiveConnectConfig_to_mldev;
PyObject *const_str_plain_code_execution_result;
PyObject *const_str_plain_codeExecutionResult;
PyObject *const_str_plain_executable_code;
PyObject *const_str_plain_executableCode;
PyObject *const_str_plain_file_data;
PyObject *const_str_plain_fileData;
PyObject *const_str_plain__FileData_to_mldev;
PyObject *const_str_plain_function_call;
PyObject *const_str_plain_functionCall;
PyObject *const_str_plain__FunctionCall_to_mldev;
PyObject *const_str_plain_function_response;
PyObject *const_str_plain_functionResponse;
PyObject *const_str_plain_inline_data;
PyObject *const_str_plain_inlineData;
PyObject *const_str_plain__Blob_to_mldev;
PyObject *const_str_plain_text;
PyObject *const_str_plain_thought;
PyObject *const_str_plain_thought_signature;
PyObject *const_str_plain_thoughtSignature;
PyObject *const_str_plain_video_metadata;
PyObject *const_str_plain_videoMetadata;
PyObject *const_str_plain_tool_call;
PyObject *const_str_plain_toolCall;
PyObject *const_str_plain_tool_response;
PyObject *const_str_plain_toolResponse;
PyObject *const_str_plain_part_metadata;
PyObject *const_str_plain_partMetadata;
PyObject *const_str_plain_category;
PyObject *const_str_plain_method;
PyObject *const_str_digest_e2305cae5756775ed10728a135f0aea0;
PyObject *const_str_plain_threshold;
PyObject *const_str_plain_handle;
PyObject *const_str_plain_transparent;
PyObject *const_str_digest_f027e8c7279a40ba8bb591d210ea0aef;
PyObject *const_str_plain_retrieval;
PyObject *const_str_digest_2f5a74c404387f2a33cfd448126935be;
PyObject *const_str_plain_computer_use;
PyObject *const_str_plain_computerUse;
PyObject *const_str_plain_file_search;
PyObject *const_str_plain_fileSearch;
PyObject *const_str_plain_google_search;
PyObject *const_str_plain_googleSearch;
PyObject *const_str_plain__GoogleSearch_to_mldev;
PyObject *const_str_plain_google_maps;
PyObject *const_str_plain_googleMaps;
PyObject *const_str_plain__GoogleMaps_to_mldev;
PyObject *const_str_plain_code_execution;
PyObject *const_str_plain_codeExecution;
PyObject *const_str_plain_enterprise_web_search;
PyObject *const_str_digest_fee702490cfd27caa5ab9e35aca50408;
PyObject *const_str_plain_function_declarations;
PyObject *const_str_plain_functionDeclarations;
PyObject *const_str_plain_google_search_retrieval;
PyObject *const_str_plain_googleSearchRetrieval;
PyObject *const_str_plain_parallel_ai_search;
PyObject *const_str_digest_1676c0189e80ee1b86a354919efcb89b;
PyObject *const_str_plain_url_context;
PyObject *const_str_plain_urlContext;
PyObject *const_str_plain_mcp_servers;
PyObject *const_str_plain_mcpServers;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Any;
PyObject *const_str_plain_Optional;
PyObject *const_str_plain_Union;
PyObject *const_tuple_str_plain__transformers_tuple;
PyObject *const_str_plain__transformers;
PyObject *const_str_plain__api_client;
PyObject *const_tuple_str_plain_BaseApiClient_tuple;
PyObject *const_str_plain_BaseApiClient;
PyObject *const_str_plain__common;
PyObject *const_tuple_str_plain_get_value_by_path_tuple;
PyObject *const_str_plain_get_value_by_path;
PyObject *const_tuple_str_plain_set_value_by_path_tuple;
PyObject *const_str_plain_set_value_by_path;
PyObject *const_tuple_none_tuple;
PyObject *const_str_plain_from_object;
PyObject *const_str_plain_parent_object;
PyObject *const_str_plain_return;
PyObject *const_str_plain__CreateAuthTokenParameters_to_mldev;
PyObject *const_str_plain__CreateAuthTokenParameters_to_vertex;
PyObject *const_str_digest_b6daca52f9aeb3c9682ad1796a106908;
PyObject *const_str_digest_85c5e9a2995b6f65f018ee24a74035ae;
PyObject *const_tuple_21d332c911c3a2235d61476019cf969b_tuple;
PyObject *const_tuple_d582334ce7e375c00516a4d67783463e_tuple;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[204];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("google.genai._tokens_converters"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_getv);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_language_codes);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_digest_202818aa0afaad62c03f4ae5e300deec);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_key);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_str_plain_setv);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_apiKey);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_key_config);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_digest_33d0a6377f2906dd8d6df242af4ae08b);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth_type);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_digest_deb3e02eba685b4a3dc9030d2bbdd174);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_google_service_account_config);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_digest_f9553429fc54d072271e31c28ca758c7);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_str_plain_http_basic_auth_config);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_digest_3fe49994fd0203b7afbab58ec31868f8);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_oauth_config);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ad9b469721c2469fe07e2cd7b0ac93d);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_oidc_config);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_digest_e60f51d0b76be7f3474812ea92f9190f);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_str_plain_data);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_display_name);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_digest_be606c5b7a98ad9187cec3ccb563a9b8);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_str_plain_mime_type);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_mimeType);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_parts);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_str_plain__Part_to_mldev);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_to_object);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_role);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_str_plain_expire_time);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_expireTime);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_new_session_expire_time);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_newSessionExpireTime);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_uses);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_live_connect_constraints);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_bidiGenerateContentSetup);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_lock_additional_fields);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_fieldMask);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_config);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_digest_bb08004e03e6917c7dd4d572c75eea51);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_uri);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_fileUri);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_id);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_partial_args);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_digest_ebaea9ddfbffdaa94ccd5ca0cf4723a5);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_will_continue);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_digest_1775d395d81443c5e7f1c8d9c4e403ff);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_auth_config);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_authConfig);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain__AuthConfig_to_mldev);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_widget);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_str_plain_enableWidget);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_search_types);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_searchTypes);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_str_plain_blocking_confidence);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_digest_8f4342e9314e008de8095a2acf4f0d18);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_domains);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_str_digest_172274efa5ada221a55343a0f6a68ee1);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_time_range_filter);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_timeRangeFilter);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_str_plain_generation_config);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_setup);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_generationConfig);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_modalities);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_responseModalities);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_temperature);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_str_plain_top_p);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_topP);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_top_k);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_str_plain_topK);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_max_output_tokens);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_maxOutputTokens);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_str_plain_media_resolution);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_mediaResolution);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_seed);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_str_plain_speech_config);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_speechConfig);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_t);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_str_plain_t_live_speech_config);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_thinking_config);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_thinkingConfig);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_str_plain_enable_affective_dialog);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_enableAffectiveDialog);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_system_instruction);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_systemInstruction);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain__Content_to_mldev);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_t_content);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_tools);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_t_tools);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain__Tool_to_mldev);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_t_tool);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_api_client);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_session_resumption);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_sessionResumption);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_transcription);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_inputAudioTranscription);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_output_audio_transcription);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_outputAudioTranscription);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_input_config);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_realtimeInputConfig);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_context_window_compression);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_contextWindowCompression);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_proactivity);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_explicit_vad_signal);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_digest_4f4e57f62b637b6c20d4ed2faf1d11db);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_history_config);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_historyConfig);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_avatar_config);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_avatarConfig);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_safety_settings);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_safetySettings);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain__SafetySetting_to_mldev);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_stream_translation_config);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_streamTranslationConfig);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_model);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_t_model);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_execution_result);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_codeExecutionResult);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_executable_code);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_executableCode);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_data);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_fileData);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain__FileData_to_mldev);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_call);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_functionCall);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain__FunctionCall_to_mldev);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_response);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_functionResponse);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_inline_data);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_inlineData);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain__Blob_to_mldev);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_text);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_thought);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_thought_signature);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_thoughtSignature);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_plain_video_metadata);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_videoMetadata);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_plain_toolCall);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_tool_response);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_toolResponse);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_plain_part_metadata);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_partMetadata);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_category);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_plain_method);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_digest_e2305cae5756775ed10728a135f0aea0);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_threshold);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_plain_handle);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_transparent);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_f027e8c7279a40ba8bb591d210ea0aef);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_plain_retrieval);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f5a74c404387f2a33cfd448126935be);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_computer_use);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_plain_computerUse);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_file_search);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_fileSearch);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_plain_google_search);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_plain_googleSearch);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain__GoogleSearch_to_mldev);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_plain_google_maps);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_plain_googleMaps);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_plain__GoogleMaps_to_mldev);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_plain_code_execution);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_plain_codeExecution);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_plain_enterprise_web_search);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_str_digest_fee702490cfd27caa5ab9e35aca50408);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_plain_function_declarations);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_functionDeclarations);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_str_plain_google_search_retrieval);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_str_plain_googleSearchRetrieval);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_plain_parallel_ai_search);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_1676c0189e80ee1b86a354919efcb89b);
mod_consts_hash[175] = DEEP_HASH(tstate, mod_consts.const_str_plain_url_context);
mod_consts_hash[176] = DEEP_HASH(tstate, mod_consts.const_str_plain_urlContext);
mod_consts_hash[177] = DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_servers);
mod_consts_hash[178] = DEEP_HASH(tstate, mod_consts.const_str_plain_mcpServers);
mod_consts_hash[179] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[180] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[181] = DEEP_HASH(tstate, mod_consts.const_str_plain_Any);
mod_consts_hash[182] = DEEP_HASH(tstate, mod_consts.const_str_plain_Optional);
mod_consts_hash[183] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[184] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__transformers_tuple);
mod_consts_hash[185] = DEEP_HASH(tstate, mod_consts.const_str_plain__transformers);
mod_consts_hash[186] = DEEP_HASH(tstate, mod_consts.const_str_plain__api_client);
mod_consts_hash[187] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseApiClient_tuple);
mod_consts_hash[188] = DEEP_HASH(tstate, mod_consts.const_str_plain_BaseApiClient);
mod_consts_hash[189] = DEEP_HASH(tstate, mod_consts.const_str_plain__common);
mod_consts_hash[190] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_value_by_path_tuple);
mod_consts_hash[191] = DEEP_HASH(tstate, mod_consts.const_str_plain_get_value_by_path);
mod_consts_hash[192] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_value_by_path_tuple);
mod_consts_hash[193] = DEEP_HASH(tstate, mod_consts.const_str_plain_set_value_by_path);
mod_consts_hash[194] = DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple);
mod_consts_hash[195] = DEEP_HASH(tstate, mod_consts.const_str_plain_from_object);
mod_consts_hash[196] = DEEP_HASH(tstate, mod_consts.const_str_plain_parent_object);
mod_consts_hash[197] = DEEP_HASH(tstate, mod_consts.const_str_plain_return);
mod_consts_hash[198] = DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev);
mod_consts_hash[199] = DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenParameters_to_vertex);
mod_consts_hash[200] = DEEP_HASH(tstate, mod_consts.const_str_digest_b6daca52f9aeb3c9682ad1796a106908);
mod_consts_hash[201] = DEEP_HASH(tstate, mod_consts.const_str_digest_85c5e9a2995b6f65f018ee24a74035ae);
mod_consts_hash[202] = DEEP_HASH(tstate, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple);
mod_consts_hash[203] = DEEP_HASH(tstate, mod_consts.const_tuple_d582334ce7e375c00516a4d67783463e_tuple);
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
void checkModuleConstants_google$genai$_tokens_converters(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_getv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_getv);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_language_codes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_language_codes);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_digest_202818aa0afaad62c03f4ae5e300deec));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_202818aa0afaad62c03f4ae5e300deec);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_key));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_key);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_str_plain_setv));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setv);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_apiKey));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_apiKey);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_key_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_key_config);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_digest_33d0a6377f2906dd8d6df242af4ae08b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_33d0a6377f2906dd8d6df242af4ae08b);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth_type);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_digest_deb3e02eba685b4a3dc9030d2bbdd174));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_deb3e02eba685b4a3dc9030d2bbdd174);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_google_service_account_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google_service_account_config);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_digest_f9553429fc54d072271e31c28ca758c7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f9553429fc54d072271e31c28ca758c7);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_str_plain_http_basic_auth_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_http_basic_auth_config);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_digest_3fe49994fd0203b7afbab58ec31868f8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3fe49994fd0203b7afbab58ec31868f8);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_oauth_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oauth_config);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ad9b469721c2469fe07e2cd7b0ac93d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ad9b469721c2469fe07e2cd7b0ac93d);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_oidc_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_oidc_config);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_digest_e60f51d0b76be7f3474812ea92f9190f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e60f51d0b76be7f3474812ea92f9190f);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_str_plain_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_data);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_display_name));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_display_name);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_digest_be606c5b7a98ad9187cec3ccb563a9b8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_be606c5b7a98ad9187cec3ccb563a9b8);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_str_plain_mime_type));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mime_type);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_mimeType));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mimeType);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_parts));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parts);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_str_plain__Part_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Part_to_mldev);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_to_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_to_object);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_role);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_str_plain_expire_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expire_time);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_expireTime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_expireTime);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_new_session_expire_time));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_new_session_expire_time);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_newSessionExpireTime));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_newSessionExpireTime);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_uses));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_uses);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_live_connect_constraints));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_live_connect_constraints);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_bidiGenerateContentSetup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_bidiGenerateContentSetup);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain__LiveConnectConstraints_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_lock_additional_fields));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_lock_additional_fields);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_fieldMask));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fieldMask);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_config);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_digest_bb08004e03e6917c7dd4d572c75eea51));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bb08004e03e6917c7dd4d572c75eea51);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_uri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_uri);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_fileUri));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fileUri);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_id));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_id);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_partial_args));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partial_args);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_digest_ebaea9ddfbffdaa94ccd5ca0cf4723a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ebaea9ddfbffdaa94ccd5ca0cf4723a5);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_will_continue));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_will_continue);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_digest_1775d395d81443c5e7f1c8d9c4e403ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1775d395d81443c5e7f1c8d9c4e403ff);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_auth_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_auth_config);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_authConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_authConfig);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain__AuthConfig_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AuthConfig_to_mldev);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_widget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enable_widget);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_str_plain_enableWidget));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enableWidget);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_search_types));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_search_types);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_searchTypes));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_searchTypes);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_str_plain_blocking_confidence));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_blocking_confidence);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_digest_8f4342e9314e008de8095a2acf4f0d18));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8f4342e9314e008de8095a2acf4f0d18);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_exclude_domains));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_exclude_domains);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_str_digest_172274efa5ada221a55343a0f6a68ee1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_172274efa5ada221a55343a0f6a68ee1);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_time_range_filter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_time_range_filter);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_timeRangeFilter));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_timeRangeFilter);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_str_plain_generation_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generation_config);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_setup));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_setup);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_generationConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_generationConfig);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_modalities));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_modalities);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_responseModalities));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_responseModalities);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_temperature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_temperature);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_str_plain_top_p));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_top_p);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_topP));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_topP);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_top_k));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_top_k);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_str_plain_topK));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_topK);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_max_output_tokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_max_output_tokens);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_maxOutputTokens));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_maxOutputTokens);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_str_plain_media_resolution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_media_resolution);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_mediaResolution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mediaResolution);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_seed));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_seed);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_str_plain_speech_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_speech_config);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_speechConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_speechConfig);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_t));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_str_plain_t_live_speech_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t_live_speech_config);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_thinking_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thinking_config);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_thinkingConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thinkingConfig);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_str_plain_enable_affective_dialog));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enable_affective_dialog);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_enableAffectiveDialog));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enableAffectiveDialog);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_system_instruction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_system_instruction);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_systemInstruction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_systemInstruction);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain__Content_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Content_to_mldev);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_t_content));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t_content);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tools);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_t_tools));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t_tools);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain__Tool_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Tool_to_mldev);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_t_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t_tool);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_api_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_api_client);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_session_resumption));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_session_resumption);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_sessionResumption));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_sessionResumption);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain__SessionResumptionConfig_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_input_audio_transcription));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_input_audio_transcription);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_inputAudioTranscription));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inputAudioTranscription);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_output_audio_transcription));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_output_audio_transcription);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_outputAudioTranscription));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_outputAudioTranscription);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtime_input_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtime_input_config);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_realtimeInputConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_realtimeInputConfig);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_context_window_compression));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_context_window_compression);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_contextWindowCompression));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_contextWindowCompression);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_proactivity));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_proactivity);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_explicit_vad_signal));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_explicit_vad_signal);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_digest_4f4e57f62b637b6c20d4ed2faf1d11db));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4f4e57f62b637b6c20d4ed2faf1d11db);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_history_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_history_config);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_historyConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_historyConfig);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_avatar_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_avatar_config);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_avatarConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_avatarConfig);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_safety_settings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safety_settings);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_safetySettings));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_safetySettings);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain__SafetySetting_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__SafetySetting_to_mldev);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_stream_translation_config));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_stream_translation_config);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_streamTranslationConfig));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_streamTranslationConfig);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_model);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_t_model));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_t_model);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain__LiveConnectConfig_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_execution_result));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_execution_result);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_codeExecutionResult));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_codeExecutionResult);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_executable_code));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_executable_code);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_executableCode));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_executableCode);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_data);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_fileData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fileData);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain__FileData_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FileData_to_mldev);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_call);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_functionCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functionCall);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain__FunctionCall_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__FunctionCall_to_mldev);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_response);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_functionResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functionResponse);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_inline_data));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inline_data);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_inlineData));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_inlineData);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain__Blob_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__Blob_to_mldev);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_text);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_thought));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thought);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_thought_signature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thought_signature);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_thoughtSignature));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_thoughtSignature);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_plain_video_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_video_metadata);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_videoMetadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_videoMetadata);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_call);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_plain_toolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toolCall);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_tool_response));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_tool_response);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_toolResponse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_toolResponse);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_plain_part_metadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_part_metadata);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_partMetadata));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_partMetadata);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_category));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_category);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_plain_method));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_method);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_digest_e2305cae5756775ed10728a135f0aea0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e2305cae5756775ed10728a135f0aea0);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_threshold));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_threshold);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_plain_handle));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_handle);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_transparent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_transparent);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_f027e8c7279a40ba8bb591d210ea0aef));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_f027e8c7279a40ba8bb591d210ea0aef);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_plain_retrieval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_retrieval);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f5a74c404387f2a33cfd448126935be));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f5a74c404387f2a33cfd448126935be);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_computer_use));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_computer_use);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_plain_computerUse));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_computerUse);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_file_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_file_search);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_fileSearch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_fileSearch);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_plain_google_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google_search);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_plain_googleSearch));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_googleSearch);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain__GoogleSearch_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GoogleSearch_to_mldev);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_plain_google_maps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google_maps);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_plain_googleMaps));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_googleMaps);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_plain__GoogleMaps_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__GoogleMaps_to_mldev);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_plain_code_execution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_code_execution);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_plain_codeExecution));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_codeExecution);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_plain_enterprise_web_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_enterprise_web_search);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_str_digest_fee702490cfd27caa5ab9e35aca50408));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_fee702490cfd27caa5ab9e35aca50408);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_plain_function_declarations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_function_declarations);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_functionDeclarations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_functionDeclarations);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_str_plain_google_search_retrieval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_google_search_retrieval);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_str_plain_googleSearchRetrieval));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_googleSearchRetrieval);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_plain_parallel_ai_search));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parallel_ai_search);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_1676c0189e80ee1b86a354919efcb89b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1676c0189e80ee1b86a354919efcb89b);
assert(mod_consts_hash[175] == DEEP_HASH(tstate, mod_consts.const_str_plain_url_context));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_url_context);
assert(mod_consts_hash[176] == DEEP_HASH(tstate, mod_consts.const_str_plain_urlContext));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_urlContext);
assert(mod_consts_hash[177] == DEEP_HASH(tstate, mod_consts.const_str_plain_mcp_servers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mcp_servers);
assert(mod_consts_hash[178] == DEEP_HASH(tstate, mod_consts.const_str_plain_mcpServers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_mcpServers);
assert(mod_consts_hash[179] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[180] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[181] == DEEP_HASH(tstate, mod_consts.const_str_plain_Any));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Any);
assert(mod_consts_hash[182] == DEEP_HASH(tstate, mod_consts.const_str_plain_Optional));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Optional);
assert(mod_consts_hash[183] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[184] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain__transformers_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain__transformers_tuple);
assert(mod_consts_hash[185] == DEEP_HASH(tstate, mod_consts.const_str_plain__transformers));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__transformers);
assert(mod_consts_hash[186] == DEEP_HASH(tstate, mod_consts.const_str_plain__api_client));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__api_client);
assert(mod_consts_hash[187] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_BaseApiClient_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_BaseApiClient_tuple);
assert(mod_consts_hash[188] == DEEP_HASH(tstate, mod_consts.const_str_plain_BaseApiClient));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_BaseApiClient);
assert(mod_consts_hash[189] == DEEP_HASH(tstate, mod_consts.const_str_plain__common));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__common);
assert(mod_consts_hash[190] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_get_value_by_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_get_value_by_path_tuple);
assert(mod_consts_hash[191] == DEEP_HASH(tstate, mod_consts.const_str_plain_get_value_by_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_get_value_by_path);
assert(mod_consts_hash[192] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_set_value_by_path_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_set_value_by_path_tuple);
assert(mod_consts_hash[193] == DEEP_HASH(tstate, mod_consts.const_str_plain_set_value_by_path));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_set_value_by_path);
assert(mod_consts_hash[194] == DEEP_HASH(tstate, mod_consts.const_tuple_none_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_none_tuple);
assert(mod_consts_hash[195] == DEEP_HASH(tstate, mod_consts.const_str_plain_from_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_from_object);
assert(mod_consts_hash[196] == DEEP_HASH(tstate, mod_consts.const_str_plain_parent_object));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parent_object);
assert(mod_consts_hash[197] == DEEP_HASH(tstate, mod_consts.const_str_plain_return));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_return);
assert(mod_consts_hash[198] == DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev);
assert(mod_consts_hash[199] == DEEP_HASH(tstate, mod_consts.const_str_plain__CreateAuthTokenParameters_to_vertex));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__CreateAuthTokenParameters_to_vertex);
assert(mod_consts_hash[200] == DEEP_HASH(tstate, mod_consts.const_str_digest_b6daca52f9aeb3c9682ad1796a106908));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b6daca52f9aeb3c9682ad1796a106908);
assert(mod_consts_hash[201] == DEEP_HASH(tstate, mod_consts.const_str_digest_85c5e9a2995b6f65f018ee24a74035ae));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_85c5e9a2995b6f65f018ee24a74035ae);
assert(mod_consts_hash[202] == DEEP_HASH(tstate, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple);
assert(mod_consts_hash[203] == DEEP_HASH(tstate, mod_consts.const_tuple_d582334ce7e375c00516a4d67783463e_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_d582334ce7e375c00516a4d67783463e_tuple);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 23
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
static PyObject *module_var_accessor_google$genai$_tokens_converters$Any(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Any);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$BaseApiClient(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$Optional(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Optional);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Optional, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_AudioTranscriptionConfig_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_AuthConfig_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AuthConfig_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AuthConfig_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AuthConfig_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__AuthConfig_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__AuthConfig_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AuthConfig_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AuthConfig_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__AuthConfig_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_Blob_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Blob_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Blob_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Blob_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Blob_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Blob_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Blob_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Blob_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Blob_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_Content_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Content_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Content_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Content_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Content_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Content_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Content_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Content_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Content_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_CreateAuthTokenConfig_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_FileData_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FileData_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FileData_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FileData_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FileData_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FileData_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FileData_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FileData_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FileData_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_FunctionCall_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FunctionCall_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FunctionCall_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FunctionCall_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__FunctionCall_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__FunctionCall_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FunctionCall_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FunctionCall_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__FunctionCall_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_GoogleMaps_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleMaps_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GoogleMaps_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GoogleMaps_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GoogleMaps_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GoogleMaps_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleMaps_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleMaps_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleMaps_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_GoogleSearch_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleSearch_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GoogleSearch_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GoogleSearch_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__GoogleSearch_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__GoogleSearch_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleSearch_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleSearch_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleSearch_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_LiveConnectConfig_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LiveConnectConfig_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LiveConnectConfig_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_LiveConnectConstraints_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LiveConnectConstraints_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__LiveConnectConstraints_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_Part_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Part_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Part_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Part_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Part_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Part_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Part_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Part_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Part_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_SafetySetting_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SafetySetting_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SafetySetting_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SafetySetting_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SafetySetting_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SafetySetting_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SafetySetting_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SafetySetting_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SafetySetting_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_SessionResumptionConfig_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SessionResumptionConfig_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__SessionResumptionConfig_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$_Tool_to_mldev(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Tool_to_mldev);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Tool_to_mldev);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Tool_to_mldev, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain__Tool_to_mldev);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain__Tool_to_mldev, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Tool_to_mldev);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Tool_to_mldev);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain__Tool_to_mldev);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$getv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getv);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getv, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_getv);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_getv, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_getv);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$setv(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_setv);
    }

    return result;
}

static PyObject *module_var_accessor_google$genai$_tokens_converters$t(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_google$genai$_tokens_converters->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_google$genai$_tokens_converters->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_google$genai$_tokens_converters->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_t);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_daafc23acd5b504a5d914f74295e68fe;
static PyCodeObject *code_objects_0edd0b54566ac9695ab09728e867e98f;
static PyCodeObject *code_objects_64f8b60b13e957a17211cb419c9d43a1;
static PyCodeObject *code_objects_4772da63c3c472e305f2a912fc980c0c;
static PyCodeObject *code_objects_e94a9e46ade0cf11452acfcb823e0c7c;
static PyCodeObject *code_objects_c42357ac65cebe5b0cbb00b510e2d962;
static PyCodeObject *code_objects_26a2197331ea825db647f1868ee2e20f;
static PyCodeObject *code_objects_563477cb4332a994906ca0adaf88c053;
static PyCodeObject *code_objects_fcada7591fa50d5a7e778c76efea3ddc;
static PyCodeObject *code_objects_697c401a7c057cba89b4679757c16e91;
static PyCodeObject *code_objects_7201ba08a09bc0d7505c041073cb2378;
static PyCodeObject *code_objects_8789e77582980b7c0ea98cd1244a1aa9;
static PyCodeObject *code_objects_97f527d77aec05737be65bbc14731acb;
static PyCodeObject *code_objects_b53a71a6086cf7a5167393a9d539c2a3;
static PyCodeObject *code_objects_303ba7adc2017e0eb39e9167f83ca2e6;
static PyCodeObject *code_objects_ae26024bc82a2c7df884509282b56763;
static PyCodeObject *code_objects_80ee0710ff6af00f8fb61f2677d9b5be;
static PyCodeObject *code_objects_5f64da6686788a77b9102d002b5ddca2;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_b6daca52f9aeb3c9682ad1796a106908); CHECK_OBJECT(module_filename_obj);
code_objects_daafc23acd5b504a5d914f74295e68fe = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_85c5e9a2995b6f65f018ee24a74035ae, mod_consts.const_str_digest_85c5e9a2995b6f65f018ee24a74035ae, NULL, NULL, 0, 0, 0);
code_objects_0edd0b54566ac9695ab09728e867e98f = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_64f8b60b13e957a17211cb419c9d43a1 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__AuthConfig_to_mldev, mod_consts.const_str_plain__AuthConfig_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_4772da63c3c472e305f2a912fc980c0c = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__Blob_to_mldev, mod_consts.const_str_plain__Blob_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_e94a9e46ade0cf11452acfcb823e0c7c = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__Content_to_mldev, mod_consts.const_str_plain__Content_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_c42357ac65cebe5b0cbb00b510e2d962 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev, mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev, mod_consts.const_tuple_d582334ce7e375c00516a4d67783463e_tuple, NULL, 3, 0, 0);
code_objects_26a2197331ea825db647f1868ee2e20f = MAKE_CODE_OBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev, mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev, mod_consts.const_tuple_d582334ce7e375c00516a4d67783463e_tuple, NULL, 3, 0, 0);
code_objects_563477cb4332a994906ca0adaf88c053 = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__CreateAuthTokenParameters_to_vertex, mod_consts.const_str_plain__CreateAuthTokenParameters_to_vertex, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_fcada7591fa50d5a7e778c76efea3ddc = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__FileData_to_mldev, mod_consts.const_str_plain__FileData_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_697c401a7c057cba89b4679757c16e91 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__FunctionCall_to_mldev, mod_consts.const_str_plain__FunctionCall_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_7201ba08a09bc0d7505c041073cb2378 = MAKE_CODE_OBJECT(module_filename_obj, 250, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GoogleMaps_to_mldev, mod_consts.const_str_plain__GoogleMaps_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_8789e77582980b7c0ea98cd1244a1aa9 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__GoogleSearch_to_mldev, mod_consts.const_str_plain__GoogleSearch_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_97f527d77aec05737be65bbc14731acb = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__LiveConnectConfig_to_mldev, mod_consts.const_str_plain__LiveConnectConfig_to_mldev, mod_consts.const_tuple_d582334ce7e375c00516a4d67783463e_tuple, NULL, 3, 0, 0);
code_objects_b53a71a6086cf7a5167393a9d539c2a3 = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__LiveConnectConstraints_to_mldev, mod_consts.const_str_plain__LiveConnectConstraints_to_mldev, mod_consts.const_tuple_d582334ce7e375c00516a4d67783463e_tuple, NULL, 3, 0, 0);
code_objects_303ba7adc2017e0eb39e9167f83ca2e6 = MAKE_CODE_OBJECT(module_filename_obj, 512, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__Part_to_mldev, mod_consts.const_str_plain__Part_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_ae26024bc82a2c7df884509282b56763 = MAKE_CODE_OBJECT(module_filename_obj, 588, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__SafetySetting_to_mldev, mod_consts.const_str_plain__SafetySetting_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_80ee0710ff6af00f8fb61f2677d9b5be = MAKE_CODE_OBJECT(module_filename_obj, 608, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__SessionResumptionConfig_to_mldev, mod_consts.const_str_plain__SessionResumptionConfig_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
code_objects_5f64da6686788a77b9102d002b5ddca2 = MAKE_CODE_OBJECT(module_filename_obj, 625, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts.const_str_plain__Tool_to_mldev, mod_consts.const_str_plain__Tool_to_mldev, mod_consts.const_tuple_21d332c911c3a2235d61476019cf969b_tuple, NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__14__Part_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__17__Tool_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__3__Blob_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__4__Content_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__8__FileData_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_0edd0b54566ac9695ab09728e867e98f, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 31;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_language_codes);
frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev->m_frame.f_lineno = 31;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_202818aa0afaad62c03f4ae5e300deec;
frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev->m_frame.f_lineno = 32;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 32;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_64f8b60b13e957a17211cb419c9d43a1, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 45;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_api_key);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 45;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_apiKey);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_api_key);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 46;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 46;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 48;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_api_key_config);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 48;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_33d0a6377f2906dd8d6df242af4ae08b;
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 49;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 49;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_auth_type);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 54;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_deb3e02eba685b4a3dc9030d2bbdd174;
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 55;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 55;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_12 = par_from_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_google_service_account_config);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 60;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 60;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_f9553429fc54d072271e31c28ca758c7;
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 61;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 61;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_14 = par_from_object;
tmp_args_element_value_15 = MAKE_LIST1(tstate, mod_consts.const_str_plain_http_basic_auth_config);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 66;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 66;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_4;
PyObject *tmp_make_exception_arg_4;
tmp_make_exception_arg_4 = mod_consts.const_str_digest_3fe49994fd0203b7afbab58ec31868f8;
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 67;
tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_4);
assert(!(tmp_raise_type_4 == NULL));
exception_state.exception_value = tmp_raise_type_4;
exception_lineno = 67;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_16;
PyObject *tmp_args_element_value_17;
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_16 = par_from_object;
tmp_args_element_value_17 = MAKE_LIST1(tstate, mod_consts.const_str_plain_oauth_config);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 72;
{
    PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
    tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_17);
Py_DECREF(tmp_args_element_value_17);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 72;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_raise_type_5;
PyObject *tmp_make_exception_arg_5;
tmp_make_exception_arg_5 = mod_consts.const_str_digest_7ad9b469721c2469fe07e2cd7b0ac93d;
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 73;
tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_5);
assert(!(tmp_raise_type_5 == NULL));
exception_state.exception_value = tmp_raise_type_5;
exception_lineno = 73;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_called_value_9 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_18 = par_from_object;
tmp_args_element_value_19 = MAKE_LIST1(tstate, mod_consts.const_str_plain_oidc_config);
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 78;
{
    PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 78;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_6;
PyObject *tmp_make_exception_arg_6;
tmp_make_exception_arg_6 = mod_consts.const_str_digest_e60f51d0b76be7f3474812ea92f9190f;
frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame.f_lineno = 79;
tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_6);
assert(!(tmp_raise_type_6 == NULL));
exception_state.exception_value = tmp_raise_type_6;
exception_lineno = 79;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_7:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__3__Blob_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_4772da63c3c472e305f2a912fc980c0c, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_data);
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 92;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 92;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_data);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_data);
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 93;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 93;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_display_name);
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 95;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 95;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_be606c5b7a98ad9187cec3ccb563a9b8;
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 96;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 96;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mime_type);
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 101;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 101;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mimeType);
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mime_type);
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame.f_lineno = 102;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 102;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__3__Blob_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__4__Content_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
PyObject *outline_0_var_item = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_e94a9e46ade0cf11452acfcb823e0c7c, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_parts);
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame.f_lineno = 112;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 112;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_parts);
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_parts);
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame.f_lineno = 118;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 118;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 116;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_item;
    outline_0_var_item = tmp_assign_source_5;
    Py_INCREF(outline_0_var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$_Part_to_mldev(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Part_to_mldev);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
CHECK_OBJECT(outline_0_var_item);
tmp_args_element_value_8 = outline_0_var_item;
if (var_to_object == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 117;
type_description_1 = "ooo";
    goto try_except_handler_3;
}

tmp_args_element_value_9 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame.f_lineno = 117;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 117;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 116;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_args_element_value_5 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_args_element_value_5);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 116;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame.f_lineno = 113;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 113;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_role);
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame.f_lineno = 122;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 122;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_role);
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_role);
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame.f_lineno = 123;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 123;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 125;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_to_object;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__4__Content_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_client = python_pars[0];
PyObject *par_from_object = python_pars[1];
PyObject *par_parent_object = python_pars[2];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_c42357ac65cebe5b0cbb00b510e2d962, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 135;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_expire_time);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 135;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 135;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 136;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_3 = par_parent_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_expireTime);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 136;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_expire_time);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 136;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 136;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 136;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_new_session_expire_time);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 138;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 138;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_10 = par_parent_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_newSessionExpireTime);
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_new_session_expire_time);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 142;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 142;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 139;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 139;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_uses);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 145;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 145;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 146;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_17 = par_parent_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_uses);
tmp_called_value_9 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 146;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_uses);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 146;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 146;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 146;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 146;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_value_10 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 148;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_live_connect_constraints);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 148;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 148;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyObject *tmp_args_element_value_31;
tmp_called_value_11 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 149;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_24 = par_parent_object;
tmp_args_element_value_25 = MAKE_LIST1(tstate, mod_consts.const_str_plain_bidiGenerateContentSetup);
tmp_called_value_12 = module_var_accessor_google$genai$_tokens_converters$_LiveConnectConstraints_to_mldev(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LiveConnectConstraints_to_mldev);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 152;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_client);
tmp_args_element_value_27 = par_api_client;
tmp_called_value_13 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 154;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_29 = par_from_object;
tmp_args_element_value_30 = MAKE_LIST1(tstate, mod_consts.const_str_plain_live_connect_constraints);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 154;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_args_element_value_28 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_args_element_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_25);

exception_lineno = 154;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_31 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 152;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_31};
    tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_25);

exception_lineno = 152;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 149;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 149;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
tmp_called_value_14 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 159;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_32 = par_from_object;
tmp_args_element_value_33 = MAKE_LIST1(tstate, mod_consts.const_str_plain_lock_additional_fields);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 159;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 159;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
tmp_called_value_15 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 160;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_34 = par_parent_object;
tmp_args_element_value_35 = MAKE_LIST1(tstate, mod_consts.const_str_plain_fieldMask);
tmp_called_value_16 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_35);

exception_lineno = 163;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_37 = par_from_object;
tmp_args_element_value_38 = MAKE_LIST1(tstate, mod_consts.const_str_plain_lock_additional_fields);
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 163;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_args_element_value_36 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_args_element_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_35);

exception_lineno = 163;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame.f_lineno = 160;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 160;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev,
    type_description_1,
    par_api_client,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_client = python_pars[0];
PyObject *par_from_object = python_pars[1];
PyObject *par_parent_object = python_pars[2];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_26a2197331ea825db647f1868ee2e20f, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 175;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev->m_frame.f_lineno = 175;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 175;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
PyObject *tmp_args_element_value_10;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$_CreateAuthTokenConfig_to_mldev(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_client);
tmp_args_element_value_6 = par_api_client;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev->m_frame.f_lineno = 180;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 180;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev->m_frame.f_lineno = 179;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_10};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 179;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev->m_frame.f_lineno = 176;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 176;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev,
    type_description_1,
    par_api_client,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex = MAKE_FUNCTION_FRAME(tstate, code_objects_563477cb4332a994906ca0adaf88c053, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex = cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 192;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex->m_frame.f_lineno = 192;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 192;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_bb08004e03e6917c7dd4d572c75eea51;
frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex->m_frame.f_lineno = 193;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 193;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex == cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex);
    cache_frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__8__FileData_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_fcada7591fa50d5a7e778c76efea3ddc, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 206;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_display_name);
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 206;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 206;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_be606c5b7a98ad9187cec3ccb563a9b8;
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 207;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 207;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 212;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_3 = par_from_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_file_uri);
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 212;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 212;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_5 = var_to_object;
tmp_args_element_value_6 = MAKE_LIST1(tstate, mod_consts.const_str_plain_fileUri);
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_6);

exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_file_uri);
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 213;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 213;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 213;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 215;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mime_type);
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 215;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 215;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 216;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mimeType);
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 216;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mime_type);
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 216;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 216;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame.f_lineno = 216;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 216;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__8__FileData_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_697c401a7c057cba89b4679757c16e91, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 226;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_id);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 226;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 226;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 227;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_id);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 227;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_id);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 227;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 227;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 227;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 227;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 229;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, const_str_plain_args);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 229;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 229;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 230;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, const_str_plain_args);
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 230;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, const_str_plain_args);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 230;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 230;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 230;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 232;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 232;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, const_str_plain_name);
tmp_called_value_9 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, const_str_plain_name);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 233;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 233;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 233;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_value_10 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_partial_args);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 235;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 235;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_ebaea9ddfbffdaa94ccd5ca0cf4723a5;
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 236;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 236;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
tmp_called_value_11 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_24 = par_from_object;
tmp_args_element_value_25 = MAKE_LIST1(tstate, mod_consts.const_str_plain_will_continue);
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 241;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 241;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_1775d395d81443c5e7f1c8d9c4e403ff;
frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame.f_lineno = 242;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 242;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_5:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_7201ba08a09bc0d7505c041073cb2378, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 255;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_auth_config);
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame.f_lineno = 255;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 255;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_7;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_authConfig);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$_AuthConfig_to_mldev(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AuthConfig_to_mldev);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 259;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 259;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_7 = par_from_object;
tmp_args_element_value_8 = MAKE_LIST1(tstate, mod_consts.const_str_plain_auth_config);
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame.f_lineno = 259;
{
    PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
    tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_8);
Py_DECREF(tmp_args_element_value_8);
if (tmp_args_element_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 259;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_9 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame.f_lineno = 259;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_9};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 259;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame.f_lineno = 256;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 256;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 262;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_enable_widget);
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame.f_lineno = 262;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 262;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_enableWidget);
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_enable_widget);
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame.f_lineno = 263;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame.f_lineno = 263;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 263;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_8789e77582980b7c0ea98cd1244a1aa9, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 273;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_search_types);
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 273;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 273;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 274;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_searchTypes);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 274;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_search_types);
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 274;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 274;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 274;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 276;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_blocking_confidence);
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 276;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 276;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_8f4342e9314e008de8095a2acf4f0d18;
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 277;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 277;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_exclude_domains);
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 282;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 282;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_172274efa5ada221a55343a0f6a68ee1;
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 283;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 283;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 288;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_12 = par_from_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_time_range_filter);
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 288;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 288;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_7;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_14;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_14 = var_to_object;
tmp_args_element_value_15 = MAKE_LIST1(tstate, mod_consts.const_str_plain_timeRangeFilter);
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_15);

exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_17 = par_from_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_time_range_filter);
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 290;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_15);

exception_lineno = 290;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame.f_lineno = 289;
{
    PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_15);
Py_DECREF(tmp_args_element_value_15);
CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 289;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_4:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_client = python_pars[0];
PyObject *par_from_object = python_pars[1];
PyObject *par_parent_object = python_pars[2];
PyObject *var_to_object = NULL;
PyObject *outline_0_var_item = NULL;
PyObject *outline_1_var_item = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
PyObject *tmp_return_value = NULL;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_97f527d77aec05737be65bbc14731acb, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 303;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_generation_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 303;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 303;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 304;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_3 = par_parent_object;
tmp_args_element_value_4 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 307;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_generation_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 307;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 307;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 304;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 304;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 310;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response_modalities);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 310;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 310;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 311;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_10 = par_parent_object;
tmp_args_element_value_11 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_responseModalities);
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 314;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_response_modalities);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 314;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 314;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 311;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 311;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 317;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_temperature);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 317;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 317;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 318;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_17 = par_parent_object;
tmp_args_element_value_18 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_temperature);
tmp_called_value_9 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 321;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_temperature);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 321;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 321;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 318;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 318;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_value_10 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 324;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_top_p);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 324;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 324;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_27;
PyObject *tmp_args_element_value_28;
tmp_called_value_11 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 325;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_24 = par_parent_object;
tmp_args_element_value_25 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_topP);
tmp_called_value_12 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 328;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_27 = par_from_object;
tmp_args_element_value_28 = MAKE_LIST1(tstate, mod_consts.const_str_plain_top_p);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 328;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
    tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_28);
Py_DECREF(tmp_args_element_value_28);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_25);

exception_lineno = 328;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 325;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 325;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_13 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 331;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_29 = par_from_object;
tmp_args_element_value_30 = MAKE_LIST1(tstate, mod_consts.const_str_plain_top_k);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 331;
{
    PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 331;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_14;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
tmp_called_value_14 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_31 = par_parent_object;
tmp_args_element_value_32 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_topK);
tmp_called_value_15 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_32);

exception_lineno = 335;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_34 = par_from_object;
tmp_args_element_value_35 = MAKE_LIST1(tstate, mod_consts.const_str_plain_top_k);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 335;
{
    PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
    tmp_args_element_value_33 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_args_element_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_32);

exception_lineno = 335;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 332;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 332;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_36;
PyObject *tmp_args_element_value_37;
tmp_called_value_16 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 338;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_36 = par_from_object;
tmp_args_element_value_37 = MAKE_LIST1(tstate, mod_consts.const_str_plain_max_output_tokens);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 338;
{
    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37};
    tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_37);
Py_DECREF(tmp_args_element_value_37);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 338;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_args_element_value_40;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_41;
PyObject *tmp_args_element_value_42;
tmp_called_value_17 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 339;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_38 = par_parent_object;
tmp_args_element_value_39 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_maxOutputTokens);
tmp_called_value_18 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_39);

exception_lineno = 342;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_41 = par_from_object;
tmp_args_element_value_42 = MAKE_LIST1(tstate, mod_consts.const_str_plain_max_output_tokens);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 342;
{
    PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
    tmp_args_element_value_40 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_42);
Py_DECREF(tmp_args_element_value_42);
if (tmp_args_element_value_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_39);

exception_lineno = 342;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 339;
{
    PyObject *call_args[] = {tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
CHECK_OBJECT(tmp_args_element_value_40);
Py_DECREF(tmp_args_element_value_40);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 339;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_43;
PyObject *tmp_args_element_value_44;
tmp_called_value_19 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 345;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_43 = par_from_object;
tmp_args_element_value_44 = MAKE_LIST1(tstate, mod_consts.const_str_plain_media_resolution);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 345;
{
    PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
    tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 345;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_20;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
PyObject *tmp_args_element_value_47;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_48;
PyObject *tmp_args_element_value_49;
tmp_called_value_20 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 346;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_45 = par_parent_object;
tmp_args_element_value_46 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_mediaResolution);
tmp_called_value_21 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_46);

exception_lineno = 349;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_48 = par_from_object;
tmp_args_element_value_49 = MAKE_LIST1(tstate, mod_consts.const_str_plain_media_resolution);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 349;
{
    PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
    tmp_args_element_value_47 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_args_element_value_49);
Py_DECREF(tmp_args_element_value_49);
if (tmp_args_element_value_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_46);

exception_lineno = 349;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 346;
{
    PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46, tmp_args_element_value_47};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 346;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_50;
PyObject *tmp_args_element_value_51;
tmp_called_value_22 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 352;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_50 = par_from_object;
tmp_args_element_value_51 = MAKE_LIST1(tstate, mod_consts.const_str_plain_seed);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 352;
{
    PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
    tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

CHECK_OBJECT(tmp_args_element_value_51);
Py_DECREF(tmp_args_element_value_51);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 352;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_23;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_52;
PyObject *tmp_args_element_value_53;
PyObject *tmp_args_element_value_54;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_55;
PyObject *tmp_args_element_value_56;
tmp_called_value_23 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 353;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_52 = par_parent_object;
tmp_args_element_value_53 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_seed);
tmp_called_value_24 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_53);

exception_lineno = 356;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_55 = par_from_object;
tmp_args_element_value_56 = MAKE_LIST1(tstate, mod_consts.const_str_plain_seed);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 356;
{
    PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
    tmp_args_element_value_54 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_args_element_value_56);
Py_DECREF(tmp_args_element_value_56);
if (tmp_args_element_value_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_53);

exception_lineno = 356;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 353;
{
    PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53, tmp_args_element_value_54};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_args_element_value_53);
Py_DECREF(tmp_args_element_value_53);
CHECK_OBJECT(tmp_args_element_value_54);
Py_DECREF(tmp_args_element_value_54);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 353;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_57;
PyObject *tmp_args_element_value_58;
tmp_called_value_25 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 359;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_57 = par_from_object;
tmp_args_element_value_58 = MAKE_LIST1(tstate, mod_consts.const_str_plain_speech_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 359;
{
    PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
    tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_args_element_value_58);
Py_DECREF(tmp_args_element_value_58);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 359;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_26;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_59;
PyObject *tmp_args_element_value_60;
PyObject *tmp_args_element_value_61;
PyObject *tmp_called_value_27;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_62;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_63;
PyObject *tmp_args_element_value_64;
tmp_called_value_26 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 360;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_59 = par_parent_object;
tmp_args_element_value_60 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_speechConfig);
tmp_expression_value_1 = module_var_accessor_google$genai$_tokens_converters$t(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_60);

exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_t_live_speech_config);
if (tmp_called_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_60);

exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_28 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_60);
Py_DECREF(tmp_called_value_27);

exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_63 = par_from_object;
tmp_args_element_value_64 = MAKE_LIST1(tstate, mod_consts.const_str_plain_speech_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 363;
{
    PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
    tmp_args_element_value_62 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_args_element_value_64);
Py_DECREF(tmp_args_element_value_64);
if (tmp_args_element_value_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_60);
Py_DECREF(tmp_called_value_27);

exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 363;
tmp_args_element_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_62);
CHECK_OBJECT(tmp_called_value_27);
Py_DECREF(tmp_called_value_27);
CHECK_OBJECT(tmp_args_element_value_62);
Py_DECREF(tmp_args_element_value_62);
if (tmp_args_element_value_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_60);

exception_lineno = 363;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 360;
{
    PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_args_element_value_60);
Py_DECREF(tmp_args_element_value_60);
CHECK_OBJECT(tmp_args_element_value_61);
Py_DECREF(tmp_args_element_value_61);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 360;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_65;
PyObject *tmp_args_element_value_66;
tmp_called_value_29 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 366;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_65 = par_from_object;
tmp_args_element_value_66 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thinking_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 366;
{
    PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
    tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
}

CHECK_OBJECT(tmp_args_element_value_66);
Py_DECREF(tmp_args_element_value_66);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 366;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_30;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_67;
PyObject *tmp_args_element_value_68;
PyObject *tmp_args_element_value_69;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_70;
PyObject *tmp_args_element_value_71;
tmp_called_value_30 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 367;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_67 = par_parent_object;
tmp_args_element_value_68 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_thinkingConfig);
tmp_called_value_31 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_68);

exception_lineno = 370;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_70 = par_from_object;
tmp_args_element_value_71 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thinking_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 370;
{
    PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71};
    tmp_args_element_value_69 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
}

CHECK_OBJECT(tmp_args_element_value_71);
Py_DECREF(tmp_args_element_value_71);
if (tmp_args_element_value_69 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_68);

exception_lineno = 370;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 367;
{
    PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
    tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_30, call_args);
}

CHECK_OBJECT(tmp_args_element_value_68);
Py_DECREF(tmp_args_element_value_68);
CHECK_OBJECT(tmp_args_element_value_69);
Py_DECREF(tmp_args_element_value_69);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 367;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_72;
PyObject *tmp_args_element_value_73;
tmp_called_value_32 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 373;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_72 = par_from_object;
tmp_args_element_value_73 = MAKE_LIST1(tstate, mod_consts.const_str_plain_enable_affective_dialog);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 373;
{
    PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
    tmp_cmp_expr_left_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_32, call_args);
}

CHECK_OBJECT(tmp_args_element_value_73);
Py_DECREF(tmp_args_element_value_73);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 373;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_33;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_74;
PyObject *tmp_args_element_value_75;
PyObject *tmp_args_element_value_76;
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_77;
PyObject *tmp_args_element_value_78;
tmp_called_value_33 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 374;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_74 = par_parent_object;
tmp_args_element_value_75 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_enableAffectiveDialog);
tmp_called_value_34 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_75);

exception_lineno = 377;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_77 = par_from_object;
tmp_args_element_value_78 = MAKE_LIST1(tstate, mod_consts.const_str_plain_enable_affective_dialog);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 377;
{
    PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78};
    tmp_args_element_value_76 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
}

CHECK_OBJECT(tmp_args_element_value_78);
Py_DECREF(tmp_args_element_value_78);
if (tmp_args_element_value_76 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_75);

exception_lineno = 377;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 374;
{
    PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_33, call_args);
}

CHECK_OBJECT(tmp_args_element_value_75);
Py_DECREF(tmp_args_element_value_75);
CHECK_OBJECT(tmp_args_element_value_76);
Py_DECREF(tmp_args_element_value_76);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 374;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_called_value_35;
PyObject *tmp_args_element_value_79;
PyObject *tmp_args_element_value_80;
tmp_called_value_35 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 380;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_79 = par_from_object;
tmp_args_element_value_80 = MAKE_LIST1(tstate, mod_consts.const_str_plain_system_instruction);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 380;
{
    PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80};
    tmp_cmp_expr_left_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_35, call_args);
}

CHECK_OBJECT(tmp_args_element_value_80);
Py_DECREF(tmp_args_element_value_80);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 380;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_36;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_81;
PyObject *tmp_args_element_value_82;
PyObject *tmp_args_element_value_83;
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_84;
PyObject *tmp_called_value_38;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_85;
PyObject *tmp_called_value_39;
PyObject *tmp_args_element_value_86;
PyObject *tmp_args_element_value_87;
PyObject *tmp_args_element_value_88;
tmp_called_value_36 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 381;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_81 = par_parent_object;
tmp_args_element_value_82 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_systemInstruction);
tmp_called_value_37 = module_var_accessor_google$genai$_tokens_converters$_Content_to_mldev(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Content_to_mldev);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_82);

exception_lineno = 384;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_google$genai$_tokens_converters$t(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_82);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_t_content);
if (tmp_called_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_82);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_39 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_82);
Py_DECREF(tmp_called_value_38);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_86 = par_from_object;
tmp_args_element_value_87 = MAKE_LIST1(tstate, mod_consts.const_str_plain_system_instruction);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 385;
{
    PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
    tmp_args_element_value_85 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
}

CHECK_OBJECT(tmp_args_element_value_87);
Py_DECREF(tmp_args_element_value_87);
if (tmp_args_element_value_85 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_82);
Py_DECREF(tmp_called_value_38);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 385;
tmp_args_element_value_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_85);
CHECK_OBJECT(tmp_called_value_38);
Py_DECREF(tmp_called_value_38);
CHECK_OBJECT(tmp_args_element_value_85);
Py_DECREF(tmp_args_element_value_85);
if (tmp_args_element_value_84 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_82);

exception_lineno = 385;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_88 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 384;
{
    PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_88};
    tmp_args_element_value_83 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
}

CHECK_OBJECT(tmp_args_element_value_84);
Py_DECREF(tmp_args_element_value_84);
if (tmp_args_element_value_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_82);

exception_lineno = 384;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 381;
{
    PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82, tmp_args_element_value_83};
    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_36, call_args);
}

CHECK_OBJECT(tmp_args_element_value_82);
Py_DECREF(tmp_args_element_value_82);
CHECK_OBJECT(tmp_args_element_value_83);
Py_DECREF(tmp_args_element_value_83);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 381;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
branch_no_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_called_value_40;
PyObject *tmp_args_element_value_89;
PyObject *tmp_args_element_value_90;
tmp_called_value_40 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 389;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_89 = par_from_object;
tmp_args_element_value_90 = MAKE_LIST1(tstate, mod_consts.const_str_plain_tools);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 389;
{
    PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_90};
    tmp_cmp_expr_left_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
}

CHECK_OBJECT(tmp_args_element_value_90);
Py_DECREF(tmp_args_element_value_90);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 389;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_13 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_41;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_91;
PyObject *tmp_args_element_value_92;
PyObject *tmp_args_element_value_93;
tmp_called_value_41 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_91 = par_parent_object;
tmp_args_element_value_92 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_tools);
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_42;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_94;
PyObject *tmp_args_element_value_95;
PyObject *tmp_called_value_43;
PyObject *tmp_args_element_value_96;
PyObject *tmp_args_element_value_97;
tmp_expression_value_3 = module_var_accessor_google$genai$_tokens_converters$t(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts.const_str_plain_t_tools);
if (tmp_called_value_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_api_client);
tmp_args_element_value_94 = par_api_client;
tmp_called_value_43 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_called_value_42);

exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_96 = par_from_object;
tmp_args_element_value_97 = MAKE_LIST1(tstate, mod_consts.const_str_plain_tools);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 395;
{
    PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
    tmp_args_element_value_95 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_43, call_args);
}

CHECK_OBJECT(tmp_args_element_value_97);
Py_DECREF(tmp_args_element_value_97);
if (tmp_args_element_value_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_42);

exception_lineno = 395;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 395;
{
    PyObject *call_args[] = {tmp_args_element_value_94, tmp_args_element_value_95};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
}

CHECK_OBJECT(tmp_called_value_42);
Py_DECREF(tmp_called_value_42);
CHECK_OBJECT(tmp_args_element_value_95);
Py_DECREF(tmp_args_element_value_95);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 395;
type_description_1 = "oooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 393;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_item;
    outline_0_var_item = tmp_assign_source_5;
    Py_INCREF(outline_0_var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
PyObject *tmp_called_value_44;
PyObject *tmp_args_element_value_98;
PyObject *tmp_called_value_45;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_99;
PyObject *tmp_args_element_value_100;
PyObject *tmp_args_element_value_101;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
tmp_called_value_44 = module_var_accessor_google$genai$_tokens_converters$_Tool_to_mldev(tstate);
if (unlikely(tmp_called_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Tool_to_mldev);
}

if (tmp_called_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_expression_value_4 = module_var_accessor_google$genai$_tokens_converters$t(tstate);
if (unlikely(tmp_expression_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
}

if (tmp_expression_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_t_tool);
if (tmp_called_value_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
if (par_api_client == NULL) {
Py_DECREF(tmp_called_value_45);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_api_client);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 394;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_args_element_value_99 = par_api_client;
CHECK_OBJECT(outline_0_var_item);
tmp_args_element_value_100 = outline_0_var_item;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 394;
{
    PyObject *call_args[] = {tmp_args_element_value_99, tmp_args_element_value_100};
    tmp_args_element_value_98 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_45, call_args);
}

CHECK_OBJECT(tmp_called_value_45);
Py_DECREF(tmp_called_value_45);
if (tmp_args_element_value_98 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
if (var_to_object == NULL) {
Py_DECREF(tmp_args_element_value_98);
FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 394;
type_description_1 = "oooo";
    goto try_except_handler_3;
}

tmp_args_element_value_101 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 394;
{
    PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_101};
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_44, call_args);
}

CHECK_OBJECT(tmp_args_element_value_98);
Py_DECREF(tmp_args_element_value_98);
if (tmp_append_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 394;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 393;
type_description_1 = "oooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_args_element_value_93 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_args_element_value_93);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 393;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 390;
{
    PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92, tmp_args_element_value_93};
    tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
}

CHECK_OBJECT(tmp_args_element_value_92);
Py_DECREF(tmp_args_element_value_92);
CHECK_OBJECT(tmp_args_element_value_93);
Py_DECREF(tmp_args_element_value_93);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 390;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
branch_no_13:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_called_value_46;
PyObject *tmp_args_element_value_102;
PyObject *tmp_args_element_value_103;
tmp_called_value_46 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 399;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_102 = par_from_object;
tmp_args_element_value_103 = MAKE_LIST1(tstate, mod_consts.const_str_plain_session_resumption);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 399;
{
    PyObject *call_args[] = {tmp_args_element_value_102, tmp_args_element_value_103};
    tmp_cmp_expr_left_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_46, call_args);
}

CHECK_OBJECT(tmp_args_element_value_103);
Py_DECREF(tmp_args_element_value_103);
if (tmp_cmp_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 399;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_14 = Py_None;
tmp_condition_result_14 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_value_47;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_104;
PyObject *tmp_args_element_value_105;
PyObject *tmp_args_element_value_106;
PyObject *tmp_called_value_48;
PyObject *tmp_args_element_value_107;
PyObject *tmp_called_value_49;
PyObject *tmp_args_element_value_108;
PyObject *tmp_args_element_value_109;
PyObject *tmp_args_element_value_110;
tmp_called_value_47 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 400;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_104 = par_parent_object;
tmp_args_element_value_105 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_sessionResumption);
tmp_called_value_48 = module_var_accessor_google$genai$_tokens_converters$_SessionResumptionConfig_to_mldev(tstate);
if (unlikely(tmp_called_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SessionResumptionConfig_to_mldev);
}

if (tmp_called_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_105);

exception_lineno = 403;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_49 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_49 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_49 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_105);

exception_lineno = 404;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_108 = par_from_object;
tmp_args_element_value_109 = MAKE_LIST1(tstate, mod_consts.const_str_plain_session_resumption);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 404;
{
    PyObject *call_args[] = {tmp_args_element_value_108, tmp_args_element_value_109};
    tmp_args_element_value_107 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_49, call_args);
}

CHECK_OBJECT(tmp_args_element_value_109);
Py_DECREF(tmp_args_element_value_109);
if (tmp_args_element_value_107 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_105);

exception_lineno = 404;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {
Py_DECREF(tmp_args_element_value_105);
Py_DECREF(tmp_args_element_value_107);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 404;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_110 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 403;
{
    PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_110};
    tmp_args_element_value_106 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_48, call_args);
}

CHECK_OBJECT(tmp_args_element_value_107);
Py_DECREF(tmp_args_element_value_107);
if (tmp_args_element_value_106 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_105);

exception_lineno = 403;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 400;
{
    PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105, tmp_args_element_value_106};
    tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_47, call_args);
}

CHECK_OBJECT(tmp_args_element_value_105);
Py_DECREF(tmp_args_element_value_105);
CHECK_OBJECT(tmp_args_element_value_106);
Py_DECREF(tmp_args_element_value_106);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 400;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
branch_no_14:;
{
bool tmp_condition_result_15;
PyObject *tmp_cmp_expr_left_15;
PyObject *tmp_cmp_expr_right_15;
PyObject *tmp_called_value_50;
PyObject *tmp_args_element_value_111;
PyObject *tmp_args_element_value_112;
tmp_called_value_50 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 408;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_111 = par_from_object;
tmp_args_element_value_112 = MAKE_LIST1(tstate, mod_consts.const_str_plain_input_audio_transcription);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 408;
{
    PyObject *call_args[] = {tmp_args_element_value_111, tmp_args_element_value_112};
    tmp_cmp_expr_left_15 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_50, call_args);
}

CHECK_OBJECT(tmp_args_element_value_112);
Py_DECREF(tmp_args_element_value_112);
if (tmp_cmp_expr_left_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 408;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_15 = Py_None;
tmp_condition_result_15 = (tmp_cmp_expr_left_15 != tmp_cmp_expr_right_15) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_15);
Py_DECREF(tmp_cmp_expr_left_15);
if (tmp_condition_result_15 != false) {
    goto branch_yes_15;
} else {
    goto branch_no_15;
}
}
branch_yes_15:;
{
PyObject *tmp_called_value_51;
PyObject *tmp_call_result_15;
PyObject *tmp_args_element_value_113;
PyObject *tmp_args_element_value_114;
PyObject *tmp_args_element_value_115;
PyObject *tmp_called_value_52;
PyObject *tmp_args_element_value_116;
PyObject *tmp_called_value_53;
PyObject *tmp_args_element_value_117;
PyObject *tmp_args_element_value_118;
PyObject *tmp_args_element_value_119;
tmp_called_value_51 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 409;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_113 = par_parent_object;
tmp_args_element_value_114 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_inputAudioTranscription);
tmp_called_value_52 = module_var_accessor_google$genai$_tokens_converters$_AudioTranscriptionConfig_to_mldev(tstate);
if (unlikely(tmp_called_value_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
}

if (tmp_called_value_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_114);

exception_lineno = 412;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_53 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_114);

exception_lineno = 413;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_117 = par_from_object;
tmp_args_element_value_118 = MAKE_LIST1(tstate, mod_consts.const_str_plain_input_audio_transcription);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 413;
{
    PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118};
    tmp_args_element_value_116 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_53, call_args);
}

CHECK_OBJECT(tmp_args_element_value_118);
Py_DECREF(tmp_args_element_value_118);
if (tmp_args_element_value_116 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_114);

exception_lineno = 413;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {
Py_DECREF(tmp_args_element_value_114);
Py_DECREF(tmp_args_element_value_116);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 413;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_119 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 412;
{
    PyObject *call_args[] = {tmp_args_element_value_116, tmp_args_element_value_119};
    tmp_args_element_value_115 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_52, call_args);
}

CHECK_OBJECT(tmp_args_element_value_116);
Py_DECREF(tmp_args_element_value_116);
if (tmp_args_element_value_115 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_114);

exception_lineno = 412;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 409;
{
    PyObject *call_args[] = {tmp_args_element_value_113, tmp_args_element_value_114, tmp_args_element_value_115};
    tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_51, call_args);
}

CHECK_OBJECT(tmp_args_element_value_114);
Py_DECREF(tmp_args_element_value_114);
CHECK_OBJECT(tmp_args_element_value_115);
Py_DECREF(tmp_args_element_value_115);
if (tmp_call_result_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 409;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_15);
Py_DECREF(tmp_call_result_15);
}
branch_no_15:;
{
bool tmp_condition_result_16;
PyObject *tmp_cmp_expr_left_16;
PyObject *tmp_cmp_expr_right_16;
PyObject *tmp_called_value_54;
PyObject *tmp_args_element_value_120;
PyObject *tmp_args_element_value_121;
tmp_called_value_54 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 417;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_120 = par_from_object;
tmp_args_element_value_121 = MAKE_LIST1(tstate, mod_consts.const_str_plain_output_audio_transcription);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 417;
{
    PyObject *call_args[] = {tmp_args_element_value_120, tmp_args_element_value_121};
    tmp_cmp_expr_left_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_54, call_args);
}

CHECK_OBJECT(tmp_args_element_value_121);
Py_DECREF(tmp_args_element_value_121);
if (tmp_cmp_expr_left_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 417;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_16 = Py_None;
tmp_condition_result_16 = (tmp_cmp_expr_left_16 != tmp_cmp_expr_right_16) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_16);
Py_DECREF(tmp_cmp_expr_left_16);
if (tmp_condition_result_16 != false) {
    goto branch_yes_16;
} else {
    goto branch_no_16;
}
}
branch_yes_16:;
{
PyObject *tmp_called_value_55;
PyObject *tmp_call_result_16;
PyObject *tmp_args_element_value_122;
PyObject *tmp_args_element_value_123;
PyObject *tmp_args_element_value_124;
PyObject *tmp_called_value_56;
PyObject *tmp_args_element_value_125;
PyObject *tmp_called_value_57;
PyObject *tmp_args_element_value_126;
PyObject *tmp_args_element_value_127;
PyObject *tmp_args_element_value_128;
tmp_called_value_55 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_122 = par_parent_object;
tmp_args_element_value_123 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_outputAudioTranscription);
tmp_called_value_56 = module_var_accessor_google$genai$_tokens_converters$_AudioTranscriptionConfig_to_mldev(tstate);
if (unlikely(tmp_called_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev);
}

if (tmp_called_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_123);

exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_57 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_57 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_57 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_123);

exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_126 = par_from_object;
tmp_args_element_value_127 = MAKE_LIST1(tstate, mod_consts.const_str_plain_output_audio_transcription);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 422;
{
    PyObject *call_args[] = {tmp_args_element_value_126, tmp_args_element_value_127};
    tmp_args_element_value_125 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_57, call_args);
}

CHECK_OBJECT(tmp_args_element_value_127);
Py_DECREF(tmp_args_element_value_127);
if (tmp_args_element_value_125 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_123);

exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
if (var_to_object == NULL) {
Py_DECREF(tmp_args_element_value_123);
Py_DECREF(tmp_args_element_value_125);
FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 422;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_args_element_value_128 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 421;
{
    PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_128};
    tmp_args_element_value_124 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_56, call_args);
}

CHECK_OBJECT(tmp_args_element_value_125);
Py_DECREF(tmp_args_element_value_125);
if (tmp_args_element_value_124 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_123);

exception_lineno = 421;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 418;
{
    PyObject *call_args[] = {tmp_args_element_value_122, tmp_args_element_value_123, tmp_args_element_value_124};
    tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_55, call_args);
}

CHECK_OBJECT(tmp_args_element_value_123);
Py_DECREF(tmp_args_element_value_123);
CHECK_OBJECT(tmp_args_element_value_124);
Py_DECREF(tmp_args_element_value_124);
if (tmp_call_result_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 418;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_16);
Py_DECREF(tmp_call_result_16);
}
branch_no_16:;
{
bool tmp_condition_result_17;
PyObject *tmp_cmp_expr_left_17;
PyObject *tmp_cmp_expr_right_17;
PyObject *tmp_called_value_58;
PyObject *tmp_args_element_value_129;
PyObject *tmp_args_element_value_130;
tmp_called_value_58 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 426;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_129 = par_from_object;
tmp_args_element_value_130 = MAKE_LIST1(tstate, mod_consts.const_str_plain_realtime_input_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 426;
{
    PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130};
    tmp_cmp_expr_left_17 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_58, call_args);
}

CHECK_OBJECT(tmp_args_element_value_130);
Py_DECREF(tmp_args_element_value_130);
if (tmp_cmp_expr_left_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 426;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_17 = Py_None;
tmp_condition_result_17 = (tmp_cmp_expr_left_17 != tmp_cmp_expr_right_17) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_17);
Py_DECREF(tmp_cmp_expr_left_17);
if (tmp_condition_result_17 != false) {
    goto branch_yes_17;
} else {
    goto branch_no_17;
}
}
branch_yes_17:;
{
PyObject *tmp_called_value_59;
PyObject *tmp_call_result_17;
PyObject *tmp_args_element_value_131;
PyObject *tmp_args_element_value_132;
PyObject *tmp_args_element_value_133;
PyObject *tmp_called_value_60;
PyObject *tmp_args_element_value_134;
PyObject *tmp_args_element_value_135;
tmp_called_value_59 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 427;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_131 = par_parent_object;
tmp_args_element_value_132 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_realtimeInputConfig);
tmp_called_value_60 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_132);

exception_lineno = 430;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_134 = par_from_object;
tmp_args_element_value_135 = MAKE_LIST1(tstate, mod_consts.const_str_plain_realtime_input_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 430;
{
    PyObject *call_args[] = {tmp_args_element_value_134, tmp_args_element_value_135};
    tmp_args_element_value_133 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_60, call_args);
}

CHECK_OBJECT(tmp_args_element_value_135);
Py_DECREF(tmp_args_element_value_135);
if (tmp_args_element_value_133 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_132);

exception_lineno = 430;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 427;
{
    PyObject *call_args[] = {tmp_args_element_value_131, tmp_args_element_value_132, tmp_args_element_value_133};
    tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_59, call_args);
}

CHECK_OBJECT(tmp_args_element_value_132);
Py_DECREF(tmp_args_element_value_132);
CHECK_OBJECT(tmp_args_element_value_133);
Py_DECREF(tmp_args_element_value_133);
if (tmp_call_result_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 427;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_17);
Py_DECREF(tmp_call_result_17);
}
branch_no_17:;
{
bool tmp_condition_result_18;
PyObject *tmp_cmp_expr_left_18;
PyObject *tmp_cmp_expr_right_18;
PyObject *tmp_called_value_61;
PyObject *tmp_args_element_value_136;
PyObject *tmp_args_element_value_137;
tmp_called_value_61 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 433;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_136 = par_from_object;
tmp_args_element_value_137 = MAKE_LIST1(tstate, mod_consts.const_str_plain_context_window_compression);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 433;
{
    PyObject *call_args[] = {tmp_args_element_value_136, tmp_args_element_value_137};
    tmp_cmp_expr_left_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_61, call_args);
}

CHECK_OBJECT(tmp_args_element_value_137);
Py_DECREF(tmp_args_element_value_137);
if (tmp_cmp_expr_left_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 433;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_18 = Py_None;
tmp_condition_result_18 = (tmp_cmp_expr_left_18 != tmp_cmp_expr_right_18) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_18);
Py_DECREF(tmp_cmp_expr_left_18);
if (tmp_condition_result_18 != false) {
    goto branch_yes_18;
} else {
    goto branch_no_18;
}
}
branch_yes_18:;
{
PyObject *tmp_called_value_62;
PyObject *tmp_call_result_18;
PyObject *tmp_args_element_value_138;
PyObject *tmp_args_element_value_139;
PyObject *tmp_args_element_value_140;
PyObject *tmp_called_value_63;
PyObject *tmp_args_element_value_141;
PyObject *tmp_args_element_value_142;
tmp_called_value_62 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 434;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_138 = par_parent_object;
tmp_args_element_value_139 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_contextWindowCompression);
tmp_called_value_63 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_139);

exception_lineno = 437;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_141 = par_from_object;
tmp_args_element_value_142 = MAKE_LIST1(tstate, mod_consts.const_str_plain_context_window_compression);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 437;
{
    PyObject *call_args[] = {tmp_args_element_value_141, tmp_args_element_value_142};
    tmp_args_element_value_140 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_63, call_args);
}

CHECK_OBJECT(tmp_args_element_value_142);
Py_DECREF(tmp_args_element_value_142);
if (tmp_args_element_value_140 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_139);

exception_lineno = 437;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 434;
{
    PyObject *call_args[] = {tmp_args_element_value_138, tmp_args_element_value_139, tmp_args_element_value_140};
    tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_62, call_args);
}

CHECK_OBJECT(tmp_args_element_value_139);
Py_DECREF(tmp_args_element_value_139);
CHECK_OBJECT(tmp_args_element_value_140);
Py_DECREF(tmp_args_element_value_140);
if (tmp_call_result_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 434;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_18);
Py_DECREF(tmp_call_result_18);
}
branch_no_18:;
{
bool tmp_condition_result_19;
PyObject *tmp_cmp_expr_left_19;
PyObject *tmp_cmp_expr_right_19;
PyObject *tmp_called_value_64;
PyObject *tmp_args_element_value_143;
PyObject *tmp_args_element_value_144;
tmp_called_value_64 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 440;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_143 = par_from_object;
tmp_args_element_value_144 = MAKE_LIST1(tstate, mod_consts.const_str_plain_proactivity);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 440;
{
    PyObject *call_args[] = {tmp_args_element_value_143, tmp_args_element_value_144};
    tmp_cmp_expr_left_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_64, call_args);
}

CHECK_OBJECT(tmp_args_element_value_144);
Py_DECREF(tmp_args_element_value_144);
if (tmp_cmp_expr_left_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 440;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_19 = Py_None;
tmp_condition_result_19 = (tmp_cmp_expr_left_19 != tmp_cmp_expr_right_19) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_19);
Py_DECREF(tmp_cmp_expr_left_19);
if (tmp_condition_result_19 != false) {
    goto branch_yes_19;
} else {
    goto branch_no_19;
}
}
branch_yes_19:;
{
PyObject *tmp_called_value_65;
PyObject *tmp_call_result_19;
PyObject *tmp_args_element_value_145;
PyObject *tmp_args_element_value_146;
PyObject *tmp_args_element_value_147;
PyObject *tmp_called_value_66;
PyObject *tmp_args_element_value_148;
PyObject *tmp_args_element_value_149;
tmp_called_value_65 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_65 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_65 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 441;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_145 = par_parent_object;
tmp_args_element_value_146 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_proactivity);
tmp_called_value_66 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_146);

exception_lineno = 444;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_148 = par_from_object;
tmp_args_element_value_149 = MAKE_LIST1(tstate, mod_consts.const_str_plain_proactivity);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 444;
{
    PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149};
    tmp_args_element_value_147 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_66, call_args);
}

CHECK_OBJECT(tmp_args_element_value_149);
Py_DECREF(tmp_args_element_value_149);
if (tmp_args_element_value_147 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_146);

exception_lineno = 444;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 441;
{
    PyObject *call_args[] = {tmp_args_element_value_145, tmp_args_element_value_146, tmp_args_element_value_147};
    tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_65, call_args);
}

CHECK_OBJECT(tmp_args_element_value_146);
Py_DECREF(tmp_args_element_value_146);
CHECK_OBJECT(tmp_args_element_value_147);
Py_DECREF(tmp_args_element_value_147);
if (tmp_call_result_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 441;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_19);
Py_DECREF(tmp_call_result_19);
}
branch_no_19:;
{
bool tmp_condition_result_20;
PyObject *tmp_cmp_expr_left_20;
PyObject *tmp_cmp_expr_right_20;
PyObject *tmp_called_value_67;
PyObject *tmp_args_element_value_150;
PyObject *tmp_args_element_value_151;
tmp_called_value_67 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 447;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_150 = par_from_object;
tmp_args_element_value_151 = MAKE_LIST1(tstate, mod_consts.const_str_plain_explicit_vad_signal);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 447;
{
    PyObject *call_args[] = {tmp_args_element_value_150, tmp_args_element_value_151};
    tmp_cmp_expr_left_20 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_67, call_args);
}

CHECK_OBJECT(tmp_args_element_value_151);
Py_DECREF(tmp_args_element_value_151);
if (tmp_cmp_expr_left_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 447;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_20 = Py_None;
tmp_condition_result_20 = (tmp_cmp_expr_left_20 != tmp_cmp_expr_right_20) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_20);
Py_DECREF(tmp_cmp_expr_left_20);
if (tmp_condition_result_20 != false) {
    goto branch_yes_20;
} else {
    goto branch_no_20;
}
}
branch_yes_20:;
{
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_4f4e57f62b637b6c20d4ed2faf1d11db;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 448;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 448;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "oooo";
goto frame_exception_exit_1;
}
branch_no_20:;
{
bool tmp_condition_result_21;
PyObject *tmp_cmp_expr_left_21;
PyObject *tmp_cmp_expr_right_21;
PyObject *tmp_called_value_68;
PyObject *tmp_args_element_value_152;
PyObject *tmp_args_element_value_153;
tmp_called_value_68 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 453;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_152 = par_from_object;
tmp_args_element_value_153 = MAKE_LIST1(tstate, mod_consts.const_str_plain_history_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 453;
{
    PyObject *call_args[] = {tmp_args_element_value_152, tmp_args_element_value_153};
    tmp_cmp_expr_left_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_68, call_args);
}

CHECK_OBJECT(tmp_args_element_value_153);
Py_DECREF(tmp_args_element_value_153);
if (tmp_cmp_expr_left_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 453;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_21 = Py_None;
tmp_condition_result_21 = (tmp_cmp_expr_left_21 != tmp_cmp_expr_right_21) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_21);
Py_DECREF(tmp_cmp_expr_left_21);
if (tmp_condition_result_21 != false) {
    goto branch_yes_21;
} else {
    goto branch_no_21;
}
}
branch_yes_21:;
{
PyObject *tmp_called_value_69;
PyObject *tmp_call_result_20;
PyObject *tmp_args_element_value_154;
PyObject *tmp_args_element_value_155;
PyObject *tmp_args_element_value_156;
PyObject *tmp_called_value_70;
PyObject *tmp_args_element_value_157;
PyObject *tmp_args_element_value_158;
tmp_called_value_69 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_69 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_69 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 454;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_154 = par_parent_object;
tmp_args_element_value_155 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_historyConfig);
tmp_called_value_70 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_70 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_70 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_155);

exception_lineno = 457;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_157 = par_from_object;
tmp_args_element_value_158 = MAKE_LIST1(tstate, mod_consts.const_str_plain_history_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 457;
{
    PyObject *call_args[] = {tmp_args_element_value_157, tmp_args_element_value_158};
    tmp_args_element_value_156 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_70, call_args);
}

CHECK_OBJECT(tmp_args_element_value_158);
Py_DECREF(tmp_args_element_value_158);
if (tmp_args_element_value_156 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_155);

exception_lineno = 457;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 454;
{
    PyObject *call_args[] = {tmp_args_element_value_154, tmp_args_element_value_155, tmp_args_element_value_156};
    tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_69, call_args);
}

CHECK_OBJECT(tmp_args_element_value_155);
Py_DECREF(tmp_args_element_value_155);
CHECK_OBJECT(tmp_args_element_value_156);
Py_DECREF(tmp_args_element_value_156);
if (tmp_call_result_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 454;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_20);
Py_DECREF(tmp_call_result_20);
}
branch_no_21:;
{
bool tmp_condition_result_22;
PyObject *tmp_cmp_expr_left_22;
PyObject *tmp_cmp_expr_right_22;
PyObject *tmp_called_value_71;
PyObject *tmp_args_element_value_159;
PyObject *tmp_args_element_value_160;
tmp_called_value_71 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 460;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_159 = par_from_object;
tmp_args_element_value_160 = MAKE_LIST1(tstate, mod_consts.const_str_plain_avatar_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 460;
{
    PyObject *call_args[] = {tmp_args_element_value_159, tmp_args_element_value_160};
    tmp_cmp_expr_left_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_71, call_args);
}

CHECK_OBJECT(tmp_args_element_value_160);
Py_DECREF(tmp_args_element_value_160);
if (tmp_cmp_expr_left_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 460;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_22 = Py_None;
tmp_condition_result_22 = (tmp_cmp_expr_left_22 != tmp_cmp_expr_right_22) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_22);
Py_DECREF(tmp_cmp_expr_left_22);
if (tmp_condition_result_22 != false) {
    goto branch_yes_22;
} else {
    goto branch_no_22;
}
}
branch_yes_22:;
{
PyObject *tmp_called_value_72;
PyObject *tmp_call_result_21;
PyObject *tmp_args_element_value_161;
PyObject *tmp_args_element_value_162;
PyObject *tmp_args_element_value_163;
PyObject *tmp_called_value_73;
PyObject *tmp_args_element_value_164;
PyObject *tmp_args_element_value_165;
tmp_called_value_72 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_72 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_72 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 461;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_161 = par_parent_object;
tmp_args_element_value_162 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_avatarConfig);
tmp_called_value_73 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_162);

exception_lineno = 464;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_164 = par_from_object;
tmp_args_element_value_165 = MAKE_LIST1(tstate, mod_consts.const_str_plain_avatar_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 464;
{
    PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165};
    tmp_args_element_value_163 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_73, call_args);
}

CHECK_OBJECT(tmp_args_element_value_165);
Py_DECREF(tmp_args_element_value_165);
if (tmp_args_element_value_163 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_162);

exception_lineno = 464;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 461;
{
    PyObject *call_args[] = {tmp_args_element_value_161, tmp_args_element_value_162, tmp_args_element_value_163};
    tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_72, call_args);
}

CHECK_OBJECT(tmp_args_element_value_162);
Py_DECREF(tmp_args_element_value_162);
CHECK_OBJECT(tmp_args_element_value_163);
Py_DECREF(tmp_args_element_value_163);
if (tmp_call_result_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 461;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_21);
Py_DECREF(tmp_call_result_21);
}
branch_no_22:;
{
bool tmp_condition_result_23;
PyObject *tmp_cmp_expr_left_23;
PyObject *tmp_cmp_expr_right_23;
PyObject *tmp_called_value_74;
PyObject *tmp_args_element_value_166;
PyObject *tmp_args_element_value_167;
tmp_called_value_74 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_74 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_74 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 467;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_166 = par_from_object;
tmp_args_element_value_167 = MAKE_LIST1(tstate, mod_consts.const_str_plain_safety_settings);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 467;
{
    PyObject *call_args[] = {tmp_args_element_value_166, tmp_args_element_value_167};
    tmp_cmp_expr_left_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_74, call_args);
}

CHECK_OBJECT(tmp_args_element_value_167);
Py_DECREF(tmp_args_element_value_167);
if (tmp_cmp_expr_left_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 467;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_23 = Py_None;
tmp_condition_result_23 = (tmp_cmp_expr_left_23 != tmp_cmp_expr_right_23) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_23);
Py_DECREF(tmp_cmp_expr_left_23);
if (tmp_condition_result_23 != false) {
    goto branch_yes_23;
} else {
    goto branch_no_23;
}
}
branch_yes_23:;
{
PyObject *tmp_called_value_75;
PyObject *tmp_call_result_22;
PyObject *tmp_args_element_value_168;
PyObject *tmp_args_element_value_169;
PyObject *tmp_args_element_value_170;
tmp_called_value_75 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_75 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_75 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 468;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_168 = par_parent_object;
tmp_args_element_value_169 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_safetySettings);
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_76;
PyObject *tmp_args_element_value_171;
PyObject *tmp_args_element_value_172;
tmp_called_value_76 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_171 = par_from_object;
tmp_args_element_value_172 = MAKE_LIST1(tstate, mod_consts.const_str_plain_safety_settings);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 473;
{
    PyObject *call_args[] = {tmp_args_element_value_171, tmp_args_element_value_172};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_76, call_args);
}

CHECK_OBJECT(tmp_args_element_value_172);
Py_DECREF(tmp_args_element_value_172);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 473;
type_description_1 = "oooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "oooo";
exception_lineno = 471;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_9 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_item;
    outline_1_var_item = tmp_assign_source_9;
    Py_INCREF(outline_1_var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
PyObject *tmp_called_value_77;
PyObject *tmp_args_element_value_173;
PyObject *tmp_args_element_value_174;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
tmp_called_value_77 = module_var_accessor_google$genai$_tokens_converters$_SafetySetting_to_mldev(tstate);
if (unlikely(tmp_called_value_77 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__SafetySetting_to_mldev);
}

if (tmp_called_value_77 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
CHECK_OBJECT(outline_1_var_item);
tmp_args_element_value_173 = outline_1_var_item;
if (var_to_object == NULL) {

FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 472;
type_description_1 = "oooo";
    goto try_except_handler_5;
}

tmp_args_element_value_174 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 472;
{
    PyObject *call_args[] = {tmp_args_element_value_173, tmp_args_element_value_174};
    tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_77, call_args);
}

if (tmp_append_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 472;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 471;
type_description_1 = "oooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_args_element_value_170 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_args_element_value_170);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_item);
outline_1_var_item = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_item);
outline_1_var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 471;
goto frame_exception_exit_1;
outline_result_2:;
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 468;
{
    PyObject *call_args[] = {tmp_args_element_value_168, tmp_args_element_value_169, tmp_args_element_value_170};
    tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_75, call_args);
}

CHECK_OBJECT(tmp_args_element_value_169);
Py_DECREF(tmp_args_element_value_169);
CHECK_OBJECT(tmp_args_element_value_170);
Py_DECREF(tmp_args_element_value_170);
if (tmp_call_result_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 468;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_22);
Py_DECREF(tmp_call_result_22);
}
branch_no_23:;
{
bool tmp_condition_result_24;
PyObject *tmp_cmp_expr_left_24;
PyObject *tmp_cmp_expr_right_24;
PyObject *tmp_called_value_78;
PyObject *tmp_args_element_value_175;
PyObject *tmp_args_element_value_176;
tmp_called_value_78 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 477;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_175 = par_from_object;
tmp_args_element_value_176 = MAKE_LIST1(tstate, mod_consts.const_str_plain_stream_translation_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 477;
{
    PyObject *call_args[] = {tmp_args_element_value_175, tmp_args_element_value_176};
    tmp_cmp_expr_left_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_78, call_args);
}

CHECK_OBJECT(tmp_args_element_value_176);
Py_DECREF(tmp_args_element_value_176);
if (tmp_cmp_expr_left_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 477;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_24 = Py_None;
tmp_condition_result_24 = (tmp_cmp_expr_left_24 != tmp_cmp_expr_right_24) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_24);
Py_DECREF(tmp_cmp_expr_left_24);
if (tmp_condition_result_24 != false) {
    goto branch_yes_24;
} else {
    goto branch_no_24;
}
}
branch_yes_24:;
{
PyObject *tmp_called_value_79;
PyObject *tmp_call_result_23;
PyObject *tmp_args_element_value_177;
PyObject *tmp_args_element_value_178;
PyObject *tmp_args_element_value_179;
PyObject *tmp_called_value_80;
PyObject *tmp_args_element_value_180;
PyObject *tmp_args_element_value_181;
tmp_called_value_79 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_79 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_79 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 478;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_parent_object);
tmp_args_element_value_177 = par_parent_object;
tmp_args_element_value_178 = MAKE_LIST3(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_generationConfig,mod_consts.const_str_plain_streamTranslationConfig);
tmp_called_value_80 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_80 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_80 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_178);

exception_lineno = 481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_180 = par_from_object;
tmp_args_element_value_181 = MAKE_LIST1(tstate, mod_consts.const_str_plain_stream_translation_config);
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 481;
{
    PyObject *call_args[] = {tmp_args_element_value_180, tmp_args_element_value_181};
    tmp_args_element_value_179 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_80, call_args);
}

CHECK_OBJECT(tmp_args_element_value_181);
Py_DECREF(tmp_args_element_value_181);
if (tmp_args_element_value_179 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_178);

exception_lineno = 481;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame.f_lineno = 478;
{
    PyObject *call_args[] = {tmp_args_element_value_177, tmp_args_element_value_178, tmp_args_element_value_179};
    tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_79, call_args);
}

CHECK_OBJECT(tmp_args_element_value_178);
Py_DECREF(tmp_args_element_value_178);
CHECK_OBJECT(tmp_args_element_value_179);
Py_DECREF(tmp_args_element_value_179);
if (tmp_call_result_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 478;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_23);
Py_DECREF(tmp_call_result_23);
}
branch_no_24:;
if (var_to_object == NULL) {

FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts.const_str_plain_to_object);
CHAIN_EXCEPTION(tstate, exception_state.exception_value);

exception_lineno = 484;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}

tmp_return_value = var_to_object;
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
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev,
    type_description_1,
    par_api_client,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
Py_XDECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_api_client = python_pars[0];
PyObject *par_from_object = python_pars[1];
PyObject *par_parent_object = python_pars[2];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_b53a71a6086cf7a5167393a9d539c2a3, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 493;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_model);
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 493;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 493;
type_description_1 = "oooo";
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 494;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST2(tstate, mod_consts.const_str_plain_setup,mod_consts.const_str_plain_model);
tmp_expression_value_1 = module_var_accessor_google$genai$_tokens_converters$t(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_t);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 497;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts.const_str_plain_t_model);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 497;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_client);
tmp_args_element_value_6 = par_api_client;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_called_value_3);

exception_lineno = 497;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_model);
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 497;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);
Py_DECREF(tmp_called_value_3);

exception_lineno = 497;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 497;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 497;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 494;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 494;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 500;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 500;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 501;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$_LiveConnectConfig_to_mldev(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__LiveConnectConfig_to_mldev);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 504;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_api_client);
tmp_args_element_value_15 = par_api_client;
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 505;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_17 = par_from_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_config);
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 505;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_args_element_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 505;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_19 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 504;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_19};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 504;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame.f_lineno = 501;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 501;
type_description_1 = "oooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev,
    type_description_1,
    par_api_client,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_api_client);
Py_DECREF(par_api_client);
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__14__Part_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_303ba7adc2017e0eb39e9167f83ca2e6, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 517;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_media_resolution);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 517;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 517;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 518;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mediaResolution);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 519;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_media_resolution);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 519;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 519;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 518;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 518;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 522;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_code_execution_result);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 522;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 522;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_5;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
PyObject *tmp_args_element_value_12;
PyObject *tmp_called_value_6;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 523;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_10 = var_to_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_codeExecutionResult);
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_11);

exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_13 = par_from_object;
tmp_args_element_value_14 = MAKE_LIST1(tstate, mod_consts.const_str_plain_code_execution_result);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 526;
{
    PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_args_element_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_11);

exception_lineno = 526;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 523;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
CHECK_OBJECT(tmp_args_element_value_12);
Py_DECREF(tmp_args_element_value_12);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 523;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 529;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_executable_code);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 529;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 529;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_8;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
PyObject *tmp_args_element_value_19;
PyObject *tmp_called_value_9;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_17 = var_to_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_executableCode);
tmp_called_value_9 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_18);

exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_20 = par_from_object;
tmp_args_element_value_21 = MAKE_LIST1(tstate, mod_consts.const_str_plain_executable_code);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 530;
{
    PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_args_element_value_19 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_args_element_value_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_18);

exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 530;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
CHECK_OBJECT(tmp_args_element_value_19);
Py_DECREF(tmp_args_element_value_19);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 530;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_22;
PyObject *tmp_args_element_value_23;
tmp_called_value_10 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 532;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_22 = par_from_object;
tmp_args_element_value_23 = MAKE_LIST1(tstate, mod_consts.const_str_plain_file_data);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 532;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_23);
Py_DECREF(tmp_args_element_value_23);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 532;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_11;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
PyObject *tmp_args_element_value_26;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_27;
PyObject *tmp_called_value_13;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
tmp_called_value_11 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 533;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_24 = var_to_object;
tmp_args_element_value_25 = MAKE_LIST1(tstate, mod_consts.const_str_plain_fileData);
tmp_called_value_12 = module_var_accessor_google$genai$_tokens_converters$_FileData_to_mldev(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FileData_to_mldev);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 536;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_13 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_25);

exception_lineno = 536;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_28 = par_from_object;
tmp_args_element_value_29 = MAKE_LIST1(tstate, mod_consts.const_str_plain_file_data);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 536;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
    tmp_args_element_value_27 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
if (tmp_args_element_value_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_25);

exception_lineno = 536;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_30 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 536;
{
    PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_30};
    tmp_args_element_value_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_args_element_value_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_25);

exception_lineno = 536;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 533;
{
    PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_25);
Py_DECREF(tmp_args_element_value_25);
CHECK_OBJECT(tmp_args_element_value_26);
Py_DECREF(tmp_args_element_value_26);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 533;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_31;
PyObject *tmp_args_element_value_32;
tmp_called_value_14 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 539;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_31 = par_from_object;
tmp_args_element_value_32 = MAKE_LIST1(tstate, mod_consts.const_str_plain_function_call);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 539;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_32);
Py_DECREF(tmp_args_element_value_32);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 539;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_15;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
PyObject *tmp_args_element_value_35;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_36;
PyObject *tmp_called_value_17;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
tmp_called_value_15 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 540;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_33 = var_to_object;
tmp_args_element_value_34 = MAKE_LIST1(tstate, mod_consts.const_str_plain_functionCall);
tmp_called_value_16 = module_var_accessor_google$genai$_tokens_converters$_FunctionCall_to_mldev(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__FunctionCall_to_mldev);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_34);

exception_lineno = 543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_17 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_34);

exception_lineno = 543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_37 = par_from_object;
tmp_args_element_value_38 = MAKE_LIST1(tstate, mod_consts.const_str_plain_function_call);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 543;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
    tmp_args_element_value_36 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
if (tmp_args_element_value_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_34);

exception_lineno = 543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_39 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 543;
{
    PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_39};
    tmp_args_element_value_35 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_args_element_value_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_34);

exception_lineno = 543;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 540;
{
    PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_34);
Py_DECREF(tmp_args_element_value_34);
CHECK_OBJECT(tmp_args_element_value_35);
Py_DECREF(tmp_args_element_value_35);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 540;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_40;
PyObject *tmp_args_element_value_41;
tmp_called_value_18 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 546;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_40 = par_from_object;
tmp_args_element_value_41 = MAKE_LIST1(tstate, mod_consts.const_str_plain_function_response);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 546;
{
    PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41};
    tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 546;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_19;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_42;
PyObject *tmp_args_element_value_43;
PyObject *tmp_args_element_value_44;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_45;
PyObject *tmp_args_element_value_46;
tmp_called_value_19 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_42 = var_to_object;
tmp_args_element_value_43 = MAKE_LIST1(tstate, mod_consts.const_str_plain_functionResponse);
tmp_called_value_20 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_43);

exception_lineno = 550;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_45 = par_from_object;
tmp_args_element_value_46 = MAKE_LIST1(tstate, mod_consts.const_str_plain_function_response);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 550;
{
    PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
    tmp_args_element_value_44 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_46);
Py_DECREF(tmp_args_element_value_46);
if (tmp_args_element_value_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_43);

exception_lineno = 550;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 547;
{
    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
CHECK_OBJECT(tmp_args_element_value_44);
Py_DECREF(tmp_args_element_value_44);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 547;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_value_21;
PyObject *tmp_args_element_value_47;
PyObject *tmp_args_element_value_48;
tmp_called_value_21 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 553;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_47 = par_from_object;
tmp_args_element_value_48 = MAKE_LIST1(tstate, mod_consts.const_str_plain_inline_data);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 553;
{
    PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
    tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_args_element_value_48);
Py_DECREF(tmp_args_element_value_48);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 553;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_called_value_22;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_49;
PyObject *tmp_args_element_value_50;
PyObject *tmp_args_element_value_51;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_52;
PyObject *tmp_called_value_24;
PyObject *tmp_args_element_value_53;
PyObject *tmp_args_element_value_54;
PyObject *tmp_args_element_value_55;
tmp_called_value_22 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_49 = var_to_object;
tmp_args_element_value_50 = MAKE_LIST1(tstate, mod_consts.const_str_plain_inlineData);
tmp_called_value_23 = module_var_accessor_google$genai$_tokens_converters$_Blob_to_mldev(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__Blob_to_mldev);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_50);

exception_lineno = 557;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_24 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_50);

exception_lineno = 557;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_53 = par_from_object;
tmp_args_element_value_54 = MAKE_LIST1(tstate, mod_consts.const_str_plain_inline_data);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 557;
{
    PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
    tmp_args_element_value_52 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_args_element_value_54);
Py_DECREF(tmp_args_element_value_54);
if (tmp_args_element_value_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_50);

exception_lineno = 557;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_55 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 557;
{
    PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_55};
    tmp_args_element_value_51 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_args_element_value_52);
Py_DECREF(tmp_args_element_value_52);
if (tmp_args_element_value_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_50);

exception_lineno = 557;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 554;
{
    PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50, tmp_args_element_value_51};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_22, call_args);
}

CHECK_OBJECT(tmp_args_element_value_50);
Py_DECREF(tmp_args_element_value_50);
CHECK_OBJECT(tmp_args_element_value_51);
Py_DECREF(tmp_args_element_value_51);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 554;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_56;
PyObject *tmp_args_element_value_57;
tmp_called_value_25 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 560;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_56 = par_from_object;
tmp_args_element_value_57 = MAKE_LIST1(tstate, mod_consts.const_str_plain_text);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 560;
{
    PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
    tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_args_element_value_57);
Py_DECREF(tmp_args_element_value_57);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 560;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_26;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_58;
PyObject *tmp_args_element_value_59;
PyObject *tmp_args_element_value_60;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_61;
PyObject *tmp_args_element_value_62;
tmp_called_value_26 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 561;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_58 = var_to_object;
tmp_args_element_value_59 = MAKE_LIST1(tstate, mod_consts.const_str_plain_text);
tmp_called_value_27 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_59);

exception_lineno = 561;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_61 = par_from_object;
tmp_args_element_value_62 = MAKE_LIST1(tstate, mod_consts.const_str_plain_text);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 561;
{
    PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62};
    tmp_args_element_value_60 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
}

CHECK_OBJECT(tmp_args_element_value_62);
Py_DECREF(tmp_args_element_value_62);
if (tmp_args_element_value_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_59);

exception_lineno = 561;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 561;
{
    PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_args_element_value_59);
Py_DECREF(tmp_args_element_value_59);
CHECK_OBJECT(tmp_args_element_value_60);
Py_DECREF(tmp_args_element_value_60);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 561;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_28;
PyObject *tmp_args_element_value_63;
PyObject *tmp_args_element_value_64;
tmp_called_value_28 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 563;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_63 = par_from_object;
tmp_args_element_value_64 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thought);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 563;
{
    PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
    tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_args_element_value_64);
Py_DECREF(tmp_args_element_value_64);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 563;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_29;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_65;
PyObject *tmp_args_element_value_66;
PyObject *tmp_args_element_value_67;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_68;
PyObject *tmp_args_element_value_69;
tmp_called_value_29 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 564;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_65 = var_to_object;
tmp_args_element_value_66 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thought);
tmp_called_value_30 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_66);

exception_lineno = 564;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_68 = par_from_object;
tmp_args_element_value_69 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thought);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 564;
{
    PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
    tmp_args_element_value_67 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
}

CHECK_OBJECT(tmp_args_element_value_69);
Py_DECREF(tmp_args_element_value_69);
if (tmp_args_element_value_67 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_66);

exception_lineno = 564;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 564;
{
    PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66, tmp_args_element_value_67};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_29, call_args);
}

CHECK_OBJECT(tmp_args_element_value_66);
Py_DECREF(tmp_args_element_value_66);
CHECK_OBJECT(tmp_args_element_value_67);
Py_DECREF(tmp_args_element_value_67);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 564;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_31;
PyObject *tmp_args_element_value_70;
PyObject *tmp_args_element_value_71;
tmp_called_value_31 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 566;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_70 = par_from_object;
tmp_args_element_value_71 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thought_signature);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 566;
{
    PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71};
    tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
}

CHECK_OBJECT(tmp_args_element_value_71);
Py_DECREF(tmp_args_element_value_71);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 566;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_called_value_32;
PyObject *tmp_call_result_10;
PyObject *tmp_args_element_value_72;
PyObject *tmp_args_element_value_73;
PyObject *tmp_args_element_value_74;
PyObject *tmp_called_value_33;
PyObject *tmp_args_element_value_75;
PyObject *tmp_args_element_value_76;
tmp_called_value_32 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 567;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_72 = var_to_object;
tmp_args_element_value_73 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thoughtSignature);
tmp_called_value_33 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_73);

exception_lineno = 570;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_75 = par_from_object;
tmp_args_element_value_76 = MAKE_LIST1(tstate, mod_consts.const_str_plain_thought_signature);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 570;
{
    PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
    tmp_args_element_value_74 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
}

CHECK_OBJECT(tmp_args_element_value_76);
Py_DECREF(tmp_args_element_value_76);
if (tmp_args_element_value_74 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_73);

exception_lineno = 570;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 567;
{
    PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73, tmp_args_element_value_74};
    tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_32, call_args);
}

CHECK_OBJECT(tmp_args_element_value_73);
Py_DECREF(tmp_args_element_value_73);
CHECK_OBJECT(tmp_args_element_value_74);
Py_DECREF(tmp_args_element_value_74);
if (tmp_call_result_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 567;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_10);
Py_DECREF(tmp_call_result_10);
}
branch_no_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_called_value_34;
PyObject *tmp_args_element_value_77;
PyObject *tmp_args_element_value_78;
tmp_called_value_34 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 573;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_77 = par_from_object;
tmp_args_element_value_78 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video_metadata);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 573;
{
    PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78};
    tmp_cmp_expr_left_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
}

CHECK_OBJECT(tmp_args_element_value_78);
Py_DECREF(tmp_args_element_value_78);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 573;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_35;
PyObject *tmp_call_result_11;
PyObject *tmp_args_element_value_79;
PyObject *tmp_args_element_value_80;
PyObject *tmp_args_element_value_81;
PyObject *tmp_called_value_36;
PyObject *tmp_args_element_value_82;
PyObject *tmp_args_element_value_83;
tmp_called_value_35 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 574;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_79 = var_to_object;
tmp_args_element_value_80 = MAKE_LIST1(tstate, mod_consts.const_str_plain_videoMetadata);
tmp_called_value_36 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_80);

exception_lineno = 574;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_82 = par_from_object;
tmp_args_element_value_83 = MAKE_LIST1(tstate, mod_consts.const_str_plain_video_metadata);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 574;
{
    PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83};
    tmp_args_element_value_81 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_36, call_args);
}

CHECK_OBJECT(tmp_args_element_value_83);
Py_DECREF(tmp_args_element_value_83);
if (tmp_args_element_value_81 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_80);

exception_lineno = 574;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 574;
{
    PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80, tmp_args_element_value_81};
    tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_35, call_args);
}

CHECK_OBJECT(tmp_args_element_value_80);
Py_DECREF(tmp_args_element_value_80);
CHECK_OBJECT(tmp_args_element_value_81);
Py_DECREF(tmp_args_element_value_81);
if (tmp_call_result_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 574;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_11);
Py_DECREF(tmp_call_result_11);
}
branch_no_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_called_value_37;
PyObject *tmp_args_element_value_84;
PyObject *tmp_args_element_value_85;
tmp_called_value_37 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_37 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_37 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 576;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_84 = par_from_object;
tmp_args_element_value_85 = MAKE_LIST1(tstate, mod_consts.const_str_plain_tool_call);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 576;
{
    PyObject *call_args[] = {tmp_args_element_value_84, tmp_args_element_value_85};
    tmp_cmp_expr_left_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
}

CHECK_OBJECT(tmp_args_element_value_85);
Py_DECREF(tmp_args_element_value_85);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 576;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_38;
PyObject *tmp_call_result_12;
PyObject *tmp_args_element_value_86;
PyObject *tmp_args_element_value_87;
PyObject *tmp_args_element_value_88;
PyObject *tmp_called_value_39;
PyObject *tmp_args_element_value_89;
PyObject *tmp_args_element_value_90;
tmp_called_value_38 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_86 = var_to_object;
tmp_args_element_value_87 = MAKE_LIST1(tstate, mod_consts.const_str_plain_toolCall);
tmp_called_value_39 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_87);

exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_89 = par_from_object;
tmp_args_element_value_90 = MAKE_LIST1(tstate, mod_consts.const_str_plain_tool_call);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 577;
{
    PyObject *call_args[] = {tmp_args_element_value_89, tmp_args_element_value_90};
    tmp_args_element_value_88 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
}

CHECK_OBJECT(tmp_args_element_value_90);
Py_DECREF(tmp_args_element_value_90);
if (tmp_args_element_value_88 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_87);

exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 577;
{
    PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87, tmp_args_element_value_88};
    tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_38, call_args);
}

CHECK_OBJECT(tmp_args_element_value_87);
Py_DECREF(tmp_args_element_value_87);
CHECK_OBJECT(tmp_args_element_value_88);
Py_DECREF(tmp_args_element_value_88);
if (tmp_call_result_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 577;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_12);
Py_DECREF(tmp_call_result_12);
}
branch_no_12:;
{
bool tmp_condition_result_13;
PyObject *tmp_cmp_expr_left_13;
PyObject *tmp_cmp_expr_right_13;
PyObject *tmp_called_value_40;
PyObject *tmp_args_element_value_91;
PyObject *tmp_args_element_value_92;
tmp_called_value_40 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 579;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_91 = par_from_object;
tmp_args_element_value_92 = MAKE_LIST1(tstate, mod_consts.const_str_plain_tool_response);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 579;
{
    PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92};
    tmp_cmp_expr_left_13 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
}

CHECK_OBJECT(tmp_args_element_value_92);
Py_DECREF(tmp_args_element_value_92);
if (tmp_cmp_expr_left_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 579;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_13 = Py_None;
tmp_condition_result_13 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_13);
Py_DECREF(tmp_cmp_expr_left_13);
if (tmp_condition_result_13 != false) {
    goto branch_yes_13;
} else {
    goto branch_no_13;
}
}
branch_yes_13:;
{
PyObject *tmp_called_value_41;
PyObject *tmp_call_result_13;
PyObject *tmp_args_element_value_93;
PyObject *tmp_args_element_value_94;
PyObject *tmp_args_element_value_95;
PyObject *tmp_called_value_42;
PyObject *tmp_args_element_value_96;
PyObject *tmp_args_element_value_97;
tmp_called_value_41 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 580;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_93 = var_to_object;
tmp_args_element_value_94 = MAKE_LIST1(tstate, mod_consts.const_str_plain_toolResponse);
tmp_called_value_42 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_94);

exception_lineno = 580;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_96 = par_from_object;
tmp_args_element_value_97 = MAKE_LIST1(tstate, mod_consts.const_str_plain_tool_response);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 580;
{
    PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
    tmp_args_element_value_95 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
}

CHECK_OBJECT(tmp_args_element_value_97);
Py_DECREF(tmp_args_element_value_97);
if (tmp_args_element_value_95 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_94);

exception_lineno = 580;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 580;
{
    PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94, tmp_args_element_value_95};
    tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_41, call_args);
}

CHECK_OBJECT(tmp_args_element_value_94);
Py_DECREF(tmp_args_element_value_94);
CHECK_OBJECT(tmp_args_element_value_95);
Py_DECREF(tmp_args_element_value_95);
if (tmp_call_result_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 580;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_13);
Py_DECREF(tmp_call_result_13);
}
branch_no_13:;
{
bool tmp_condition_result_14;
PyObject *tmp_cmp_expr_left_14;
PyObject *tmp_cmp_expr_right_14;
PyObject *tmp_called_value_43;
PyObject *tmp_args_element_value_98;
PyObject *tmp_args_element_value_99;
tmp_called_value_43 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 582;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_98 = par_from_object;
tmp_args_element_value_99 = MAKE_LIST1(tstate, mod_consts.const_str_plain_part_metadata);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 582;
{
    PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99};
    tmp_cmp_expr_left_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_43, call_args);
}

CHECK_OBJECT(tmp_args_element_value_99);
Py_DECREF(tmp_args_element_value_99);
if (tmp_cmp_expr_left_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 582;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_14 = Py_None;
tmp_condition_result_14 = (tmp_cmp_expr_left_14 != tmp_cmp_expr_right_14) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_14);
Py_DECREF(tmp_cmp_expr_left_14);
if (tmp_condition_result_14 != false) {
    goto branch_yes_14;
} else {
    goto branch_no_14;
}
}
branch_yes_14:;
{
PyObject *tmp_called_value_44;
PyObject *tmp_call_result_14;
PyObject *tmp_args_element_value_100;
PyObject *tmp_args_element_value_101;
PyObject *tmp_args_element_value_102;
PyObject *tmp_called_value_45;
PyObject *tmp_args_element_value_103;
PyObject *tmp_args_element_value_104;
tmp_called_value_44 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 583;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_100 = var_to_object;
tmp_args_element_value_101 = MAKE_LIST1(tstate, mod_consts.const_str_plain_partMetadata);
tmp_called_value_45 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_45 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_45 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_101);

exception_lineno = 583;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_103 = par_from_object;
tmp_args_element_value_104 = MAKE_LIST1(tstate, mod_consts.const_str_plain_part_metadata);
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 583;
{
    PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104};
    tmp_args_element_value_102 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_45, call_args);
}

CHECK_OBJECT(tmp_args_element_value_104);
Py_DECREF(tmp_args_element_value_104);
if (tmp_args_element_value_102 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_101);

exception_lineno = 583;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame.f_lineno = 583;
{
    PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
    tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_44, call_args);
}

CHECK_OBJECT(tmp_args_element_value_101);
Py_DECREF(tmp_args_element_value_101);
CHECK_OBJECT(tmp_args_element_value_102);
Py_DECREF(tmp_args_element_value_102);
if (tmp_call_result_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 583;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_14);
Py_DECREF(tmp_call_result_14);
}
branch_no_14:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__14__Part_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_ae26024bc82a2c7df884509282b56763, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 593;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_category);
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 593;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 593;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 594;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_category);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 594;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_category);
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 594;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 594;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 594;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 594;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 596;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_method);
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 596;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 596;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_e2305cae5756775ed10728a135f0aea0;
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 597;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 597;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 602;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_threshold);
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 602;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 602;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 603;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_threshold);
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 603;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_threshold);
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 603;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 603;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame.f_lineno = 603;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 603;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_80ee0710ff6af00f8fb61f2677d9b5be, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 613;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_handle);
frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev->m_frame.f_lineno = 613;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 613;
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
PyObject *tmp_called_value_2;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_3;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 614;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_3 = var_to_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_handle);
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_4);

exception_lineno = 614;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_6 = par_from_object;
tmp_args_element_value_7 = MAKE_LIST1(tstate, mod_consts.const_str_plain_handle);
frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev->m_frame.f_lineno = 614;
{
    PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_args_element_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_4);

exception_lineno = 614;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev->m_frame.f_lineno = 614;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
CHECK_OBJECT(tmp_args_element_value_5);
Py_DECREF(tmp_args_element_value_5);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 614;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 616;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_transparent);
frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev->m_frame.f_lineno = 616;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 616;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
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
tmp_make_exception_arg_1 = mod_consts.const_str_digest_f027e8c7279a40ba8bb591d210ea0aef;
frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev->m_frame.f_lineno = 617;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 617;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_2:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_google$genai$_tokens_converters$$$function__17__Tool_to_mldev(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
PyObject *par_from_object = python_pars[0];
PyObject *par_parent_object = python_pars[1];
PyObject *var_to_object = NULL;
PyObject *outline_0_var_item = NULL;
PyObject *outline_1_var_item = NULL;
PyObject *tmp_listcomp_1__$0 = NULL;
PyObject *tmp_listcomp_1__contraction = NULL;
PyObject *tmp_listcomp_1__iter_value_0 = NULL;
PyObject *tmp_listcomp_2__$0 = NULL;
PyObject *tmp_listcomp_2__contraction = NULL;
PyObject *tmp_listcomp_2__iter_value_0 = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
static struct Nuitka_FrameObject *cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev = NULL;
PyObject *tmp_return_value = NULL;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_5;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = MAKE_DICT_EMPTY(tstate);
assert(var_to_object == NULL);
var_to_object = tmp_assign_source_1;
}
// Tried code:
if (isFrameUnusable(cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev)) {
    Py_XDECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev);

#if _DEBUG_REFCOUNTS
    if (cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev == NULL) {
        count_active_frame_cache_instances += 1;
    } else {
        count_released_frame_cache_instances += 1;
    }
    count_allocated_frame_cache_instances += 1;
#endif
    cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev = MAKE_FUNCTION_FRAME(tstate, code_objects_5f64da6686788a77b9102d002b5ddca2, module_google$genai$_tokens_converters, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
} else {
    count_hit_frame_cache_instances += 1;
#endif
}

assert(cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_type_description == NULL);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev = cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev;

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev) == 2);

// Framed code:
{
bool tmp_condition_result_1;
PyObject *tmp_cmp_expr_left_1;
PyObject *tmp_cmp_expr_right_1;
PyObject *tmp_called_value_1;
PyObject *tmp_args_element_value_1;
PyObject *tmp_args_element_value_2;
tmp_called_value_1 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 630;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_1 = par_from_object;
tmp_args_element_value_2 = MAKE_LIST1(tstate, mod_consts.const_str_plain_retrieval);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 630;
{
    PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
    tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
}

CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_cmp_expr_left_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 630;
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
PyObject *tmp_raise_type_1;
PyObject *tmp_make_exception_arg_1;
tmp_make_exception_arg_1 = mod_consts.const_str_digest_2f5a74c404387f2a33cfd448126935be;
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 631;
tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
assert(!(tmp_raise_type_1 == NULL));
exception_state.exception_value = tmp_raise_type_1;
exception_lineno = 631;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_1:;
{
bool tmp_condition_result_2;
PyObject *tmp_cmp_expr_left_2;
PyObject *tmp_cmp_expr_right_2;
PyObject *tmp_called_value_2;
PyObject *tmp_args_element_value_3;
PyObject *tmp_args_element_value_4;
tmp_called_value_2 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 636;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_3 = par_from_object;
tmp_args_element_value_4 = MAKE_LIST1(tstate, mod_consts.const_str_plain_computer_use);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 636;
{
    PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
    tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_cmp_expr_left_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 636;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_2 = Py_None;
tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_2);
Py_DECREF(tmp_cmp_expr_left_2);
if (tmp_condition_result_2 != false) {
    goto branch_yes_2;
} else {
    goto branch_no_2;
}
}
branch_yes_2:;
{
PyObject *tmp_called_value_3;
PyObject *tmp_call_result_1;
PyObject *tmp_args_element_value_5;
PyObject *tmp_args_element_value_6;
PyObject *tmp_args_element_value_7;
PyObject *tmp_called_value_4;
PyObject *tmp_args_element_value_8;
PyObject *tmp_args_element_value_9;
tmp_called_value_3 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 637;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_5 = var_to_object;
tmp_args_element_value_6 = MAKE_LIST1(tstate, mod_consts.const_str_plain_computerUse);
tmp_called_value_4 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_6);

exception_lineno = 637;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_8 = par_from_object;
tmp_args_element_value_9 = MAKE_LIST1(tstate, mod_consts.const_str_plain_computer_use);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 637;
{
    PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
    tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_args_element_value_9);
Py_DECREF(tmp_args_element_value_9);
if (tmp_args_element_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_6);

exception_lineno = 637;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 637;
{
    PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
}

CHECK_OBJECT(tmp_args_element_value_6);
Py_DECREF(tmp_args_element_value_6);
CHECK_OBJECT(tmp_args_element_value_7);
Py_DECREF(tmp_args_element_value_7);
if (tmp_call_result_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 637;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_1);
Py_DECREF(tmp_call_result_1);
}
branch_no_2:;
{
bool tmp_condition_result_3;
PyObject *tmp_cmp_expr_left_3;
PyObject *tmp_cmp_expr_right_3;
PyObject *tmp_called_value_5;
PyObject *tmp_args_element_value_10;
PyObject *tmp_args_element_value_11;
tmp_called_value_5 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 639;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_10 = par_from_object;
tmp_args_element_value_11 = MAKE_LIST1(tstate, mod_consts.const_str_plain_file_search);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 639;
{
    PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
    tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
}

CHECK_OBJECT(tmp_args_element_value_11);
Py_DECREF(tmp_args_element_value_11);
if (tmp_cmp_expr_left_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 639;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_3 = Py_None;
tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_3);
Py_DECREF(tmp_cmp_expr_left_3);
if (tmp_condition_result_3 != false) {
    goto branch_yes_3;
} else {
    goto branch_no_3;
}
}
branch_yes_3:;
{
PyObject *tmp_called_value_6;
PyObject *tmp_call_result_2;
PyObject *tmp_args_element_value_12;
PyObject *tmp_args_element_value_13;
PyObject *tmp_args_element_value_14;
PyObject *tmp_called_value_7;
PyObject *tmp_args_element_value_15;
PyObject *tmp_args_element_value_16;
tmp_called_value_6 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 640;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_12 = var_to_object;
tmp_args_element_value_13 = MAKE_LIST1(tstate, mod_consts.const_str_plain_fileSearch);
tmp_called_value_7 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_13);

exception_lineno = 640;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_15 = par_from_object;
tmp_args_element_value_16 = MAKE_LIST1(tstate, mod_consts.const_str_plain_file_search);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 640;
{
    PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
    tmp_args_element_value_14 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
}

CHECK_OBJECT(tmp_args_element_value_16);
Py_DECREF(tmp_args_element_value_16);
if (tmp_args_element_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_13);

exception_lineno = 640;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 640;
{
    PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
    tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
}

CHECK_OBJECT(tmp_args_element_value_13);
Py_DECREF(tmp_args_element_value_13);
CHECK_OBJECT(tmp_args_element_value_14);
Py_DECREF(tmp_args_element_value_14);
if (tmp_call_result_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 640;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_2);
Py_DECREF(tmp_call_result_2);
}
branch_no_3:;
{
bool tmp_condition_result_4;
PyObject *tmp_cmp_expr_left_4;
PyObject *tmp_cmp_expr_right_4;
PyObject *tmp_called_value_8;
PyObject *tmp_args_element_value_17;
PyObject *tmp_args_element_value_18;
tmp_called_value_8 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 642;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_17 = par_from_object;
tmp_args_element_value_18 = MAKE_LIST1(tstate, mod_consts.const_str_plain_google_search);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 642;
{
    PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
    tmp_cmp_expr_left_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
}

CHECK_OBJECT(tmp_args_element_value_18);
Py_DECREF(tmp_args_element_value_18);
if (tmp_cmp_expr_left_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 642;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_4 = Py_None;
tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_4);
Py_DECREF(tmp_cmp_expr_left_4);
if (tmp_condition_result_4 != false) {
    goto branch_yes_4;
} else {
    goto branch_no_4;
}
}
branch_yes_4:;
{
PyObject *tmp_called_value_9;
PyObject *tmp_call_result_3;
PyObject *tmp_args_element_value_19;
PyObject *tmp_args_element_value_20;
PyObject *tmp_args_element_value_21;
PyObject *tmp_called_value_10;
PyObject *tmp_args_element_value_22;
PyObject *tmp_called_value_11;
PyObject *tmp_args_element_value_23;
PyObject *tmp_args_element_value_24;
PyObject *tmp_args_element_value_25;
tmp_called_value_9 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_9 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_9 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 643;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_19 = var_to_object;
tmp_args_element_value_20 = MAKE_LIST1(tstate, mod_consts.const_str_plain_googleSearch);
tmp_called_value_10 = module_var_accessor_google$genai$_tokens_converters$_GoogleSearch_to_mldev(tstate);
if (unlikely(tmp_called_value_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GoogleSearch_to_mldev);
}

if (tmp_called_value_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_20);

exception_lineno = 646;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_11 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_20);

exception_lineno = 646;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_23 = par_from_object;
tmp_args_element_value_24 = MAKE_LIST1(tstate, mod_consts.const_str_plain_google_search);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 646;
{
    PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
    tmp_args_element_value_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
}

CHECK_OBJECT(tmp_args_element_value_24);
Py_DECREF(tmp_args_element_value_24);
if (tmp_args_element_value_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 646;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_25 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 646;
{
    PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_25};
    tmp_args_element_value_21 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
}

CHECK_OBJECT(tmp_args_element_value_22);
Py_DECREF(tmp_args_element_value_22);
if (tmp_args_element_value_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_20);

exception_lineno = 646;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 643;
{
    PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
    tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_9, call_args);
}

CHECK_OBJECT(tmp_args_element_value_20);
Py_DECREF(tmp_args_element_value_20);
CHECK_OBJECT(tmp_args_element_value_21);
Py_DECREF(tmp_args_element_value_21);
if (tmp_call_result_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 643;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_3);
Py_DECREF(tmp_call_result_3);
}
branch_no_4:;
{
bool tmp_condition_result_5;
PyObject *tmp_cmp_expr_left_5;
PyObject *tmp_cmp_expr_right_5;
PyObject *tmp_called_value_12;
PyObject *tmp_args_element_value_26;
PyObject *tmp_args_element_value_27;
tmp_called_value_12 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 649;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_26 = par_from_object;
tmp_args_element_value_27 = MAKE_LIST1(tstate, mod_consts.const_str_plain_google_maps);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 649;
{
    PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
    tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
}

CHECK_OBJECT(tmp_args_element_value_27);
Py_DECREF(tmp_args_element_value_27);
if (tmp_cmp_expr_left_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 649;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_5 = Py_None;
tmp_condition_result_5 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_5);
Py_DECREF(tmp_cmp_expr_left_5);
if (tmp_condition_result_5 != false) {
    goto branch_yes_5;
} else {
    goto branch_no_5;
}
}
branch_yes_5:;
{
PyObject *tmp_called_value_13;
PyObject *tmp_call_result_4;
PyObject *tmp_args_element_value_28;
PyObject *tmp_args_element_value_29;
PyObject *tmp_args_element_value_30;
PyObject *tmp_called_value_14;
PyObject *tmp_args_element_value_31;
PyObject *tmp_called_value_15;
PyObject *tmp_args_element_value_32;
PyObject *tmp_args_element_value_33;
PyObject *tmp_args_element_value_34;
tmp_called_value_13 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 650;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_28 = var_to_object;
tmp_args_element_value_29 = MAKE_LIST1(tstate, mod_consts.const_str_plain_googleMaps);
tmp_called_value_14 = module_var_accessor_google$genai$_tokens_converters$_GoogleMaps_to_mldev(tstate);
if (unlikely(tmp_called_value_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain__GoogleMaps_to_mldev);
}

if (tmp_called_value_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_29);

exception_lineno = 653;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_called_value_15 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_29);

exception_lineno = 653;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_32 = par_from_object;
tmp_args_element_value_33 = MAKE_LIST1(tstate, mod_consts.const_str_plain_google_maps);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 653;
{
    PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
    tmp_args_element_value_31 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
}

CHECK_OBJECT(tmp_args_element_value_33);
Py_DECREF(tmp_args_element_value_33);
if (tmp_args_element_value_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_29);

exception_lineno = 653;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_34 = var_to_object;
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 653;
{
    PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_34};
    tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
}

CHECK_OBJECT(tmp_args_element_value_31);
Py_DECREF(tmp_args_element_value_31);
if (tmp_args_element_value_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_29);

exception_lineno = 653;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 650;
{
    PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30};
    tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
}

CHECK_OBJECT(tmp_args_element_value_29);
Py_DECREF(tmp_args_element_value_29);
CHECK_OBJECT(tmp_args_element_value_30);
Py_DECREF(tmp_args_element_value_30);
if (tmp_call_result_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 650;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_4);
Py_DECREF(tmp_call_result_4);
}
branch_no_5:;
{
bool tmp_condition_result_6;
PyObject *tmp_cmp_expr_left_6;
PyObject *tmp_cmp_expr_right_6;
PyObject *tmp_called_value_16;
PyObject *tmp_args_element_value_35;
PyObject *tmp_args_element_value_36;
tmp_called_value_16 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 656;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_35 = par_from_object;
tmp_args_element_value_36 = MAKE_LIST1(tstate, mod_consts.const_str_plain_code_execution);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 656;
{
    PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
    tmp_cmp_expr_left_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
}

CHECK_OBJECT(tmp_args_element_value_36);
Py_DECREF(tmp_args_element_value_36);
if (tmp_cmp_expr_left_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 656;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_6 = Py_None;
tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_6);
Py_DECREF(tmp_cmp_expr_left_6);
if (tmp_condition_result_6 != false) {
    goto branch_yes_6;
} else {
    goto branch_no_6;
}
}
branch_yes_6:;
{
PyObject *tmp_called_value_17;
PyObject *tmp_call_result_5;
PyObject *tmp_args_element_value_37;
PyObject *tmp_args_element_value_38;
PyObject *tmp_args_element_value_39;
PyObject *tmp_called_value_18;
PyObject *tmp_args_element_value_40;
PyObject *tmp_args_element_value_41;
tmp_called_value_17 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_17 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_17 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 657;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_37 = var_to_object;
tmp_args_element_value_38 = MAKE_LIST1(tstate, mod_consts.const_str_plain_codeExecution);
tmp_called_value_18 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_38);

exception_lineno = 657;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_40 = par_from_object;
tmp_args_element_value_41 = MAKE_LIST1(tstate, mod_consts.const_str_plain_code_execution);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 657;
{
    PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41};
    tmp_args_element_value_39 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
}

CHECK_OBJECT(tmp_args_element_value_41);
Py_DECREF(tmp_args_element_value_41);
if (tmp_args_element_value_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_38);

exception_lineno = 657;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 657;
{
    PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39};
    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_17, call_args);
}

CHECK_OBJECT(tmp_args_element_value_38);
Py_DECREF(tmp_args_element_value_38);
CHECK_OBJECT(tmp_args_element_value_39);
Py_DECREF(tmp_args_element_value_39);
if (tmp_call_result_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 657;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_5);
Py_DECREF(tmp_call_result_5);
}
branch_no_6:;
{
bool tmp_condition_result_7;
PyObject *tmp_cmp_expr_left_7;
PyObject *tmp_cmp_expr_right_7;
PyObject *tmp_called_value_19;
PyObject *tmp_args_element_value_42;
PyObject *tmp_args_element_value_43;
tmp_called_value_19 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 659;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_42 = par_from_object;
tmp_args_element_value_43 = MAKE_LIST1(tstate, mod_consts.const_str_plain_enterprise_web_search);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 659;
{
    PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
    tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
}

CHECK_OBJECT(tmp_args_element_value_43);
Py_DECREF(tmp_args_element_value_43);
if (tmp_cmp_expr_left_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 659;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_7 = Py_None;
tmp_condition_result_7 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_7);
Py_DECREF(tmp_cmp_expr_left_7);
if (tmp_condition_result_7 != false) {
    goto branch_yes_7;
} else {
    goto branch_no_7;
}
}
branch_yes_7:;
{
PyObject *tmp_raise_type_2;
PyObject *tmp_make_exception_arg_2;
tmp_make_exception_arg_2 = mod_consts.const_str_digest_fee702490cfd27caa5ab9e35aca50408;
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 660;
tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
assert(!(tmp_raise_type_2 == NULL));
exception_state.exception_value = tmp_raise_type_2;
exception_lineno = 660;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_7:;
{
bool tmp_condition_result_8;
PyObject *tmp_cmp_expr_left_8;
PyObject *tmp_cmp_expr_right_8;
PyObject *tmp_called_value_20;
PyObject *tmp_args_element_value_44;
PyObject *tmp_args_element_value_45;
tmp_called_value_20 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 665;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_44 = par_from_object;
tmp_args_element_value_45 = MAKE_LIST1(tstate, mod_consts.const_str_plain_function_declarations);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 665;
{
    PyObject *call_args[] = {tmp_args_element_value_44, tmp_args_element_value_45};
    tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
}

CHECK_OBJECT(tmp_args_element_value_45);
Py_DECREF(tmp_args_element_value_45);
if (tmp_cmp_expr_left_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 665;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_8 = Py_None;
tmp_condition_result_8 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_8);
Py_DECREF(tmp_cmp_expr_left_8);
if (tmp_condition_result_8 != false) {
    goto branch_yes_8;
} else {
    goto branch_no_8;
}
}
branch_yes_8:;
{
PyObject *tmp_called_value_21;
PyObject *tmp_call_result_6;
PyObject *tmp_args_element_value_46;
PyObject *tmp_args_element_value_47;
PyObject *tmp_args_element_value_48;
tmp_called_value_21 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 666;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_46 = var_to_object;
tmp_args_element_value_47 = MAKE_LIST1(tstate, mod_consts.const_str_plain_functionDeclarations);
// Tried code:
{
PyObject *tmp_assign_source_2;
PyObject *tmp_iter_arg_1;
PyObject *tmp_called_value_22;
PyObject *tmp_args_element_value_49;
PyObject *tmp_args_element_value_50;
tmp_called_value_22 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 669;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_49 = par_from_object;
tmp_args_element_value_50 = MAKE_LIST1(tstate, mod_consts.const_str_plain_function_declarations);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 669;
{
    PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
}

CHECK_OBJECT(tmp_args_element_value_50);
Py_DECREF(tmp_args_element_value_50);
if (tmp_iter_arg_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
CHECK_OBJECT(tmp_iter_arg_1);
Py_DECREF(tmp_iter_arg_1);
if (tmp_assign_source_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "ooo";
    goto try_except_handler_2;
}
assert(tmp_listcomp_1__$0 == NULL);
tmp_listcomp_1__$0 = tmp_assign_source_2;
}
{
PyObject *tmp_assign_source_3;
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_1__contraction == NULL);
tmp_listcomp_1__contraction = tmp_assign_source_3;
}
// Tried code:
loop_start_1:;
{
PyObject *tmp_next_source_1;
PyObject *tmp_assign_source_4;
CHECK_OBJECT(tmp_listcomp_1__$0);
tmp_next_source_1 = tmp_listcomp_1__$0;
tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
if (tmp_assign_source_4 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_1;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 669;
        goto try_except_handler_3;
    }
}

{
    PyObject *old = tmp_listcomp_1__iter_value_0;
    tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_5;
CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
{
    PyObject *old = outline_0_var_item;
    outline_0_var_item = tmp_assign_source_5;
    Py_INCREF(outline_0_var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_1;
PyObject *tmp_append_value_1;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_append_list_1 = tmp_listcomp_1__contraction;
CHECK_OBJECT(outline_0_var_item);
tmp_append_value_1 = outline_0_var_item;
tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 669;
type_description_1 = "ooo";
    goto try_except_handler_3;
}
goto loop_start_1;
loop_end_1:;
CHECK_OBJECT(tmp_listcomp_1__contraction);
tmp_args_element_value_48 = tmp_listcomp_1__contraction;
Py_INCREF(tmp_args_element_value_48);
goto try_return_handler_3;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_3:;
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
goto try_return_handler_2;
// Exception handler code:
try_except_handler_3:;
exception_keeper_lineno_1 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_1 = exception_state;
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
exception_state = exception_keeper_name_1;
exception_lineno = exception_keeper_lineno_1;

goto try_except_handler_2;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_2:;
Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
goto outline_result_1;
// Exception handler code:
try_except_handler_2:;
exception_keeper_lineno_2 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_2 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_0_var_item);
outline_0_var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_2;
exception_lineno = exception_keeper_lineno_2;

goto outline_exception_1;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_1:;
exception_lineno = 669;
goto frame_exception_exit_1;
outline_result_1:;
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 666;
{
    PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47, tmp_args_element_value_48};
    tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_21, call_args);
}

CHECK_OBJECT(tmp_args_element_value_47);
Py_DECREF(tmp_args_element_value_47);
CHECK_OBJECT(tmp_args_element_value_48);
Py_DECREF(tmp_args_element_value_48);
if (tmp_call_result_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 666;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_6);
Py_DECREF(tmp_call_result_6);
}
branch_no_8:;
{
bool tmp_condition_result_9;
PyObject *tmp_cmp_expr_left_9;
PyObject *tmp_cmp_expr_right_9;
PyObject *tmp_called_value_23;
PyObject *tmp_args_element_value_51;
PyObject *tmp_args_element_value_52;
tmp_called_value_23 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 672;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_51 = par_from_object;
tmp_args_element_value_52 = MAKE_LIST1(tstate, mod_consts.const_str_plain_google_search_retrieval);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 672;
{
    PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
    tmp_cmp_expr_left_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
}

CHECK_OBJECT(tmp_args_element_value_52);
Py_DECREF(tmp_args_element_value_52);
if (tmp_cmp_expr_left_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 672;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_9 = Py_None;
tmp_condition_result_9 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_9);
Py_DECREF(tmp_cmp_expr_left_9);
if (tmp_condition_result_9 != false) {
    goto branch_yes_9;
} else {
    goto branch_no_9;
}
}
branch_yes_9:;
{
PyObject *tmp_called_value_24;
PyObject *tmp_call_result_7;
PyObject *tmp_args_element_value_53;
PyObject *tmp_args_element_value_54;
PyObject *tmp_args_element_value_55;
PyObject *tmp_called_value_25;
PyObject *tmp_args_element_value_56;
PyObject *tmp_args_element_value_57;
tmp_called_value_24 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 673;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_53 = var_to_object;
tmp_args_element_value_54 = MAKE_LIST1(tstate, mod_consts.const_str_plain_googleSearchRetrieval);
tmp_called_value_25 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_25 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_25 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_54);

exception_lineno = 676;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_56 = par_from_object;
tmp_args_element_value_57 = MAKE_LIST1(tstate, mod_consts.const_str_plain_google_search_retrieval);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 676;
{
    PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
    tmp_args_element_value_55 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
}

CHECK_OBJECT(tmp_args_element_value_57);
Py_DECREF(tmp_args_element_value_57);
if (tmp_args_element_value_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_54);

exception_lineno = 676;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 673;
{
    PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54, tmp_args_element_value_55};
    tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_24, call_args);
}

CHECK_OBJECT(tmp_args_element_value_54);
Py_DECREF(tmp_args_element_value_54);
CHECK_OBJECT(tmp_args_element_value_55);
Py_DECREF(tmp_args_element_value_55);
if (tmp_call_result_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 673;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_7);
Py_DECREF(tmp_call_result_7);
}
branch_no_9:;
{
bool tmp_condition_result_10;
PyObject *tmp_cmp_expr_left_10;
PyObject *tmp_cmp_expr_right_10;
PyObject *tmp_called_value_26;
PyObject *tmp_args_element_value_58;
PyObject *tmp_args_element_value_59;
tmp_called_value_26 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 679;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_58 = par_from_object;
tmp_args_element_value_59 = MAKE_LIST1(tstate, mod_consts.const_str_plain_parallel_ai_search);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 679;
{
    PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
    tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
}

CHECK_OBJECT(tmp_args_element_value_59);
Py_DECREF(tmp_args_element_value_59);
if (tmp_cmp_expr_left_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 679;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_10 = Py_None;
tmp_condition_result_10 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_10);
Py_DECREF(tmp_cmp_expr_left_10);
if (tmp_condition_result_10 != false) {
    goto branch_yes_10;
} else {
    goto branch_no_10;
}
}
branch_yes_10:;
{
PyObject *tmp_raise_type_3;
PyObject *tmp_make_exception_arg_3;
tmp_make_exception_arg_3 = mod_consts.const_str_digest_1676c0189e80ee1b86a354919efcb89b;
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 680;
tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
assert(!(tmp_raise_type_3 == NULL));
exception_state.exception_value = tmp_raise_type_3;
exception_lineno = 680;
RAISE_EXCEPTION_WITH_VALUE(tstate, &exception_state);
type_description_1 = "ooo";
goto frame_exception_exit_1;
}
branch_no_10:;
{
bool tmp_condition_result_11;
PyObject *tmp_cmp_expr_left_11;
PyObject *tmp_cmp_expr_right_11;
PyObject *tmp_called_value_27;
PyObject *tmp_args_element_value_60;
PyObject *tmp_args_element_value_61;
tmp_called_value_27 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 685;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_60 = par_from_object;
tmp_args_element_value_61 = MAKE_LIST1(tstate, mod_consts.const_str_plain_url_context);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 685;
{
    PyObject *call_args[] = {tmp_args_element_value_60, tmp_args_element_value_61};
    tmp_cmp_expr_left_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
}

CHECK_OBJECT(tmp_args_element_value_61);
Py_DECREF(tmp_args_element_value_61);
if (tmp_cmp_expr_left_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 685;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_11 = Py_None;
tmp_condition_result_11 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_11);
Py_DECREF(tmp_cmp_expr_left_11);
if (tmp_condition_result_11 != false) {
    goto branch_yes_11;
} else {
    goto branch_no_11;
}
}
branch_yes_11:;
{
PyObject *tmp_called_value_28;
PyObject *tmp_call_result_8;
PyObject *tmp_args_element_value_62;
PyObject *tmp_args_element_value_63;
PyObject *tmp_args_element_value_64;
PyObject *tmp_called_value_29;
PyObject *tmp_args_element_value_65;
PyObject *tmp_args_element_value_66;
tmp_called_value_28 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 686;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_62 = var_to_object;
tmp_args_element_value_63 = MAKE_LIST1(tstate, mod_consts.const_str_plain_urlContext);
tmp_called_value_29 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_29 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_29 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));

Py_DECREF(tmp_args_element_value_63);

exception_lineno = 686;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_65 = par_from_object;
tmp_args_element_value_66 = MAKE_LIST1(tstate, mod_consts.const_str_plain_url_context);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 686;
{
    PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
    tmp_args_element_value_64 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
}

CHECK_OBJECT(tmp_args_element_value_66);
Py_DECREF(tmp_args_element_value_66);
if (tmp_args_element_value_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_args_element_value_63);

exception_lineno = 686;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 686;
{
    PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64};
    tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_28, call_args);
}

CHECK_OBJECT(tmp_args_element_value_63);
Py_DECREF(tmp_args_element_value_63);
CHECK_OBJECT(tmp_args_element_value_64);
Py_DECREF(tmp_args_element_value_64);
if (tmp_call_result_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 686;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_8);
Py_DECREF(tmp_call_result_8);
}
branch_no_11:;
{
bool tmp_condition_result_12;
PyObject *tmp_cmp_expr_left_12;
PyObject *tmp_cmp_expr_right_12;
PyObject *tmp_called_value_30;
PyObject *tmp_args_element_value_67;
PyObject *tmp_args_element_value_68;
tmp_called_value_30 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 688;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_67 = par_from_object;
tmp_args_element_value_68 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mcp_servers);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 688;
{
    PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
    tmp_cmp_expr_left_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
}

CHECK_OBJECT(tmp_args_element_value_68);
Py_DECREF(tmp_args_element_value_68);
if (tmp_cmp_expr_left_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 688;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
tmp_cmp_expr_right_12 = Py_None;
tmp_condition_result_12 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
CHECK_OBJECT(tmp_cmp_expr_left_12);
Py_DECREF(tmp_cmp_expr_left_12);
if (tmp_condition_result_12 != false) {
    goto branch_yes_12;
} else {
    goto branch_no_12;
}
}
branch_yes_12:;
{
PyObject *tmp_called_value_31;
PyObject *tmp_call_result_9;
PyObject *tmp_args_element_value_69;
PyObject *tmp_args_element_value_70;
PyObject *tmp_args_element_value_71;
tmp_called_value_31 = module_var_accessor_google$genai$_tokens_converters$setv(tstate);
if (unlikely(tmp_called_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_setv);
}

if (tmp_called_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 689;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(var_to_object);
tmp_args_element_value_69 = var_to_object;
tmp_args_element_value_70 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mcpServers);
// Tried code:
{
PyObject *tmp_assign_source_6;
PyObject *tmp_iter_arg_2;
PyObject *tmp_called_value_32;
PyObject *tmp_args_element_value_72;
PyObject *tmp_args_element_value_73;
tmp_called_value_32 = module_var_accessor_google$genai$_tokens_converters$getv(tstate);
if (unlikely(tmp_called_value_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_getv);
}

if (tmp_called_value_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 692;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
CHECK_OBJECT(par_from_object);
tmp_args_element_value_72 = par_from_object;
tmp_args_element_value_73 = MAKE_LIST1(tstate, mod_consts.const_str_plain_mcp_servers);
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 692;
{
    PyObject *call_args[] = {tmp_args_element_value_72, tmp_args_element_value_73};
    tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_32, call_args);
}

CHECK_OBJECT(tmp_args_element_value_73);
Py_DECREF(tmp_args_element_value_73);
if (tmp_iter_arg_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
CHECK_OBJECT(tmp_iter_arg_2);
Py_DECREF(tmp_iter_arg_2);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooo";
    goto try_except_handler_4;
}
assert(tmp_listcomp_2__$0 == NULL);
tmp_listcomp_2__$0 = tmp_assign_source_6;
}
{
PyObject *tmp_assign_source_7;
tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
assert(tmp_listcomp_2__contraction == NULL);
tmp_listcomp_2__contraction = tmp_assign_source_7;
}
// Tried code:
loop_start_2:;
{
PyObject *tmp_next_source_2;
PyObject *tmp_assign_source_8;
CHECK_OBJECT(tmp_listcomp_2__$0);
tmp_next_source_2 = tmp_listcomp_2__$0;
tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
if (tmp_assign_source_8 == NULL) {
    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

        goto loop_end_2;
    } else {

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
type_description_1 = "ooo";
exception_lineno = 692;
        goto try_except_handler_5;
    }
}

{
    PyObject *old = tmp_listcomp_2__iter_value_0;
    tmp_listcomp_2__iter_value_0 = tmp_assign_source_8;
    Py_XDECREF(old);
}

}
{
PyObject *tmp_assign_source_9;
CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
tmp_assign_source_9 = tmp_listcomp_2__iter_value_0;
{
    PyObject *old = outline_1_var_item;
    outline_1_var_item = tmp_assign_source_9;
    Py_INCREF(outline_1_var_item);
    Py_XDECREF(old);
}

}
{
PyObject *tmp_append_list_2;
PyObject *tmp_append_value_2;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_append_list_2 = tmp_listcomp_2__contraction;
CHECK_OBJECT(outline_1_var_item);
tmp_append_value_2 = outline_1_var_item;
tmp_result = LIST_APPEND0(tmp_append_list_2, tmp_append_value_2);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
}
if (CONSIDER_THREADING(tstate) == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 692;
type_description_1 = "ooo";
    goto try_except_handler_5;
}
goto loop_start_2;
loop_end_2:;
CHECK_OBJECT(tmp_listcomp_2__contraction);
tmp_args_element_value_71 = tmp_listcomp_2__contraction;
Py_INCREF(tmp_args_element_value_71);
goto try_return_handler_5;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_5:;
CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
goto try_return_handler_4;
// Exception handler code:
try_except_handler_5:;
exception_keeper_lineno_3 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_3 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(tmp_listcomp_2__$0);
CHECK_OBJECT(tmp_listcomp_2__$0);
Py_DECREF(tmp_listcomp_2__$0);
tmp_listcomp_2__$0 = NULL;
CHECK_OBJECT(tmp_listcomp_2__contraction);
CHECK_OBJECT(tmp_listcomp_2__contraction);
Py_DECREF(tmp_listcomp_2__contraction);
tmp_listcomp_2__contraction = NULL;
Py_XDECREF(tmp_listcomp_2__iter_value_0);
tmp_listcomp_2__iter_value_0 = NULL;
// Re-raise.
exception_state = exception_keeper_name_3;
exception_lineno = exception_keeper_lineno_3;

goto try_except_handler_4;
// End of try:
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_4:;
Py_XDECREF(outline_1_var_item);
outline_1_var_item = NULL;
goto outline_result_2;
// Exception handler code:
try_except_handler_4:;
exception_keeper_lineno_4 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_4 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

Py_XDECREF(outline_1_var_item);
outline_1_var_item = NULL;
// Re-raise.
exception_state = exception_keeper_name_4;
exception_lineno = exception_keeper_lineno_4;

goto outline_exception_2;
// End of try:
NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;
outline_exception_2:;
exception_lineno = 692;
goto frame_exception_exit_1;
outline_result_2:;
frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame.f_lineno = 689;
{
    PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70, tmp_args_element_value_71};
    tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_31, call_args);
}

CHECK_OBJECT(tmp_args_element_value_70);
Py_DECREF(tmp_args_element_value_70);
CHECK_OBJECT(tmp_args_element_value_71);
Py_DECREF(tmp_args_element_value_71);
if (tmp_call_result_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 689;
type_description_1 = "ooo";
    goto frame_exception_exit_1;
}
CHECK_OBJECT(tmp_call_result_9);
Py_DECREF(tmp_call_result_9);
}
branch_no_12:;


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}

// Attaches locals to frame if any.
Nuitka_Frame_AttachLocals(
    frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev,
    type_description_1,
    par_from_object,
    par_parent_object,
    var_to_object
);


// Release cached frame if used for exception.
if (frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev == cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev) {
#if _DEBUG_REFCOUNTS
    count_active_frame_cache_instances -= 1;
    count_released_frame_cache_instances += 1;
#endif
    Py_DECREF(cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev);
    cache_frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev = NULL;
}

assertFrameObject(frame_frame_google$genai$_tokens_converters$$$function__17__Tool_to_mldev);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto try_except_handler_1;
frame_no_exception_1:;
CHECK_OBJECT(var_to_object);
tmp_return_value = var_to_object;
Py_INCREF(tmp_return_value);
goto try_return_handler_1;
NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
return NULL;
// Return handler code:
try_return_handler_1:;
CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
goto function_return_exit;
// Exception handler code:
try_except_handler_1:;
exception_keeper_lineno_5 = exception_lineno;
exception_lineno = 0;
exception_keeper_name_5 = exception_state;
INIT_ERROR_OCCURRED_STATE(&exception_state);

CHECK_OBJECT(var_to_object);
CHECK_OBJECT(var_to_object);
Py_DECREF(var_to_object);
var_to_object = NULL;
// Re-raise.
exception_state = exception_keeper_name_5;
exception_lineno = exception_keeper_lineno_5;

goto function_exception_exit;
// End of try:

NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
return NULL;

function_exception_exit:
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
CHECK_OBJECT(par_from_object);
Py_DECREF(par_from_object);
CHECK_OBJECT(par_parent_object);
Py_DECREF(par_parent_object);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev,
        mod_consts.const_str_plain__GoogleMaps_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_7201ba08a09bc0d7505c041073cb2378,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev,
        mod_consts.const_str_plain__GoogleSearch_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_8789e77582980b7c0ea98cd1244a1aa9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev,
        mod_consts.const_str_plain__LiveConnectConfig_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_97f527d77aec05737be65bbc14731acb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev,
        mod_consts.const_str_plain__LiveConnectConstraints_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_b53a71a6086cf7a5167393a9d539c2a3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__14__Part_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__14__Part_to_mldev,
        mod_consts.const_str_plain__Part_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_303ba7adc2017e0eb39e9167f83ca2e6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev,
        mod_consts.const_str_plain__SafetySetting_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_ae26024bc82a2c7df884509282b56763,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev,
        mod_consts.const_str_plain__SessionResumptionConfig_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_80ee0710ff6af00f8fb61f2677d9b5be,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__17__Tool_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__17__Tool_to_mldev,
        mod_consts.const_str_plain__Tool_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_5f64da6686788a77b9102d002b5ddca2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev,
        mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_0edd0b54566ac9695ab09728e867e98f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev,
        mod_consts.const_str_plain__AuthConfig_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_64f8b60b13e957a17211cb419c9d43a1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__3__Blob_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__3__Blob_to_mldev,
        mod_consts.const_str_plain__Blob_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_4772da63c3c472e305f2a912fc980c0c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__4__Content_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__4__Content_to_mldev,
        mod_consts.const_str_plain__Content_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_e94a9e46ade0cf11452acfcb823e0c7c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev,
        mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_c42357ac65cebe5b0cbb00b510e2d962,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev,
        mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_26a2197331ea825db647f1868ee2e20f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex,
        mod_consts.const_str_plain__CreateAuthTokenParameters_to_vertex,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_563477cb4332a994906ca0adaf88c053,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__8__FileData_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__8__FileData_to_mldev,
        mod_consts.const_str_plain__FileData_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_fcada7591fa50d5a7e778c76efea3ddc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev(PyThreadState *tstate, PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev,
        mod_consts.const_str_plain__FunctionCall_to_mldev,
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        code_objects_697c401a7c057cba89b4679757c16e91,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_google$genai$_tokens_converters,
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

static function_impl_code const function_table_google$genai$_tokens_converters[] = {
impl_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev,
impl_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev,
impl_google$genai$_tokens_converters$$$function__3__Blob_to_mldev,
impl_google$genai$_tokens_converters$$$function__4__Content_to_mldev,
impl_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev,
impl_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev,
impl_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex,
impl_google$genai$_tokens_converters$$$function__8__FileData_to_mldev,
impl_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev,
impl_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev,
impl_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev,
impl_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev,
impl_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev,
impl_google$genai$_tokens_converters$$$function__14__Part_to_mldev,
impl_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev,
impl_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev,
impl_google$genai$_tokens_converters$$$function__17__Tool_to_mldev,
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

    return Nuitka_Function_GetFunctionState(function, function_table_google$genai$_tokens_converters);
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
        module_google$genai$_tokens_converters,
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
        function_table_google$genai$_tokens_converters,
        sizeof(function_table_google$genai$_tokens_converters) / sizeof(function_impl_code)
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
static char const *module_full_name = "google.genai._tokens_converters";
#endif

// Internal entry point for module code.
PyObject *module_code_google$genai$_tokens_converters(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("google$genai$_tokens_converters");

    // Store the module for future use.
    module_google$genai$_tokens_converters = module;

    moduledict_google$genai$_tokens_converters = MODULE_DICT(module_google$genai$_tokens_converters);

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
        PRINT_STRING("google$genai$_tokens_converters: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("google$genai$_tokens_converters: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("google$genai$_tokens_converters: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._tokens_converters" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initgoogle$genai$_tokens_converters\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_google$genai$_tokens_converters,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_google$genai$_tokens_converters,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_google$genai$_tokens_converters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_tokens_converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_google$genai$_tokens_converters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_google$genai$_tokens_converters);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_google$genai$_tokens_converters);
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

        UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_google$genai$_tokens_converters;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
int tmp_res;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_google$genai$_tokens_converters = MAKE_MODULE_FRAME(code_objects_daafc23acd5b504a5d914f74295e68fe, module_google$genai$_tokens_converters);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_google$genai$_tokens_converters);
assert(Py_REFCNT(frame_frame_google$genai$_tokens_converters) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_google$genai$_tokens_converters$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_google$genai$_tokens_converters$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = IMPORT_HARD_TYPING();
assert(!(tmp_assign_source_4 == NULL));
assert(tmp_import_from_1__module == NULL);
Py_INCREF(tmp_assign_source_4);
tmp_import_from_1__module = tmp_assign_source_4;
}
// Tried code:
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_1 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_google$genai$_tokens_converters,
        mod_consts.const_str_plain_Any,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Any);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Any, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_google$genai$_tokens_converters,
        mod_consts.const_str_plain_Optional,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Optional);
}

if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Optional, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_google$genai$_tokens_converters,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_7);
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
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = const_str_empty;
tmp_globals_arg_value_1 = (PyObject *)moduledict_google$genai$_tokens_converters;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain__transformers_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_google$genai$_tokens_converters->m_frame.f_lineno = 20;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_google$genai$_tokens_converters,
        mod_consts.const_str_plain__transformers,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain__transformers);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_t, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__api_client;
tmp_globals_arg_value_2 = (PyObject *)moduledict_google$genai$_tokens_converters;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_BaseApiClient_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_google$genai$_tokens_converters->m_frame.f_lineno = 21;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_google$genai$_tokens_converters,
        mod_consts.const_str_plain_BaseApiClient,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_BaseApiClient);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_BaseApiClient, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain__common;
tmp_globals_arg_value_3 = (PyObject *)moduledict_google$genai$_tokens_converters;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_get_value_by_path_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_google$genai$_tokens_converters->m_frame.f_lineno = 22;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_google$genai$_tokens_converters,
        mod_consts.const_str_plain_get_value_by_path,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_get_value_by_path);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_getv, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain__common;
tmp_globals_arg_value_4 = (PyObject *)moduledict_google$genai$_tokens_converters;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_set_value_by_path_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_google$genai$_tokens_converters->m_frame.f_lineno = 23;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_google$genai$_tokens_converters,
        mod_consts.const_str_plain_set_value_by_path,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_set_value_by_path);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain_setv, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_defaults_1;
PyObject *tmp_annotations_1;
PyObject *tmp_dict_key_1;
PyObject *tmp_dict_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_defaults_1 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_1 = mod_consts.const_str_plain_from_object;
tmp_expression_value_1 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = (PyObject *)&PyDict_Type;
tmp_tuple_element_2 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 27;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
goto tuple_build_no_exception_1;
// Exception handling pass through code for tuple_build:
tuple_build_exception_1:;
Py_DECREF(tmp_subscript_value_2);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_1:;
tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
CHECK_OBJECT(tmp_subscript_value_2);
Py_DECREF(tmp_subscript_value_2);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_tuple_element_1 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
tmp_annotations_1 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_3;
PyObject *tmp_subscript_value_3;
PyObject *tmp_expression_value_4;
PyObject *tmp_subscript_value_4;
PyObject *tmp_tuple_element_3;
PyObject *tmp_expression_value_5;
PyObject *tmp_subscript_value_5;
PyObject *tmp_tuple_element_4;
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_3 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto dict_build_exception_1;
}
tmp_expression_value_4 = (PyObject *)&PyDict_Type;
tmp_tuple_element_3 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_3);
tmp_tuple_element_3 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 28;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_3);
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_4);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
CHECK_OBJECT(tmp_subscript_value_4);
Py_DECREF(tmp_subscript_value_4);
if (tmp_subscript_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto dict_build_exception_1;
}
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
CHECK_OBJECT(tmp_subscript_value_3);
Py_DECREF(tmp_subscript_value_3);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
tmp_dict_key_1 = mod_consts.const_str_plain_return;
tmp_expression_value_5 = (PyObject *)&PyDict_Type;
tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_4);
tmp_tuple_element_4 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_4 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_4 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 29;

    goto tuple_build_exception_3;
}
PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_4);
goto tuple_build_no_exception_3;
// Exception handling pass through code for tuple_build:
tuple_build_exception_3:;
Py_DECREF(tmp_subscript_value_5);
goto dict_build_exception_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_3:;
tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
CHECK_OBJECT(tmp_subscript_value_5);
Py_DECREF(tmp_subscript_value_5);
if (tmp_dict_value_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto dict_build_exception_1;
}
tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
Py_DECREF(tmp_dict_value_1);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_1;
// Exception handling pass through code for dict_build:
dict_build_exception_1:;
Py_DECREF(tmp_annotations_1);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_1:;
Py_INCREF(tmp_defaults_1);

tmp_assign_source_12 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__1__AudioTranscriptionConfig_to_mldev(tstate, tmp_defaults_1, tmp_annotations_1);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AudioTranscriptionConfig_to_mldev, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_defaults_2;
PyObject *tmp_annotations_2;
PyObject *tmp_dict_key_2;
PyObject *tmp_dict_value_2;
PyObject *tmp_expression_value_6;
PyObject *tmp_subscript_value_6;
PyObject *tmp_tuple_element_5;
PyObject *tmp_expression_value_7;
PyObject *tmp_subscript_value_7;
PyObject *tmp_tuple_element_6;
tmp_defaults_2 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_2 = mod_consts.const_str_plain_from_object;
tmp_expression_value_6 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_expression_value_7 = (PyObject *)&PyDict_Type;
tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_6);
tmp_tuple_element_6 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 41;

    goto tuple_build_exception_4;
}
PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_6);
goto tuple_build_no_exception_4;
// Exception handling pass through code for tuple_build:
tuple_build_exception_4:;
Py_DECREF(tmp_subscript_value_7);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_4:;
tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
CHECK_OBJECT(tmp_subscript_value_7);
Py_DECREF(tmp_subscript_value_7);
if (tmp_tuple_element_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_5);
tmp_tuple_element_5 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_6, 1, tmp_tuple_element_5);
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
CHECK_OBJECT(tmp_subscript_value_6);
Py_DECREF(tmp_subscript_value_6);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
tmp_annotations_2 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_8;
PyObject *tmp_subscript_value_8;
PyObject *tmp_expression_value_9;
PyObject *tmp_subscript_value_9;
PyObject *tmp_tuple_element_7;
PyObject *tmp_expression_value_10;
PyObject *tmp_subscript_value_10;
PyObject *tmp_tuple_element_8;
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_8 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto dict_build_exception_2;
}
tmp_expression_value_9 = (PyObject *)&PyDict_Type;
tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_7);
tmp_tuple_element_7 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_7 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_7 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 42;

    goto tuple_build_exception_5;
}
PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_7);
goto tuple_build_no_exception_5;
// Exception handling pass through code for tuple_build:
tuple_build_exception_5:;
Py_DECREF(tmp_subscript_value_9);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_5:;
tmp_subscript_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
CHECK_OBJECT(tmp_subscript_value_9);
Py_DECREF(tmp_subscript_value_9);
if (tmp_subscript_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto dict_build_exception_2;
}
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
CHECK_OBJECT(tmp_subscript_value_8);
Py_DECREF(tmp_subscript_value_8);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
tmp_dict_key_2 = mod_consts.const_str_plain_return;
tmp_expression_value_10 = (PyObject *)&PyDict_Type;
tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_8);
tmp_tuple_element_8 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_8 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_8 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 43;

    goto tuple_build_exception_6;
}
PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_8);
goto tuple_build_no_exception_6;
// Exception handling pass through code for tuple_build:
tuple_build_exception_6:;
Py_DECREF(tmp_subscript_value_10);
goto dict_build_exception_2;
// Finished with no exception for tuple_build:
tuple_build_no_exception_6:;
tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
CHECK_OBJECT(tmp_subscript_value_10);
Py_DECREF(tmp_subscript_value_10);
if (tmp_dict_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto dict_build_exception_2;
}
tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
Py_DECREF(tmp_dict_value_2);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_2;
// Exception handling pass through code for dict_build:
dict_build_exception_2:;
Py_DECREF(tmp_annotations_2);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_2:;
Py_INCREF(tmp_defaults_2);

tmp_assign_source_13 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__2__AuthConfig_to_mldev(tstate, tmp_defaults_2, tmp_annotations_2);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__AuthConfig_to_mldev, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_defaults_3;
PyObject *tmp_annotations_3;
PyObject *tmp_dict_key_3;
PyObject *tmp_dict_value_3;
PyObject *tmp_expression_value_11;
PyObject *tmp_subscript_value_11;
PyObject *tmp_tuple_element_9;
PyObject *tmp_expression_value_12;
PyObject *tmp_subscript_value_12;
PyObject *tmp_tuple_element_10;
tmp_defaults_3 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_3 = mod_consts.const_str_plain_from_object;
tmp_expression_value_11 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_expression_value_12 = (PyObject *)&PyDict_Type;
tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_10);
tmp_tuple_element_10 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_10 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_10 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto tuple_build_exception_7;
}
PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_10);
goto tuple_build_no_exception_7;
// Exception handling pass through code for tuple_build:
tuple_build_exception_7:;
Py_DECREF(tmp_subscript_value_12);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_7:;
tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
CHECK_OBJECT(tmp_subscript_value_12);
Py_DECREF(tmp_subscript_value_12);
if (tmp_tuple_element_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_9);
tmp_tuple_element_9 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_9);
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
CHECK_OBJECT(tmp_subscript_value_11);
Py_DECREF(tmp_subscript_value_11);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
tmp_annotations_3 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_13;
PyObject *tmp_subscript_value_13;
PyObject *tmp_expression_value_14;
PyObject *tmp_subscript_value_14;
PyObject *tmp_tuple_element_11;
PyObject *tmp_expression_value_15;
PyObject *tmp_subscript_value_15;
PyObject *tmp_tuple_element_12;
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_13 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto dict_build_exception_3;
}
tmp_expression_value_14 = (PyObject *)&PyDict_Type;
tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_11);
tmp_tuple_element_11 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_11 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_11 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto tuple_build_exception_8;
}
PyTuple_SET_ITEM0(tmp_subscript_value_14, 1, tmp_tuple_element_11);
goto tuple_build_no_exception_8;
// Exception handling pass through code for tuple_build:
tuple_build_exception_8:;
Py_DECREF(tmp_subscript_value_14);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_8:;
tmp_subscript_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_14);
CHECK_OBJECT(tmp_subscript_value_14);
Py_DECREF(tmp_subscript_value_14);
if (tmp_subscript_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto dict_build_exception_3;
}
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
CHECK_OBJECT(tmp_subscript_value_13);
Py_DECREF(tmp_subscript_value_13);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 89;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
tmp_dict_key_3 = mod_consts.const_str_plain_return;
tmp_expression_value_15 = (PyObject *)&PyDict_Type;
tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_12);
tmp_tuple_element_12 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto tuple_build_exception_9;
}
PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_12);
goto tuple_build_no_exception_9;
// Exception handling pass through code for tuple_build:
tuple_build_exception_9:;
Py_DECREF(tmp_subscript_value_15);
goto dict_build_exception_3;
// Finished with no exception for tuple_build:
tuple_build_no_exception_9:;
tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_15);
CHECK_OBJECT(tmp_subscript_value_15);
Py_DECREF(tmp_subscript_value_15);
if (tmp_dict_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 90;

    goto dict_build_exception_3;
}
tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
Py_DECREF(tmp_dict_value_3);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_3;
// Exception handling pass through code for dict_build:
dict_build_exception_3:;
Py_DECREF(tmp_annotations_3);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_3:;
Py_INCREF(tmp_defaults_3);

tmp_assign_source_14 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__3__Blob_to_mldev(tstate, tmp_defaults_3, tmp_annotations_3);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Blob_to_mldev, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_defaults_4;
PyObject *tmp_annotations_4;
PyObject *tmp_dict_key_4;
PyObject *tmp_dict_value_4;
PyObject *tmp_expression_value_16;
PyObject *tmp_subscript_value_16;
PyObject *tmp_tuple_element_13;
PyObject *tmp_expression_value_17;
PyObject *tmp_subscript_value_17;
PyObject *tmp_tuple_element_14;
tmp_defaults_4 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_4 = mod_consts.const_str_plain_from_object;
tmp_expression_value_16 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_expression_value_17 = (PyObject *)&PyDict_Type;
tmp_tuple_element_14 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_17, 0, tmp_tuple_element_14);
tmp_tuple_element_14 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_14 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_14 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto tuple_build_exception_10;
}
PyTuple_SET_ITEM0(tmp_subscript_value_17, 1, tmp_tuple_element_14);
goto tuple_build_no_exception_10;
// Exception handling pass through code for tuple_build:
tuple_build_exception_10:;
Py_DECREF(tmp_subscript_value_17);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_10:;
tmp_tuple_element_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_17);
CHECK_OBJECT(tmp_subscript_value_17);
Py_DECREF(tmp_subscript_value_17);
if (tmp_tuple_element_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_13);
tmp_tuple_element_13 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_13);
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_16);
CHECK_OBJECT(tmp_subscript_value_16);
Py_DECREF(tmp_subscript_value_16);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 108;

    goto frame_exception_exit_1;
}
tmp_annotations_4 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_18;
PyObject *tmp_subscript_value_18;
PyObject *tmp_expression_value_19;
PyObject *tmp_subscript_value_19;
PyObject *tmp_tuple_element_15;
PyObject *tmp_expression_value_20;
PyObject *tmp_subscript_value_20;
PyObject *tmp_tuple_element_16;
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_18 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;

    goto dict_build_exception_4;
}
tmp_expression_value_19 = (PyObject *)&PyDict_Type;
tmp_tuple_element_15 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_15);
tmp_tuple_element_15 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_15 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_15 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;

    goto tuple_build_exception_11;
}
PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_15);
goto tuple_build_no_exception_11;
// Exception handling pass through code for tuple_build:
tuple_build_exception_11:;
Py_DECREF(tmp_subscript_value_19);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_11:;
tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_19);
CHECK_OBJECT(tmp_subscript_value_19);
Py_DECREF(tmp_subscript_value_19);
if (tmp_subscript_value_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto dict_build_exception_4;
}
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
CHECK_OBJECT(tmp_subscript_value_18);
Py_DECREF(tmp_subscript_value_18);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 109;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
tmp_dict_key_4 = mod_consts.const_str_plain_return;
tmp_expression_value_20 = (PyObject *)&PyDict_Type;
tmp_tuple_element_16 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_16);
tmp_tuple_element_16 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_16 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_16 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto tuple_build_exception_12;
}
PyTuple_SET_ITEM0(tmp_subscript_value_20, 1, tmp_tuple_element_16);
goto tuple_build_no_exception_12;
// Exception handling pass through code for tuple_build:
tuple_build_exception_12:;
Py_DECREF(tmp_subscript_value_20);
goto dict_build_exception_4;
// Finished with no exception for tuple_build:
tuple_build_no_exception_12:;
tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_20);
CHECK_OBJECT(tmp_subscript_value_20);
Py_DECREF(tmp_subscript_value_20);
if (tmp_dict_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 110;

    goto dict_build_exception_4;
}
tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
Py_DECREF(tmp_dict_value_4);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_4;
// Exception handling pass through code for dict_build:
dict_build_exception_4:;
Py_DECREF(tmp_annotations_4);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_4:;
Py_INCREF(tmp_defaults_4);

tmp_assign_source_15 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__4__Content_to_mldev(tstate, tmp_defaults_4, tmp_annotations_4);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Content_to_mldev, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_defaults_5;
PyObject *tmp_annotations_5;
PyObject *tmp_dict_key_5;
PyObject *tmp_dict_value_5;
tmp_defaults_5 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_5 = mod_consts.const_str_plain_api_client;
tmp_dict_value_5 = module_var_accessor_google$genai$_tokens_converters$BaseApiClient(tstate);
if (unlikely(tmp_dict_value_5 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseApiClient);
}

if (tmp_dict_value_5 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 129;

    goto frame_exception_exit_1;
}
tmp_annotations_5 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_21;
PyObject *tmp_subscript_value_21;
PyObject *tmp_tuple_element_17;
PyObject *tmp_expression_value_22;
PyObject *tmp_subscript_value_22;
PyObject *tmp_tuple_element_18;
PyObject *tmp_expression_value_23;
PyObject *tmp_subscript_value_23;
PyObject *tmp_expression_value_24;
PyObject *tmp_subscript_value_24;
PyObject *tmp_tuple_element_19;
PyObject *tmp_expression_value_25;
PyObject *tmp_subscript_value_25;
PyObject *tmp_tuple_element_20;
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_from_object;
tmp_expression_value_21 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_21 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_21 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto dict_build_exception_5;
}
tmp_expression_value_22 = (PyObject *)&PyDict_Type;
tmp_tuple_element_18 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_18);
tmp_tuple_element_18 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_18 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_18 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 130;

    goto tuple_build_exception_13;
}
PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_18);
goto tuple_build_no_exception_13;
// Exception handling pass through code for tuple_build:
tuple_build_exception_13:;
Py_DECREF(tmp_subscript_value_22);
goto dict_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_13:;
tmp_tuple_element_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
CHECK_OBJECT(tmp_subscript_value_22);
Py_DECREF(tmp_subscript_value_22);
if (tmp_tuple_element_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto dict_build_exception_5;
}
tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_21, 0, tmp_tuple_element_17);
tmp_tuple_element_17 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_21, 1, tmp_tuple_element_17);
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_21);
CHECK_OBJECT(tmp_subscript_value_21);
Py_DECREF(tmp_subscript_value_21);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 130;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_23 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto dict_build_exception_5;
}
tmp_expression_value_24 = (PyObject *)&PyDict_Type;
tmp_tuple_element_19 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_24, 0, tmp_tuple_element_19);
tmp_tuple_element_19 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_19 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_19 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 131;

    goto tuple_build_exception_14;
}
PyTuple_SET_ITEM0(tmp_subscript_value_24, 1, tmp_tuple_element_19);
goto tuple_build_no_exception_14;
// Exception handling pass through code for tuple_build:
tuple_build_exception_14:;
Py_DECREF(tmp_subscript_value_24);
goto dict_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_14:;
tmp_subscript_value_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_24);
CHECK_OBJECT(tmp_subscript_value_24);
Py_DECREF(tmp_subscript_value_24);
if (tmp_subscript_value_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto dict_build_exception_5;
}
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_23);
CHECK_OBJECT(tmp_subscript_value_23);
Py_DECREF(tmp_subscript_value_23);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 131;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
tmp_dict_key_5 = mod_consts.const_str_plain_return;
tmp_expression_value_25 = (PyObject *)&PyDict_Type;
tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_25, 0, tmp_tuple_element_20);
tmp_tuple_element_20 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_20 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_20 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 132;

    goto tuple_build_exception_15;
}
PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_20);
goto tuple_build_no_exception_15;
// Exception handling pass through code for tuple_build:
tuple_build_exception_15:;
Py_DECREF(tmp_subscript_value_25);
goto dict_build_exception_5;
// Finished with no exception for tuple_build:
tuple_build_no_exception_15:;
tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_25);
CHECK_OBJECT(tmp_subscript_value_25);
Py_DECREF(tmp_subscript_value_25);
if (tmp_dict_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 132;

    goto dict_build_exception_5;
}
tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
Py_DECREF(tmp_dict_value_5);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_5;
// Exception handling pass through code for dict_build:
dict_build_exception_5:;
Py_DECREF(tmp_annotations_5);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_5:;
Py_INCREF(tmp_defaults_5);

tmp_assign_source_16 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__5__CreateAuthTokenConfig_to_mldev(tstate, tmp_defaults_5, tmp_annotations_5);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__CreateAuthTokenConfig_to_mldev, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_defaults_6;
PyObject *tmp_annotations_6;
PyObject *tmp_dict_key_6;
PyObject *tmp_dict_value_6;
tmp_defaults_6 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_6 = mod_consts.const_str_plain_api_client;
tmp_dict_value_6 = module_var_accessor_google$genai$_tokens_converters$BaseApiClient(tstate);
if (unlikely(tmp_dict_value_6 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseApiClient);
}

if (tmp_dict_value_6 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 170;

    goto frame_exception_exit_1;
}
tmp_annotations_6 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_26;
PyObject *tmp_subscript_value_26;
PyObject *tmp_tuple_element_21;
PyObject *tmp_expression_value_27;
PyObject *tmp_subscript_value_27;
PyObject *tmp_tuple_element_22;
PyObject *tmp_expression_value_28;
PyObject *tmp_subscript_value_28;
PyObject *tmp_expression_value_29;
PyObject *tmp_subscript_value_29;
PyObject *tmp_tuple_element_23;
PyObject *tmp_expression_value_30;
PyObject *tmp_subscript_value_30;
PyObject *tmp_tuple_element_24;
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_from_object;
tmp_expression_value_26 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;

    goto dict_build_exception_6;
}
tmp_expression_value_27 = (PyObject *)&PyDict_Type;
tmp_tuple_element_22 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_27, 0, tmp_tuple_element_22);
tmp_tuple_element_22 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_22 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_22 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 171;

    goto tuple_build_exception_16;
}
PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_22);
goto tuple_build_no_exception_16;
// Exception handling pass through code for tuple_build:
tuple_build_exception_16:;
Py_DECREF(tmp_subscript_value_27);
goto dict_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_16:;
tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_27);
CHECK_OBJECT(tmp_subscript_value_27);
Py_DECREF(tmp_subscript_value_27);
if (tmp_tuple_element_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto dict_build_exception_6;
}
tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_21);
tmp_tuple_element_21 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_26, 1, tmp_tuple_element_21);
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_26);
CHECK_OBJECT(tmp_subscript_value_26);
Py_DECREF(tmp_subscript_value_26);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 171;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_28 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;

    goto dict_build_exception_6;
}
tmp_expression_value_29 = (PyObject *)&PyDict_Type;
tmp_tuple_element_23 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_29, 0, tmp_tuple_element_23);
tmp_tuple_element_23 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_23 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_23 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 172;

    goto tuple_build_exception_17;
}
PyTuple_SET_ITEM0(tmp_subscript_value_29, 1, tmp_tuple_element_23);
goto tuple_build_no_exception_17;
// Exception handling pass through code for tuple_build:
tuple_build_exception_17:;
Py_DECREF(tmp_subscript_value_29);
goto dict_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_17:;
tmp_subscript_value_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_29);
CHECK_OBJECT(tmp_subscript_value_29);
Py_DECREF(tmp_subscript_value_29);
if (tmp_subscript_value_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto dict_build_exception_6;
}
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_28);
CHECK_OBJECT(tmp_subscript_value_28);
Py_DECREF(tmp_subscript_value_28);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 172;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
tmp_dict_key_6 = mod_consts.const_str_plain_return;
tmp_expression_value_30 = (PyObject *)&PyDict_Type;
tmp_tuple_element_24 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_30, 0, tmp_tuple_element_24);
tmp_tuple_element_24 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_24 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_24 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 173;

    goto tuple_build_exception_18;
}
PyTuple_SET_ITEM0(tmp_subscript_value_30, 1, tmp_tuple_element_24);
goto tuple_build_no_exception_18;
// Exception handling pass through code for tuple_build:
tuple_build_exception_18:;
Py_DECREF(tmp_subscript_value_30);
goto dict_build_exception_6;
// Finished with no exception for tuple_build:
tuple_build_no_exception_18:;
tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_30);
CHECK_OBJECT(tmp_subscript_value_30);
Py_DECREF(tmp_subscript_value_30);
if (tmp_dict_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 173;

    goto dict_build_exception_6;
}
tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
Py_DECREF(tmp_dict_value_6);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_6;
// Exception handling pass through code for dict_build:
dict_build_exception_6:;
Py_DECREF(tmp_annotations_6);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_6:;
Py_INCREF(tmp_defaults_6);

tmp_assign_source_17 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__6__CreateAuthTokenParameters_to_mldev(tstate, tmp_defaults_6, tmp_annotations_6);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__CreateAuthTokenParameters_to_mldev, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_defaults_7;
PyObject *tmp_annotations_7;
PyObject *tmp_dict_key_7;
PyObject *tmp_dict_value_7;
PyObject *tmp_expression_value_31;
PyObject *tmp_subscript_value_31;
PyObject *tmp_tuple_element_25;
PyObject *tmp_expression_value_32;
PyObject *tmp_subscript_value_32;
PyObject *tmp_tuple_element_26;
tmp_defaults_7 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_7 = mod_consts.const_str_plain_from_object;
tmp_expression_value_31 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto frame_exception_exit_1;
}
tmp_expression_value_32 = (PyObject *)&PyDict_Type;
tmp_tuple_element_26 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_32, 0, tmp_tuple_element_26);
tmp_tuple_element_26 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_26 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_26 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 188;

    goto tuple_build_exception_19;
}
PyTuple_SET_ITEM0(tmp_subscript_value_32, 1, tmp_tuple_element_26);
goto tuple_build_no_exception_19;
// Exception handling pass through code for tuple_build:
tuple_build_exception_19:;
Py_DECREF(tmp_subscript_value_32);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_19:;
tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_32);
CHECK_OBJECT(tmp_subscript_value_32);
Py_DECREF(tmp_subscript_value_32);
if (tmp_tuple_element_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto frame_exception_exit_1;
}
tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_31, 0, tmp_tuple_element_25);
tmp_tuple_element_25 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_31, 1, tmp_tuple_element_25);
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_31);
CHECK_OBJECT(tmp_subscript_value_31);
Py_DECREF(tmp_subscript_value_31);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 188;

    goto frame_exception_exit_1;
}
tmp_annotations_7 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_33;
PyObject *tmp_subscript_value_33;
PyObject *tmp_expression_value_34;
PyObject *tmp_subscript_value_34;
PyObject *tmp_tuple_element_27;
PyObject *tmp_expression_value_35;
PyObject *tmp_subscript_value_35;
PyObject *tmp_tuple_element_28;
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_33 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_33 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_33 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto dict_build_exception_7;
}
tmp_expression_value_34 = (PyObject *)&PyDict_Type;
tmp_tuple_element_27 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_34, 0, tmp_tuple_element_27);
tmp_tuple_element_27 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_27 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_27 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 189;

    goto tuple_build_exception_20;
}
PyTuple_SET_ITEM0(tmp_subscript_value_34, 1, tmp_tuple_element_27);
goto tuple_build_no_exception_20;
// Exception handling pass through code for tuple_build:
tuple_build_exception_20:;
Py_DECREF(tmp_subscript_value_34);
goto dict_build_exception_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_20:;
tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_34);
CHECK_OBJECT(tmp_subscript_value_34);
Py_DECREF(tmp_subscript_value_34);
if (tmp_subscript_value_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto dict_build_exception_7;
}
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_33);
CHECK_OBJECT(tmp_subscript_value_33);
Py_DECREF(tmp_subscript_value_33);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 189;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
tmp_dict_key_7 = mod_consts.const_str_plain_return;
tmp_expression_value_35 = (PyObject *)&PyDict_Type;
tmp_tuple_element_28 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_35, 0, tmp_tuple_element_28);
tmp_tuple_element_28 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_28 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_28 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 190;

    goto tuple_build_exception_21;
}
PyTuple_SET_ITEM0(tmp_subscript_value_35, 1, tmp_tuple_element_28);
goto tuple_build_no_exception_21;
// Exception handling pass through code for tuple_build:
tuple_build_exception_21:;
Py_DECREF(tmp_subscript_value_35);
goto dict_build_exception_7;
// Finished with no exception for tuple_build:
tuple_build_no_exception_21:;
tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_35);
CHECK_OBJECT(tmp_subscript_value_35);
Py_DECREF(tmp_subscript_value_35);
if (tmp_dict_value_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 190;

    goto dict_build_exception_7;
}
tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
Py_DECREF(tmp_dict_value_7);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_7;
// Exception handling pass through code for dict_build:
dict_build_exception_7:;
Py_DECREF(tmp_annotations_7);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_7:;
Py_INCREF(tmp_defaults_7);

tmp_assign_source_18 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__7__CreateAuthTokenParameters_to_vertex(tstate, tmp_defaults_7, tmp_annotations_7);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__CreateAuthTokenParameters_to_vertex, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_defaults_8;
PyObject *tmp_annotations_8;
PyObject *tmp_dict_key_8;
PyObject *tmp_dict_value_8;
PyObject *tmp_expression_value_36;
PyObject *tmp_subscript_value_36;
PyObject *tmp_tuple_element_29;
PyObject *tmp_expression_value_37;
PyObject *tmp_subscript_value_37;
PyObject *tmp_tuple_element_30;
tmp_defaults_8 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_8 = mod_consts.const_str_plain_from_object;
tmp_expression_value_36 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto frame_exception_exit_1;
}
tmp_expression_value_37 = (PyObject *)&PyDict_Type;
tmp_tuple_element_30 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_37, 0, tmp_tuple_element_30);
tmp_tuple_element_30 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_30 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_30 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 202;

    goto tuple_build_exception_22;
}
PyTuple_SET_ITEM0(tmp_subscript_value_37, 1, tmp_tuple_element_30);
goto tuple_build_no_exception_22;
// Exception handling pass through code for tuple_build:
tuple_build_exception_22:;
Py_DECREF(tmp_subscript_value_37);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_22:;
tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_37);
CHECK_OBJECT(tmp_subscript_value_37);
Py_DECREF(tmp_subscript_value_37);
if (tmp_tuple_element_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto frame_exception_exit_1;
}
tmp_subscript_value_36 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_36, 0, tmp_tuple_element_29);
tmp_tuple_element_29 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_36, 1, tmp_tuple_element_29);
tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_36);
CHECK_OBJECT(tmp_subscript_value_36);
Py_DECREF(tmp_subscript_value_36);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 202;

    goto frame_exception_exit_1;
}
tmp_annotations_8 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_38;
PyObject *tmp_subscript_value_38;
PyObject *tmp_expression_value_39;
PyObject *tmp_subscript_value_39;
PyObject *tmp_tuple_element_31;
PyObject *tmp_expression_value_40;
PyObject *tmp_subscript_value_40;
PyObject *tmp_tuple_element_32;
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_38 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;

    goto dict_build_exception_8;
}
tmp_expression_value_39 = (PyObject *)&PyDict_Type;
tmp_tuple_element_31 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_31);
tmp_tuple_element_31 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_31 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_31 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 203;

    goto tuple_build_exception_23;
}
PyTuple_SET_ITEM0(tmp_subscript_value_39, 1, tmp_tuple_element_31);
goto tuple_build_no_exception_23;
// Exception handling pass through code for tuple_build:
tuple_build_exception_23:;
Py_DECREF(tmp_subscript_value_39);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_23:;
tmp_subscript_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_39);
CHECK_OBJECT(tmp_subscript_value_39);
Py_DECREF(tmp_subscript_value_39);
if (tmp_subscript_value_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto dict_build_exception_8;
}
tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_38);
CHECK_OBJECT(tmp_subscript_value_38);
Py_DECREF(tmp_subscript_value_38);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 203;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
tmp_dict_key_8 = mod_consts.const_str_plain_return;
tmp_expression_value_40 = (PyObject *)&PyDict_Type;
tmp_tuple_element_32 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_40, 0, tmp_tuple_element_32);
tmp_tuple_element_32 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_32 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_32 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 204;

    goto tuple_build_exception_24;
}
PyTuple_SET_ITEM0(tmp_subscript_value_40, 1, tmp_tuple_element_32);
goto tuple_build_no_exception_24;
// Exception handling pass through code for tuple_build:
tuple_build_exception_24:;
Py_DECREF(tmp_subscript_value_40);
goto dict_build_exception_8;
// Finished with no exception for tuple_build:
tuple_build_no_exception_24:;
tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_40);
CHECK_OBJECT(tmp_subscript_value_40);
Py_DECREF(tmp_subscript_value_40);
if (tmp_dict_value_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 204;

    goto dict_build_exception_8;
}
tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
Py_DECREF(tmp_dict_value_8);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_8;
// Exception handling pass through code for dict_build:
dict_build_exception_8:;
Py_DECREF(tmp_annotations_8);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_8:;
Py_INCREF(tmp_defaults_8);

tmp_assign_source_19 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__8__FileData_to_mldev(tstate, tmp_defaults_8, tmp_annotations_8);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FileData_to_mldev, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_defaults_9;
PyObject *tmp_annotations_9;
PyObject *tmp_dict_key_9;
PyObject *tmp_dict_value_9;
PyObject *tmp_expression_value_41;
PyObject *tmp_subscript_value_41;
PyObject *tmp_tuple_element_33;
PyObject *tmp_expression_value_42;
PyObject *tmp_subscript_value_42;
PyObject *tmp_tuple_element_34;
tmp_defaults_9 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_9 = mod_consts.const_str_plain_from_object;
tmp_expression_value_41 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_41 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_41 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;

    goto frame_exception_exit_1;
}
tmp_expression_value_42 = (PyObject *)&PyDict_Type;
tmp_tuple_element_34 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_34);
tmp_tuple_element_34 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_34 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_34 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 222;

    goto tuple_build_exception_25;
}
PyTuple_SET_ITEM0(tmp_subscript_value_42, 1, tmp_tuple_element_34);
goto tuple_build_no_exception_25;
// Exception handling pass through code for tuple_build:
tuple_build_exception_25:;
Py_DECREF(tmp_subscript_value_42);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_25:;
tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_42);
CHECK_OBJECT(tmp_subscript_value_42);
Py_DECREF(tmp_subscript_value_42);
if (tmp_tuple_element_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto frame_exception_exit_1;
}
tmp_subscript_value_41 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_41, 0, tmp_tuple_element_33);
tmp_tuple_element_33 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_41, 1, tmp_tuple_element_33);
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_41);
CHECK_OBJECT(tmp_subscript_value_41);
Py_DECREF(tmp_subscript_value_41);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 222;

    goto frame_exception_exit_1;
}
tmp_annotations_9 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_43;
PyObject *tmp_subscript_value_43;
PyObject *tmp_expression_value_44;
PyObject *tmp_subscript_value_44;
PyObject *tmp_tuple_element_35;
PyObject *tmp_expression_value_45;
PyObject *tmp_subscript_value_45;
PyObject *tmp_tuple_element_36;
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_43 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;

    goto dict_build_exception_9;
}
tmp_expression_value_44 = (PyObject *)&PyDict_Type;
tmp_tuple_element_35 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_44 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_44, 0, tmp_tuple_element_35);
tmp_tuple_element_35 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_35 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_35 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 223;

    goto tuple_build_exception_26;
}
PyTuple_SET_ITEM0(tmp_subscript_value_44, 1, tmp_tuple_element_35);
goto tuple_build_no_exception_26;
// Exception handling pass through code for tuple_build:
tuple_build_exception_26:;
Py_DECREF(tmp_subscript_value_44);
goto dict_build_exception_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_26:;
tmp_subscript_value_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_44);
CHECK_OBJECT(tmp_subscript_value_44);
Py_DECREF(tmp_subscript_value_44);
if (tmp_subscript_value_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;

    goto dict_build_exception_9;
}
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_43);
CHECK_OBJECT(tmp_subscript_value_43);
Py_DECREF(tmp_subscript_value_43);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 223;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
tmp_dict_key_9 = mod_consts.const_str_plain_return;
tmp_expression_value_45 = (PyObject *)&PyDict_Type;
tmp_tuple_element_36 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_45 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_45, 0, tmp_tuple_element_36);
tmp_tuple_element_36 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_36 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_36 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 224;

    goto tuple_build_exception_27;
}
PyTuple_SET_ITEM0(tmp_subscript_value_45, 1, tmp_tuple_element_36);
goto tuple_build_no_exception_27;
// Exception handling pass through code for tuple_build:
tuple_build_exception_27:;
Py_DECREF(tmp_subscript_value_45);
goto dict_build_exception_9;
// Finished with no exception for tuple_build:
tuple_build_no_exception_27:;
tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_45);
CHECK_OBJECT(tmp_subscript_value_45);
Py_DECREF(tmp_subscript_value_45);
if (tmp_dict_value_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 224;

    goto dict_build_exception_9;
}
tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
Py_DECREF(tmp_dict_value_9);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_9;
// Exception handling pass through code for dict_build:
dict_build_exception_9:;
Py_DECREF(tmp_annotations_9);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_9:;
Py_INCREF(tmp_defaults_9);

tmp_assign_source_20 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__9__FunctionCall_to_mldev(tstate, tmp_defaults_9, tmp_annotations_9);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__FunctionCall_to_mldev, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_defaults_10;
PyObject *tmp_annotations_10;
PyObject *tmp_dict_key_10;
PyObject *tmp_dict_value_10;
PyObject *tmp_expression_value_46;
PyObject *tmp_subscript_value_46;
PyObject *tmp_tuple_element_37;
PyObject *tmp_expression_value_47;
PyObject *tmp_subscript_value_47;
PyObject *tmp_tuple_element_38;
tmp_defaults_10 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_10 = mod_consts.const_str_plain_from_object;
tmp_expression_value_46 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;

    goto frame_exception_exit_1;
}
tmp_expression_value_47 = (PyObject *)&PyDict_Type;
tmp_tuple_element_38 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_47 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_47, 0, tmp_tuple_element_38);
tmp_tuple_element_38 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_38 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_38 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 251;

    goto tuple_build_exception_28;
}
PyTuple_SET_ITEM0(tmp_subscript_value_47, 1, tmp_tuple_element_38);
goto tuple_build_no_exception_28;
// Exception handling pass through code for tuple_build:
tuple_build_exception_28:;
Py_DECREF(tmp_subscript_value_47);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_28:;
tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_47);
CHECK_OBJECT(tmp_subscript_value_47);
Py_DECREF(tmp_subscript_value_47);
if (tmp_tuple_element_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto frame_exception_exit_1;
}
tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_46, 0, tmp_tuple_element_37);
tmp_tuple_element_37 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_46, 1, tmp_tuple_element_37);
tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_46);
CHECK_OBJECT(tmp_subscript_value_46);
Py_DECREF(tmp_subscript_value_46);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 251;

    goto frame_exception_exit_1;
}
tmp_annotations_10 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_48;
PyObject *tmp_subscript_value_48;
PyObject *tmp_expression_value_49;
PyObject *tmp_subscript_value_49;
PyObject *tmp_tuple_element_39;
PyObject *tmp_expression_value_50;
PyObject *tmp_subscript_value_50;
PyObject *tmp_tuple_element_40;
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_48 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;

    goto dict_build_exception_10;
}
tmp_expression_value_49 = (PyObject *)&PyDict_Type;
tmp_tuple_element_39 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_49 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_49, 0, tmp_tuple_element_39);
tmp_tuple_element_39 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_39 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_39 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 252;

    goto tuple_build_exception_29;
}
PyTuple_SET_ITEM0(tmp_subscript_value_49, 1, tmp_tuple_element_39);
goto tuple_build_no_exception_29;
// Exception handling pass through code for tuple_build:
tuple_build_exception_29:;
Py_DECREF(tmp_subscript_value_49);
goto dict_build_exception_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_29:;
tmp_subscript_value_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_49);
CHECK_OBJECT(tmp_subscript_value_49);
Py_DECREF(tmp_subscript_value_49);
if (tmp_subscript_value_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;

    goto dict_build_exception_10;
}
tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_48);
CHECK_OBJECT(tmp_subscript_value_48);
Py_DECREF(tmp_subscript_value_48);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 252;

    goto dict_build_exception_10;
}
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
tmp_dict_key_10 = mod_consts.const_str_plain_return;
tmp_expression_value_50 = (PyObject *)&PyDict_Type;
tmp_tuple_element_40 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_50 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_50, 0, tmp_tuple_element_40);
tmp_tuple_element_40 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_40 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_40 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 253;

    goto tuple_build_exception_30;
}
PyTuple_SET_ITEM0(tmp_subscript_value_50, 1, tmp_tuple_element_40);
goto tuple_build_no_exception_30;
// Exception handling pass through code for tuple_build:
tuple_build_exception_30:;
Py_DECREF(tmp_subscript_value_50);
goto dict_build_exception_10;
// Finished with no exception for tuple_build:
tuple_build_no_exception_30:;
tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_50);
CHECK_OBJECT(tmp_subscript_value_50);
Py_DECREF(tmp_subscript_value_50);
if (tmp_dict_value_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 253;

    goto dict_build_exception_10;
}
tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
Py_DECREF(tmp_dict_value_10);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_10;
// Exception handling pass through code for dict_build:
dict_build_exception_10:;
Py_DECREF(tmp_annotations_10);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_10:;
Py_INCREF(tmp_defaults_10);

tmp_assign_source_21 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__10__GoogleMaps_to_mldev(tstate, tmp_defaults_10, tmp_annotations_10);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleMaps_to_mldev, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_defaults_11;
PyObject *tmp_annotations_11;
PyObject *tmp_dict_key_11;
PyObject *tmp_dict_value_11;
PyObject *tmp_expression_value_51;
PyObject *tmp_subscript_value_51;
PyObject *tmp_tuple_element_41;
PyObject *tmp_expression_value_52;
PyObject *tmp_subscript_value_52;
PyObject *tmp_tuple_element_42;
tmp_defaults_11 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_11 = mod_consts.const_str_plain_from_object;
tmp_expression_value_51 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto frame_exception_exit_1;
}
tmp_expression_value_52 = (PyObject *)&PyDict_Type;
tmp_tuple_element_42 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_52 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_52, 0, tmp_tuple_element_42);
tmp_tuple_element_42 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_42 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_42 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 269;

    goto tuple_build_exception_31;
}
PyTuple_SET_ITEM0(tmp_subscript_value_52, 1, tmp_tuple_element_42);
goto tuple_build_no_exception_31;
// Exception handling pass through code for tuple_build:
tuple_build_exception_31:;
Py_DECREF(tmp_subscript_value_52);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_31:;
tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_52);
CHECK_OBJECT(tmp_subscript_value_52);
Py_DECREF(tmp_subscript_value_52);
if (tmp_tuple_element_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto frame_exception_exit_1;
}
tmp_subscript_value_51 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_51, 0, tmp_tuple_element_41);
tmp_tuple_element_41 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_51, 1, tmp_tuple_element_41);
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_51);
CHECK_OBJECT(tmp_subscript_value_51);
Py_DECREF(tmp_subscript_value_51);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 269;

    goto frame_exception_exit_1;
}
tmp_annotations_11 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_53;
PyObject *tmp_subscript_value_53;
PyObject *tmp_expression_value_54;
PyObject *tmp_subscript_value_54;
PyObject *tmp_tuple_element_43;
PyObject *tmp_expression_value_55;
PyObject *tmp_subscript_value_55;
PyObject *tmp_tuple_element_44;
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_53 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_53 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_53 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;

    goto dict_build_exception_11;
}
tmp_expression_value_54 = (PyObject *)&PyDict_Type;
tmp_tuple_element_43 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_54 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_54, 0, tmp_tuple_element_43);
tmp_tuple_element_43 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_43 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_43 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 270;

    goto tuple_build_exception_32;
}
PyTuple_SET_ITEM0(tmp_subscript_value_54, 1, tmp_tuple_element_43);
goto tuple_build_no_exception_32;
// Exception handling pass through code for tuple_build:
tuple_build_exception_32:;
Py_DECREF(tmp_subscript_value_54);
goto dict_build_exception_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_32:;
tmp_subscript_value_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_54);
CHECK_OBJECT(tmp_subscript_value_54);
Py_DECREF(tmp_subscript_value_54);
if (tmp_subscript_value_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;

    goto dict_build_exception_11;
}
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_53);
CHECK_OBJECT(tmp_subscript_value_53);
Py_DECREF(tmp_subscript_value_53);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 270;

    goto dict_build_exception_11;
}
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
tmp_dict_key_11 = mod_consts.const_str_plain_return;
tmp_expression_value_55 = (PyObject *)&PyDict_Type;
tmp_tuple_element_44 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_55 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_55, 0, tmp_tuple_element_44);
tmp_tuple_element_44 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_44 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_44 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 271;

    goto tuple_build_exception_33;
}
PyTuple_SET_ITEM0(tmp_subscript_value_55, 1, tmp_tuple_element_44);
goto tuple_build_no_exception_33;
// Exception handling pass through code for tuple_build:
tuple_build_exception_33:;
Py_DECREF(tmp_subscript_value_55);
goto dict_build_exception_11;
// Finished with no exception for tuple_build:
tuple_build_no_exception_33:;
tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_55);
CHECK_OBJECT(tmp_subscript_value_55);
Py_DECREF(tmp_subscript_value_55);
if (tmp_dict_value_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 271;

    goto dict_build_exception_11;
}
tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
Py_DECREF(tmp_dict_value_11);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_11;
// Exception handling pass through code for dict_build:
dict_build_exception_11:;
Py_DECREF(tmp_annotations_11);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_11:;
Py_INCREF(tmp_defaults_11);

tmp_assign_source_22 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__11__GoogleSearch_to_mldev(tstate, tmp_defaults_11, tmp_annotations_11);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__GoogleSearch_to_mldev, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_defaults_12;
PyObject *tmp_annotations_12;
PyObject *tmp_dict_key_12;
PyObject *tmp_dict_value_12;
tmp_defaults_12 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_12 = mod_consts.const_str_plain_api_client;
tmp_dict_value_12 = module_var_accessor_google$genai$_tokens_converters$BaseApiClient(tstate);
if (unlikely(tmp_dict_value_12 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseApiClient);
}

if (tmp_dict_value_12 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 297;

    goto frame_exception_exit_1;
}
tmp_annotations_12 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_56;
PyObject *tmp_subscript_value_56;
PyObject *tmp_tuple_element_45;
PyObject *tmp_expression_value_57;
PyObject *tmp_subscript_value_57;
PyObject *tmp_tuple_element_46;
PyObject *tmp_expression_value_58;
PyObject *tmp_subscript_value_58;
PyObject *tmp_expression_value_59;
PyObject *tmp_subscript_value_59;
PyObject *tmp_tuple_element_47;
PyObject *tmp_expression_value_60;
PyObject *tmp_subscript_value_60;
PyObject *tmp_tuple_element_48;
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_from_object;
tmp_expression_value_56 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;

    goto dict_build_exception_12;
}
tmp_expression_value_57 = (PyObject *)&PyDict_Type;
tmp_tuple_element_46 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_57 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_57, 0, tmp_tuple_element_46);
tmp_tuple_element_46 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_46 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_46 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 298;

    goto tuple_build_exception_34;
}
PyTuple_SET_ITEM0(tmp_subscript_value_57, 1, tmp_tuple_element_46);
goto tuple_build_no_exception_34;
// Exception handling pass through code for tuple_build:
tuple_build_exception_34:;
Py_DECREF(tmp_subscript_value_57);
goto dict_build_exception_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_34:;
tmp_tuple_element_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_57);
CHECK_OBJECT(tmp_subscript_value_57);
Py_DECREF(tmp_subscript_value_57);
if (tmp_tuple_element_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto dict_build_exception_12;
}
tmp_subscript_value_56 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_56, 0, tmp_tuple_element_45);
tmp_tuple_element_45 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_56, 1, tmp_tuple_element_45);
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_56);
CHECK_OBJECT(tmp_subscript_value_56);
Py_DECREF(tmp_subscript_value_56);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 298;

    goto dict_build_exception_12;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_58 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;

    goto dict_build_exception_12;
}
tmp_expression_value_59 = (PyObject *)&PyDict_Type;
tmp_tuple_element_47 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_59 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_59, 0, tmp_tuple_element_47);
tmp_tuple_element_47 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_47 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_47 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 299;

    goto tuple_build_exception_35;
}
PyTuple_SET_ITEM0(tmp_subscript_value_59, 1, tmp_tuple_element_47);
goto tuple_build_no_exception_35;
// Exception handling pass through code for tuple_build:
tuple_build_exception_35:;
Py_DECREF(tmp_subscript_value_59);
goto dict_build_exception_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_35:;
tmp_subscript_value_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_59);
CHECK_OBJECT(tmp_subscript_value_59);
Py_DECREF(tmp_subscript_value_59);
if (tmp_subscript_value_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;

    goto dict_build_exception_12;
}
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_58);
CHECK_OBJECT(tmp_subscript_value_58);
Py_DECREF(tmp_subscript_value_58);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 299;

    goto dict_build_exception_12;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
tmp_dict_key_12 = mod_consts.const_str_plain_return;
tmp_expression_value_60 = (PyObject *)&PyDict_Type;
tmp_tuple_element_48 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_60 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_60, 0, tmp_tuple_element_48);
tmp_tuple_element_48 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_48 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_48 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 300;

    goto tuple_build_exception_36;
}
PyTuple_SET_ITEM0(tmp_subscript_value_60, 1, tmp_tuple_element_48);
goto tuple_build_no_exception_36;
// Exception handling pass through code for tuple_build:
tuple_build_exception_36:;
Py_DECREF(tmp_subscript_value_60);
goto dict_build_exception_12;
// Finished with no exception for tuple_build:
tuple_build_no_exception_36:;
tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_60);
CHECK_OBJECT(tmp_subscript_value_60);
Py_DECREF(tmp_subscript_value_60);
if (tmp_dict_value_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 300;

    goto dict_build_exception_12;
}
tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
Py_DECREF(tmp_dict_value_12);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_12;
// Exception handling pass through code for dict_build:
dict_build_exception_12:;
Py_DECREF(tmp_annotations_12);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_12:;
Py_INCREF(tmp_defaults_12);

tmp_assign_source_23 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__12__LiveConnectConfig_to_mldev(tstate, tmp_defaults_12, tmp_annotations_12);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConfig_to_mldev, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_defaults_13;
PyObject *tmp_annotations_13;
PyObject *tmp_dict_key_13;
PyObject *tmp_dict_value_13;
tmp_defaults_13 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_13 = mod_consts.const_str_plain_api_client;
tmp_dict_value_13 = module_var_accessor_google$genai$_tokens_converters$BaseApiClient(tstate);
if (unlikely(tmp_dict_value_13 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_BaseApiClient);
}

if (tmp_dict_value_13 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 488;

    goto frame_exception_exit_1;
}
tmp_annotations_13 = _PyDict_NewPresized( 4 );
{
PyObject *tmp_expression_value_61;
PyObject *tmp_subscript_value_61;
PyObject *tmp_tuple_element_49;
PyObject *tmp_expression_value_62;
PyObject *tmp_subscript_value_62;
PyObject *tmp_tuple_element_50;
PyObject *tmp_expression_value_63;
PyObject *tmp_subscript_value_63;
PyObject *tmp_expression_value_64;
PyObject *tmp_subscript_value_64;
PyObject *tmp_tuple_element_51;
PyObject *tmp_expression_value_65;
PyObject *tmp_subscript_value_65;
PyObject *tmp_tuple_element_52;
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_from_object;
tmp_expression_value_61 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_61 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_61 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 489;

    goto dict_build_exception_13;
}
tmp_expression_value_62 = (PyObject *)&PyDict_Type;
tmp_tuple_element_50 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_62 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_62, 0, tmp_tuple_element_50);
tmp_tuple_element_50 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_50 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_50 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 489;

    goto tuple_build_exception_37;
}
PyTuple_SET_ITEM0(tmp_subscript_value_62, 1, tmp_tuple_element_50);
goto tuple_build_no_exception_37;
// Exception handling pass through code for tuple_build:
tuple_build_exception_37:;
Py_DECREF(tmp_subscript_value_62);
goto dict_build_exception_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_37:;
tmp_tuple_element_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_62);
CHECK_OBJECT(tmp_subscript_value_62);
Py_DECREF(tmp_subscript_value_62);
if (tmp_tuple_element_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto dict_build_exception_13;
}
tmp_subscript_value_61 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_61, 0, tmp_tuple_element_49);
tmp_tuple_element_49 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_61, 1, tmp_tuple_element_49);
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_61);
CHECK_OBJECT(tmp_subscript_value_61);
Py_DECREF(tmp_subscript_value_61);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 489;

    goto dict_build_exception_13;
}
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_63 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 490;

    goto dict_build_exception_13;
}
tmp_expression_value_64 = (PyObject *)&PyDict_Type;
tmp_tuple_element_51 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_64 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_64, 0, tmp_tuple_element_51);
tmp_tuple_element_51 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_51 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_51 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 490;

    goto tuple_build_exception_38;
}
PyTuple_SET_ITEM0(tmp_subscript_value_64, 1, tmp_tuple_element_51);
goto tuple_build_no_exception_38;
// Exception handling pass through code for tuple_build:
tuple_build_exception_38:;
Py_DECREF(tmp_subscript_value_64);
goto dict_build_exception_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_38:;
tmp_subscript_value_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_64);
CHECK_OBJECT(tmp_subscript_value_64);
Py_DECREF(tmp_subscript_value_64);
if (tmp_subscript_value_63 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;

    goto dict_build_exception_13;
}
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_63);
CHECK_OBJECT(tmp_subscript_value_63);
Py_DECREF(tmp_subscript_value_63);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 490;

    goto dict_build_exception_13;
}
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
tmp_dict_key_13 = mod_consts.const_str_plain_return;
tmp_expression_value_65 = (PyObject *)&PyDict_Type;
tmp_tuple_element_52 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_65 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_65, 0, tmp_tuple_element_52);
tmp_tuple_element_52 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_52 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_52 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 491;

    goto tuple_build_exception_39;
}
PyTuple_SET_ITEM0(tmp_subscript_value_65, 1, tmp_tuple_element_52);
goto tuple_build_no_exception_39;
// Exception handling pass through code for tuple_build:
tuple_build_exception_39:;
Py_DECREF(tmp_subscript_value_65);
goto dict_build_exception_13;
// Finished with no exception for tuple_build:
tuple_build_no_exception_39:;
tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_65);
CHECK_OBJECT(tmp_subscript_value_65);
Py_DECREF(tmp_subscript_value_65);
if (tmp_dict_value_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 491;

    goto dict_build_exception_13;
}
tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
Py_DECREF(tmp_dict_value_13);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_13;
// Exception handling pass through code for dict_build:
dict_build_exception_13:;
Py_DECREF(tmp_annotations_13);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_13:;
Py_INCREF(tmp_defaults_13);

tmp_assign_source_24 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__13__LiveConnectConstraints_to_mldev(tstate, tmp_defaults_13, tmp_annotations_13);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__LiveConnectConstraints_to_mldev, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_defaults_14;
PyObject *tmp_annotations_14;
PyObject *tmp_dict_key_14;
PyObject *tmp_dict_value_14;
PyObject *tmp_expression_value_66;
PyObject *tmp_subscript_value_66;
PyObject *tmp_tuple_element_53;
PyObject *tmp_expression_value_67;
PyObject *tmp_subscript_value_67;
PyObject *tmp_tuple_element_54;
tmp_defaults_14 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_14 = mod_consts.const_str_plain_from_object;
tmp_expression_value_66 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;

    goto frame_exception_exit_1;
}
tmp_expression_value_67 = (PyObject *)&PyDict_Type;
tmp_tuple_element_54 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_67 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_67, 0, tmp_tuple_element_54);
tmp_tuple_element_54 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_54 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_54 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 513;

    goto tuple_build_exception_40;
}
PyTuple_SET_ITEM0(tmp_subscript_value_67, 1, tmp_tuple_element_54);
goto tuple_build_no_exception_40;
// Exception handling pass through code for tuple_build:
tuple_build_exception_40:;
Py_DECREF(tmp_subscript_value_67);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_40:;
tmp_tuple_element_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_67);
CHECK_OBJECT(tmp_subscript_value_67);
Py_DECREF(tmp_subscript_value_67);
if (tmp_tuple_element_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto frame_exception_exit_1;
}
tmp_subscript_value_66 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_66, 0, tmp_tuple_element_53);
tmp_tuple_element_53 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_66, 1, tmp_tuple_element_53);
tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_66);
CHECK_OBJECT(tmp_subscript_value_66);
Py_DECREF(tmp_subscript_value_66);
if (tmp_dict_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 513;

    goto frame_exception_exit_1;
}
tmp_annotations_14 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_68;
PyObject *tmp_subscript_value_68;
PyObject *tmp_expression_value_69;
PyObject *tmp_subscript_value_69;
PyObject *tmp_tuple_element_55;
PyObject *tmp_expression_value_70;
PyObject *tmp_subscript_value_70;
PyObject *tmp_tuple_element_56;
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_68 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;

    goto dict_build_exception_14;
}
tmp_expression_value_69 = (PyObject *)&PyDict_Type;
tmp_tuple_element_55 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_69 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_69, 0, tmp_tuple_element_55);
tmp_tuple_element_55 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_55 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_55 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 514;

    goto tuple_build_exception_41;
}
PyTuple_SET_ITEM0(tmp_subscript_value_69, 1, tmp_tuple_element_55);
goto tuple_build_no_exception_41;
// Exception handling pass through code for tuple_build:
tuple_build_exception_41:;
Py_DECREF(tmp_subscript_value_69);
goto dict_build_exception_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_41:;
tmp_subscript_value_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_69);
CHECK_OBJECT(tmp_subscript_value_69);
Py_DECREF(tmp_subscript_value_69);
if (tmp_subscript_value_68 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;

    goto dict_build_exception_14;
}
tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_68);
CHECK_OBJECT(tmp_subscript_value_68);
Py_DECREF(tmp_subscript_value_68);
if (tmp_dict_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 514;

    goto dict_build_exception_14;
}
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
tmp_dict_key_14 = mod_consts.const_str_plain_return;
tmp_expression_value_70 = (PyObject *)&PyDict_Type;
tmp_tuple_element_56 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_70 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_70, 0, tmp_tuple_element_56);
tmp_tuple_element_56 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_56 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_56 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 515;

    goto tuple_build_exception_42;
}
PyTuple_SET_ITEM0(tmp_subscript_value_70, 1, tmp_tuple_element_56);
goto tuple_build_no_exception_42;
// Exception handling pass through code for tuple_build:
tuple_build_exception_42:;
Py_DECREF(tmp_subscript_value_70);
goto dict_build_exception_14;
// Finished with no exception for tuple_build:
tuple_build_no_exception_42:;
tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_70);
CHECK_OBJECT(tmp_subscript_value_70);
Py_DECREF(tmp_subscript_value_70);
if (tmp_dict_value_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 515;

    goto dict_build_exception_14;
}
tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
Py_DECREF(tmp_dict_value_14);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_14;
// Exception handling pass through code for dict_build:
dict_build_exception_14:;
Py_DECREF(tmp_annotations_14);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_14:;
Py_INCREF(tmp_defaults_14);

tmp_assign_source_25 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__14__Part_to_mldev(tstate, tmp_defaults_14, tmp_annotations_14);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Part_to_mldev, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_defaults_15;
PyObject *tmp_annotations_15;
PyObject *tmp_dict_key_15;
PyObject *tmp_dict_value_15;
PyObject *tmp_expression_value_71;
PyObject *tmp_subscript_value_71;
PyObject *tmp_tuple_element_57;
PyObject *tmp_expression_value_72;
PyObject *tmp_subscript_value_72;
PyObject *tmp_tuple_element_58;
tmp_defaults_15 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_15 = mod_consts.const_str_plain_from_object;
tmp_expression_value_71 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_71 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_71 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 589;

    goto frame_exception_exit_1;
}
tmp_expression_value_72 = (PyObject *)&PyDict_Type;
tmp_tuple_element_58 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_72 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_72, 0, tmp_tuple_element_58);
tmp_tuple_element_58 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_58 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_58 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 589;

    goto tuple_build_exception_43;
}
PyTuple_SET_ITEM0(tmp_subscript_value_72, 1, tmp_tuple_element_58);
goto tuple_build_no_exception_43;
// Exception handling pass through code for tuple_build:
tuple_build_exception_43:;
Py_DECREF(tmp_subscript_value_72);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_43:;
tmp_tuple_element_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_72);
CHECK_OBJECT(tmp_subscript_value_72);
Py_DECREF(tmp_subscript_value_72);
if (tmp_tuple_element_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;

    goto frame_exception_exit_1;
}
tmp_subscript_value_71 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_71, 0, tmp_tuple_element_57);
tmp_tuple_element_57 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_71, 1, tmp_tuple_element_57);
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_71);
CHECK_OBJECT(tmp_subscript_value_71);
Py_DECREF(tmp_subscript_value_71);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 589;

    goto frame_exception_exit_1;
}
tmp_annotations_15 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_73;
PyObject *tmp_subscript_value_73;
PyObject *tmp_expression_value_74;
PyObject *tmp_subscript_value_74;
PyObject *tmp_tuple_element_59;
PyObject *tmp_expression_value_75;
PyObject *tmp_subscript_value_75;
PyObject *tmp_tuple_element_60;
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_73 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_73 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_73 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 590;

    goto dict_build_exception_15;
}
tmp_expression_value_74 = (PyObject *)&PyDict_Type;
tmp_tuple_element_59 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_74 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_74, 0, tmp_tuple_element_59);
tmp_tuple_element_59 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_59 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_59 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 590;

    goto tuple_build_exception_44;
}
PyTuple_SET_ITEM0(tmp_subscript_value_74, 1, tmp_tuple_element_59);
goto tuple_build_no_exception_44;
// Exception handling pass through code for tuple_build:
tuple_build_exception_44:;
Py_DECREF(tmp_subscript_value_74);
goto dict_build_exception_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_44:;
tmp_subscript_value_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_74);
CHECK_OBJECT(tmp_subscript_value_74);
Py_DECREF(tmp_subscript_value_74);
if (tmp_subscript_value_73 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;

    goto dict_build_exception_15;
}
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_73);
CHECK_OBJECT(tmp_subscript_value_73);
Py_DECREF(tmp_subscript_value_73);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 590;

    goto dict_build_exception_15;
}
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
tmp_dict_key_15 = mod_consts.const_str_plain_return;
tmp_expression_value_75 = (PyObject *)&PyDict_Type;
tmp_tuple_element_60 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_75 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_75, 0, tmp_tuple_element_60);
tmp_tuple_element_60 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_60 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_60 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 591;

    goto tuple_build_exception_45;
}
PyTuple_SET_ITEM0(tmp_subscript_value_75, 1, tmp_tuple_element_60);
goto tuple_build_no_exception_45;
// Exception handling pass through code for tuple_build:
tuple_build_exception_45:;
Py_DECREF(tmp_subscript_value_75);
goto dict_build_exception_15;
// Finished with no exception for tuple_build:
tuple_build_no_exception_45:;
tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_75);
CHECK_OBJECT(tmp_subscript_value_75);
Py_DECREF(tmp_subscript_value_75);
if (tmp_dict_value_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 591;

    goto dict_build_exception_15;
}
tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
Py_DECREF(tmp_dict_value_15);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_15;
// Exception handling pass through code for dict_build:
dict_build_exception_15:;
Py_DECREF(tmp_annotations_15);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_15:;
Py_INCREF(tmp_defaults_15);

tmp_assign_source_26 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__15__SafetySetting_to_mldev(tstate, tmp_defaults_15, tmp_annotations_15);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SafetySetting_to_mldev, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_defaults_16;
PyObject *tmp_annotations_16;
PyObject *tmp_dict_key_16;
PyObject *tmp_dict_value_16;
PyObject *tmp_expression_value_76;
PyObject *tmp_subscript_value_76;
PyObject *tmp_tuple_element_61;
PyObject *tmp_expression_value_77;
PyObject *tmp_subscript_value_77;
PyObject *tmp_tuple_element_62;
tmp_defaults_16 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_16 = mod_consts.const_str_plain_from_object;
tmp_expression_value_76 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_76 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_76 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 609;

    goto frame_exception_exit_1;
}
tmp_expression_value_77 = (PyObject *)&PyDict_Type;
tmp_tuple_element_62 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_77 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_77, 0, tmp_tuple_element_62);
tmp_tuple_element_62 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_62 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_62 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 609;

    goto tuple_build_exception_46;
}
PyTuple_SET_ITEM0(tmp_subscript_value_77, 1, tmp_tuple_element_62);
goto tuple_build_no_exception_46;
// Exception handling pass through code for tuple_build:
tuple_build_exception_46:;
Py_DECREF(tmp_subscript_value_77);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_46:;
tmp_tuple_element_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_77);
CHECK_OBJECT(tmp_subscript_value_77);
Py_DECREF(tmp_subscript_value_77);
if (tmp_tuple_element_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;

    goto frame_exception_exit_1;
}
tmp_subscript_value_76 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_76, 0, tmp_tuple_element_61);
tmp_tuple_element_61 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_76, 1, tmp_tuple_element_61);
tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_76);
CHECK_OBJECT(tmp_subscript_value_76);
Py_DECREF(tmp_subscript_value_76);
if (tmp_dict_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 609;

    goto frame_exception_exit_1;
}
tmp_annotations_16 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_78;
PyObject *tmp_subscript_value_78;
PyObject *tmp_expression_value_79;
PyObject *tmp_subscript_value_79;
PyObject *tmp_tuple_element_63;
PyObject *tmp_expression_value_80;
PyObject *tmp_subscript_value_80;
PyObject *tmp_tuple_element_64;
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_78 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_78 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_78 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;

    goto dict_build_exception_16;
}
tmp_expression_value_79 = (PyObject *)&PyDict_Type;
tmp_tuple_element_63 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_79 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_79, 0, tmp_tuple_element_63);
tmp_tuple_element_63 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_63 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_63 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 610;

    goto tuple_build_exception_47;
}
PyTuple_SET_ITEM0(tmp_subscript_value_79, 1, tmp_tuple_element_63);
goto tuple_build_no_exception_47;
// Exception handling pass through code for tuple_build:
tuple_build_exception_47:;
Py_DECREF(tmp_subscript_value_79);
goto dict_build_exception_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_47:;
tmp_subscript_value_78 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_79);
CHECK_OBJECT(tmp_subscript_value_79);
Py_DECREF(tmp_subscript_value_79);
if (tmp_subscript_value_78 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;

    goto dict_build_exception_16;
}
tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_78);
CHECK_OBJECT(tmp_subscript_value_78);
Py_DECREF(tmp_subscript_value_78);
if (tmp_dict_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 610;

    goto dict_build_exception_16;
}
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
tmp_dict_key_16 = mod_consts.const_str_plain_return;
tmp_expression_value_80 = (PyObject *)&PyDict_Type;
tmp_tuple_element_64 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_80 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_80, 0, tmp_tuple_element_64);
tmp_tuple_element_64 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_64 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_64 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 611;

    goto tuple_build_exception_48;
}
PyTuple_SET_ITEM0(tmp_subscript_value_80, 1, tmp_tuple_element_64);
goto tuple_build_no_exception_48;
// Exception handling pass through code for tuple_build:
tuple_build_exception_48:;
Py_DECREF(tmp_subscript_value_80);
goto dict_build_exception_16;
// Finished with no exception for tuple_build:
tuple_build_no_exception_48:;
tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_80);
CHECK_OBJECT(tmp_subscript_value_80);
Py_DECREF(tmp_subscript_value_80);
if (tmp_dict_value_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 611;

    goto dict_build_exception_16;
}
tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
Py_DECREF(tmp_dict_value_16);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_16;
// Exception handling pass through code for dict_build:
dict_build_exception_16:;
Py_DECREF(tmp_annotations_16);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_16:;
Py_INCREF(tmp_defaults_16);

tmp_assign_source_27 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__16__SessionResumptionConfig_to_mldev(tstate, tmp_defaults_16, tmp_annotations_16);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__SessionResumptionConfig_to_mldev, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_defaults_17;
PyObject *tmp_annotations_17;
PyObject *tmp_dict_key_17;
PyObject *tmp_dict_value_17;
PyObject *tmp_expression_value_81;
PyObject *tmp_subscript_value_81;
PyObject *tmp_tuple_element_65;
PyObject *tmp_expression_value_82;
PyObject *tmp_subscript_value_82;
PyObject *tmp_tuple_element_66;
tmp_defaults_17 = mod_consts.const_tuple_none_tuple;
tmp_dict_key_17 = mod_consts.const_str_plain_from_object;
tmp_expression_value_81 = module_var_accessor_google$genai$_tokens_converters$Union(tstate);
if (unlikely(tmp_expression_value_81 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_81 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 626;

    goto frame_exception_exit_1;
}
tmp_expression_value_82 = (PyObject *)&PyDict_Type;
tmp_tuple_element_66 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_82 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_82, 0, tmp_tuple_element_66);
tmp_tuple_element_66 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_66 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_66 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 626;

    goto tuple_build_exception_49;
}
PyTuple_SET_ITEM0(tmp_subscript_value_82, 1, tmp_tuple_element_66);
goto tuple_build_no_exception_49;
// Exception handling pass through code for tuple_build:
tuple_build_exception_49:;
Py_DECREF(tmp_subscript_value_82);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_49:;
tmp_tuple_element_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_82);
CHECK_OBJECT(tmp_subscript_value_82);
Py_DECREF(tmp_subscript_value_82);
if (tmp_tuple_element_65 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;

    goto frame_exception_exit_1;
}
tmp_subscript_value_81 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM(tmp_subscript_value_81, 0, tmp_tuple_element_65);
tmp_tuple_element_65 = (PyObject *)&PyBaseObject_Type;
PyTuple_SET_ITEM0(tmp_subscript_value_81, 1, tmp_tuple_element_65);
tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_81);
CHECK_OBJECT(tmp_subscript_value_81);
Py_DECREF(tmp_subscript_value_81);
if (tmp_dict_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 626;

    goto frame_exception_exit_1;
}
tmp_annotations_17 = _PyDict_NewPresized( 3 );
{
PyObject *tmp_expression_value_83;
PyObject *tmp_subscript_value_83;
PyObject *tmp_expression_value_84;
PyObject *tmp_subscript_value_84;
PyObject *tmp_tuple_element_67;
PyObject *tmp_expression_value_85;
PyObject *tmp_subscript_value_85;
PyObject *tmp_tuple_element_68;
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
Py_DECREF(tmp_dict_value_17);
assert(!(tmp_res != 0));
tmp_dict_key_17 = mod_consts.const_str_plain_parent_object;
tmp_expression_value_83 = module_var_accessor_google$genai$_tokens_converters$Optional(tstate);
if (unlikely(tmp_expression_value_83 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Optional);
}

if (tmp_expression_value_83 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 627;

    goto dict_build_exception_17;
}
tmp_expression_value_84 = (PyObject *)&PyDict_Type;
tmp_tuple_element_67 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_84 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_84, 0, tmp_tuple_element_67);
tmp_tuple_element_67 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_67 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_67 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 627;

    goto tuple_build_exception_50;
}
PyTuple_SET_ITEM0(tmp_subscript_value_84, 1, tmp_tuple_element_67);
goto tuple_build_no_exception_50;
// Exception handling pass through code for tuple_build:
tuple_build_exception_50:;
Py_DECREF(tmp_subscript_value_84);
goto dict_build_exception_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_50:;
tmp_subscript_value_83 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_84);
CHECK_OBJECT(tmp_subscript_value_84);
Py_DECREF(tmp_subscript_value_84);
if (tmp_subscript_value_83 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;

    goto dict_build_exception_17;
}
tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_83);
CHECK_OBJECT(tmp_subscript_value_83);
Py_DECREF(tmp_subscript_value_83);
if (tmp_dict_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 627;

    goto dict_build_exception_17;
}
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
Py_DECREF(tmp_dict_value_17);
assert(!(tmp_res != 0));
tmp_dict_key_17 = mod_consts.const_str_plain_return;
tmp_expression_value_85 = (PyObject *)&PyDict_Type;
tmp_tuple_element_68 = (PyObject *)&PyUnicode_Type;
tmp_subscript_value_85 = MAKE_TUPLE_EMPTY(tstate, 2);
PyTuple_SET_ITEM0(tmp_subscript_value_85, 0, tmp_tuple_element_68);
tmp_tuple_element_68 = module_var_accessor_google$genai$_tokens_converters$Any(tstate);
if (unlikely(tmp_tuple_element_68 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Any);
}

if (tmp_tuple_element_68 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 628;

    goto tuple_build_exception_51;
}
PyTuple_SET_ITEM0(tmp_subscript_value_85, 1, tmp_tuple_element_68);
goto tuple_build_no_exception_51;
// Exception handling pass through code for tuple_build:
tuple_build_exception_51:;
Py_DECREF(tmp_subscript_value_85);
goto dict_build_exception_17;
// Finished with no exception for tuple_build:
tuple_build_no_exception_51:;
tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_85);
CHECK_OBJECT(tmp_subscript_value_85);
Py_DECREF(tmp_subscript_value_85);
if (tmp_dict_value_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 628;

    goto dict_build_exception_17;
}
tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
Py_DECREF(tmp_dict_value_17);
assert(!(tmp_res != 0));
}
goto dict_build_no_exception_17;
// Exception handling pass through code for dict_build:
dict_build_exception_17:;
Py_DECREF(tmp_annotations_17);
goto frame_exception_exit_1;
// Finished with no exception for dict_build:
dict_build_no_exception_17:;
Py_INCREF(tmp_defaults_17);

tmp_assign_source_28 = MAKE_FUNCTION_google$genai$_tokens_converters$$$function__17__Tool_to_mldev(tstate, tmp_defaults_17, tmp_annotations_17);

UPDATE_STRING_DICT1(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)mod_consts.const_str_plain__Tool_to_mldev, tmp_assign_source_28);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_google$genai$_tokens_converters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_google$genai$_tokens_converters->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_google$genai$_tokens_converters, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_google$genai$_tokens_converters);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("google$genai$_tokens_converters", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "google.genai._tokens_converters" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_google$genai$_tokens_converters);
    return module_google$genai$_tokens_converters;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_google$genai$_tokens_converters, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("google$genai$_tokens_converters", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

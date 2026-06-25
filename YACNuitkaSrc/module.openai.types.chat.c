/* Generated code for Python module 'openai$types$chat'
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



/* The "module_openai$types$chat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$chat;
PyDictObject *moduledict_openai$types$chat;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_join;
PyObject *const_str_plain_environ;
PyObject *const_tuple_c0760630ed38e8aa80130ab81decf450_tuple;
PyObject *const_str_digest_e92bcea7b3a97244c7d556122f12e2ea;
PyObject *const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple;
PyObject *const_str_plain_chat;
PyObject *const_tuple_b350b030b3522e8c00f62a7b17010f1b_tuple;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_str_plain_annotations;
PyObject *const_str_plain_chat_completion;
PyObject *const_tuple_str_plain_ChatCompletion_tuple;
PyObject *const_str_plain_ChatCompletion;
PyObject *const_str_plain_chat_completion_role;
PyObject *const_tuple_str_plain_ChatCompletionRole_tuple;
PyObject *const_str_plain_ChatCompletionRole;
PyObject *const_str_plain_chat_completion_audio;
PyObject *const_tuple_str_plain_ChatCompletionAudio_tuple;
PyObject *const_str_plain_ChatCompletionAudio;
PyObject *const_str_plain_chat_completion_chunk;
PyObject *const_tuple_str_plain_ChatCompletionChunk_tuple;
PyObject *const_str_plain_ChatCompletionChunk;
PyObject *const_str_plain_completion_list_params;
PyObject *const_tuple_str_plain_CompletionListParams_tuple;
PyObject *const_str_plain_CompletionListParams;
PyObject *const_str_plain_parsed_chat_completion;
PyObject *const_tuple_4e4fc81974cbea509cc728ddea0382aa_tuple;
PyObject *const_str_plain_ParsedChoice;
PyObject *const_str_plain_ParsedChatCompletion;
PyObject *const_str_plain_ParsedChatCompletionMessage;
PyObject *const_str_plain_chat_completion_deleted;
PyObject *const_tuple_str_plain_ChatCompletionDeleted_tuple;
PyObject *const_str_plain_ChatCompletionDeleted;
PyObject *const_str_plain_chat_completion_message;
PyObject *const_tuple_str_plain_ChatCompletionMessage_tuple;
PyObject *const_str_plain_ChatCompletionMessage;
PyObject *const_str_plain_chat_completion_modality;
PyObject *const_tuple_str_plain_ChatCompletionModality_tuple;
PyObject *const_str_plain_ChatCompletionModality;
PyObject *const_str_plain_completion_create_params;
PyObject *const_tuple_str_plain_CompletionCreateParams_tuple;
PyObject *const_str_plain_CompletionCreateParams;
PyObject *const_str_plain_completion_update_params;
PyObject *const_tuple_str_plain_CompletionUpdateParams_tuple;
PyObject *const_str_plain_CompletionUpdateParams;
PyObject *const_str_plain_parsed_function_tool_call;
PyObject *const_tuple_str_plain_ParsedFunction_str_plain_ParsedFunctionToolCall_tuple;
PyObject *const_str_plain_ParsedFunction;
PyObject *const_str_plain_ParsedFunctionToolCall;
PyObject *const_str_plain_chat_completion_tool_param;
PyObject *const_tuple_str_plain_ChatCompletionToolParam_tuple;
PyObject *const_str_plain_ChatCompletionToolParam;
PyObject *const_str_plain_chat_completion_audio_param;
PyObject *const_tuple_str_plain_ChatCompletionAudioParam_tuple;
PyObject *const_str_plain_ChatCompletionAudioParam;
PyObject *const_str_plain_chat_completion_function_tool;
PyObject *const_tuple_str_plain_ChatCompletionFunctionTool_tuple;
PyObject *const_str_plain_ChatCompletionFunctionTool;
PyObject *const_str_plain_chat_completion_message_param;
PyObject *const_tuple_str_plain_ChatCompletionMessageParam_tuple;
PyObject *const_str_plain_ChatCompletionMessageParam;
PyObject *const_str_plain_chat_completion_store_message;
PyObject *const_tuple_str_plain_ChatCompletionStoreMessage_tuple;
PyObject *const_str_plain_ChatCompletionStoreMessage;
PyObject *const_str_plain_chat_completion_token_logprob;
PyObject *const_tuple_str_plain_ChatCompletionTokenLogprob_tuple;
PyObject *const_str_plain_ChatCompletionTokenLogprob;
PyObject *const_str_plain_chat_completion_reasoning_effort;
PyObject *const_tuple_str_plain_ChatCompletionReasoningEffort_tuple;
PyObject *const_str_plain_ChatCompletionReasoningEffort;
PyObject *const_str_plain_chat_completion_tool_union_param;
PyObject *const_tuple_str_plain_ChatCompletionToolUnionParam_tuple;
PyObject *const_str_plain_ChatCompletionToolUnionParam;
PyObject *const_str_plain_chat_completion_content_part_text;
PyObject *const_tuple_str_plain_ChatCompletionContentPartText_tuple;
PyObject *const_str_plain_ChatCompletionContentPartText;
PyObject *const_str_plain_chat_completion_custom_tool_param;
PyObject *const_tuple_str_plain_ChatCompletionCustomToolParam_tuple;
PyObject *const_str_plain_ChatCompletionCustomToolParam;
PyObject *const_str_plain_chat_completion_message_tool_call;
PyObject *const_tuple_f5792bb5952e4344a6bd63d575805687_tuple;
PyObject *const_str_plain_ChatCompletionMessageToolCall;
PyObject *const_str_plain_ChatCompletionMessageToolCallUnion;
PyObject *const_str_plain_chat_completion_content_part_image;
PyObject *const_tuple_str_plain_ChatCompletionContentPartImage_tuple;
PyObject *const_str_plain_ChatCompletionContentPartImage;
PyObject *const_str_plain_chat_completion_content_part_param;
PyObject *const_tuple_str_plain_ChatCompletionContentPartParam_tuple;
PyObject *const_str_plain_ChatCompletionContentPartParam;
PyObject *const_str_plain_chat_completion_tool_message_param;
PyObject *const_tuple_str_plain_ChatCompletionToolMessageParam_tuple;
PyObject *const_str_plain_ChatCompletionToolMessageParam;
PyObject *const_str_plain_chat_completion_user_message_param;
PyObject *const_tuple_str_plain_ChatCompletionUserMessageParam_tuple;
PyObject *const_str_plain_ChatCompletionUserMessageParam;
PyObject *const_str_plain_chat_completion_allowed_tools_param;
PyObject *const_tuple_str_plain_ChatCompletionAllowedToolsParam_tuple;
PyObject *const_str_plain_ChatCompletionAllowedToolsParam;
PyObject *const_str_plain_chat_completion_function_tool_param;
PyObject *const_tuple_str_plain_ChatCompletionFunctionToolParam_tuple;
PyObject *const_str_plain_ChatCompletionFunctionToolParam;
PyObject *const_str_plain_chat_completion_stream_options_param;
PyObject *const_tuple_str_plain_ChatCompletionStreamOptionsParam_tuple;
PyObject *const_str_plain_ChatCompletionStreamOptionsParam;
PyObject *const_str_plain_chat_completion_system_message_param;
PyObject *const_tuple_str_plain_ChatCompletionSystemMessageParam_tuple;
PyObject *const_str_plain_ChatCompletionSystemMessageParam;
PyObject *const_str_plain_chat_completion_function_message_param;
PyObject *const_tuple_str_plain_ChatCompletionFunctionMessageParam_tuple;
PyObject *const_str_plain_ChatCompletionFunctionMessageParam;
PyObject *const_str_plain_chat_completion_assistant_message_param;
PyObject *const_tuple_str_plain_ChatCompletionAssistantMessageParam_tuple;
PyObject *const_str_plain_ChatCompletionAssistantMessageParam;
PyObject *const_str_plain_chat_completion_content_part_text_param;
PyObject *const_tuple_str_plain_ChatCompletionContentPartTextParam_tuple;
PyObject *const_str_plain_ChatCompletionContentPartTextParam;
PyObject *const_str_plain_chat_completion_developer_message_param;
PyObject *const_tuple_str_plain_ChatCompletionDeveloperMessageParam_tuple;
PyObject *const_str_plain_ChatCompletionDeveloperMessageParam;
PyObject *const_str_plain_chat_completion_message_tool_call_param;
PyObject *const_tuple_str_plain_ChatCompletionMessageToolCallParam_tuple;
PyObject *const_str_plain_ChatCompletionMessageToolCallParam;
PyObject *const_str_plain_chat_completion_named_tool_choice_param;
PyObject *const_tuple_str_plain_ChatCompletionNamedToolChoiceParam_tuple;
PyObject *const_str_plain_ChatCompletionNamedToolChoiceParam;
PyObject *const_str_plain_chat_completion_content_part_image_param;
PyObject *const_tuple_str_plain_ChatCompletionContentPartImageParam_tuple;
PyObject *const_str_plain_ChatCompletionContentPartImageParam;
PyObject *const_str_plain_chat_completion_message_custom_tool_call;
PyObject *const_tuple_str_plain_ChatCompletionMessageCustomToolCall_tuple;
PyObject *const_str_plain_ChatCompletionMessageCustomToolCall;
PyObject *const_str_plain_chat_completion_prediction_content_param;
PyObject *const_tuple_str_plain_ChatCompletionPredictionContentParam_tuple;
PyObject *const_str_plain_ChatCompletionPredictionContentParam;
PyObject *const_str_plain_chat_completion_tool_choice_option_param;
PyObject *const_tuple_str_plain_ChatCompletionToolChoiceOptionParam_tuple;
PyObject *const_str_plain_ChatCompletionToolChoiceOptionParam;
PyObject *const_str_digest_30f5a24533f328adc406b3587513bdf6;
PyObject *const_tuple_str_plain_ChatCompletionAllowedToolChoiceParam_tuple;
PyObject *const_str_plain_ChatCompletionAllowedToolChoiceParam;
PyObject *const_str_digest_d2f1728568915efe9a8ee5c35f101312;
PyObject *const_tuple_str_plain_ChatCompletionContentPartRefusalParam_tuple;
PyObject *const_str_plain_ChatCompletionContentPartRefusalParam;
PyObject *const_str_digest_84c3362e095a1442e382b1eeeb3d9c25;
PyObject *const_tuple_str_plain_ChatCompletionFunctionCallOptionParam_tuple;
PyObject *const_str_plain_ChatCompletionFunctionCallOptionParam;
PyObject *const_str_digest_236df56ace6614bd34ccec75386b97aa;
PyObject *const_tuple_str_plain_ChatCompletionMessageFunctionToolCall_tuple;
PyObject *const_str_plain_ChatCompletionMessageFunctionToolCall;
PyObject *const_str_digest_18f653922759c4ca86112d3f5a75f106;
PyObject *const_tuple_str_plain_ChatCompletionMessageToolCallUnionParam_tuple;
PyObject *const_str_plain_ChatCompletionMessageToolCallUnionParam;
PyObject *const_str_digest_061930e6cb1f8034bd59a95a689884ff;
PyObject *const_tuple_str_plain_ChatCompletionContentPartInputAudioParam_tuple;
PyObject *const_str_plain_ChatCompletionContentPartInputAudioParam;
PyObject *const_str_digest_491388cca63d26859228468f1896a9b6;
PyObject *const_tuple_str_plain_ChatCompletionMessageCustomToolCallParam_tuple;
PyObject *const_str_plain_ChatCompletionMessageCustomToolCallParam;
PyObject *const_str_digest_a2ef92bea1db1a70304cafadeb60a893;
PyObject *const_tuple_str_plain_ChatCompletionNamedToolChoiceCustomParam_tuple;
PyObject *const_str_plain_ChatCompletionNamedToolChoiceCustomParam;
PyObject *const_str_digest_d4113da675f70361512c73d3f978ea0e;
PyObject *const_tuple_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f_tuple;
PyObject *const_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f;
PyObject *const_str_digest_2a9e8b15f1f0627202eb3d7458f2963a;
PyObject *const_str_digest_6d4856173ff30e16c56744f11ac817e2;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[167];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.chat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_join);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_environ);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_digest_e92bcea7b3a97244c7d556122f12e2ea);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_tuple_b350b030b3522e8c00f62a7b17010f1b_tuple);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_annotations);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletion_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletion);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_role);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionRole_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionRole);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_audio);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAudio_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAudio);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_chunk);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionChunk_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionChunk);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_list_params);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionListParams_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionListParams);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_chat_completion);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_4e4fc81974cbea509cc728ddea0382aa_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChoice);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletion);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletionMessage);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_deleted);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionDeleted_tuple);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionDeleted);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessage_tuple);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessage);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_modality);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionModality_tuple);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionModality);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_create_params);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionCreateParams);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_completion_update_params);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionUpdateParams_tuple);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionUpdateParams);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_function_tool_call);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ParsedFunction_str_plain_ParsedFunctionToolCall_tuple);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunction);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunctionToolCall);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_param);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolParam_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolParam);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_audio_param);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAudioParam_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAudioParam);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_function_tool);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionTool_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionTool);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_param);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageParam_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageParam);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_store_message);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionStoreMessage_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionStoreMessage);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_token_logprob);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionTokenLogprob_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionTokenLogprob);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_reasoning_effort);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionReasoningEffort_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionReasoningEffort);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_union_param);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolUnionParam_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolUnionParam);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_text);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartText_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartText);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_custom_tool_param);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionCustomToolParam_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionCustomToolParam);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_tool_call);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_f5792bb5952e4344a6bd63d575805687_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCall);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCallUnion);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_image);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartImage_tuple);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartImage);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_param);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartParam_tuple);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartParam);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_message_param);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolMessageParam_tuple);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolMessageParam);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_user_message_param);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionUserMessageParam_tuple);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionUserMessageParam);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_allowed_tools_param);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolsParam_tuple);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAllowedToolsParam);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_function_tool_param);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionToolParam_tuple);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_stream_options_param);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionStreamOptionsParam_tuple);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionStreamOptionsParam);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_system_message_param);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionSystemMessageParam_tuple);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionSystemMessageParam);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_function_message_param);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionMessageParam_tuple);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionMessageParam);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_assistant_message_param);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAssistantMessageParam_tuple);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAssistantMessageParam);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_text_param);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartTextParam_tuple);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartTextParam);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_developer_message_param);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionDeveloperMessageParam_tuple);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionDeveloperMessageParam);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_tool_call_param);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallParam_tuple);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCallParam);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_named_tool_choice_param);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceParam_tuple);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionNamedToolChoiceParam);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_image_param);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartImageParam_tuple);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartImageParam);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_custom_tool_call);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCall_tuple);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageCustomToolCall);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_prediction_content_param);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionPredictionContentParam_tuple);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionPredictionContentParam);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_choice_option_param);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolChoiceOptionParam_tuple);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolChoiceOptionParam);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_str_digest_30f5a24533f328adc406b3587513bdf6);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolChoiceParam_tuple);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAllowedToolChoiceParam);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_str_digest_d2f1728568915efe9a8ee5c35f101312);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartRefusalParam_tuple);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartRefusalParam);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_str_digest_84c3362e095a1442e382b1eeeb3d9c25);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionCallOptionParam_tuple);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionCallOptionParam);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_str_digest_236df56ace6614bd34ccec75386b97aa);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageFunctionToolCall_tuple);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageFunctionToolCall);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_str_digest_18f653922759c4ca86112d3f5a75f106);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallUnionParam_tuple);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCallUnionParam);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_str_digest_061930e6cb1f8034bd59a95a689884ff);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartInputAudioParam_tuple);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartInputAudioParam);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_str_digest_491388cca63d26859228468f1896a9b6);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCallParam_tuple);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageCustomToolCallParam);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_str_digest_a2ef92bea1db1a70304cafadeb60a893);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceCustomParam_tuple);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionNamedToolChoiceCustomParam);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_str_digest_d4113da675f70361512c73d3f978ea0e);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f_tuple);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_str_digest_2a9e8b15f1f0627202eb3d7458f2963a);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_6d4856173ff30e16c56744f11ac817e2);
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
void checkModuleConstants_openai$types$chat(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_join));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_join);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_environ));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_environ);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_digest_e92bcea7b3a97244c7d556122f12e2ea));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_e92bcea7b3a97244c7d556122f12e2ea);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_tuple_b350b030b3522e8c00f62a7b17010f1b_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_b350b030b3522e8c00f62a7b17010f1b_tuple);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_str_plain_submodule_search_locations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_submodule_search_locations);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_annotations));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_annotations);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletion_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletion_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletion);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_role));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_role);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionRole_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionRole_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionRole));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionRole);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_audio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_audio);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAudio_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionAudio_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAudio));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionAudio);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_chunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_chunk);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionChunk_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionChunk_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionChunk));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionChunk);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_list_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_list_params);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionListParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CompletionListParams_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionListParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionListParams);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_chat_completion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parsed_chat_completion);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_4e4fc81974cbea509cc728ddea0382aa_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_4e4fc81974cbea509cc728ddea0382aa_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChoice));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedChoice);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedChatCompletion);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedChatCompletionMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedChatCompletionMessage);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_deleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_deleted);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionDeleted_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionDeleted_tuple);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionDeleted));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionDeleted);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_message);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionMessage_tuple);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessage);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_modality));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_modality);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionModality_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionModality_tuple);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionModality));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionModality);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_create_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_create_params);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionCreateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionCreateParams);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_completion_update_params));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_completion_update_params);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_CompletionUpdateParams_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_CompletionUpdateParams_tuple);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_str_plain_CompletionUpdateParams));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_CompletionUpdateParams);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_parsed_function_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_parsed_function_tool_call);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ParsedFunction_str_plain_ParsedFunctionToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ParsedFunction_str_plain_ParsedFunctionToolCall_tuple);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunction));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedFunction);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ParsedFunctionToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ParsedFunctionToolCall);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_tool_param);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionToolParam_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionToolParam);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_audio_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_audio_param);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAudioParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionAudioParam_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAudioParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionAudioParam);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_function_tool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_function_tool);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionTool_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionFunctionTool_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionTool));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionFunctionTool);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_message_param);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionMessageParam_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageParam);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_store_message));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_store_message);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionStoreMessage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionStoreMessage_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionStoreMessage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionStoreMessage);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_token_logprob));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_token_logprob);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionTokenLogprob_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionTokenLogprob_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionTokenLogprob));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionTokenLogprob);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_reasoning_effort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_reasoning_effort);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionReasoningEffort_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionReasoningEffort_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionReasoningEffort));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionReasoningEffort);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_union_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_tool_union_param);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolUnionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionToolUnionParam_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolUnionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionToolUnionParam);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_text));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_content_part_text);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartText_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionContentPartText_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartText));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionContentPartText);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_custom_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_custom_tool_param);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionCustomToolParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionCustomToolParam_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionCustomToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionCustomToolParam);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_message_tool_call);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_f5792bb5952e4344a6bd63d575805687_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_f5792bb5952e4344a6bd63d575805687_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageToolCall);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCallUnion));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageToolCallUnion);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_image));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_content_part_image);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartImage_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionContentPartImage_tuple);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartImage));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionContentPartImage);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_content_part_param);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionContentPartParam_tuple);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionContentPartParam);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_tool_message_param);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionToolMessageParam_tuple);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionToolMessageParam);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_user_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_user_message_param);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionUserMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionUserMessageParam_tuple);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionUserMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionUserMessageParam);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_allowed_tools_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_allowed_tools_param);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolsParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolsParam_tuple);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAllowedToolsParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionAllowedToolsParam);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_function_tool_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_function_tool_param);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionToolParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionFunctionToolParam_tuple);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionToolParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_stream_options_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_stream_options_param);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionStreamOptionsParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionStreamOptionsParam_tuple);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionStreamOptionsParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionStreamOptionsParam);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_system_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_system_message_param);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionSystemMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionSystemMessageParam_tuple);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionSystemMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionSystemMessageParam);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_function_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_function_message_param);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionFunctionMessageParam_tuple);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionFunctionMessageParam);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_assistant_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_assistant_message_param);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAssistantMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionAssistantMessageParam_tuple);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAssistantMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionAssistantMessageParam);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_text_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_content_part_text_param);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartTextParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionContentPartTextParam_tuple);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartTextParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionContentPartTextParam);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_developer_message_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_developer_message_param);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionDeveloperMessageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionDeveloperMessageParam_tuple);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionDeveloperMessageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionDeveloperMessageParam);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_tool_call_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_message_tool_call_param);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallParam_tuple);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCallParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageToolCallParam);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_named_tool_choice_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_named_tool_choice_param);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceParam_tuple);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionNamedToolChoiceParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionNamedToolChoiceParam);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_content_part_image_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_content_part_image_param);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartImageParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionContentPartImageParam_tuple);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartImageParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionContentPartImageParam);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_message_custom_tool_call));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_message_custom_tool_call);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCall_tuple);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageCustomToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageCustomToolCall);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_prediction_content_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_prediction_content_param);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionPredictionContentParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionPredictionContentParam_tuple);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionPredictionContentParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionPredictionContentParam);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_str_plain_chat_completion_tool_choice_option_param));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_chat_completion_tool_choice_option_param);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionToolChoiceOptionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionToolChoiceOptionParam_tuple);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionToolChoiceOptionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionToolChoiceOptionParam);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_str_digest_30f5a24533f328adc406b3587513bdf6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_30f5a24533f328adc406b3587513bdf6);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolChoiceParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolChoiceParam_tuple);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionAllowedToolChoiceParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionAllowedToolChoiceParam);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_str_digest_d2f1728568915efe9a8ee5c35f101312));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d2f1728568915efe9a8ee5c35f101312);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartRefusalParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionContentPartRefusalParam_tuple);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartRefusalParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionContentPartRefusalParam);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_str_digest_84c3362e095a1442e382b1eeeb3d9c25));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_84c3362e095a1442e382b1eeeb3d9c25);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionFunctionCallOptionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionFunctionCallOptionParam_tuple);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionFunctionCallOptionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionFunctionCallOptionParam);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_str_digest_236df56ace6614bd34ccec75386b97aa));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_236df56ace6614bd34ccec75386b97aa);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageFunctionToolCall_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionMessageFunctionToolCall_tuple);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageFunctionToolCall));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageFunctionToolCall);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_str_digest_18f653922759c4ca86112d3f5a75f106));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_18f653922759c4ca86112d3f5a75f106);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallUnionParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallUnionParam_tuple);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageToolCallUnionParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageToolCallUnionParam);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_str_digest_061930e6cb1f8034bd59a95a689884ff));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_061930e6cb1f8034bd59a95a689884ff);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionContentPartInputAudioParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionContentPartInputAudioParam_tuple);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionContentPartInputAudioParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionContentPartInputAudioParam);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_str_digest_491388cca63d26859228468f1896a9b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_491388cca63d26859228468f1896a9b6);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCallParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCallParam_tuple);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionMessageCustomToolCallParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionMessageCustomToolCallParam);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_str_digest_a2ef92bea1db1a70304cafadeb60a893));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a2ef92bea1db1a70304cafadeb60a893);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceCustomParam_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceCustomParam_tuple);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_plain_ChatCompletionNamedToolChoiceCustomParam));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ChatCompletionNamedToolChoiceCustomParam);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_str_digest_d4113da675f70361512c73d3f978ea0e));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_d4113da675f70361512c73d3f978ea0e);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f_tuple);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_str_digest_2a9e8b15f1f0627202eb3d7458f2963a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2a9e8b15f1f0627202eb3d7458f2963a);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_6d4856173ff30e16c56744f11ac817e2));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_6d4856173ff30e16c56744f11ac817e2);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
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
static PyObject *module_var_accessor_openai$types$chat$__path__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$chat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$chat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___path__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$chat->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___path__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___path__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___path__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$chat$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$chat->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$chat->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$chat->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_671790c1f9b8ad51ce154bb4384b5464;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_2a9e8b15f1f0627202eb3d7458f2963a); CHECK_OBJECT(module_filename_obj);
code_objects_671790c1f9b8ad51ce154bb4384b5464 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts.const_str_digest_6d4856173ff30e16c56744f11ac817e2, mod_consts.const_str_digest_6d4856173ff30e16c56744f11ac817e2, NULL, NULL, 0, 0, 0);
}
#endif

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_openai$types$chat[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$chat);
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
        module_openai$types$chat,
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
        function_table_openai$types$chat,
        sizeof(function_table_openai$types$chat) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.chat";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$chat(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$chat");

    // Store the module for future use.
    module_openai$types$chat = module;

    moduledict_openai$types$chat = MODULE_DICT(module_openai$types$chat);

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
        PRINT_STRING("openai$types$chat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$chat: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$chat: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.chat" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$chat\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$chat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$chat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$chat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$chat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$chat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$chat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$chat);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
PyObject *tmp_import_from_2__module = NULL;
PyObject *tmp_import_from_3__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$chat;
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

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$chat = MAKE_MODULE_FRAME(code_objects_671790c1f9b8ad51ce154bb4384b5464, module_openai$types$chat);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$chat);
assert(Py_REFCNT(frame_frame_openai$types$chat) == 2);

// Framed code:
{
PyObject *tmp_assign_source_3;
PyObject *tmp_list_element_1;
PyObject *tmp_called_value_1;
PyObject *tmp_expression_value_1;
PyObject *tmp_args_element_value_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
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
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
CHECK_OBJECT(tmp_called_value_1);
Py_DECREF(tmp_called_value_1);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 4);
{
PyObject *tmp_called_value_2;
PyObject *tmp_expression_value_2;
PyObject *tmp_args_element_value_2;
PyObject *tmp_called_value_3;
PyObject *tmp_expression_value_3;
PyObject *tmp_args_element_value_3;
PyObject *tmp_called_value_4;
PyObject *tmp_expression_value_4;
PyObject *tmp_args_element_value_4;
PyObject *tmp_called_value_5;
PyObject *tmp_expression_value_5;
PyObject *tmp_args_element_value_5;
PyObject *tmp_called_value_6;
PyObject *tmp_expression_value_6;
PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


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
tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_2);
Py_DECREF(tmp_expression_value_2);
if (tmp_called_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_3 = NULL;
    }
}
if (tmp_expression_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_3);
Py_DECREF(tmp_expression_value_3);
if (tmp_called_value_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
tmp_args_element_value_2 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_3, mod_consts.const_tuple_c0760630ed38e8aa80130ab81decf450_tuple);

CHECK_OBJECT(tmp_called_value_3);
Py_DECREF(tmp_called_value_3);
if (tmp_args_element_value_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_2);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_3 = mod_consts.const_str_digest_e92bcea7b3a97244c7d556122f12e2ea;
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
}

CHECK_OBJECT(tmp_called_value_2);
Py_DECREF(tmp_called_value_2);
CHECK_OBJECT(tmp_args_element_value_2);
Py_DECREF(tmp_args_element_value_2);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, const_str_plain_path);


    } else {
        tmp_expression_value_4 = NULL;
    }
}
if (tmp_expression_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts.const_str_plain_join);
CHECK_OBJECT(tmp_expression_value_4);
Py_DECREF(tmp_expression_value_4);
if (tmp_called_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_5 = NULL;
    }
}
if (tmp_expression_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_5);
Py_DECREF(tmp_expression_value_5);
if (tmp_called_value_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
tmp_args_element_value_4 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_5, mod_consts.const_tuple_9cd5bc076fd1ee60f6c29e9b75c3c5d6_tuple);

CHECK_OBJECT(tmp_called_value_5);
Py_DECREF(tmp_called_value_5);
if (tmp_args_element_value_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
Py_DECREF(tmp_called_value_4);

exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_args_element_value_5 = mod_consts.const_str_plain_chat;
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
{
    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
    tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
}

CHECK_OBJECT(tmp_called_value_4);
Py_DECREF(tmp_called_value_4);
CHECK_OBJECT(tmp_args_element_value_4);
Py_DECREF(tmp_args_element_value_4);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 2, tmp_list_element_1);
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
{
    PyObject *hard_module = IMPORT_HARD_OS();
    if (likely(hard_module != NULL)) {
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_environ);


    } else {
        tmp_expression_value_6 = NULL;
    }
}
if (tmp_expression_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, const_str_plain_get);
CHECK_OBJECT(tmp_expression_value_6);
Py_DECREF(tmp_expression_value_6);
if (tmp_called_value_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
frame_frame_openai$types$chat->m_frame.f_lineno = 1;
tmp_list_element_1 = CALL_FUNCTION_WITH_POS_ARGS2(tstate, tmp_called_value_6, mod_consts.const_tuple_b350b030b3522e8c00f62a7b17010f1b_tuple);

CHECK_OBJECT(tmp_called_value_6);
Py_DECREF(tmp_called_value_6);
if (tmp_list_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 1;

    goto list_build_exception_1;
}
PyList_SET_ITEM(tmp_assign_source_3, 3, tmp_list_element_1);
}
goto list_build_no_exception_1;
// Exception handling pass through code for list_build:
list_build_exception_1:;
Py_DECREF(tmp_assign_source_3);
goto frame_exception_exit_1;
// Finished with no exception for list_build:
list_build_no_exception_1:;
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3);
}
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$chat$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$chat$__spec__(tstate);
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
tmp_assattr_value_3 = module_var_accessor_openai$types$chat$__path__(tstate);
if (unlikely(tmp_assattr_value_3 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___path__);
}

if (tmp_assattr_value_3 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 1;

    goto frame_exception_exit_1;
}
tmp_assattr_target_3 = module_var_accessor_openai$types$chat$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
{
    PyObject *hard_module = IMPORT_HARD___FUTURE__();
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts.const_str_plain_annotations);
}
assert(!(tmp_assign_source_5 == NULL));
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_annotations, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_import_name_from_1;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_chat_completion;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_ChatCompletion_tuple;
tmp_level_value_1 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 5;
tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_import_name_from_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletion,
        const_int_0
    );
} else {
    tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_ChatCompletion);
}

CHECK_OBJECT(tmp_import_name_from_1);
Py_DECREF(tmp_import_name_from_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 5;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletion, tmp_assign_source_6);
}
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain_chat_completion_role;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_ChatCompletionRole_tuple;
tmp_level_value_2 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 6;
tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_2 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionRole,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_ChatCompletionRole);
}

CHECK_OBJECT(tmp_import_name_from_2);
Py_DECREF(tmp_import_name_from_2);
if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionRole, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_chat_completion_audio;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ChatCompletionAudio_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 7;
tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_3 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionAudio,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_ChatCompletionAudio);
}

CHECK_OBJECT(tmp_import_name_from_3);
Py_DECREF(tmp_import_name_from_3);
if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionAudio, tmp_assign_source_8);
}
{
PyObject *tmp_assign_source_9;
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_chat_completion_chunk;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ChatCompletionChunk_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 8;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionChunk,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_ChatCompletionChunk);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionChunk, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_completion_list_params;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_CompletionListParams_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 9;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_CompletionListParams,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_CompletionListParams);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionListParams, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_parsed_chat_completion;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_4e4fc81974cbea509cc728ddea0382aa_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 10;
tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
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
PyObject *tmp_import_name_from_6;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_6 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ParsedChoice,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ParsedChoice);
}

if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChoice, tmp_assign_source_12);
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
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ParsedChatCompletion,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ParsedChatCompletion);
}

if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletion, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_8;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_8 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ParsedChatCompletionMessage,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ParsedChatCompletionMessage);
}

if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedChatCompletionMessage, tmp_assign_source_14);
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
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_chat_completion_deleted;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ChatCompletionDeleted_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 15;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionDeleted,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ChatCompletionDeleted);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionDeleted, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_chat_completion_message;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ChatCompletionMessage_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 16;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessage,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ChatCompletionMessage);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessage, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_chat_completion_modality;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_ChatCompletionModality_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 17;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionModality,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ChatCompletionModality);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionModality, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_completion_create_params;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_CompletionCreateParams_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 18;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_CompletionCreateParams,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_CompletionCreateParams);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionCreateParams, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_completion_update_params;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_CompletionUpdateParams_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 19;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_CompletionUpdateParams,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_CompletionUpdateParams);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_CompletionUpdateParams, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_parsed_function_tool_call;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_ParsedFunction_str_plain_ParsedFunctionToolCall_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 20;
tmp_assign_source_20 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_2__module == NULL);
tmp_import_from_2__module = tmp_assign_source_20;
}
// Tried code:
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_14;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_14 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ParsedFunction,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_ParsedFunction);
}

if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunction, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_15;
CHECK_OBJECT(tmp_import_from_2__module);
tmp_import_name_from_15 = tmp_import_from_2__module;
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ParsedFunctionToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_ParsedFunctionToolCall);
}

if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto try_except_handler_2;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ParsedFunctionToolCall, tmp_assign_source_22);
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
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_chat_completion_tool_param;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ChatCompletionToolParam_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 24;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ChatCompletionToolParam);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionToolParam, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_chat_completion_audio_param;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_ChatCompletionAudioParam_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 25;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionAudioParam,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_ChatCompletionAudioParam);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionAudioParam, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_chat_completion_function_tool;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_ChatCompletionFunctionTool_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 26;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionFunctionTool,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_ChatCompletionFunctionTool);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionTool, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_chat_completion_message_param;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_ChatCompletionMessageParam_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 27;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_ChatCompletionMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageParam, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_chat_completion_store_message;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_ChatCompletionStoreMessage_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 28;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionStoreMessage,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_ChatCompletionStoreMessage);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionStoreMessage, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_chat_completion_token_logprob;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_ChatCompletionTokenLogprob_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 29;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionTokenLogprob,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_ChatCompletionTokenLogprob);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionTokenLogprob, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_chat_completion_reasoning_effort;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_ChatCompletionReasoningEffort_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 30;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionReasoningEffort,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ChatCompletionReasoningEffort);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionReasoningEffort, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_chat_completion_tool_union_param;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_ChatCompletionToolUnionParam_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 31;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionToolUnionParam,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ChatCompletionToolUnionParam);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionToolUnionParam, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_chat_completion_content_part_text;
tmp_globals_arg_value_21 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_ChatCompletionContentPartText_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 32;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionContentPartText,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_ChatCompletionContentPartText);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionContentPartText, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_chat_completion_custom_tool_param;
tmp_globals_arg_value_22 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_ChatCompletionCustomToolParam_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 33;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionCustomToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_ChatCompletionCustomToolParam);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionCustomToolParam, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain_chat_completion_message_tool_call;
tmp_globals_arg_value_23 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_f5792bb5952e4344a6bd63d575805687_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 34;
tmp_assign_source_33 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_3__module == NULL);
tmp_import_from_3__module = tmp_assign_source_33;
}
// Tried code:
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_26;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_26 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_ChatCompletionMessageToolCall);
}

if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageToolCall, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_27;
CHECK_OBJECT(tmp_import_from_3__module);
tmp_import_name_from_27 = tmp_import_from_3__module;
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageToolCallUnion,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_ChatCompletionMessageToolCallUnion);
}

if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto try_except_handler_3;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageToolCallUnion, tmp_assign_source_35);
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
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_chat_completion_content_part_image;
tmp_globals_arg_value_24 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_ChatCompletionContentPartImage_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 38;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionContentPartImage,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ChatCompletionContentPartImage);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionContentPartImage, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain_chat_completion_content_part_param;
tmp_globals_arg_value_25 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_ChatCompletionContentPartParam_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 39;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionContentPartParam,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ChatCompletionContentPartParam);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionContentPartParam, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain_chat_completion_tool_message_param;
tmp_globals_arg_value_26 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_ChatCompletionToolMessageParam_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 40;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionToolMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_ChatCompletionToolMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionToolMessageParam, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain_chat_completion_user_message_param;
tmp_globals_arg_value_27 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_ChatCompletionUserMessageParam_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 41;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionUserMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_ChatCompletionUserMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionUserMessageParam, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain_chat_completion_allowed_tools_param;
tmp_globals_arg_value_28 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolsParam_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 42;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionAllowedToolsParam,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_ChatCompletionAllowedToolsParam);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionAllowedToolsParam, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain_chat_completion_function_tool_param;
tmp_globals_arg_value_29 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_ChatCompletionFunctionToolParam_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 43;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionFunctionToolParam,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_ChatCompletionFunctionToolParam);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionToolParam, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_plain_chat_completion_stream_options_param;
tmp_globals_arg_value_30 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_ChatCompletionStreamOptionsParam_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 44;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionStreamOptionsParam,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_ChatCompletionStreamOptionsParam);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionStreamOptionsParam, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain_chat_completion_system_message_param;
tmp_globals_arg_value_31 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_ChatCompletionSystemMessageParam_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 45;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionSystemMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_ChatCompletionSystemMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionSystemMessageParam, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain_chat_completion_function_message_param;
tmp_globals_arg_value_32 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_ChatCompletionFunctionMessageParam_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 46;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionFunctionMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_ChatCompletionFunctionMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionMessageParam, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain_chat_completion_assistant_message_param;
tmp_globals_arg_value_33 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_ChatCompletionAssistantMessageParam_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 49;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionAssistantMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_ChatCompletionAssistantMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionAssistantMessageParam, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_plain_chat_completion_content_part_text_param;
tmp_globals_arg_value_34 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_ChatCompletionContentPartTextParam_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 52;
tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionContentPartTextParam,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_ChatCompletionContentPartTextParam);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionContentPartTextParam, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_plain_chat_completion_developer_message_param;
tmp_globals_arg_value_35 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_ChatCompletionDeveloperMessageParam_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 55;
tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionDeveloperMessageParam,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_ChatCompletionDeveloperMessageParam);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionDeveloperMessageParam, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_plain_chat_completion_message_tool_call_param;
tmp_globals_arg_value_36 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallParam_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 58;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageToolCallParam,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_ChatCompletionMessageToolCallParam);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageToolCallParam, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_41;
PyObject *tmp_name_value_37;
PyObject *tmp_globals_arg_value_37;
PyObject *tmp_locals_arg_value_37;
PyObject *tmp_fromlist_value_37;
PyObject *tmp_level_value_37;
tmp_name_value_37 = mod_consts.const_str_plain_chat_completion_named_tool_choice_param;
tmp_globals_arg_value_37 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_37 = Py_None;
tmp_fromlist_value_37 = mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceParam_tuple;
tmp_level_value_37 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 61;
tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
if (tmp_import_name_from_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionNamedToolChoiceParam,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_ChatCompletionNamedToolChoiceParam);
}

CHECK_OBJECT(tmp_import_name_from_41);
Py_DECREF(tmp_import_name_from_41);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 61;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionNamedToolChoiceParam, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_38;
PyObject *tmp_globals_arg_value_38;
PyObject *tmp_locals_arg_value_38;
PyObject *tmp_fromlist_value_38;
PyObject *tmp_level_value_38;
tmp_name_value_38 = mod_consts.const_str_plain_chat_completion_content_part_image_param;
tmp_globals_arg_value_38 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_38 = Py_None;
tmp_fromlist_value_38 = mod_consts.const_tuple_str_plain_ChatCompletionContentPartImageParam_tuple;
tmp_level_value_38 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 64;
tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
if (tmp_import_name_from_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionContentPartImageParam,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_ChatCompletionContentPartImageParam);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionContentPartImageParam, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_39;
PyObject *tmp_globals_arg_value_39;
PyObject *tmp_locals_arg_value_39;
PyObject *tmp_fromlist_value_39;
PyObject *tmp_level_value_39;
tmp_name_value_39 = mod_consts.const_str_plain_chat_completion_message_custom_tool_call;
tmp_globals_arg_value_39 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_39 = Py_None;
tmp_fromlist_value_39 = mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCall_tuple;
tmp_level_value_39 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 67;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageCustomToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_ChatCompletionMessageCustomToolCall);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 67;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageCustomToolCall, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_44;
PyObject *tmp_name_value_40;
PyObject *tmp_globals_arg_value_40;
PyObject *tmp_locals_arg_value_40;
PyObject *tmp_fromlist_value_40;
PyObject *tmp_level_value_40;
tmp_name_value_40 = mod_consts.const_str_plain_chat_completion_prediction_content_param;
tmp_globals_arg_value_40 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_40 = Py_None;
tmp_fromlist_value_40 = mod_consts.const_tuple_str_plain_ChatCompletionPredictionContentParam_tuple;
tmp_level_value_40 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 70;
tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
if (tmp_import_name_from_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionPredictionContentParam,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_ChatCompletionPredictionContentParam);
}

CHECK_OBJECT(tmp_import_name_from_44);
Py_DECREF(tmp_import_name_from_44);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 70;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionPredictionContentParam, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_45;
PyObject *tmp_name_value_41;
PyObject *tmp_globals_arg_value_41;
PyObject *tmp_locals_arg_value_41;
PyObject *tmp_fromlist_value_41;
PyObject *tmp_level_value_41;
tmp_name_value_41 = mod_consts.const_str_plain_chat_completion_tool_choice_option_param;
tmp_globals_arg_value_41 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_41 = Py_None;
tmp_fromlist_value_41 = mod_consts.const_tuple_str_plain_ChatCompletionToolChoiceOptionParam_tuple;
tmp_level_value_41 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 73;
tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
if (tmp_import_name_from_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionToolChoiceOptionParam,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_ChatCompletionToolChoiceOptionParam);
}

CHECK_OBJECT(tmp_import_name_from_45);
Py_DECREF(tmp_import_name_from_45);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 73;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionToolChoiceOptionParam, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_46;
PyObject *tmp_name_value_42;
PyObject *tmp_globals_arg_value_42;
PyObject *tmp_locals_arg_value_42;
PyObject *tmp_fromlist_value_42;
PyObject *tmp_level_value_42;
tmp_name_value_42 = mod_consts.const_str_digest_30f5a24533f328adc406b3587513bdf6;
tmp_globals_arg_value_42 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_42 = Py_None;
tmp_fromlist_value_42 = mod_consts.const_tuple_str_plain_ChatCompletionAllowedToolChoiceParam_tuple;
tmp_level_value_42 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 76;
tmp_import_name_from_46 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
if (tmp_import_name_from_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionAllowedToolChoiceParam,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_ChatCompletionAllowedToolChoiceParam);
}

CHECK_OBJECT(tmp_import_name_from_46);
Py_DECREF(tmp_import_name_from_46);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 76;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionAllowedToolChoiceParam, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_47;
PyObject *tmp_name_value_43;
PyObject *tmp_globals_arg_value_43;
PyObject *tmp_locals_arg_value_43;
PyObject *tmp_fromlist_value_43;
PyObject *tmp_level_value_43;
tmp_name_value_43 = mod_consts.const_str_digest_d2f1728568915efe9a8ee5c35f101312;
tmp_globals_arg_value_43 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_43 = Py_None;
tmp_fromlist_value_43 = mod_consts.const_tuple_str_plain_ChatCompletionContentPartRefusalParam_tuple;
tmp_level_value_43 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 79;
tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
if (tmp_import_name_from_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionContentPartRefusalParam,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_ChatCompletionContentPartRefusalParam);
}

CHECK_OBJECT(tmp_import_name_from_47);
Py_DECREF(tmp_import_name_from_47);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 79;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionContentPartRefusalParam, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_44;
PyObject *tmp_globals_arg_value_44;
PyObject *tmp_locals_arg_value_44;
PyObject *tmp_fromlist_value_44;
PyObject *tmp_level_value_44;
tmp_name_value_44 = mod_consts.const_str_digest_84c3362e095a1442e382b1eeeb3d9c25;
tmp_globals_arg_value_44 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_44 = Py_None;
tmp_fromlist_value_44 = mod_consts.const_tuple_str_plain_ChatCompletionFunctionCallOptionParam_tuple;
tmp_level_value_44 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 82;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionFunctionCallOptionParam,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_ChatCompletionFunctionCallOptionParam);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 82;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionFunctionCallOptionParam, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_49;
PyObject *tmp_name_value_45;
PyObject *tmp_globals_arg_value_45;
PyObject *tmp_locals_arg_value_45;
PyObject *tmp_fromlist_value_45;
PyObject *tmp_level_value_45;
tmp_name_value_45 = mod_consts.const_str_digest_236df56ace6614bd34ccec75386b97aa;
tmp_globals_arg_value_45 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_45 = Py_None;
tmp_fromlist_value_45 = mod_consts.const_tuple_str_plain_ChatCompletionMessageFunctionToolCall_tuple;
tmp_level_value_45 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 85;
tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
if (tmp_import_name_from_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageFunctionToolCall,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_ChatCompletionMessageFunctionToolCall);
}

CHECK_OBJECT(tmp_import_name_from_49);
Py_DECREF(tmp_import_name_from_49);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 85;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageFunctionToolCall, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_50;
PyObject *tmp_name_value_46;
PyObject *tmp_globals_arg_value_46;
PyObject *tmp_locals_arg_value_46;
PyObject *tmp_fromlist_value_46;
PyObject *tmp_level_value_46;
tmp_name_value_46 = mod_consts.const_str_digest_18f653922759c4ca86112d3f5a75f106;
tmp_globals_arg_value_46 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_46 = Py_None;
tmp_fromlist_value_46 = mod_consts.const_tuple_str_plain_ChatCompletionMessageToolCallUnionParam_tuple;
tmp_level_value_46 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 88;
tmp_import_name_from_50 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
if (tmp_import_name_from_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageToolCallUnionParam,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_ChatCompletionMessageToolCallUnionParam);
}

CHECK_OBJECT(tmp_import_name_from_50);
Py_DECREF(tmp_import_name_from_50);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 88;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageToolCallUnionParam, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_51;
PyObject *tmp_name_value_47;
PyObject *tmp_globals_arg_value_47;
PyObject *tmp_locals_arg_value_47;
PyObject *tmp_fromlist_value_47;
PyObject *tmp_level_value_47;
tmp_name_value_47 = mod_consts.const_str_digest_061930e6cb1f8034bd59a95a689884ff;
tmp_globals_arg_value_47 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_47 = Py_None;
tmp_fromlist_value_47 = mod_consts.const_tuple_str_plain_ChatCompletionContentPartInputAudioParam_tuple;
tmp_level_value_47 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 91;
tmp_import_name_from_51 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
if (tmp_import_name_from_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionContentPartInputAudioParam,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_ChatCompletionContentPartInputAudioParam);
}

CHECK_OBJECT(tmp_import_name_from_51);
Py_DECREF(tmp_import_name_from_51);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 91;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionContentPartInputAudioParam, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_52;
PyObject *tmp_name_value_48;
PyObject *tmp_globals_arg_value_48;
PyObject *tmp_locals_arg_value_48;
PyObject *tmp_fromlist_value_48;
PyObject *tmp_level_value_48;
tmp_name_value_48 = mod_consts.const_str_digest_491388cca63d26859228468f1896a9b6;
tmp_globals_arg_value_48 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_48 = Py_None;
tmp_fromlist_value_48 = mod_consts.const_tuple_str_plain_ChatCompletionMessageCustomToolCallParam_tuple;
tmp_level_value_48 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 94;
tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
if (tmp_import_name_from_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionMessageCustomToolCallParam,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_ChatCompletionMessageCustomToolCallParam);
}

CHECK_OBJECT(tmp_import_name_from_52);
Py_DECREF(tmp_import_name_from_52);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 94;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionMessageCustomToolCallParam, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_53;
PyObject *tmp_name_value_49;
PyObject *tmp_globals_arg_value_49;
PyObject *tmp_locals_arg_value_49;
PyObject *tmp_fromlist_value_49;
PyObject *tmp_level_value_49;
tmp_name_value_49 = mod_consts.const_str_digest_a2ef92bea1db1a70304cafadeb60a893;
tmp_globals_arg_value_49 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_49 = Py_None;
tmp_fromlist_value_49 = mod_consts.const_tuple_str_plain_ChatCompletionNamedToolChoiceCustomParam_tuple;
tmp_level_value_49 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 97;
tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
if (tmp_import_name_from_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_plain_ChatCompletionNamedToolChoiceCustomParam,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_ChatCompletionNamedToolChoiceCustomParam);
}

CHECK_OBJECT(tmp_import_name_from_53);
Py_DECREF(tmp_import_name_from_53);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 97;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_plain_ChatCompletionNamedToolChoiceCustomParam, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_54;
PyObject *tmp_name_value_50;
PyObject *tmp_globals_arg_value_50;
PyObject *tmp_locals_arg_value_50;
PyObject *tmp_fromlist_value_50;
PyObject *tmp_level_value_50;
tmp_name_value_50 = mod_consts.const_str_digest_d4113da675f70361512c73d3f978ea0e;
tmp_globals_arg_value_50 = (PyObject *)moduledict_openai$types$chat;
tmp_locals_arg_value_50 = Py_None;
tmp_fromlist_value_50 = mod_consts.const_tuple_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f_tuple;
tmp_level_value_50 = const_int_pos_1;
frame_frame_openai$types$chat->m_frame.f_lineno = 100;
tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
if (tmp_import_name_from_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_openai$types$chat,
        mod_consts.const_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f);
}

CHECK_OBJECT(tmp_import_name_from_54);
Py_DECREF(tmp_import_name_from_54);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 100;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$chat, (Nuitka_StringObject *)mod_consts.const_str_digest_2f73ab7bbd3c9cfa29b56275c585fc2f, tmp_assign_source_62);
}


// Put the previous frame back on top.
popFrameStack(tstate);

goto frame_no_exception_1;
frame_exception_exit_1:


{
    PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$chat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$chat->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$chat, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$chat);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$chat", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.chat" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$chat);
    return module_openai$types$chat;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$chat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$chat", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}

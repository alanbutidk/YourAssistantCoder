/* Generated code for Python module 'openai$types$responses$response_stream_event'
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



/* The "module_openai$types$responses$response_stream_event" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openai$types$responses$response_stream_event;
PyDictObject *moduledict_openai$types$responses$response_stream_event;

/* The declarations of module constants used, if any. */
static struct ModuleConstants {
PyObject *const_str_plain_origin;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_Union;
PyObject *const_str_plain_typing_extensions;
PyObject *const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
PyObject *const_str_plain_Annotated;
PyObject *const_str_plain_TypeAlias;
PyObject *const_str_plain__utils;
PyObject *const_tuple_str_plain_PropertyInfo_tuple;
PyObject *const_int_pos_3;
PyObject *const_str_plain_PropertyInfo;
PyObject *const_str_plain_response_error_event;
PyObject *const_tuple_str_plain_ResponseErrorEvent_tuple;
PyObject *const_str_plain_ResponseErrorEvent;
PyObject *const_str_plain_response_failed_event;
PyObject *const_tuple_str_plain_ResponseFailedEvent_tuple;
PyObject *const_str_plain_ResponseFailedEvent;
PyObject *const_str_plain_response_queued_event;
PyObject *const_tuple_str_plain_ResponseQueuedEvent_tuple;
PyObject *const_str_plain_ResponseQueuedEvent;
PyObject *const_str_plain_response_created_event;
PyObject *const_tuple_str_plain_ResponseCreatedEvent_tuple;
PyObject *const_str_plain_ResponseCreatedEvent;
PyObject *const_str_plain_response_completed_event;
PyObject *const_tuple_str_plain_ResponseCompletedEvent_tuple;
PyObject *const_str_plain_ResponseCompletedEvent;
PyObject *const_str_plain_response_text_done_event;
PyObject *const_tuple_str_plain_ResponseTextDoneEvent_tuple;
PyObject *const_str_plain_ResponseTextDoneEvent;
PyObject *const_str_plain_response_audio_done_event;
PyObject *const_tuple_str_plain_ResponseAudioDoneEvent_tuple;
PyObject *const_str_plain_ResponseAudioDoneEvent;
PyObject *const_str_plain_response_incomplete_event;
PyObject *const_tuple_str_plain_ResponseIncompleteEvent_tuple;
PyObject *const_str_plain_ResponseIncompleteEvent;
PyObject *const_str_plain_response_text_delta_event;
PyObject *const_tuple_str_plain_ResponseTextDeltaEvent_tuple;
PyObject *const_str_plain_ResponseTextDeltaEvent;
PyObject *const_str_plain_response_audio_delta_event;
PyObject *const_tuple_str_plain_ResponseAudioDeltaEvent_tuple;
PyObject *const_str_plain_ResponseAudioDeltaEvent;
PyObject *const_str_plain_response_in_progress_event;
PyObject *const_tuple_str_plain_ResponseInProgressEvent_tuple;
PyObject *const_str_plain_ResponseInProgressEvent;
PyObject *const_str_plain_response_refusal_done_event;
PyObject *const_tuple_str_plain_ResponseRefusalDoneEvent_tuple;
PyObject *const_str_plain_ResponseRefusalDoneEvent;
PyObject *const_str_plain_response_refusal_delta_event;
PyObject *const_tuple_str_plain_ResponseRefusalDeltaEvent_tuple;
PyObject *const_str_plain_ResponseRefusalDeltaEvent;
PyObject *const_str_plain_response_mcp_call_failed_event;
PyObject *const_tuple_str_plain_ResponseMcpCallFailedEvent_tuple;
PyObject *const_str_plain_ResponseMcpCallFailedEvent;
PyObject *const_str_plain_response_output_item_done_event;
PyObject *const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple;
PyObject *const_str_plain_ResponseOutputItemDoneEvent;
PyObject *const_str_plain_response_content_part_done_event;
PyObject *const_tuple_str_plain_ResponseContentPartDoneEvent_tuple;
PyObject *const_str_plain_ResponseContentPartDoneEvent;
PyObject *const_str_plain_response_output_item_added_event;
PyObject *const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple;
PyObject *const_str_plain_ResponseOutputItemAddedEvent;
PyObject *const_str_plain_response_content_part_added_event;
PyObject *const_tuple_str_plain_ResponseContentPartAddedEvent_tuple;
PyObject *const_str_plain_ResponseContentPartAddedEvent;
PyObject *const_str_plain_response_mcp_call_completed_event;
PyObject *const_tuple_str_plain_ResponseMcpCallCompletedEvent_tuple;
PyObject *const_str_plain_ResponseMcpCallCompletedEvent;
PyObject *const_str_plain_response_reasoning_text_done_event;
PyObject *const_tuple_str_plain_ResponseReasoningTextDoneEvent_tuple;
PyObject *const_str_plain_ResponseReasoningTextDoneEvent;
PyObject *const_str_plain_response_mcp_call_in_progress_event;
PyObject *const_tuple_str_plain_ResponseMcpCallInProgressEvent_tuple;
PyObject *const_str_plain_ResponseMcpCallInProgressEvent;
PyObject *const_str_plain_response_reasoning_text_delta_event;
PyObject *const_tuple_str_plain_ResponseReasoningTextDeltaEvent_tuple;
PyObject *const_str_plain_ResponseReasoningTextDeltaEvent;
PyObject *const_str_plain_response_audio_transcript_done_event;
PyObject *const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple;
PyObject *const_str_plain_ResponseAudioTranscriptDoneEvent;
PyObject *const_str_plain_response_mcp_list_tools_failed_event;
PyObject *const_tuple_str_plain_ResponseMcpListToolsFailedEvent_tuple;
PyObject *const_str_plain_ResponseMcpListToolsFailedEvent;
PyObject *const_str_plain_response_audio_transcript_delta_event;
PyObject *const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple;
PyObject *const_str_plain_ResponseAudioTranscriptDeltaEvent;
PyObject *const_str_plain_response_mcp_call_arguments_done_event;
PyObject *const_tuple_str_plain_ResponseMcpCallArgumentsDoneEvent_tuple;
PyObject *const_str_plain_ResponseMcpCallArgumentsDoneEvent;
PyObject *const_str_plain_response_image_gen_call_completed_event;
PyObject *const_tuple_str_plain_ResponseImageGenCallCompletedEvent_tuple;
PyObject *const_str_plain_ResponseImageGenCallCompletedEvent;
PyObject *const_str_plain_response_mcp_call_arguments_delta_event;
PyObject *const_tuple_str_plain_ResponseMcpCallArgumentsDeltaEvent_tuple;
PyObject *const_str_plain_ResponseMcpCallArgumentsDeltaEvent;
PyObject *const_str_plain_response_mcp_list_tools_completed_event;
PyObject *const_tuple_str_plain_ResponseMcpListToolsCompletedEvent_tuple;
PyObject *const_str_plain_ResponseMcpListToolsCompletedEvent;
PyObject *const_str_plain_response_image_gen_call_generating_event;
PyObject *const_tuple_str_plain_ResponseImageGenCallGeneratingEvent_tuple;
PyObject *const_str_plain_ResponseImageGenCallGeneratingEvent;
PyObject *const_str_plain_response_web_search_call_completed_event;
PyObject *const_tuple_str_plain_ResponseWebSearchCallCompletedEvent_tuple;
PyObject *const_str_plain_ResponseWebSearchCallCompletedEvent;
PyObject *const_str_plain_response_web_search_call_searching_event;
PyObject *const_tuple_str_plain_ResponseWebSearchCallSearchingEvent_tuple;
PyObject *const_str_plain_ResponseWebSearchCallSearchingEvent;
PyObject *const_str_digest_db1bace0cfc001e14745ea641f153b87;
PyObject *const_tuple_str_plain_ResponseFileSearchCallCompletedEvent_tuple;
PyObject *const_str_plain_ResponseFileSearchCallCompletedEvent;
PyObject *const_str_digest_da8cde4e5f8007b27a16ee8a8d34c7ca;
PyObject *const_tuple_str_plain_ResponseFileSearchCallSearchingEvent_tuple;
PyObject *const_str_plain_ResponseFileSearchCallSearchingEvent;
PyObject *const_str_digest_a63d6aee411731207dfca54d4a08c6f1;
PyObject *const_tuple_str_plain_ResponseImageGenCallInProgressEvent_tuple;
PyObject *const_str_plain_ResponseImageGenCallInProgressEvent;
PyObject *const_str_digest_3869a7d21bb2ab690675f2d75edd2c53;
PyObject *const_tuple_str_plain_ResponseMcpListToolsInProgressEvent_tuple;
PyObject *const_str_plain_ResponseMcpListToolsInProgressEvent;
PyObject *const_str_digest_ec2c427f706e801bddb56836cfb686e8;
PyObject *const_tuple_str_plain_ResponseCustomToolCallInputDoneEvent_tuple;
PyObject *const_str_plain_ResponseCustomToolCallInputDoneEvent;
PyObject *const_str_digest_551ec177d3a0f514071918ba435a1323;
PyObject *const_tuple_str_plain_ResponseReasoningSummaryPartDoneEvent_tuple;
PyObject *const_str_plain_ResponseReasoningSummaryPartDoneEvent;
PyObject *const_str_digest_5b54bc56c455a9546f6cd46ecf7a137b;
PyObject *const_tuple_str_plain_ResponseReasoningSummaryTextDoneEvent_tuple;
PyObject *const_str_plain_ResponseReasoningSummaryTextDoneEvent;
PyObject *const_str_digest_2326235548c09cdeef136c4cd9a9900b;
PyObject *const_tuple_str_plain_ResponseWebSearchCallInProgressEvent_tuple;
PyObject *const_str_plain_ResponseWebSearchCallInProgressEvent;
PyObject *const_str_digest_bdd4cad3bd3111b78b89983f965fecd7;
PyObject *const_tuple_str_plain_ResponseCustomToolCallInputDeltaEvent_tuple;
PyObject *const_str_plain_ResponseCustomToolCallInputDeltaEvent;
PyObject *const_str_digest_b74a486e6f8d3c2cf5b64509f1e008f4;
PyObject *const_tuple_str_plain_ResponseFileSearchCallInProgressEvent_tuple;
PyObject *const_str_plain_ResponseFileSearchCallInProgressEvent;
PyObject *const_str_digest_7ca10734868c9e71eef094920fbc18a5;
PyObject *const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple;
PyObject *const_str_plain_ResponseFunctionCallArgumentsDoneEvent;
PyObject *const_str_digest_4fa49b8f51a2b5d603c1b21bd5cb88b6;
PyObject *const_tuple_str_plain_ResponseImageGenCallPartialImageEvent_tuple;
PyObject *const_str_plain_ResponseImageGenCallPartialImageEvent;
PyObject *const_str_digest_62938c320d5ab37778c49561bb557de0;
PyObject *const_tuple_str_plain_ResponseOutputTextAnnotationAddedEvent_tuple;
PyObject *const_str_plain_ResponseOutputTextAnnotationAddedEvent;
PyObject *const_str_digest_8720385bdd3f7a58c4a047ef1be427a4;
PyObject *const_tuple_str_plain_ResponseReasoningSummaryPartAddedEvent_tuple;
PyObject *const_str_plain_ResponseReasoningSummaryPartAddedEvent;
PyObject *const_str_digest_48d62ccaac3f5a5eb113b4830ef94bcb;
PyObject *const_tuple_str_plain_ResponseReasoningSummaryTextDeltaEvent_tuple;
PyObject *const_str_plain_ResponseReasoningSummaryTextDeltaEvent;
PyObject *const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb;
PyObject *const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple;
PyObject *const_str_plain_ResponseFunctionCallArgumentsDeltaEvent;
PyObject *const_str_digest_521998f9296b55ef22e849661f075a12;
PyObject *const_tuple_str_plain_ResponseCodeInterpreterCallCodeDoneEvent_tuple;
PyObject *const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent;
PyObject *const_str_digest_291fe7aa115dc7c5ac497c2d549b5773;
PyObject *const_tuple_str_digest_68535af65629c55f4de9600af2406536_tuple;
PyObject *const_str_digest_68535af65629c55f4de9600af2406536;
PyObject *const_str_digest_b1da21444fe18c8d5313ba42083fd806;
PyObject *const_tuple_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d_tuple;
PyObject *const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d;
PyObject *const_str_digest_93bdb945b11c5dda48cf9c17f581f0ed;
PyObject *const_tuple_str_digest_b4c0b7e4d7f31b62249d4cb49c670354_tuple;
PyObject *const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354;
PyObject *const_str_digest_a7d474822c33e65637a1faa6ac18c93d;
PyObject *const_tuple_str_digest_1cde74e27f144331f01fe360fd360faf_tuple;
PyObject *const_str_digest_1cde74e27f144331f01fe360fd360faf;
PyObject *const_str_plain_ResponseStreamEvent;
PyObject *const_tuple_str_plain_type_tuple;
PyObject *const_tuple_str_plain_discriminator_tuple;
PyObject *const_str_digest_8ac6a13dbdb927195e58af94f063901a;
PyObject *const_str_digest_5283ddd1d821233b18209b2211f09fcf;
} mod_consts;
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[175];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, (PyObject **)&mod_consts, UN_TRANSLATE("openai.types.responses.response_stream_event"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
mod_consts_hash[0] = DEEP_HASH(tstate, mod_consts.const_str_plain_origin);
mod_consts_hash[1] = DEEP_HASH(tstate, mod_consts.const_str_plain_has_location);
mod_consts_hash[2] = DEEP_HASH(tstate, mod_consts.const_str_plain_Union);
mod_consts_hash[3] = DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions);
mod_consts_hash[4] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
mod_consts_hash[5] = DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated);
mod_consts_hash[6] = DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias);
mod_consts_hash[7] = DEEP_HASH(tstate, mod_consts.const_str_plain__utils);
mod_consts_hash[8] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
mod_consts_hash[9] = DEEP_HASH(tstate, mod_consts.const_int_pos_3);
mod_consts_hash[10] = DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo);
mod_consts_hash[11] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_error_event);
mod_consts_hash[12] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseErrorEvent_tuple);
mod_consts_hash[13] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseErrorEvent);
mod_consts_hash[14] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_failed_event);
mod_consts_hash[15] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFailedEvent_tuple);
mod_consts_hash[16] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFailedEvent);
mod_consts_hash[17] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_queued_event);
mod_consts_hash[18] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseQueuedEvent_tuple);
mod_consts_hash[19] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseQueuedEvent);
mod_consts_hash[20] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_created_event);
mod_consts_hash[21] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple);
mod_consts_hash[22] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreatedEvent);
mod_consts_hash[23] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_completed_event);
mod_consts_hash[24] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCompletedEvent_tuple);
mod_consts_hash[25] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCompletedEvent);
mod_consts_hash[26] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_done_event);
mod_consts_hash[27] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple);
mod_consts_hash[28] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDoneEvent);
mod_consts_hash[29] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_done_event);
mod_consts_hash[30] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple);
mod_consts_hash[31] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDoneEvent);
mod_consts_hash[32] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_incomplete_event);
mod_consts_hash[33] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseIncompleteEvent_tuple);
mod_consts_hash[34] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseIncompleteEvent);
mod_consts_hash[35] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_delta_event);
mod_consts_hash[36] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple);
mod_consts_hash[37] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDeltaEvent);
mod_consts_hash[38] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_delta_event);
mod_consts_hash[39] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple);
mod_consts_hash[40] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDeltaEvent);
mod_consts_hash[41] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_in_progress_event);
mod_consts_hash[42] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseInProgressEvent_tuple);
mod_consts_hash[43] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseInProgressEvent);
mod_consts_hash[44] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_refusal_done_event);
mod_consts_hash[45] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseRefusalDoneEvent_tuple);
mod_consts_hash[46] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseRefusalDoneEvent);
mod_consts_hash[47] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_refusal_delta_event);
mod_consts_hash[48] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseRefusalDeltaEvent_tuple);
mod_consts_hash[49] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
mod_consts_hash[50] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_failed_event);
mod_consts_hash[51] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallFailedEvent_tuple);
mod_consts_hash[52] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
mod_consts_hash[53] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_done_event);
mod_consts_hash[54] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple);
mod_consts_hash[55] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
mod_consts_hash[56] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_done_event);
mod_consts_hash[57] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple);
mod_consts_hash[58] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartDoneEvent);
mod_consts_hash[59] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_added_event);
mod_consts_hash[60] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple);
mod_consts_hash[61] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
mod_consts_hash[62] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_added_event);
mod_consts_hash[63] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple);
mod_consts_hash[64] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartAddedEvent);
mod_consts_hash[65] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_completed_event);
mod_consts_hash[66] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallCompletedEvent_tuple);
mod_consts_hash[67] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
mod_consts_hash[68] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_reasoning_text_done_event);
mod_consts_hash[69] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningTextDoneEvent_tuple);
mod_consts_hash[70] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
mod_consts_hash[71] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_in_progress_event);
mod_consts_hash[72] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallInProgressEvent_tuple);
mod_consts_hash[73] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
mod_consts_hash[74] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_reasoning_text_delta_event);
mod_consts_hash[75] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningTextDeltaEvent_tuple);
mod_consts_hash[76] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
mod_consts_hash[77] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_done_event);
mod_consts_hash[78] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple);
mod_consts_hash[79] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
mod_consts_hash[80] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_list_tools_failed_event);
mod_consts_hash[81] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpListToolsFailedEvent_tuple);
mod_consts_hash[82] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
mod_consts_hash[83] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_delta_event);
mod_consts_hash[84] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple);
mod_consts_hash[85] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
mod_consts_hash[86] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_arguments_done_event);
mod_consts_hash[87] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDoneEvent_tuple);
mod_consts_hash[88] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
mod_consts_hash[89] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_image_gen_call_completed_event);
mod_consts_hash[90] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallCompletedEvent_tuple);
mod_consts_hash[91] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
mod_consts_hash[92] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_arguments_delta_event);
mod_consts_hash[93] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDeltaEvent_tuple);
mod_consts_hash[94] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
mod_consts_hash[95] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_list_tools_completed_event);
mod_consts_hash[96] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpListToolsCompletedEvent_tuple);
mod_consts_hash[97] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
mod_consts_hash[98] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_image_gen_call_generating_event);
mod_consts_hash[99] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallGeneratingEvent_tuple);
mod_consts_hash[100] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
mod_consts_hash[101] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_web_search_call_completed_event);
mod_consts_hash[102] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseWebSearchCallCompletedEvent_tuple);
mod_consts_hash[103] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
mod_consts_hash[104] = DEEP_HASH(tstate, mod_consts.const_str_plain_response_web_search_call_searching_event);
mod_consts_hash[105] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseWebSearchCallSearchingEvent_tuple);
mod_consts_hash[106] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
mod_consts_hash[107] = DEEP_HASH(tstate, mod_consts.const_str_digest_db1bace0cfc001e14745ea641f153b87);
mod_consts_hash[108] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFileSearchCallCompletedEvent_tuple);
mod_consts_hash[109] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
mod_consts_hash[110] = DEEP_HASH(tstate, mod_consts.const_str_digest_da8cde4e5f8007b27a16ee8a8d34c7ca);
mod_consts_hash[111] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFileSearchCallSearchingEvent_tuple);
mod_consts_hash[112] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
mod_consts_hash[113] = DEEP_HASH(tstate, mod_consts.const_str_digest_a63d6aee411731207dfca54d4a08c6f1);
mod_consts_hash[114] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallInProgressEvent_tuple);
mod_consts_hash[115] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
mod_consts_hash[116] = DEEP_HASH(tstate, mod_consts.const_str_digest_3869a7d21bb2ab690675f2d75edd2c53);
mod_consts_hash[117] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpListToolsInProgressEvent_tuple);
mod_consts_hash[118] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
mod_consts_hash[119] = DEEP_HASH(tstate, mod_consts.const_str_digest_ec2c427f706e801bddb56836cfb686e8);
mod_consts_hash[120] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDoneEvent_tuple);
mod_consts_hash[121] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
mod_consts_hash[122] = DEEP_HASH(tstate, mod_consts.const_str_digest_551ec177d3a0f514071918ba435a1323);
mod_consts_hash[123] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartDoneEvent_tuple);
mod_consts_hash[124] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
mod_consts_hash[125] = DEEP_HASH(tstate, mod_consts.const_str_digest_5b54bc56c455a9546f6cd46ecf7a137b);
mod_consts_hash[126] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDoneEvent_tuple);
mod_consts_hash[127] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
mod_consts_hash[128] = DEEP_HASH(tstate, mod_consts.const_str_digest_2326235548c09cdeef136c4cd9a9900b);
mod_consts_hash[129] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseWebSearchCallInProgressEvent_tuple);
mod_consts_hash[130] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
mod_consts_hash[131] = DEEP_HASH(tstate, mod_consts.const_str_digest_bdd4cad3bd3111b78b89983f965fecd7);
mod_consts_hash[132] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDeltaEvent_tuple);
mod_consts_hash[133] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
mod_consts_hash[134] = DEEP_HASH(tstate, mod_consts.const_str_digest_b74a486e6f8d3c2cf5b64509f1e008f4);
mod_consts_hash[135] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFileSearchCallInProgressEvent_tuple);
mod_consts_hash[136] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
mod_consts_hash[137] = DEEP_HASH(tstate, mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5);
mod_consts_hash[138] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple);
mod_consts_hash[139] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
mod_consts_hash[140] = DEEP_HASH(tstate, mod_consts.const_str_digest_4fa49b8f51a2b5d603c1b21bd5cb88b6);
mod_consts_hash[141] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallPartialImageEvent_tuple);
mod_consts_hash[142] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
mod_consts_hash[143] = DEEP_HASH(tstate, mod_consts.const_str_digest_62938c320d5ab37778c49561bb557de0);
mod_consts_hash[144] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputTextAnnotationAddedEvent_tuple);
mod_consts_hash[145] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
mod_consts_hash[146] = DEEP_HASH(tstate, mod_consts.const_str_digest_8720385bdd3f7a58c4a047ef1be427a4);
mod_consts_hash[147] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartAddedEvent_tuple);
mod_consts_hash[148] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
mod_consts_hash[149] = DEEP_HASH(tstate, mod_consts.const_str_digest_48d62ccaac3f5a5eb113b4830ef94bcb);
mod_consts_hash[150] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDeltaEvent_tuple);
mod_consts_hash[151] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
mod_consts_hash[152] = DEEP_HASH(tstate, mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb);
mod_consts_hash[153] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple);
mod_consts_hash[154] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
mod_consts_hash[155] = DEEP_HASH(tstate, mod_consts.const_str_digest_521998f9296b55ef22e849661f075a12);
mod_consts_hash[156] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCodeInterpreterCallCodeDoneEvent_tuple);
mod_consts_hash[157] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
mod_consts_hash[158] = DEEP_HASH(tstate, mod_consts.const_str_digest_291fe7aa115dc7c5ac497c2d549b5773);
mod_consts_hash[159] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_68535af65629c55f4de9600af2406536_tuple);
mod_consts_hash[160] = DEEP_HASH(tstate, mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
mod_consts_hash[161] = DEEP_HASH(tstate, mod_consts.const_str_digest_b1da21444fe18c8d5313ba42083fd806);
mod_consts_hash[162] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d_tuple);
mod_consts_hash[163] = DEEP_HASH(tstate, mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
mod_consts_hash[164] = DEEP_HASH(tstate, mod_consts.const_str_digest_93bdb945b11c5dda48cf9c17f581f0ed);
mod_consts_hash[165] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b4c0b7e4d7f31b62249d4cb49c670354_tuple);
mod_consts_hash[166] = DEEP_HASH(tstate, mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
mod_consts_hash[167] = DEEP_HASH(tstate, mod_consts.const_str_digest_a7d474822c33e65637a1faa6ac18c93d);
mod_consts_hash[168] = DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1cde74e27f144331f01fe360fd360faf_tuple);
mod_consts_hash[169] = DEEP_HASH(tstate, mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
mod_consts_hash[170] = DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseStreamEvent);
mod_consts_hash[171] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple);
mod_consts_hash[172] = DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple);
mod_consts_hash[173] = DEEP_HASH(tstate, mod_consts.const_str_digest_8ac6a13dbdb927195e58af94f063901a);
mod_consts_hash[174] = DEEP_HASH(tstate, mod_consts.const_str_digest_5283ddd1d821233b18209b2211f09fcf);
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
void checkModuleConstants_openai$types$responses$response_stream_event(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

assert(mod_consts_hash[0] == DEEP_HASH(tstate, mod_consts.const_str_plain_origin));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_origin);
assert(mod_consts_hash[1] == DEEP_HASH(tstate, mod_consts.const_str_plain_has_location));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_has_location);
assert(mod_consts_hash[2] == DEEP_HASH(tstate, mod_consts.const_str_plain_Union));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Union);
assert(mod_consts_hash[3] == DEEP_HASH(tstate, mod_consts.const_str_plain_typing_extensions));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_typing_extensions);
assert(mod_consts_hash[4] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple);
assert(mod_consts_hash[5] == DEEP_HASH(tstate, mod_consts.const_str_plain_Annotated));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_Annotated);
assert(mod_consts_hash[6] == DEEP_HASH(tstate, mod_consts.const_str_plain_TypeAlias));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_TypeAlias);
assert(mod_consts_hash[7] == DEEP_HASH(tstate, mod_consts.const_str_plain__utils));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain__utils);
assert(mod_consts_hash[8] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_PropertyInfo_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_PropertyInfo_tuple);
assert(mod_consts_hash[9] == DEEP_HASH(tstate, mod_consts.const_int_pos_3));
CHECK_OBJECT_DEEP(mod_consts.const_int_pos_3);
assert(mod_consts_hash[10] == DEEP_HASH(tstate, mod_consts.const_str_plain_PropertyInfo));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_PropertyInfo);
assert(mod_consts_hash[11] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_error_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_error_event);
assert(mod_consts_hash[12] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseErrorEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseErrorEvent_tuple);
assert(mod_consts_hash[13] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseErrorEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseErrorEvent);
assert(mod_consts_hash[14] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_failed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_failed_event);
assert(mod_consts_hash[15] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFailedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFailedEvent_tuple);
assert(mod_consts_hash[16] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFailedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFailedEvent);
assert(mod_consts_hash[17] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_queued_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_queued_event);
assert(mod_consts_hash[18] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseQueuedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseQueuedEvent_tuple);
assert(mod_consts_hash[19] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseQueuedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseQueuedEvent);
assert(mod_consts_hash[20] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_created_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_created_event);
assert(mod_consts_hash[21] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple);
assert(mod_consts_hash[22] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCreatedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCreatedEvent);
assert(mod_consts_hash[23] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_completed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_completed_event);
assert(mod_consts_hash[24] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCompletedEvent_tuple);
assert(mod_consts_hash[25] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCompletedEvent);
assert(mod_consts_hash[26] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_text_done_event);
assert(mod_consts_hash[27] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple);
assert(mod_consts_hash[28] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseTextDoneEvent);
assert(mod_consts_hash[29] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_done_event);
assert(mod_consts_hash[30] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple);
assert(mod_consts_hash[31] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioDoneEvent);
assert(mod_consts_hash[32] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_incomplete_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_incomplete_event);
assert(mod_consts_hash[33] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseIncompleteEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseIncompleteEvent_tuple);
assert(mod_consts_hash[34] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseIncompleteEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseIncompleteEvent);
assert(mod_consts_hash[35] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_text_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_text_delta_event);
assert(mod_consts_hash[36] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple);
assert(mod_consts_hash[37] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseTextDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseTextDeltaEvent);
assert(mod_consts_hash[38] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_delta_event);
assert(mod_consts_hash[39] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple);
assert(mod_consts_hash[40] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioDeltaEvent);
assert(mod_consts_hash[41] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_in_progress_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_in_progress_event);
assert(mod_consts_hash[42] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseInProgressEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseInProgressEvent_tuple);
assert(mod_consts_hash[43] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseInProgressEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseInProgressEvent);
assert(mod_consts_hash[44] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_refusal_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_refusal_done_event);
assert(mod_consts_hash[45] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseRefusalDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseRefusalDoneEvent_tuple);
assert(mod_consts_hash[46] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseRefusalDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseRefusalDoneEvent);
assert(mod_consts_hash[47] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_refusal_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_refusal_delta_event);
assert(mod_consts_hash[48] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseRefusalDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseRefusalDeltaEvent_tuple);
assert(mod_consts_hash[49] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseRefusalDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
assert(mod_consts_hash[50] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_failed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_mcp_call_failed_event);
assert(mod_consts_hash[51] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallFailedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpCallFailedEvent_tuple);
assert(mod_consts_hash[52] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallFailedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
assert(mod_consts_hash[53] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_output_item_done_event);
assert(mod_consts_hash[54] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple);
assert(mod_consts_hash[55] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
assert(mod_consts_hash[56] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_content_part_done_event);
assert(mod_consts_hash[57] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple);
assert(mod_consts_hash[58] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseContentPartDoneEvent);
assert(mod_consts_hash[59] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_output_item_added_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_output_item_added_event);
assert(mod_consts_hash[60] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple);
assert(mod_consts_hash[61] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputItemAddedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
assert(mod_consts_hash[62] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_content_part_added_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_content_part_added_event);
assert(mod_consts_hash[63] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple);
assert(mod_consts_hash[64] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseContentPartAddedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseContentPartAddedEvent);
assert(mod_consts_hash[65] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_completed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_mcp_call_completed_event);
assert(mod_consts_hash[66] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpCallCompletedEvent_tuple);
assert(mod_consts_hash[67] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
assert(mod_consts_hash[68] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_reasoning_text_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_reasoning_text_done_event);
assert(mod_consts_hash[69] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningTextDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseReasoningTextDoneEvent_tuple);
assert(mod_consts_hash[70] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningTextDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
assert(mod_consts_hash[71] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_in_progress_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_mcp_call_in_progress_event);
assert(mod_consts_hash[72] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallInProgressEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpCallInProgressEvent_tuple);
assert(mod_consts_hash[73] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallInProgressEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
assert(mod_consts_hash[74] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_reasoning_text_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_reasoning_text_delta_event);
assert(mod_consts_hash[75] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningTextDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseReasoningTextDeltaEvent_tuple);
assert(mod_consts_hash[76] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
assert(mod_consts_hash[77] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_transcript_done_event);
assert(mod_consts_hash[78] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple);
assert(mod_consts_hash[79] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
assert(mod_consts_hash[80] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_list_tools_failed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_mcp_list_tools_failed_event);
assert(mod_consts_hash[81] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpListToolsFailedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpListToolsFailedEvent_tuple);
assert(mod_consts_hash[82] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
assert(mod_consts_hash[83] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_audio_transcript_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_audio_transcript_delta_event);
assert(mod_consts_hash[84] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple);
assert(mod_consts_hash[85] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
assert(mod_consts_hash[86] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_arguments_done_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_mcp_call_arguments_done_event);
assert(mod_consts_hash[87] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDoneEvent_tuple);
assert(mod_consts_hash[88] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
assert(mod_consts_hash[89] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_image_gen_call_completed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_image_gen_call_completed_event);
assert(mod_consts_hash[90] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseImageGenCallCompletedEvent_tuple);
assert(mod_consts_hash[91] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
assert(mod_consts_hash[92] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_call_arguments_delta_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_mcp_call_arguments_delta_event);
assert(mod_consts_hash[93] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDeltaEvent_tuple);
assert(mod_consts_hash[94] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
assert(mod_consts_hash[95] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_mcp_list_tools_completed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_mcp_list_tools_completed_event);
assert(mod_consts_hash[96] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpListToolsCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpListToolsCompletedEvent_tuple);
assert(mod_consts_hash[97] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
assert(mod_consts_hash[98] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_image_gen_call_generating_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_image_gen_call_generating_event);
assert(mod_consts_hash[99] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallGeneratingEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseImageGenCallGeneratingEvent_tuple);
assert(mod_consts_hash[100] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
assert(mod_consts_hash[101] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_web_search_call_completed_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_web_search_call_completed_event);
assert(mod_consts_hash[102] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseWebSearchCallCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseWebSearchCallCompletedEvent_tuple);
assert(mod_consts_hash[103] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
assert(mod_consts_hash[104] == DEEP_HASH(tstate, mod_consts.const_str_plain_response_web_search_call_searching_event));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_response_web_search_call_searching_event);
assert(mod_consts_hash[105] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseWebSearchCallSearchingEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseWebSearchCallSearchingEvent_tuple);
assert(mod_consts_hash[106] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
assert(mod_consts_hash[107] == DEEP_HASH(tstate, mod_consts.const_str_digest_db1bace0cfc001e14745ea641f153b87));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_db1bace0cfc001e14745ea641f153b87);
assert(mod_consts_hash[108] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFileSearchCallCompletedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFileSearchCallCompletedEvent_tuple);
assert(mod_consts_hash[109] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
assert(mod_consts_hash[110] == DEEP_HASH(tstate, mod_consts.const_str_digest_da8cde4e5f8007b27a16ee8a8d34c7ca));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_da8cde4e5f8007b27a16ee8a8d34c7ca);
assert(mod_consts_hash[111] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFileSearchCallSearchingEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFileSearchCallSearchingEvent_tuple);
assert(mod_consts_hash[112] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
assert(mod_consts_hash[113] == DEEP_HASH(tstate, mod_consts.const_str_digest_a63d6aee411731207dfca54d4a08c6f1));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a63d6aee411731207dfca54d4a08c6f1);
assert(mod_consts_hash[114] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallInProgressEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseImageGenCallInProgressEvent_tuple);
assert(mod_consts_hash[115] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
assert(mod_consts_hash[116] == DEEP_HASH(tstate, mod_consts.const_str_digest_3869a7d21bb2ab690675f2d75edd2c53));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_3869a7d21bb2ab690675f2d75edd2c53);
assert(mod_consts_hash[117] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseMcpListToolsInProgressEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseMcpListToolsInProgressEvent_tuple);
assert(mod_consts_hash[118] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
assert(mod_consts_hash[119] == DEEP_HASH(tstate, mod_consts.const_str_digest_ec2c427f706e801bddb56836cfb686e8));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_ec2c427f706e801bddb56836cfb686e8);
assert(mod_consts_hash[120] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDoneEvent_tuple);
assert(mod_consts_hash[121] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
assert(mod_consts_hash[122] == DEEP_HASH(tstate, mod_consts.const_str_digest_551ec177d3a0f514071918ba435a1323));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_551ec177d3a0f514071918ba435a1323);
assert(mod_consts_hash[123] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartDoneEvent_tuple);
assert(mod_consts_hash[124] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
assert(mod_consts_hash[125] == DEEP_HASH(tstate, mod_consts.const_str_digest_5b54bc56c455a9546f6cd46ecf7a137b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5b54bc56c455a9546f6cd46ecf7a137b);
assert(mod_consts_hash[126] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDoneEvent_tuple);
assert(mod_consts_hash[127] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
assert(mod_consts_hash[128] == DEEP_HASH(tstate, mod_consts.const_str_digest_2326235548c09cdeef136c4cd9a9900b));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_2326235548c09cdeef136c4cd9a9900b);
assert(mod_consts_hash[129] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseWebSearchCallInProgressEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseWebSearchCallInProgressEvent_tuple);
assert(mod_consts_hash[130] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
assert(mod_consts_hash[131] == DEEP_HASH(tstate, mod_consts.const_str_digest_bdd4cad3bd3111b78b89983f965fecd7));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_bdd4cad3bd3111b78b89983f965fecd7);
assert(mod_consts_hash[132] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDeltaEvent_tuple);
assert(mod_consts_hash[133] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
assert(mod_consts_hash[134] == DEEP_HASH(tstate, mod_consts.const_str_digest_b74a486e6f8d3c2cf5b64509f1e008f4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b74a486e6f8d3c2cf5b64509f1e008f4);
assert(mod_consts_hash[135] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFileSearchCallInProgressEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFileSearchCallInProgressEvent_tuple);
assert(mod_consts_hash[136] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
assert(mod_consts_hash[137] == DEEP_HASH(tstate, mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5);
assert(mod_consts_hash[138] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple);
assert(mod_consts_hash[139] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
assert(mod_consts_hash[140] == DEEP_HASH(tstate, mod_consts.const_str_digest_4fa49b8f51a2b5d603c1b21bd5cb88b6));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4fa49b8f51a2b5d603c1b21bd5cb88b6);
assert(mod_consts_hash[141] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseImageGenCallPartialImageEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseImageGenCallPartialImageEvent_tuple);
assert(mod_consts_hash[142] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
assert(mod_consts_hash[143] == DEEP_HASH(tstate, mod_consts.const_str_digest_62938c320d5ab37778c49561bb557de0));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_62938c320d5ab37778c49561bb557de0);
assert(mod_consts_hash[144] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseOutputTextAnnotationAddedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseOutputTextAnnotationAddedEvent_tuple);
assert(mod_consts_hash[145] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
assert(mod_consts_hash[146] == DEEP_HASH(tstate, mod_consts.const_str_digest_8720385bdd3f7a58c4a047ef1be427a4));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8720385bdd3f7a58c4a047ef1be427a4);
assert(mod_consts_hash[147] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartAddedEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartAddedEvent_tuple);
assert(mod_consts_hash[148] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
assert(mod_consts_hash[149] == DEEP_HASH(tstate, mod_consts.const_str_digest_48d62ccaac3f5a5eb113b4830ef94bcb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_48d62ccaac3f5a5eb113b4830ef94bcb);
assert(mod_consts_hash[150] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDeltaEvent_tuple);
assert(mod_consts_hash[151] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
assert(mod_consts_hash[152] == DEEP_HASH(tstate, mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb);
assert(mod_consts_hash[153] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple);
assert(mod_consts_hash[154] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
assert(mod_consts_hash[155] == DEEP_HASH(tstate, mod_consts.const_str_digest_521998f9296b55ef22e849661f075a12));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_521998f9296b55ef22e849661f075a12);
assert(mod_consts_hash[156] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_ResponseCodeInterpreterCallCodeDoneEvent_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_ResponseCodeInterpreterCallCodeDoneEvent_tuple);
assert(mod_consts_hash[157] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
assert(mod_consts_hash[158] == DEEP_HASH(tstate, mod_consts.const_str_digest_291fe7aa115dc7c5ac497c2d549b5773));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_291fe7aa115dc7c5ac497c2d549b5773);
assert(mod_consts_hash[159] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_68535af65629c55f4de9600af2406536_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_68535af65629c55f4de9600af2406536_tuple);
assert(mod_consts_hash[160] == DEEP_HASH(tstate, mod_consts.const_str_digest_68535af65629c55f4de9600af2406536));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
assert(mod_consts_hash[161] == DEEP_HASH(tstate, mod_consts.const_str_digest_b1da21444fe18c8d5313ba42083fd806));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b1da21444fe18c8d5313ba42083fd806);
assert(mod_consts_hash[162] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d_tuple);
assert(mod_consts_hash[163] == DEEP_HASH(tstate, mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
assert(mod_consts_hash[164] == DEEP_HASH(tstate, mod_consts.const_str_digest_93bdb945b11c5dda48cf9c17f581f0ed));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_93bdb945b11c5dda48cf9c17f581f0ed);
assert(mod_consts_hash[165] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_b4c0b7e4d7f31b62249d4cb49c670354_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_b4c0b7e4d7f31b62249d4cb49c670354_tuple);
assert(mod_consts_hash[166] == DEEP_HASH(tstate, mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
assert(mod_consts_hash[167] == DEEP_HASH(tstate, mod_consts.const_str_digest_a7d474822c33e65637a1faa6ac18c93d));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_a7d474822c33e65637a1faa6ac18c93d);
assert(mod_consts_hash[168] == DEEP_HASH(tstate, mod_consts.const_tuple_str_digest_1cde74e27f144331f01fe360fd360faf_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_digest_1cde74e27f144331f01fe360fd360faf_tuple);
assert(mod_consts_hash[169] == DEEP_HASH(tstate, mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
assert(mod_consts_hash[170] == DEEP_HASH(tstate, mod_consts.const_str_plain_ResponseStreamEvent));
CHECK_OBJECT_DEEP(mod_consts.const_str_plain_ResponseStreamEvent);
assert(mod_consts_hash[171] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_type_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_type_tuple);
assert(mod_consts_hash[172] == DEEP_HASH(tstate, mod_consts.const_tuple_str_plain_discriminator_tuple));
CHECK_OBJECT_DEEP(mod_consts.const_tuple_str_plain_discriminator_tuple);
assert(mod_consts_hash[173] == DEEP_HASH(tstate, mod_consts.const_str_digest_8ac6a13dbdb927195e58af94f063901a));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_8ac6a13dbdb927195e58af94f063901a);
assert(mod_consts_hash[174] == DEEP_HASH(tstate, mod_consts.const_str_digest_5283ddd1d821233b18209b2211f09fcf));
CHECK_OBJECT_DEEP(mod_consts.const_str_digest_5283ddd1d821233b18209b2211f09fcf);
}
#endif

// Helper to preserving module variables for Python3.11+
#if 59
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
static PyObject *module_var_accessor_openai$types$responses$response_stream_event$Annotated(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_Annotated);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_Annotated, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$PropertyInfo(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_PropertyInfo);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_PropertyInfo, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioTranscriptDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioTranscriptDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallCodeDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallCodeDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallCompletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_68535af65629c55f4de9600af2406536, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_68535af65629c55f4de9600af2406536, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallInProgressEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallInterpretingEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCompletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCompletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCompletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCompletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCompletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCompletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCompletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCompletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCompletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseContentPartAddedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartAddedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseContentPartAddedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseContentPartAddedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseContentPartAddedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseContentPartAddedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartAddedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartAddedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartAddedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseContentPartDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseContentPartDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseContentPartDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseContentPartDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseContentPartDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCreatedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreatedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCreatedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCreatedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCreatedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCreatedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreatedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreatedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreatedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCustomToolCallInputDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseCustomToolCallInputDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseErrorEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseErrorEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseErrorEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseErrorEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseErrorEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseErrorEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseErrorEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseErrorEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseErrorEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseFailedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFailedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFailedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFailedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFailedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFailedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFailedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFailedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFailedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseFileSearchCallCompletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseFileSearchCallInProgressEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseFileSearchCallSearchingEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseFunctionCallArgumentsDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseFunctionCallArgumentsDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallCompletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallGeneratingEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallInProgressEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallPartialImageEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseInProgressEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInProgressEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseInProgressEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseInProgressEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseInProgressEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseInProgressEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInProgressEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInProgressEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInProgressEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseIncompleteEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseIncompleteEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseIncompleteEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseIncompleteEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseIncompleteEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseIncompleteEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseIncompleteEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseIncompleteEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseIncompleteEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallArgumentsDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallArgumentsDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallCompletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallCompletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallCompletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallFailedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallFailedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallFailedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallInProgressEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallInProgressEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpCallInProgressEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpListToolsCompletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpListToolsFailedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpListToolsInProgressEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseOutputItemAddedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseOutputItemAddedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseOutputItemAddedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseOutputItemDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseOutputItemDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseOutputItemDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseOutputTextAnnotationAddedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseQueuedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseQueuedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseQueuedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseQueuedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseQueuedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseQueuedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseQueuedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseQueuedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseQueuedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryPartAddedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryPartDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryTextDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryTextDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningTextDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningTextDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningTextDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseReasoningTextDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseRefusalDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseRefusalDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseRefusalDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseRefusalDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseRefusalDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseRefusalDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseRefusalDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseRefusalDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseTextDeltaEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDeltaEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseTextDeltaEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseTextDeltaEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseTextDeltaEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseTextDeltaEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDeltaEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDeltaEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDeltaEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseTextDoneEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDoneEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseTextDoneEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseTextDoneEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseTextDoneEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseTextDoneEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDoneEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDoneEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDoneEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseWebSearchCallCompletedEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseWebSearchCallInProgressEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$ResponseWebSearchCallSearchingEvent(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$TypeAlias(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = Nuitka_Py_unicode_get_hash(mod_consts.const_str_plain_TypeAlias);
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts.const_str_plain_TypeAlias, hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$Union(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts.const_str_plain_Union);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$__annotations__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___annotations__);
    }

    return result;
}

static PyObject *module_var_accessor_openai$types$responses$response_stream_event$__spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_openai$types$responses$response_stream_event->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_openai$types$responses$response_stream_event->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___spec__);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_openai$types$responses$response_stream_event->ma_keys;
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
        result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___spec__);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___spec__);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_5f7f2c1176c7ccbd379fdca15b9e2437;

static void createModuleCodeObjects(void) {
module_filename_obj = MAKE_RELATIVE_PATH(mod_consts.const_str_digest_8ac6a13dbdb927195e58af94f063901a); CHECK_OBJECT(module_filename_obj);
code_objects_5f7f2c1176c7ccbd379fdca15b9e2437 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts.const_str_digest_5283ddd1d821233b18209b2211f09fcf, mod_consts.const_str_digest_5283ddd1d821233b18209b2211f09fcf, NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_openai$types$responses$response_stream_event[] = {

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

    return Nuitka_Function_GetFunctionState(function, function_table_openai$types$responses$response_stream_event);
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
        module_openai$types$responses$response_stream_event,
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
        function_table_openai$types$responses$response_stream_event,
        sizeof(function_table_openai$types$responses$response_stream_event) / sizeof(function_impl_code)
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
static char const *module_full_name = "openai.types.responses.response_stream_event";
#endif

// Internal entry point for module code.
PyObject *module_code_openai$types$responses$response_stream_event(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openai$types$responses$response_stream_event");

    // Store the module for future use.
    module_openai$types$responses$response_stream_event = module;

    moduledict_openai$types$responses$response_stream_event = MODULE_DICT(module_openai$types$responses$response_stream_event);

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
        PRINT_STRING("openai$types$responses$response_stream_event: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("openai$types$responses$response_stream_event: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("openai$types$responses$response_stream_event: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if _NUITKA_MODULE_MODE && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.responses.response_stream_event" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initopenai$types$responses$response_stream_event\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openai$types$responses$response_stream_event,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openai$types$responses$response_stream_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openai$types$responses$response_stream_event,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$responses$response_stream_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openai$types$responses$response_stream_event,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openai$types$responses$response_stream_event);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if _NUITKA_MODULE_MODE || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_openai$types$responses$response_stream_event);
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

        UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
PyObject *tmp_import_from_1__module = NULL;
struct Nuitka_FrameObject *frame_frame_openai$types$responses$response_stream_event;
NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
bool tmp_result;
struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module init code if any


    // Module code.
{
PyObject *tmp_assign_source_1;
tmp_assign_source_1 = Py_None;
UPDATE_STRING_DICT0(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
}
{
PyObject *tmp_assign_source_2;
tmp_assign_source_2 = module_filename_obj;
UPDATE_STRING_DICT0(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
}
frame_frame_openai$types$responses$response_stream_event = MAKE_MODULE_FRAME(code_objects_5f7f2c1176c7ccbd379fdca15b9e2437, module_openai$types$responses$response_stream_event);

// Push the new frame as the currently active one, and we should be exclusively
// owning it.
pushFrameStackCompiledFrame(tstate, frame_frame_openai$types$responses$response_stream_event);
assert(Py_REFCNT(frame_frame_openai$types$responses$response_stream_event) == 2);

// Framed code:
{
PyObject *tmp_assattr_value_1;
PyObject *tmp_assattr_target_1;
tmp_assattr_value_1 = module_filename_obj;
tmp_assattr_target_1 = module_var_accessor_openai$types$responses$response_stream_event$__spec__(tstate);
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
tmp_assattr_target_2 = module_var_accessor_openai$types$responses$response_stream_event$__spec__(tstate);
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
UPDATE_STRING_DICT0(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
}
{
PyObject *tmp_assign_source_4;
tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_4);
}
{
PyObject *tmp_assign_source_5;
PyObject *tmp_import_name_from_1;
tmp_import_name_from_1 = IMPORT_HARD_TYPING();
assert(!(tmp_import_name_from_1 == NULL));
if (PyModule_Check(tmp_import_name_from_1)) {
    tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_1,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_Union,
        const_int_0
    );
} else {
    tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts.const_str_plain_Union);
}

if (tmp_assign_source_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 3;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Union, tmp_assign_source_5);
}
{
PyObject *tmp_assign_source_6;
PyObject *tmp_name_value_1;
PyObject *tmp_globals_arg_value_1;
PyObject *tmp_locals_arg_value_1;
PyObject *tmp_fromlist_value_1;
PyObject *tmp_level_value_1;
tmp_name_value_1 = mod_consts.const_str_plain_typing_extensions;
tmp_globals_arg_value_1 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_1 = Py_None;
tmp_fromlist_value_1 = mod_consts.const_tuple_str_plain_Annotated_str_plain_TypeAlias_tuple;
tmp_level_value_1 = const_int_0;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 4;
tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
if (tmp_assign_source_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto frame_exception_exit_1;
}
assert(tmp_import_from_1__module == NULL);
tmp_import_from_1__module = tmp_assign_source_6;
}
// Tried code:
{
PyObject *tmp_assign_source_7;
PyObject *tmp_import_name_from_2;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_2 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_2)) {
    tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_2,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_Annotated,
        const_int_0
    );
} else {
    tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts.const_str_plain_Annotated);
}

if (tmp_assign_source_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_Annotated, tmp_assign_source_7);
}
{
PyObject *tmp_assign_source_8;
PyObject *tmp_import_name_from_3;
CHECK_OBJECT(tmp_import_from_1__module);
tmp_import_name_from_3 = tmp_import_from_1__module;
if (PyModule_Check(tmp_import_name_from_3)) {
    tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_3,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_TypeAlias,
        const_int_0
    );
} else {
    tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_assign_source_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 4;

    goto try_except_handler_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_TypeAlias, tmp_assign_source_8);
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
PyObject *tmp_import_name_from_4;
PyObject *tmp_name_value_2;
PyObject *tmp_globals_arg_value_2;
PyObject *tmp_locals_arg_value_2;
PyObject *tmp_fromlist_value_2;
PyObject *tmp_level_value_2;
tmp_name_value_2 = mod_consts.const_str_plain__utils;
tmp_globals_arg_value_2 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_2 = Py_None;
tmp_fromlist_value_2 = mod_consts.const_tuple_str_plain_PropertyInfo_tuple;
tmp_level_value_2 = mod_consts.const_int_pos_3;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 6;
tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
if (tmp_import_name_from_4 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_4)) {
    tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_4,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_PropertyInfo,
        const_int_0
    );
} else {
    tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts.const_str_plain_PropertyInfo);
}

CHECK_OBJECT(tmp_import_name_from_4);
Py_DECREF(tmp_import_name_from_4);
if (tmp_assign_source_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 6;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_PropertyInfo, tmp_assign_source_9);
}
{
PyObject *tmp_assign_source_10;
PyObject *tmp_import_name_from_5;
PyObject *tmp_name_value_3;
PyObject *tmp_globals_arg_value_3;
PyObject *tmp_locals_arg_value_3;
PyObject *tmp_fromlist_value_3;
PyObject *tmp_level_value_3;
tmp_name_value_3 = mod_consts.const_str_plain_response_error_event;
tmp_globals_arg_value_3 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_3 = Py_None;
tmp_fromlist_value_3 = mod_consts.const_tuple_str_plain_ResponseErrorEvent_tuple;
tmp_level_value_3 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 7;
tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
if (tmp_import_name_from_5 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_5)) {
    tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_5,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseErrorEvent,
        const_int_0
    );
} else {
    tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts.const_str_plain_ResponseErrorEvent);
}

CHECK_OBJECT(tmp_import_name_from_5);
Py_DECREF(tmp_import_name_from_5);
if (tmp_assign_source_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 7;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseErrorEvent, tmp_assign_source_10);
}
{
PyObject *tmp_assign_source_11;
PyObject *tmp_import_name_from_6;
PyObject *tmp_name_value_4;
PyObject *tmp_globals_arg_value_4;
PyObject *tmp_locals_arg_value_4;
PyObject *tmp_fromlist_value_4;
PyObject *tmp_level_value_4;
tmp_name_value_4 = mod_consts.const_str_plain_response_failed_event;
tmp_globals_arg_value_4 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_4 = Py_None;
tmp_fromlist_value_4 = mod_consts.const_tuple_str_plain_ResponseFailedEvent_tuple;
tmp_level_value_4 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 8;
tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
if (tmp_import_name_from_6 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_6)) {
    tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_6,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseFailedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts.const_str_plain_ResponseFailedEvent);
}

CHECK_OBJECT(tmp_import_name_from_6);
Py_DECREF(tmp_import_name_from_6);
if (tmp_assign_source_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 8;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFailedEvent, tmp_assign_source_11);
}
{
PyObject *tmp_assign_source_12;
PyObject *tmp_import_name_from_7;
PyObject *tmp_name_value_5;
PyObject *tmp_globals_arg_value_5;
PyObject *tmp_locals_arg_value_5;
PyObject *tmp_fromlist_value_5;
PyObject *tmp_level_value_5;
tmp_name_value_5 = mod_consts.const_str_plain_response_queued_event;
tmp_globals_arg_value_5 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_5 = Py_None;
tmp_fromlist_value_5 = mod_consts.const_tuple_str_plain_ResponseQueuedEvent_tuple;
tmp_level_value_5 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 9;
tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
if (tmp_import_name_from_7 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_7)) {
    tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_7,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseQueuedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts.const_str_plain_ResponseQueuedEvent);
}

CHECK_OBJECT(tmp_import_name_from_7);
Py_DECREF(tmp_import_name_from_7);
if (tmp_assign_source_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 9;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseQueuedEvent, tmp_assign_source_12);
}
{
PyObject *tmp_assign_source_13;
PyObject *tmp_import_name_from_8;
PyObject *tmp_name_value_6;
PyObject *tmp_globals_arg_value_6;
PyObject *tmp_locals_arg_value_6;
PyObject *tmp_fromlist_value_6;
PyObject *tmp_level_value_6;
tmp_name_value_6 = mod_consts.const_str_plain_response_created_event;
tmp_globals_arg_value_6 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_6 = Py_None;
tmp_fromlist_value_6 = mod_consts.const_tuple_str_plain_ResponseCreatedEvent_tuple;
tmp_level_value_6 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 10;
tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
if (tmp_import_name_from_8 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_8)) {
    tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_8,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseCreatedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts.const_str_plain_ResponseCreatedEvent);
}

CHECK_OBJECT(tmp_import_name_from_8);
Py_DECREF(tmp_import_name_from_8);
if (tmp_assign_source_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 10;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCreatedEvent, tmp_assign_source_13);
}
{
PyObject *tmp_assign_source_14;
PyObject *tmp_import_name_from_9;
PyObject *tmp_name_value_7;
PyObject *tmp_globals_arg_value_7;
PyObject *tmp_locals_arg_value_7;
PyObject *tmp_fromlist_value_7;
PyObject *tmp_level_value_7;
tmp_name_value_7 = mod_consts.const_str_plain_response_completed_event;
tmp_globals_arg_value_7 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_7 = Py_None;
tmp_fromlist_value_7 = mod_consts.const_tuple_str_plain_ResponseCompletedEvent_tuple;
tmp_level_value_7 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 11;
tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
if (tmp_import_name_from_9 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_9)) {
    tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_9,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts.const_str_plain_ResponseCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_9);
Py_DECREF(tmp_import_name_from_9);
if (tmp_assign_source_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 11;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCompletedEvent, tmp_assign_source_14);
}
{
PyObject *tmp_assign_source_15;
PyObject *tmp_import_name_from_10;
PyObject *tmp_name_value_8;
PyObject *tmp_globals_arg_value_8;
PyObject *tmp_locals_arg_value_8;
PyObject *tmp_fromlist_value_8;
PyObject *tmp_level_value_8;
tmp_name_value_8 = mod_consts.const_str_plain_response_text_done_event;
tmp_globals_arg_value_8 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_8 = Py_None;
tmp_fromlist_value_8 = mod_consts.const_tuple_str_plain_ResponseTextDoneEvent_tuple;
tmp_level_value_8 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 12;
tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
if (tmp_import_name_from_10 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_10)) {
    tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_10,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseTextDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts.const_str_plain_ResponseTextDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_10);
Py_DECREF(tmp_import_name_from_10);
if (tmp_assign_source_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 12;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDoneEvent, tmp_assign_source_15);
}
{
PyObject *tmp_assign_source_16;
PyObject *tmp_import_name_from_11;
PyObject *tmp_name_value_9;
PyObject *tmp_globals_arg_value_9;
PyObject *tmp_locals_arg_value_9;
PyObject *tmp_fromlist_value_9;
PyObject *tmp_level_value_9;
tmp_name_value_9 = mod_consts.const_str_plain_response_audio_done_event;
tmp_globals_arg_value_9 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_9 = Py_None;
tmp_fromlist_value_9 = mod_consts.const_tuple_str_plain_ResponseAudioDoneEvent_tuple;
tmp_level_value_9 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 13;
tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
if (tmp_import_name_from_11 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_11)) {
    tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_11,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseAudioDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts.const_str_plain_ResponseAudioDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_11);
Py_DECREF(tmp_import_name_from_11);
if (tmp_assign_source_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 13;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDoneEvent, tmp_assign_source_16);
}
{
PyObject *tmp_assign_source_17;
PyObject *tmp_import_name_from_12;
PyObject *tmp_name_value_10;
PyObject *tmp_globals_arg_value_10;
PyObject *tmp_locals_arg_value_10;
PyObject *tmp_fromlist_value_10;
PyObject *tmp_level_value_10;
tmp_name_value_10 = mod_consts.const_str_plain_response_incomplete_event;
tmp_globals_arg_value_10 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_10 = Py_None;
tmp_fromlist_value_10 = mod_consts.const_tuple_str_plain_ResponseIncompleteEvent_tuple;
tmp_level_value_10 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 14;
tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
if (tmp_import_name_from_12 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_12)) {
    tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_12,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseIncompleteEvent,
        const_int_0
    );
} else {
    tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts.const_str_plain_ResponseIncompleteEvent);
}

CHECK_OBJECT(tmp_import_name_from_12);
Py_DECREF(tmp_import_name_from_12);
if (tmp_assign_source_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 14;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseIncompleteEvent, tmp_assign_source_17);
}
{
PyObject *tmp_assign_source_18;
PyObject *tmp_import_name_from_13;
PyObject *tmp_name_value_11;
PyObject *tmp_globals_arg_value_11;
PyObject *tmp_locals_arg_value_11;
PyObject *tmp_fromlist_value_11;
PyObject *tmp_level_value_11;
tmp_name_value_11 = mod_consts.const_str_plain_response_text_delta_event;
tmp_globals_arg_value_11 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_11 = Py_None;
tmp_fromlist_value_11 = mod_consts.const_tuple_str_plain_ResponseTextDeltaEvent_tuple;
tmp_level_value_11 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 15;
tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
if (tmp_import_name_from_13 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_13)) {
    tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_13,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseTextDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts.const_str_plain_ResponseTextDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_13);
Py_DECREF(tmp_import_name_from_13);
if (tmp_assign_source_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 15;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseTextDeltaEvent, tmp_assign_source_18);
}
{
PyObject *tmp_assign_source_19;
PyObject *tmp_import_name_from_14;
PyObject *tmp_name_value_12;
PyObject *tmp_globals_arg_value_12;
PyObject *tmp_locals_arg_value_12;
PyObject *tmp_fromlist_value_12;
PyObject *tmp_level_value_12;
tmp_name_value_12 = mod_consts.const_str_plain_response_audio_delta_event;
tmp_globals_arg_value_12 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_12 = Py_None;
tmp_fromlist_value_12 = mod_consts.const_tuple_str_plain_ResponseAudioDeltaEvent_tuple;
tmp_level_value_12 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 16;
tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
if (tmp_import_name_from_14 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_14)) {
    tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_14,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseAudioDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts.const_str_plain_ResponseAudioDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_14);
Py_DECREF(tmp_import_name_from_14);
if (tmp_assign_source_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 16;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioDeltaEvent, tmp_assign_source_19);
}
{
PyObject *tmp_assign_source_20;
PyObject *tmp_import_name_from_15;
PyObject *tmp_name_value_13;
PyObject *tmp_globals_arg_value_13;
PyObject *tmp_locals_arg_value_13;
PyObject *tmp_fromlist_value_13;
PyObject *tmp_level_value_13;
tmp_name_value_13 = mod_consts.const_str_plain_response_in_progress_event;
tmp_globals_arg_value_13 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_13 = Py_None;
tmp_fromlist_value_13 = mod_consts.const_tuple_str_plain_ResponseInProgressEvent_tuple;
tmp_level_value_13 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 17;
tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
if (tmp_import_name_from_15 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_15)) {
    tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_15,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseInProgressEvent,
        const_int_0
    );
} else {
    tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts.const_str_plain_ResponseInProgressEvent);
}

CHECK_OBJECT(tmp_import_name_from_15);
Py_DECREF(tmp_import_name_from_15);
if (tmp_assign_source_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 17;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseInProgressEvent, tmp_assign_source_20);
}
{
PyObject *tmp_assign_source_21;
PyObject *tmp_import_name_from_16;
PyObject *tmp_name_value_14;
PyObject *tmp_globals_arg_value_14;
PyObject *tmp_locals_arg_value_14;
PyObject *tmp_fromlist_value_14;
PyObject *tmp_level_value_14;
tmp_name_value_14 = mod_consts.const_str_plain_response_refusal_done_event;
tmp_globals_arg_value_14 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_14 = Py_None;
tmp_fromlist_value_14 = mod_consts.const_tuple_str_plain_ResponseRefusalDoneEvent_tuple;
tmp_level_value_14 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 18;
tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
if (tmp_import_name_from_16 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_16)) {
    tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_16,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseRefusalDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts.const_str_plain_ResponseRefusalDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_16);
Py_DECREF(tmp_import_name_from_16);
if (tmp_assign_source_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 18;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDoneEvent, tmp_assign_source_21);
}
{
PyObject *tmp_assign_source_22;
PyObject *tmp_import_name_from_17;
PyObject *tmp_name_value_15;
PyObject *tmp_globals_arg_value_15;
PyObject *tmp_locals_arg_value_15;
PyObject *tmp_fromlist_value_15;
PyObject *tmp_level_value_15;
tmp_name_value_15 = mod_consts.const_str_plain_response_refusal_delta_event;
tmp_globals_arg_value_15 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_15 = Py_None;
tmp_fromlist_value_15 = mod_consts.const_tuple_str_plain_ResponseRefusalDeltaEvent_tuple;
tmp_level_value_15 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 19;
tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
if (tmp_import_name_from_17 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_17)) {
    tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_17,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseRefusalDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_17);
Py_DECREF(tmp_import_name_from_17);
if (tmp_assign_source_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 19;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseRefusalDeltaEvent, tmp_assign_source_22);
}
{
PyObject *tmp_assign_source_23;
PyObject *tmp_import_name_from_18;
PyObject *tmp_name_value_16;
PyObject *tmp_globals_arg_value_16;
PyObject *tmp_locals_arg_value_16;
PyObject *tmp_fromlist_value_16;
PyObject *tmp_level_value_16;
tmp_name_value_16 = mod_consts.const_str_plain_response_mcp_call_failed_event;
tmp_globals_arg_value_16 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_16 = Py_None;
tmp_fromlist_value_16 = mod_consts.const_tuple_str_plain_ResponseMcpCallFailedEvent_tuple;
tmp_level_value_16 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 20;
tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
if (tmp_import_name_from_18 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_18)) {
    tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_18,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpCallFailedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
}

CHECK_OBJECT(tmp_import_name_from_18);
Py_DECREF(tmp_import_name_from_18);
if (tmp_assign_source_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 20;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallFailedEvent, tmp_assign_source_23);
}
{
PyObject *tmp_assign_source_24;
PyObject *tmp_import_name_from_19;
PyObject *tmp_name_value_17;
PyObject *tmp_globals_arg_value_17;
PyObject *tmp_locals_arg_value_17;
PyObject *tmp_fromlist_value_17;
PyObject *tmp_level_value_17;
tmp_name_value_17 = mod_consts.const_str_plain_response_output_item_done_event;
tmp_globals_arg_value_17 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_17 = Py_None;
tmp_fromlist_value_17 = mod_consts.const_tuple_str_plain_ResponseOutputItemDoneEvent_tuple;
tmp_level_value_17 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 21;
tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
if (tmp_import_name_from_19 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_19)) {
    tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_19,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseOutputItemDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_19);
Py_DECREF(tmp_import_name_from_19);
if (tmp_assign_source_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 21;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemDoneEvent, tmp_assign_source_24);
}
{
PyObject *tmp_assign_source_25;
PyObject *tmp_import_name_from_20;
PyObject *tmp_name_value_18;
PyObject *tmp_globals_arg_value_18;
PyObject *tmp_locals_arg_value_18;
PyObject *tmp_fromlist_value_18;
PyObject *tmp_level_value_18;
tmp_name_value_18 = mod_consts.const_str_plain_response_content_part_done_event;
tmp_globals_arg_value_18 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_18 = Py_None;
tmp_fromlist_value_18 = mod_consts.const_tuple_str_plain_ResponseContentPartDoneEvent_tuple;
tmp_level_value_18 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 22;
tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
if (tmp_import_name_from_20 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_20)) {
    tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_20,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseContentPartDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts.const_str_plain_ResponseContentPartDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_20);
Py_DECREF(tmp_import_name_from_20);
if (tmp_assign_source_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 22;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartDoneEvent, tmp_assign_source_25);
}
{
PyObject *tmp_assign_source_26;
PyObject *tmp_import_name_from_21;
PyObject *tmp_name_value_19;
PyObject *tmp_globals_arg_value_19;
PyObject *tmp_locals_arg_value_19;
PyObject *tmp_fromlist_value_19;
PyObject *tmp_level_value_19;
tmp_name_value_19 = mod_consts.const_str_plain_response_output_item_added_event;
tmp_globals_arg_value_19 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_19 = Py_None;
tmp_fromlist_value_19 = mod_consts.const_tuple_str_plain_ResponseOutputItemAddedEvent_tuple;
tmp_level_value_19 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 23;
tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
if (tmp_import_name_from_21 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_21)) {
    tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_21,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseOutputItemAddedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
}

CHECK_OBJECT(tmp_import_name_from_21);
Py_DECREF(tmp_import_name_from_21);
if (tmp_assign_source_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 23;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputItemAddedEvent, tmp_assign_source_26);
}
{
PyObject *tmp_assign_source_27;
PyObject *tmp_import_name_from_22;
PyObject *tmp_name_value_20;
PyObject *tmp_globals_arg_value_20;
PyObject *tmp_locals_arg_value_20;
PyObject *tmp_fromlist_value_20;
PyObject *tmp_level_value_20;
tmp_name_value_20 = mod_consts.const_str_plain_response_content_part_added_event;
tmp_globals_arg_value_20 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_20 = Py_None;
tmp_fromlist_value_20 = mod_consts.const_tuple_str_plain_ResponseContentPartAddedEvent_tuple;
tmp_level_value_20 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 24;
tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
if (tmp_import_name_from_22 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_22)) {
    tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_22,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseContentPartAddedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts.const_str_plain_ResponseContentPartAddedEvent);
}

CHECK_OBJECT(tmp_import_name_from_22);
Py_DECREF(tmp_import_name_from_22);
if (tmp_assign_source_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 24;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseContentPartAddedEvent, tmp_assign_source_27);
}
{
PyObject *tmp_assign_source_28;
PyObject *tmp_import_name_from_23;
PyObject *tmp_name_value_21;
PyObject *tmp_globals_arg_value_21;
PyObject *tmp_locals_arg_value_21;
PyObject *tmp_fromlist_value_21;
PyObject *tmp_level_value_21;
tmp_name_value_21 = mod_consts.const_str_plain_response_mcp_call_completed_event;
tmp_globals_arg_value_21 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_21 = Py_None;
tmp_fromlist_value_21 = mod_consts.const_tuple_str_plain_ResponseMcpCallCompletedEvent_tuple;
tmp_level_value_21 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 25;
tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
if (tmp_import_name_from_23 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_23)) {
    tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_23,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpCallCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_23);
Py_DECREF(tmp_import_name_from_23);
if (tmp_assign_source_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 25;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallCompletedEvent, tmp_assign_source_28);
}
{
PyObject *tmp_assign_source_29;
PyObject *tmp_import_name_from_24;
PyObject *tmp_name_value_22;
PyObject *tmp_globals_arg_value_22;
PyObject *tmp_locals_arg_value_22;
PyObject *tmp_fromlist_value_22;
PyObject *tmp_level_value_22;
tmp_name_value_22 = mod_consts.const_str_plain_response_reasoning_text_done_event;
tmp_globals_arg_value_22 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_22 = Py_None;
tmp_fromlist_value_22 = mod_consts.const_tuple_str_plain_ResponseReasoningTextDoneEvent_tuple;
tmp_level_value_22 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 26;
tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
if (tmp_import_name_from_24 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_24)) {
    tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_24,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseReasoningTextDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_24);
Py_DECREF(tmp_import_name_from_24);
if (tmp_assign_source_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 26;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDoneEvent, tmp_assign_source_29);
}
{
PyObject *tmp_assign_source_30;
PyObject *tmp_import_name_from_25;
PyObject *tmp_name_value_23;
PyObject *tmp_globals_arg_value_23;
PyObject *tmp_locals_arg_value_23;
PyObject *tmp_fromlist_value_23;
PyObject *tmp_level_value_23;
tmp_name_value_23 = mod_consts.const_str_plain_response_mcp_call_in_progress_event;
tmp_globals_arg_value_23 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_23 = Py_None;
tmp_fromlist_value_23 = mod_consts.const_tuple_str_plain_ResponseMcpCallInProgressEvent_tuple;
tmp_level_value_23 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 27;
tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
if (tmp_import_name_from_25 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_25)) {
    tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_25,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpCallInProgressEvent,
        const_int_0
    );
} else {
    tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
}

CHECK_OBJECT(tmp_import_name_from_25);
Py_DECREF(tmp_import_name_from_25);
if (tmp_assign_source_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 27;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallInProgressEvent, tmp_assign_source_30);
}
{
PyObject *tmp_assign_source_31;
PyObject *tmp_import_name_from_26;
PyObject *tmp_name_value_24;
PyObject *tmp_globals_arg_value_24;
PyObject *tmp_locals_arg_value_24;
PyObject *tmp_fromlist_value_24;
PyObject *tmp_level_value_24;
tmp_name_value_24 = mod_consts.const_str_plain_response_reasoning_text_delta_event;
tmp_globals_arg_value_24 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_24 = Py_None;
tmp_fromlist_value_24 = mod_consts.const_tuple_str_plain_ResponseReasoningTextDeltaEvent_tuple;
tmp_level_value_24 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 28;
tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
if (tmp_import_name_from_26 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_26)) {
    tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_26,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_26);
Py_DECREF(tmp_import_name_from_26);
if (tmp_assign_source_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 28;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent, tmp_assign_source_31);
}
{
PyObject *tmp_assign_source_32;
PyObject *tmp_import_name_from_27;
PyObject *tmp_name_value_25;
PyObject *tmp_globals_arg_value_25;
PyObject *tmp_locals_arg_value_25;
PyObject *tmp_fromlist_value_25;
PyObject *tmp_level_value_25;
tmp_name_value_25 = mod_consts.const_str_plain_response_audio_transcript_done_event;
tmp_globals_arg_value_25 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_25 = Py_None;
tmp_fromlist_value_25 = mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDoneEvent_tuple;
tmp_level_value_25 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 29;
tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
if (tmp_import_name_from_27 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_27)) {
    tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_27,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_27);
Py_DECREF(tmp_import_name_from_27);
if (tmp_assign_source_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 29;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent, tmp_assign_source_32);
}
{
PyObject *tmp_assign_source_33;
PyObject *tmp_import_name_from_28;
PyObject *tmp_name_value_26;
PyObject *tmp_globals_arg_value_26;
PyObject *tmp_locals_arg_value_26;
PyObject *tmp_fromlist_value_26;
PyObject *tmp_level_value_26;
tmp_name_value_26 = mod_consts.const_str_plain_response_mcp_list_tools_failed_event;
tmp_globals_arg_value_26 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_26 = Py_None;
tmp_fromlist_value_26 = mod_consts.const_tuple_str_plain_ResponseMcpListToolsFailedEvent_tuple;
tmp_level_value_26 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 30;
tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
if (tmp_import_name_from_28 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_28)) {
    tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_28,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
}

CHECK_OBJECT(tmp_import_name_from_28);
Py_DECREF(tmp_import_name_from_28);
if (tmp_assign_source_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 30;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent, tmp_assign_source_33);
}
{
PyObject *tmp_assign_source_34;
PyObject *tmp_import_name_from_29;
PyObject *tmp_name_value_27;
PyObject *tmp_globals_arg_value_27;
PyObject *tmp_locals_arg_value_27;
PyObject *tmp_fromlist_value_27;
PyObject *tmp_level_value_27;
tmp_name_value_27 = mod_consts.const_str_plain_response_audio_transcript_delta_event;
tmp_globals_arg_value_27 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_27 = Py_None;
tmp_fromlist_value_27 = mod_consts.const_tuple_str_plain_ResponseAudioTranscriptDeltaEvent_tuple;
tmp_level_value_27 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 31;
tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
if (tmp_import_name_from_29 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_29)) {
    tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_29,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_29);
Py_DECREF(tmp_import_name_from_29);
if (tmp_assign_source_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 31;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent, tmp_assign_source_34);
}
{
PyObject *tmp_assign_source_35;
PyObject *tmp_import_name_from_30;
PyObject *tmp_name_value_28;
PyObject *tmp_globals_arg_value_28;
PyObject *tmp_locals_arg_value_28;
PyObject *tmp_fromlist_value_28;
PyObject *tmp_level_value_28;
tmp_name_value_28 = mod_consts.const_str_plain_response_mcp_call_arguments_done_event;
tmp_globals_arg_value_28 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_28 = Py_None;
tmp_fromlist_value_28 = mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDoneEvent_tuple;
tmp_level_value_28 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 32;
tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
if (tmp_import_name_from_30 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_30)) {
    tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_30,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_30);
Py_DECREF(tmp_import_name_from_30);
if (tmp_assign_source_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 32;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent, tmp_assign_source_35);
}
{
PyObject *tmp_assign_source_36;
PyObject *tmp_import_name_from_31;
PyObject *tmp_name_value_29;
PyObject *tmp_globals_arg_value_29;
PyObject *tmp_locals_arg_value_29;
PyObject *tmp_fromlist_value_29;
PyObject *tmp_level_value_29;
tmp_name_value_29 = mod_consts.const_str_plain_response_image_gen_call_completed_event;
tmp_globals_arg_value_29 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_29 = Py_None;
tmp_fromlist_value_29 = mod_consts.const_tuple_str_plain_ResponseImageGenCallCompletedEvent_tuple;
tmp_level_value_29 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 33;
tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
if (tmp_import_name_from_31 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_31)) {
    tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_31,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_31);
Py_DECREF(tmp_import_name_from_31);
if (tmp_assign_source_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 33;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent, tmp_assign_source_36);
}
{
PyObject *tmp_assign_source_37;
PyObject *tmp_import_name_from_32;
PyObject *tmp_name_value_30;
PyObject *tmp_globals_arg_value_30;
PyObject *tmp_locals_arg_value_30;
PyObject *tmp_fromlist_value_30;
PyObject *tmp_level_value_30;
tmp_name_value_30 = mod_consts.const_str_plain_response_mcp_call_arguments_delta_event;
tmp_globals_arg_value_30 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_30 = Py_None;
tmp_fromlist_value_30 = mod_consts.const_tuple_str_plain_ResponseMcpCallArgumentsDeltaEvent_tuple;
tmp_level_value_30 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 34;
tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
if (tmp_import_name_from_32 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_32)) {
    tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_32,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_32);
Py_DECREF(tmp_import_name_from_32);
if (tmp_assign_source_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 34;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent, tmp_assign_source_37);
}
{
PyObject *tmp_assign_source_38;
PyObject *tmp_import_name_from_33;
PyObject *tmp_name_value_31;
PyObject *tmp_globals_arg_value_31;
PyObject *tmp_locals_arg_value_31;
PyObject *tmp_fromlist_value_31;
PyObject *tmp_level_value_31;
tmp_name_value_31 = mod_consts.const_str_plain_response_mcp_list_tools_completed_event;
tmp_globals_arg_value_31 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_31 = Py_None;
tmp_fromlist_value_31 = mod_consts.const_tuple_str_plain_ResponseMcpListToolsCompletedEvent_tuple;
tmp_level_value_31 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 35;
tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
if (tmp_import_name_from_33 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_33)) {
    tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_33,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_33);
Py_DECREF(tmp_import_name_from_33);
if (tmp_assign_source_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 35;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent, tmp_assign_source_38);
}
{
PyObject *tmp_assign_source_39;
PyObject *tmp_import_name_from_34;
PyObject *tmp_name_value_32;
PyObject *tmp_globals_arg_value_32;
PyObject *tmp_locals_arg_value_32;
PyObject *tmp_fromlist_value_32;
PyObject *tmp_level_value_32;
tmp_name_value_32 = mod_consts.const_str_plain_response_image_gen_call_generating_event;
tmp_globals_arg_value_32 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_32 = Py_None;
tmp_fromlist_value_32 = mod_consts.const_tuple_str_plain_ResponseImageGenCallGeneratingEvent_tuple;
tmp_level_value_32 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 36;
tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
if (tmp_import_name_from_34 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_34)) {
    tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_34,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent,
        const_int_0
    );
} else {
    tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
}

CHECK_OBJECT(tmp_import_name_from_34);
Py_DECREF(tmp_import_name_from_34);
if (tmp_assign_source_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 36;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent, tmp_assign_source_39);
}
{
PyObject *tmp_assign_source_40;
PyObject *tmp_import_name_from_35;
PyObject *tmp_name_value_33;
PyObject *tmp_globals_arg_value_33;
PyObject *tmp_locals_arg_value_33;
PyObject *tmp_fromlist_value_33;
PyObject *tmp_level_value_33;
tmp_name_value_33 = mod_consts.const_str_plain_response_web_search_call_completed_event;
tmp_globals_arg_value_33 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_33 = Py_None;
tmp_fromlist_value_33 = mod_consts.const_tuple_str_plain_ResponseWebSearchCallCompletedEvent_tuple;
tmp_level_value_33 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 37;
tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
if (tmp_import_name_from_35 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_35)) {
    tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_35,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_35);
Py_DECREF(tmp_import_name_from_35);
if (tmp_assign_source_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 37;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent, tmp_assign_source_40);
}
{
PyObject *tmp_assign_source_41;
PyObject *tmp_import_name_from_36;
PyObject *tmp_name_value_34;
PyObject *tmp_globals_arg_value_34;
PyObject *tmp_locals_arg_value_34;
PyObject *tmp_fromlist_value_34;
PyObject *tmp_level_value_34;
tmp_name_value_34 = mod_consts.const_str_plain_response_web_search_call_searching_event;
tmp_globals_arg_value_34 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_34 = Py_None;
tmp_fromlist_value_34 = mod_consts.const_tuple_str_plain_ResponseWebSearchCallSearchingEvent_tuple;
tmp_level_value_34 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 38;
tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
if (tmp_import_name_from_36 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_36)) {
    tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_36,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent,
        const_int_0
    );
} else {
    tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
}

CHECK_OBJECT(tmp_import_name_from_36);
Py_DECREF(tmp_import_name_from_36);
if (tmp_assign_source_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 38;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent, tmp_assign_source_41);
}
{
PyObject *tmp_assign_source_42;
PyObject *tmp_import_name_from_37;
PyObject *tmp_name_value_35;
PyObject *tmp_globals_arg_value_35;
PyObject *tmp_locals_arg_value_35;
PyObject *tmp_fromlist_value_35;
PyObject *tmp_level_value_35;
tmp_name_value_35 = mod_consts.const_str_digest_db1bace0cfc001e14745ea641f153b87;
tmp_globals_arg_value_35 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_35 = Py_None;
tmp_fromlist_value_35 = mod_consts.const_tuple_str_plain_ResponseFileSearchCallCompletedEvent_tuple;
tmp_level_value_35 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 39;
tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
if (tmp_import_name_from_37 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_37)) {
    tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_37,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
}

CHECK_OBJECT(tmp_import_name_from_37);
Py_DECREF(tmp_import_name_from_37);
if (tmp_assign_source_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 39;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent, tmp_assign_source_42);
}
{
PyObject *tmp_assign_source_43;
PyObject *tmp_import_name_from_38;
PyObject *tmp_name_value_36;
PyObject *tmp_globals_arg_value_36;
PyObject *tmp_locals_arg_value_36;
PyObject *tmp_fromlist_value_36;
PyObject *tmp_level_value_36;
tmp_name_value_36 = mod_consts.const_str_digest_da8cde4e5f8007b27a16ee8a8d34c7ca;
tmp_globals_arg_value_36 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_36 = Py_None;
tmp_fromlist_value_36 = mod_consts.const_tuple_str_plain_ResponseFileSearchCallSearchingEvent_tuple;
tmp_level_value_36 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 40;
tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
if (tmp_import_name_from_38 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_38)) {
    tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_38,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent,
        const_int_0
    );
} else {
    tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
}

CHECK_OBJECT(tmp_import_name_from_38);
Py_DECREF(tmp_import_name_from_38);
if (tmp_assign_source_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 40;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent, tmp_assign_source_43);
}
{
PyObject *tmp_assign_source_44;
PyObject *tmp_import_name_from_39;
PyObject *tmp_name_value_37;
PyObject *tmp_globals_arg_value_37;
PyObject *tmp_locals_arg_value_37;
PyObject *tmp_fromlist_value_37;
PyObject *tmp_level_value_37;
tmp_name_value_37 = mod_consts.const_str_digest_a63d6aee411731207dfca54d4a08c6f1;
tmp_globals_arg_value_37 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_37 = Py_None;
tmp_fromlist_value_37 = mod_consts.const_tuple_str_plain_ResponseImageGenCallInProgressEvent_tuple;
tmp_level_value_37 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 41;
tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
if (tmp_import_name_from_39 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_39)) {
    tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_39,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent,
        const_int_0
    );
} else {
    tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
}

CHECK_OBJECT(tmp_import_name_from_39);
Py_DECREF(tmp_import_name_from_39);
if (tmp_assign_source_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 41;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent, tmp_assign_source_44);
}
{
PyObject *tmp_assign_source_45;
PyObject *tmp_import_name_from_40;
PyObject *tmp_name_value_38;
PyObject *tmp_globals_arg_value_38;
PyObject *tmp_locals_arg_value_38;
PyObject *tmp_fromlist_value_38;
PyObject *tmp_level_value_38;
tmp_name_value_38 = mod_consts.const_str_digest_3869a7d21bb2ab690675f2d75edd2c53;
tmp_globals_arg_value_38 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_38 = Py_None;
tmp_fromlist_value_38 = mod_consts.const_tuple_str_plain_ResponseMcpListToolsInProgressEvent_tuple;
tmp_level_value_38 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 42;
tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
if (tmp_import_name_from_40 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_40)) {
    tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_40,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent,
        const_int_0
    );
} else {
    tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
}

CHECK_OBJECT(tmp_import_name_from_40);
Py_DECREF(tmp_import_name_from_40);
if (tmp_assign_source_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 42;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent, tmp_assign_source_45);
}
{
PyObject *tmp_assign_source_46;
PyObject *tmp_import_name_from_41;
PyObject *tmp_name_value_39;
PyObject *tmp_globals_arg_value_39;
PyObject *tmp_locals_arg_value_39;
PyObject *tmp_fromlist_value_39;
PyObject *tmp_level_value_39;
tmp_name_value_39 = mod_consts.const_str_digest_ec2c427f706e801bddb56836cfb686e8;
tmp_globals_arg_value_39 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_39 = Py_None;
tmp_fromlist_value_39 = mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDoneEvent_tuple;
tmp_level_value_39 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 43;
tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
if (tmp_import_name_from_41 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_41)) {
    tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_41,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_41);
Py_DECREF(tmp_import_name_from_41);
if (tmp_assign_source_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 43;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent, tmp_assign_source_46);
}
{
PyObject *tmp_assign_source_47;
PyObject *tmp_import_name_from_42;
PyObject *tmp_name_value_40;
PyObject *tmp_globals_arg_value_40;
PyObject *tmp_locals_arg_value_40;
PyObject *tmp_fromlist_value_40;
PyObject *tmp_level_value_40;
tmp_name_value_40 = mod_consts.const_str_digest_551ec177d3a0f514071918ba435a1323;
tmp_globals_arg_value_40 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_40 = Py_None;
tmp_fromlist_value_40 = mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartDoneEvent_tuple;
tmp_level_value_40 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 44;
tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
if (tmp_import_name_from_42 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_42)) {
    tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_42,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_42);
Py_DECREF(tmp_import_name_from_42);
if (tmp_assign_source_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 44;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent, tmp_assign_source_47);
}
{
PyObject *tmp_assign_source_48;
PyObject *tmp_import_name_from_43;
PyObject *tmp_name_value_41;
PyObject *tmp_globals_arg_value_41;
PyObject *tmp_locals_arg_value_41;
PyObject *tmp_fromlist_value_41;
PyObject *tmp_level_value_41;
tmp_name_value_41 = mod_consts.const_str_digest_5b54bc56c455a9546f6cd46ecf7a137b;
tmp_globals_arg_value_41 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_41 = Py_None;
tmp_fromlist_value_41 = mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDoneEvent_tuple;
tmp_level_value_41 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 45;
tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
if (tmp_import_name_from_43 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_43)) {
    tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_43,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_43);
Py_DECREF(tmp_import_name_from_43);
if (tmp_assign_source_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 45;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent, tmp_assign_source_48);
}
{
PyObject *tmp_assign_source_49;
PyObject *tmp_import_name_from_44;
PyObject *tmp_name_value_42;
PyObject *tmp_globals_arg_value_42;
PyObject *tmp_locals_arg_value_42;
PyObject *tmp_fromlist_value_42;
PyObject *tmp_level_value_42;
tmp_name_value_42 = mod_consts.const_str_digest_2326235548c09cdeef136c4cd9a9900b;
tmp_globals_arg_value_42 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_42 = Py_None;
tmp_fromlist_value_42 = mod_consts.const_tuple_str_plain_ResponseWebSearchCallInProgressEvent_tuple;
tmp_level_value_42 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 46;
tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
if (tmp_import_name_from_44 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_44)) {
    tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_44,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent,
        const_int_0
    );
} else {
    tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
}

CHECK_OBJECT(tmp_import_name_from_44);
Py_DECREF(tmp_import_name_from_44);
if (tmp_assign_source_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 46;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent, tmp_assign_source_49);
}
{
PyObject *tmp_assign_source_50;
PyObject *tmp_import_name_from_45;
PyObject *tmp_name_value_43;
PyObject *tmp_globals_arg_value_43;
PyObject *tmp_locals_arg_value_43;
PyObject *tmp_fromlist_value_43;
PyObject *tmp_level_value_43;
tmp_name_value_43 = mod_consts.const_str_digest_bdd4cad3bd3111b78b89983f965fecd7;
tmp_globals_arg_value_43 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_43 = Py_None;
tmp_fromlist_value_43 = mod_consts.const_tuple_str_plain_ResponseCustomToolCallInputDeltaEvent_tuple;
tmp_level_value_43 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 47;
tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
if (tmp_import_name_from_45 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_45)) {
    tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_45,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_45);
Py_DECREF(tmp_import_name_from_45);
if (tmp_assign_source_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 47;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent, tmp_assign_source_50);
}
{
PyObject *tmp_assign_source_51;
PyObject *tmp_import_name_from_46;
PyObject *tmp_name_value_44;
PyObject *tmp_globals_arg_value_44;
PyObject *tmp_locals_arg_value_44;
PyObject *tmp_fromlist_value_44;
PyObject *tmp_level_value_44;
tmp_name_value_44 = mod_consts.const_str_digest_b74a486e6f8d3c2cf5b64509f1e008f4;
tmp_globals_arg_value_44 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_44 = Py_None;
tmp_fromlist_value_44 = mod_consts.const_tuple_str_plain_ResponseFileSearchCallInProgressEvent_tuple;
tmp_level_value_44 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 48;
tmp_import_name_from_46 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
if (tmp_import_name_from_46 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_46)) {
    tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_46,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent,
        const_int_0
    );
} else {
    tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
}

CHECK_OBJECT(tmp_import_name_from_46);
Py_DECREF(tmp_import_name_from_46);
if (tmp_assign_source_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 48;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent, tmp_assign_source_51);
}
{
PyObject *tmp_assign_source_52;
PyObject *tmp_import_name_from_47;
PyObject *tmp_name_value_45;
PyObject *tmp_globals_arg_value_45;
PyObject *tmp_locals_arg_value_45;
PyObject *tmp_fromlist_value_45;
PyObject *tmp_level_value_45;
tmp_name_value_45 = mod_consts.const_str_digest_7ca10734868c9e71eef094920fbc18a5;
tmp_globals_arg_value_45 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_45 = Py_None;
tmp_fromlist_value_45 = mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDoneEvent_tuple;
tmp_level_value_45 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 49;
tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
if (tmp_import_name_from_47 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_47)) {
    tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_47,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_47);
Py_DECREF(tmp_import_name_from_47);
if (tmp_assign_source_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 49;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent, tmp_assign_source_52);
}
{
PyObject *tmp_assign_source_53;
PyObject *tmp_import_name_from_48;
PyObject *tmp_name_value_46;
PyObject *tmp_globals_arg_value_46;
PyObject *tmp_locals_arg_value_46;
PyObject *tmp_fromlist_value_46;
PyObject *tmp_level_value_46;
tmp_name_value_46 = mod_consts.const_str_digest_4fa49b8f51a2b5d603c1b21bd5cb88b6;
tmp_globals_arg_value_46 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_46 = Py_None;
tmp_fromlist_value_46 = mod_consts.const_tuple_str_plain_ResponseImageGenCallPartialImageEvent_tuple;
tmp_level_value_46 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 50;
tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
if (tmp_import_name_from_48 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_48)) {
    tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_48,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent,
        const_int_0
    );
} else {
    tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
}

CHECK_OBJECT(tmp_import_name_from_48);
Py_DECREF(tmp_import_name_from_48);
if (tmp_assign_source_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 50;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent, tmp_assign_source_53);
}
{
PyObject *tmp_assign_source_54;
PyObject *tmp_import_name_from_49;
PyObject *tmp_name_value_47;
PyObject *tmp_globals_arg_value_47;
PyObject *tmp_locals_arg_value_47;
PyObject *tmp_fromlist_value_47;
PyObject *tmp_level_value_47;
tmp_name_value_47 = mod_consts.const_str_digest_62938c320d5ab37778c49561bb557de0;
tmp_globals_arg_value_47 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_47 = Py_None;
tmp_fromlist_value_47 = mod_consts.const_tuple_str_plain_ResponseOutputTextAnnotationAddedEvent_tuple;
tmp_level_value_47 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 51;
tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
if (tmp_import_name_from_49 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_49)) {
    tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_49,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
}

CHECK_OBJECT(tmp_import_name_from_49);
Py_DECREF(tmp_import_name_from_49);
if (tmp_assign_source_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 51;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent, tmp_assign_source_54);
}
{
PyObject *tmp_assign_source_55;
PyObject *tmp_import_name_from_50;
PyObject *tmp_name_value_48;
PyObject *tmp_globals_arg_value_48;
PyObject *tmp_locals_arg_value_48;
PyObject *tmp_fromlist_value_48;
PyObject *tmp_level_value_48;
tmp_name_value_48 = mod_consts.const_str_digest_8720385bdd3f7a58c4a047ef1be427a4;
tmp_globals_arg_value_48 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_48 = Py_None;
tmp_fromlist_value_48 = mod_consts.const_tuple_str_plain_ResponseReasoningSummaryPartAddedEvent_tuple;
tmp_level_value_48 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 52;
tmp_import_name_from_50 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
if (tmp_import_name_from_50 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_50)) {
    tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_50,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent,
        const_int_0
    );
} else {
    tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
}

CHECK_OBJECT(tmp_import_name_from_50);
Py_DECREF(tmp_import_name_from_50);
if (tmp_assign_source_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 52;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent, tmp_assign_source_55);
}
{
PyObject *tmp_assign_source_56;
PyObject *tmp_import_name_from_51;
PyObject *tmp_name_value_49;
PyObject *tmp_globals_arg_value_49;
PyObject *tmp_locals_arg_value_49;
PyObject *tmp_fromlist_value_49;
PyObject *tmp_level_value_49;
tmp_name_value_49 = mod_consts.const_str_digest_48d62ccaac3f5a5eb113b4830ef94bcb;
tmp_globals_arg_value_49 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_49 = Py_None;
tmp_fromlist_value_49 = mod_consts.const_tuple_str_plain_ResponseReasoningSummaryTextDeltaEvent_tuple;
tmp_level_value_49 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 53;
tmp_import_name_from_51 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
if (tmp_import_name_from_51 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_51)) {
    tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_51,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_51);
Py_DECREF(tmp_import_name_from_51);
if (tmp_assign_source_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 53;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent, tmp_assign_source_56);
}
{
PyObject *tmp_assign_source_57;
PyObject *tmp_import_name_from_52;
PyObject *tmp_name_value_50;
PyObject *tmp_globals_arg_value_50;
PyObject *tmp_locals_arg_value_50;
PyObject *tmp_fromlist_value_50;
PyObject *tmp_level_value_50;
tmp_name_value_50 = mod_consts.const_str_digest_4b1771f20cc66dbc0ca5aadc0c0b9ccb;
tmp_globals_arg_value_50 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_50 = Py_None;
tmp_fromlist_value_50 = mod_consts.const_tuple_str_plain_ResponseFunctionCallArgumentsDeltaEvent_tuple;
tmp_level_value_50 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 54;
tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
if (tmp_import_name_from_52 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_52)) {
    tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_52,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent,
        const_int_0
    );
} else {
    tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
}

CHECK_OBJECT(tmp_import_name_from_52);
Py_DECREF(tmp_import_name_from_52);
if (tmp_assign_source_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 54;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent, tmp_assign_source_57);
}
{
PyObject *tmp_assign_source_58;
PyObject *tmp_import_name_from_53;
PyObject *tmp_name_value_51;
PyObject *tmp_globals_arg_value_51;
PyObject *tmp_locals_arg_value_51;
PyObject *tmp_fromlist_value_51;
PyObject *tmp_level_value_51;
tmp_name_value_51 = mod_consts.const_str_digest_521998f9296b55ef22e849661f075a12;
tmp_globals_arg_value_51 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_51 = Py_None;
tmp_fromlist_value_51 = mod_consts.const_tuple_str_plain_ResponseCodeInterpreterCallCodeDoneEvent_tuple;
tmp_level_value_51 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 55;
tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
if (tmp_import_name_from_53 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_53)) {
    tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_53,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent,
        const_int_0
    );
} else {
    tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
}

CHECK_OBJECT(tmp_import_name_from_53);
Py_DECREF(tmp_import_name_from_53);
if (tmp_assign_source_58 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 55;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent, tmp_assign_source_58);
}
{
PyObject *tmp_assign_source_59;
PyObject *tmp_import_name_from_54;
PyObject *tmp_name_value_52;
PyObject *tmp_globals_arg_value_52;
PyObject *tmp_locals_arg_value_52;
PyObject *tmp_fromlist_value_52;
PyObject *tmp_level_value_52;
tmp_name_value_52 = mod_consts.const_str_digest_291fe7aa115dc7c5ac497c2d549b5773;
tmp_globals_arg_value_52 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_52 = Py_None;
tmp_fromlist_value_52 = mod_consts.const_tuple_str_digest_68535af65629c55f4de9600af2406536_tuple;
tmp_level_value_52 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 56;
tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
if (tmp_import_name_from_54 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_54)) {
    tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_54,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_digest_68535af65629c55f4de9600af2406536,
        const_int_0
    );
} else {
    tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
}

CHECK_OBJECT(tmp_import_name_from_54);
Py_DECREF(tmp_import_name_from_54);
if (tmp_assign_source_59 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 56;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_68535af65629c55f4de9600af2406536, tmp_assign_source_59);
}
{
PyObject *tmp_assign_source_60;
PyObject *tmp_import_name_from_55;
PyObject *tmp_name_value_53;
PyObject *tmp_globals_arg_value_53;
PyObject *tmp_locals_arg_value_53;
PyObject *tmp_fromlist_value_53;
PyObject *tmp_level_value_53;
tmp_name_value_53 = mod_consts.const_str_digest_b1da21444fe18c8d5313ba42083fd806;
tmp_globals_arg_value_53 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_53 = Py_None;
tmp_fromlist_value_53 = mod_consts.const_tuple_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d_tuple;
tmp_level_value_53 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 57;
tmp_import_name_from_55 = IMPORT_MODULE5(tstate, tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
if (tmp_import_name_from_55 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_55)) {
    tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_55,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d,
        const_int_0
    );
} else {
    tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
}

CHECK_OBJECT(tmp_import_name_from_55);
Py_DECREF(tmp_import_name_from_55);
if (tmp_assign_source_60 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 57;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d, tmp_assign_source_60);
}
{
PyObject *tmp_assign_source_61;
PyObject *tmp_import_name_from_56;
PyObject *tmp_name_value_54;
PyObject *tmp_globals_arg_value_54;
PyObject *tmp_locals_arg_value_54;
PyObject *tmp_fromlist_value_54;
PyObject *tmp_level_value_54;
tmp_name_value_54 = mod_consts.const_str_digest_93bdb945b11c5dda48cf9c17f581f0ed;
tmp_globals_arg_value_54 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_54 = Py_None;
tmp_fromlist_value_54 = mod_consts.const_tuple_str_digest_b4c0b7e4d7f31b62249d4cb49c670354_tuple;
tmp_level_value_54 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 58;
tmp_import_name_from_56 = IMPORT_MODULE5(tstate, tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
if (tmp_import_name_from_56 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_56)) {
    tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_56,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354,
        const_int_0
    );
} else {
    tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
}

CHECK_OBJECT(tmp_import_name_from_56);
Py_DECREF(tmp_import_name_from_56);
if (tmp_assign_source_61 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 58;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354, tmp_assign_source_61);
}
{
PyObject *tmp_assign_source_62;
PyObject *tmp_import_name_from_57;
PyObject *tmp_name_value_55;
PyObject *tmp_globals_arg_value_55;
PyObject *tmp_locals_arg_value_55;
PyObject *tmp_fromlist_value_55;
PyObject *tmp_level_value_55;
tmp_name_value_55 = mod_consts.const_str_digest_a7d474822c33e65637a1faa6ac18c93d;
tmp_globals_arg_value_55 = (PyObject *)moduledict_openai$types$responses$response_stream_event;
tmp_locals_arg_value_55 = Py_None;
tmp_fromlist_value_55 = mod_consts.const_tuple_str_digest_1cde74e27f144331f01fe360fd360faf_tuple;
tmp_level_value_55 = const_int_pos_1;
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 59;
tmp_import_name_from_57 = IMPORT_MODULE5(tstate, tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
if (tmp_import_name_from_57 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
if (PyModule_Check(tmp_import_name_from_57)) {
    tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
        tstate,
        tmp_import_name_from_57,
        (PyObject *)moduledict_openai$types$responses$response_stream_event,
        mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf,
        const_int_0
    );
} else {
    tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf);
}

CHECK_OBJECT(tmp_import_name_from_57);
Py_DECREF(tmp_import_name_from_57);
if (tmp_assign_source_62 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 59;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_digest_1cde74e27f144331f01fe360fd360faf, tmp_assign_source_62);
}
{
PyObject *tmp_assign_source_63;
tmp_assign_source_63 = MAKE_LIST1(tstate, mod_consts.const_str_plain_ResponseStreamEvent);
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_63);
}
{
PyObject *tmp_assign_source_64;
PyObject *tmp_expression_value_1;
PyObject *tmp_subscript_value_1;
PyObject *tmp_tuple_element_1;
PyObject *tmp_expression_value_2;
PyObject *tmp_subscript_value_2;
PyObject *tmp_tuple_element_2;
tmp_expression_value_1 = module_var_accessor_openai$types$responses$response_stream_event$Annotated(tstate);
if (unlikely(tmp_expression_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Annotated);
}

if (tmp_expression_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_expression_value_2 = module_var_accessor_openai$types$responses$response_stream_event$Union(tstate);
if (unlikely(tmp_expression_value_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_Union);
}

if (tmp_expression_value_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 64;

    goto frame_exception_exit_1;
}
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseAudioDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 53);
PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseAudioDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 66;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioTranscriptDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseAudioTranscriptDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 67;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseAudioTranscriptDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseAudioTranscriptDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 68;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 3, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallCodeDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_06fa003e00145a609e4ea6f4e2dc1a9d);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 69;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 4, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallCodeDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseCodeInterpreterCallCodeDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 70;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 5, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallCompletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_68535af65629c55f4de9600af2406536);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 71;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 6, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallInProgressEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_digest_b4c0b7e4d7f31b62249d4cb49c670354);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 72;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 7, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCodeInterpreterCallInterpretingEvent(tstate);
assert(!(tmp_tuple_element_2 == NULL));
PyTuple_SET_ITEM0(tmp_subscript_value_2, 8, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCompletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseCompletedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 74;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 9, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseContentPartAddedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseContentPartAddedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 75;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 10, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseContentPartDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseContentPartDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 76;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 11, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCreatedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseCreatedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 77;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 12, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseErrorEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseErrorEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 78;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 13, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseFileSearchCallCompletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFileSearchCallCompletedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 79;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 14, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseFileSearchCallInProgressEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFileSearchCallInProgressEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 80;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 15, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseFileSearchCallSearchingEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFileSearchCallSearchingEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 81;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 16, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseFunctionCallArgumentsDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 82;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 17, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseFunctionCallArgumentsDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFunctionCallArgumentsDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 83;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 18, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseInProgressEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseInProgressEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 84;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 19, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseFailedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseFailedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 85;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 20, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseIncompleteEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseIncompleteEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 86;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 21, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseOutputItemAddedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseOutputItemAddedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 87;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 22, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseOutputItemDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseOutputItemDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 88;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 23, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryPartAddedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseReasoningSummaryPartAddedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 89;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 24, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryPartDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseReasoningSummaryPartDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 90;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 25, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryTextDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseReasoningSummaryTextDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 91;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 26, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningSummaryTextDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseReasoningSummaryTextDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 92;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 27, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningTextDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseReasoningTextDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 93;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 28, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseReasoningTextDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseReasoningTextDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 94;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 29, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseRefusalDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseRefusalDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 95;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 30, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseRefusalDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseRefusalDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 96;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 31, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseTextDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseTextDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 97;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 32, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseTextDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseTextDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 98;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 33, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseWebSearchCallCompletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseWebSearchCallCompletedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 99;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 34, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseWebSearchCallInProgressEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseWebSearchCallInProgressEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 100;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 35, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseWebSearchCallSearchingEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseWebSearchCallSearchingEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 101;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 36, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallCompletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseImageGenCallCompletedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 102;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 37, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallGeneratingEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseImageGenCallGeneratingEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 103;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 38, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallInProgressEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseImageGenCallInProgressEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 104;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 39, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseImageGenCallPartialImageEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseImageGenCallPartialImageEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 105;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 40, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallArgumentsDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpCallArgumentsDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 106;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 41, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallArgumentsDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpCallArgumentsDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 107;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 42, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallCompletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpCallCompletedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 108;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 43, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallFailedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpCallFailedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 109;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 44, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpCallInProgressEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpCallInProgressEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 110;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 45, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpListToolsCompletedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpListToolsCompletedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 111;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 46, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpListToolsFailedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpListToolsFailedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 112;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 47, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseMcpListToolsInProgressEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseMcpListToolsInProgressEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 113;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 48, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseOutputTextAnnotationAddedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseOutputTextAnnotationAddedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 114;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 49, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseQueuedEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseQueuedEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 115;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 50, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCustomToolCallInputDeltaEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseCustomToolCallInputDeltaEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 116;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 51, tmp_tuple_element_2);
tmp_tuple_element_2 = module_var_accessor_openai$types$responses$response_stream_event$ResponseCustomToolCallInputDoneEvent(tstate);
if (unlikely(tmp_tuple_element_2 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_ResponseCustomToolCallInputDoneEvent);
}

if (tmp_tuple_element_2 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 117;

    goto tuple_build_exception_1;
}
PyTuple_SET_ITEM0(tmp_subscript_value_2, 52, tmp_tuple_element_2);
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


exception_lineno = 65;

    goto frame_exception_exit_1;
}
tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
{
PyObject *tmp_called_value_1;
PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
tmp_called_value_1 = module_var_accessor_openai$types$responses$response_stream_event$PropertyInfo(tstate);
if (unlikely(tmp_called_value_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_PropertyInfo);
}

if (tmp_called_value_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 119;

    goto tuple_build_exception_2;
}
frame_frame_openai$types$responses$response_stream_event->m_frame.f_lineno = 119;
tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts.const_tuple_str_plain_type_tuple, 0), mod_consts.const_tuple_str_plain_discriminator_tuple);
if (tmp_tuple_element_1 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 119;

    goto tuple_build_exception_2;
}
PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
}
goto tuple_build_no_exception_2;
// Exception handling pass through code for tuple_build:
tuple_build_exception_2:;
Py_DECREF(tmp_subscript_value_1);
goto frame_exception_exit_1;
// Finished with no exception for tuple_build:
tuple_build_no_exception_2:;
tmp_assign_source_64 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
CHECK_OBJECT(tmp_subscript_value_1);
Py_DECREF(tmp_subscript_value_1);
if (tmp_assign_source_64 == NULL) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 64;

    goto frame_exception_exit_1;
}
UPDATE_STRING_DICT1(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)mod_consts.const_str_plain_ResponseStreamEvent, tmp_assign_source_64);
}
{
PyObject *tmp_ass_subvalue_1;
PyObject *tmp_ass_subscribed_1;
PyObject *tmp_ass_subscript_1;
tmp_ass_subvalue_1 = module_var_accessor_openai$types$responses$response_stream_event$TypeAlias(tstate);
if (unlikely(tmp_ass_subvalue_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts.const_str_plain_TypeAlias);
}

if (tmp_ass_subvalue_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_ass_subscribed_1 = module_var_accessor_openai$types$responses$response_stream_event$__annotations__(tstate);
if (unlikely(tmp_ass_subscribed_1 == NULL)) {
    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, const_str_plain___annotations__);
}

if (tmp_ass_subscribed_1 == NULL) {
    assert(HAS_EXCEPTION_STATE(&exception_state));



exception_lineno = 63;

    goto frame_exception_exit_1;
}
tmp_ass_subscript_1 = mod_consts.const_str_plain_ResponseStreamEvent;
tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
if (tmp_result == false) {
    assert(HAS_ERROR_OCCURRED(tstate));

    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


exception_lineno = 63;

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
        exception_tb = MAKE_TRACEBACK(frame_frame_openai$types$responses$response_stream_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    } else if (exception_tb->tb_frame != &frame_frame_openai$types$responses$response_stream_event->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_openai$types$responses$response_stream_event, exception_lineno);
        SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
    }
}



assertFrameObject(frame_frame_openai$types$responses$response_stream_event);

// Put the previous frame back on top.
popFrameStack(tstate);

// Return the error.
goto module_exception_exit;
frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("openai$types$responses$response_stream_event", false);

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "openai.types.responses.response_stream_event" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_openai$types$responses$response_stream_event);
    return module_openai$types$responses$response_stream_event;
    module_exception_exit:

#if _NUITKA_MODULE_MODE && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openai$types$responses$response_stream_event, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("openai$types$responses$response_stream_event", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
